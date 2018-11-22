//
//  LMGRDLocationRemoteSource.swift
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

import Foundation
import LMGDataAccess
import Apollo

public final class LMGRDLocationRemoteSource: NSObject, LMGDALocationRemoteSource {

    let client: AuthApolloClient
    let queue = DispatchQueue(label: "business remote source")

    public required init(client: AuthApolloClient) {
        self.client = client
        super.init()
    }
    
    @objc public class func defaultImplementation() -> LMGRDLocationRemoteSource {
        return LMGRDLocationRemoteSource(client: AuthApolloClient.shared)
    }
    
    public func getWith(_ params: LMGDALocationsMapRequestParams, session: LMGDASession) throws -> LMGDAPagedResult<LMGDALocation> {
        client.session = session
        
        let data = try client.syncFetch(query: LocationsListQuery(geoArea: params.contentArea?.map { $0.toRemoteData() }, orderPoint: params.sortCoordinate?.toRemoteData(), originPoint: params.originCoordinate?.toRemoteData(), cursor: params.nextPage), queue: queue)
        let locations = data.locationFeed.locations.compactMap { location -> LMGDALocation in
            let business = location.business.fragments.businessListItem.toDataAccess(locations: nil, offers: nil)
            return location.fragments.locationItem.toDataAccess(business: business)
        }
        return LMGDAPagedResult(result: locations, nextPageCursor: data.locationFeed.cursor.next)
    }
}

