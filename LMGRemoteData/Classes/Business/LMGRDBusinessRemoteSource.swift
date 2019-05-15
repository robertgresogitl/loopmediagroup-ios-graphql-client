//
//  LMGRDBusinessRemoteSource.swift
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

import Foundation
import LMGDataAccess
import Apollo

public final class LMGRDBusinessRemoteSource: NSObject, LMGDABusinessRemoteSource {

    let client: AuthApolloClient
    let queue = DispatchQueue(label: "business remote source")

    public required init(client: AuthApolloClient) {
        self.client = client
        super.init()
    }
    
    @objc public class func defaultImplementation() -> LMGRDBusinessRemoteSource {
        return LMGRDBusinessRemoteSource(client: AuthApolloClient.shared)
    }

    public func getWith(_ params: LMGDABusinessesListRequestParams, session: LMGDASession) throws -> LMGDAPagedResult<LMGDABusiness> {
        client.session = session
        
        let data = try client.syncFetch(query: BusinessesListQuery(cursor: params.nextPage, q: params.searchTerm, bookmarked: params.areOffersBookmarked, geoArea: params.contentArea?.map { $0.toRemoteData() }, orderPoint: params.sortCoordinate?.toRemoteData(), originPoint: params.originCoordinate?.toRemoteData()), queue: queue)
        let businesses = data.businessFeed.businesses.compactMap { business -> LMGDABusiness in
            let locations = business.locations.compactMap { $0.fragments.locationItem.toDataAccess(business: nil) }
            let offers = business.offers.compactMap { $0.fragments.offerListItem.toDataAccess(business: business.fragments.businessListItem.toDataAccess(locations: nil, offers: nil)) }
            return business.fragments.businessListItem.toDataAccess(locations: locations, offers: offers)
        }
        return LMGDAPagedResult(result: businesses, nextPageCursor: data.businessFeed.cursor.next)
    }
    
    public func getForCollection(_ params: LMGDACollectionRequestParams, session: LMGDASession) throws -> LMGDAPagedResult<LMGDABusiness> {
        client.session = session
        
        let data = try client.syncFetch(query: CollectionBusinessesListQuery(id: params.collectionId, cursor: params.nextPage, geoArea: params.contentArea?.map { $0.toRemoteData() }, orderPoint: params.sortCoordinate?.toRemoteData(), originPoint: params.originCoordinate?.toRemoteData(), limit: Int(params.limit)), queue: queue)
        let businesses = data.collection.businessFeed.businesses.compactMap { business -> LMGDABusiness in
            let locations = business.locations.compactMap { $0.fragments.locationItem.toDataAccess(business: nil) }
            let offers = business.offers.compactMap { $0.fragments.offerListItem.toDataAccess(business: business.fragments.businessListItem.toDataAccess(locations: nil, offers: nil)) }
            return business.fragments.businessListItem.toDataAccess(locations: locations, offers: offers)
        }
        return LMGDAPagedResult(result: businesses, nextPageCursor: data.collection.businessFeed.cursor.next)
    }
    
    public func getWith(_ params: LMGDADetailsRequestParams, in session: LMGDASession) throws -> LMGDABusiness {
        client.session = session
        
        let data = try client.syncFetch(query: BusinessDetailsQuery(id: params.entityId, orderPoint: params.sortCoordinate?.toRemoteData(), originPoint: params.originCoordinate?.toRemoteData()), queue: queue)
        let locations = data.business.locations.compactMap { $0.fragments.locationItem.toDataAccess(business: nil) }
        return data.business.fragments.businessDetails.toDataAccess(locations: locations)
    }
}

