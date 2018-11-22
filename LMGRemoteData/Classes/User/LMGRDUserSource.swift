//
//  LMGRDUserSource.swift
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-12.
//

import Foundation
import LMGDataAccess
import Apollo

public final class LMGRDUserSource: NSObject, LMGDAUserRemoteSource {
    
    let client: AuthApolloClient
    let queue = DispatchQueue(label: "session remote source")

    public required init(client: AuthApolloClient) {
        self.client = client
        super.init()
    }
    
    @objc public class func defaultImplementation() -> LMGRDUserSource {
        return LMGRDUserSource(client: AuthApolloClient.auth)
    }
    
    public func getFor(_ session: LMGDASession) throws -> LMGDAUser {
        client.session = session
        let data = try client.syncFetch(query: GetUserTraitsQuery())
        return try data.toDataAccess()
    }
    
    public func save(_ user: LMGDAUser, for session: LMGDASession) throws {
        client.session = session
        _ = try client.syncPerform(mutation: UpdateUserTraitsMutation(traits: user.toJsonString()))
    }
}
