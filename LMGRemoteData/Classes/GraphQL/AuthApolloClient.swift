//
//  AuthApolloClient.swift
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-09.
//

import Foundation
import LMGDataAccess
import LMGNotificationBus
import Apollo

public let lmgrdErrorDomain = "com.loopmediagroup.remotedata"
public let lmgrdApiErrorCode = 4000
public let lmgrdNoResultErrorCode = 4001
public let lmgrdNoDataErrorCode = 4002

private let authTokenExpiredMessageId = "09-65-002"

extension NSError {

    public class func apiError(error: Error) -> NSError {
        return NSError(domain: lmgrdErrorDomain, code: lmgrdApiErrorCode, userInfo: [
            NSLocalizedFailureReasonErrorKey : "Api Request Failed",
            NSLocalizedRecoverySuggestionErrorKey: "Please see underlying error.",
            NSUnderlyingErrorKey: error
        ])
    }

    public class func noResultError() -> NSError {
        return NSError(domain: lmgrdErrorDomain, code: lmgrdNoResultErrorCode, userInfo: [
            NSLocalizedFailureReasonErrorKey : "No result from GraphQL API",
            NSLocalizedRecoverySuggestionErrorKey : "Please try again later."
        ])
    }
    
    public class func noDataError() -> NSError {
        return NSError(domain: lmgrdErrorDomain, code: lmgrdNoDataErrorCode, userInfo: [
            NSLocalizedFailureReasonErrorKey : "No data in the result from GraphQL API",
            NSLocalizedRecoverySuggestionErrorKey: "Please contact your API provider to resolve this issue"
        ])
    }
}

public class AuthApolloClient {
    
    let client: ApolloClient
    let authConfigurator: AuthRequestsConfigurator
    
    public init(client: ApolloClient, authConfigurator: AuthRequestsConfigurator) {
        self.client = client
        self.authConfigurator = authConfigurator
    }
    
    public var session: LMGDASession? {
        get {
            return AuthApolloClient.session
        }
        set {
            AuthApolloClient.session = newValue
        }
    }
    
    public func syncFetch<Query: GraphQLQuery>(query: Query, cachePolicy: CachePolicy = .fetchIgnoringCacheData, queue: DispatchQueue = DispatchQueue.main) throws -> Query.Data {
        var optResult: GraphQLResult<Query.Data>?
        var error: Error?
        
        let semaphore = DispatchSemaphore(value: 0)

        _ = client.fetch(query: query, cachePolicy: cachePolicy, queue: queue) {
            optResult = $0
            error = $1
            semaphore.signal()
        }

        _ = semaphore.wait(timeout: .distantFuture)
        
        if let error = error, let httpError = error as? GraphQLHTTPResponseError {
            try parseHTTPError(httpError)
        }
        
        if let error = error {
            throw NSError.apiError(error: error)
        }
        
        guard let result = optResult else {
            throw NSError.noResultError()
        }
        
        if let errors = result.errors, errors.count > 0 {
            throw NSError.apiError(error: errors.first!)
        }
        
        guard let data = result.data else {
            throw NSError.noDataError()
        }

        return data
    }
    
    public func syncPerform<Mutation: GraphQLMutation>(mutation: Mutation, queue: DispatchQueue = DispatchQueue.main) throws -> Mutation.Data {
        var optResult: GraphQLResult<Mutation.Data>? = nil
        var error: Error?
        
        let semaphore = DispatchSemaphore(value: 0)

        _ = client.perform(mutation: mutation, queue: queue) {
            optResult = $0
            error = $1

            semaphore.signal()
        }
        
        _ = semaphore.wait(timeout: .distantFuture)
        
        if let error = error, let httpError = error as? GraphQLHTTPResponseError {
            try parseHTTPError(httpError)
        }

        if let error = error {
            throw NSError.apiError(error: error)
        }
        
        guard let result = optResult else {
            throw NSError.noResultError()
        }
        
        if let errors = result.errors, errors.count > 0 {
            throw NSError.apiError(error: errors.first!)
        }
        
        guard let data = result.data else {
            throw NSError.noDataError()
        }

        return data
  }
  
  private func parseHTTPError(_ error: GraphQLHTTPResponseError) throws {
    guard let errorData = error.bodyDescription.data(using: .utf8),
        let jsonResponse = try JSONSerialization.jsonObject(with: errorData, options: []) as? [String: Any],
        let errors = jsonResponse["errors"] as? [[String: Any]],
        let error = errors.first else { return }
    
    if let messageId = error["messageId"] as? String, messageId == authTokenExpiredMessageId {
        throw LMGAuthTokenExpired()
    }
    
    throw NSError.apiError(error: NSError(domain: (error["name"] as? String) ?? "Unknown", code: (error["statusCode"] as? Int) ?? 0, userInfo: [
        NSLocalizedFailureReasonErrorKey: (error["message"] as? String) ?? "Unknown"
    ]))
  }
}

extension AuthApolloClient {
    
    static let shared: AuthApolloClient = {
        let url = URL(string: "https://public-graph.loopmediagroup.com/graph/default")!
        return makeApolloClient(url: url)
    }()

    static let auth: AuthApolloClient = {
        let url = URL(string: "https://public-graph.loopmediagroup.com/graph/auth")!     
      NotificationCenter.lmg().addObserver(forLMGName: .LMGDeviceLocationChangedNotificationName) { note in
            guard let locationChangeNote = note as? LMGDeviceLocationChanged else { return }
            AuthApolloClient.deviceCoordinate = locationChangeNote.coordinate?.toDataAccess()
        }
        return makeApolloClient(url: url)
    }()
    
    private static func makeApolloClient(url: URL) -> AuthApolloClient {
        return {
            let configurator = AuthRequestsConfigurator()
            let transport = AuthHTTPNetworkTransport(url: url, configurator: configurator)
            let client = ApolloClient(networkTransport: transport)
            return AuthApolloClient(client: client, authConfigurator: configurator)
        }()
    }
    
    public static var session: LMGDASession? {
        get {
            return AuthApolloClient.auth.authConfigurator.session
        }
        set {
            AuthApolloClient.auth.authConfigurator.session = newValue
            AuthApolloClient.shared.authConfigurator.session = newValue
        }
    }
    
    public static var deviceCoordinate: LMGDACoordinate? {
        get {
            return AuthApolloClient.auth.authConfigurator.deviceCoordinate
        }
        set {
            AuthApolloClient.auth.authConfigurator.deviceCoordinate = newValue
            AuthApolloClient.shared.authConfigurator.deviceCoordinate = newValue
        }
    }
}
