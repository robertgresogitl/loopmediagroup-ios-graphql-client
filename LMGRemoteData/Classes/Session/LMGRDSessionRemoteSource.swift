//
//  SessionRemoteSourceImpl.swift
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-07.
//

import Foundation
import LMGDataAccess
import Apollo

public final class LMGRDSessionRemoteSource: NSObject, LMGDASessionRemoteSource {

    let client: AuthApolloClient
    let queue = DispatchQueue(label: "session remote source")

    public required init(client: AuthApolloClient) {
        self.client = client
        super.init()
    }
    
    @objc public class func defaultImplementation() -> LMGRDSessionRemoteSource {
        return LMGRDSessionRemoteSource(client: AuthApolloClient.auth)
    }

    public func start(with integrationKey: String) throws -> LMGDASession {
        let newSession = LMGDASession {
            $0.integrationKey = integrationKey
            $0.state = LMGDASdkState.starting
        }
        
        AuthApolloClient.session = newSession
        var retryCount = 0
        var optData: CreateSessionMutation.Data?
        var underlyingError: Error?
        while optData == nil && retryCount != 3 {
            do {
                optData = try client.syncPerform(mutation: CreateSessionMutation(), queue: queue)
            } catch let error as NSError where error.domain == NSURLErrorDomain {
                retryCount += 1
                underlyingError = error
            }
        }
        
        guard let data = optData else {
            if let err = underlyingError {
                throw err
            }
            throw NSError.noDataError()
        }
        
        return data.createSession.fragments.sessionFragment.toDataAccess(integrationKey: integrationKey, userId: nil, hmac: nil)
    }
    
    public func update(_ session: LMGDASession, userId: String, hmac: String?) throws -> LMGDASession {
        client.session = session
        let data = try client.syncPerform(mutation: IdentifySessionMutation(userId: userId, hmac: hmac), queue: queue)
        return data.identifySession.fragments.sessionFragment.toDataAccess(integrationKey: session.integrationKey!, userId: userId, hmac: hmac)
    }
    
    public func refreshAuth(on session: LMGDASession) throws -> LMGDASession {
        client.session = session
        
        var retryCount = 0
        var optData: ExtendSessionMutation.Data?
        var underlyingError: Error?
        while optData == nil && retryCount != 3 {
            do {
                optData = try client.syncPerform(mutation: ExtendSessionMutation(), queue: queue)
            } catch let error as NSError where error.domain == NSURLErrorDomain {
                retryCount += 1
                underlyingError = error
            }
        }
        
        guard let data = optData else {
            if let err = underlyingError {
                throw err
            }
            throw NSError.noDataError()
        }
        
        return data.extendSession.fragments.sessionFragment.toDataAccess(integrationKey: session.integrationKey!, userId: session.userId, hmac: session.hmac)
    }
}
