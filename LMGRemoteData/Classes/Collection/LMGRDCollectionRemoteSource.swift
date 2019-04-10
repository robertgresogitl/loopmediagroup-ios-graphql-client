//
//  LMGLDCollectionRemoteSource.swift
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-20.
//

import Foundation
import LMGDataAccess
import Apollo

public final class LMGRDCollectionRemoteSource: NSObject, LMGDACollectionRemoteSource {

    let client: AuthApolloClient
    let queue = DispatchQueue(label: "collection remote source")

    public required init(client: AuthApolloClient) {
        self.client = client
        super.init()
    }
    
    @objc public class func defaultImplementation() -> LMGRDCollectionRemoteSource {
        return LMGRDCollectionRemoteSource(client: AuthApolloClient.shared)
    }

    public func getWithListParams(_ params: LMGDACollectionsListRequestParams, session: LMGDASession) throws -> LMGDAPagedResult<LMGDACollection> {
        client.session = session
        
        let data = try client.syncFetch(query: CollectionListQuery(cursor: params.nextPage, tagNames: params.tag != nil ? [params.tag!] : nil, geoArea: params.contentArea?.map { $0.toRemoteData() }), queue: queue)
        let collections = data.collectionFeed.collections.compactMap { $0.fragments.collectionItem.toDataAccess() }
        return LMGDAPagedResult(result: collections, nextPageCursor: data.collectionFeed.cursor.next)
    }
    
    public func getWithDetailParams(_ params: LMGDADetailsRequestParams, session: LMGDASession) throws -> LMGDACollection {
        client.session = session
        
        let data = try client.syncFetch(query: CollectionDetailQuery(id: params.entityId), queue: queue)
        return data.collection.fragments.collectionItem.toDataAccess()
    }
}
