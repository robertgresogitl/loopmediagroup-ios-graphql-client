//
//  LocationsListQuery+DataAccess.swift
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

import Foundation
import LMGDataAccess

extension LocationItem {
    
    func toDataAccess(business: LMGDABusiness?) -> LMGDALocation {
        let builder = LMGDALocationBuilder(id, address: address.toDataAccess(), name: name)
        builder.distance = distance != nil ? NSNumber(value: distance!) : nil
        builder.phoneNumber = phone
        builder.urlPath = url
        builder.business = business
        return builder.build()
    }
}

extension LocationItem.Address {

    func toDataAccess() -> LMGDAAddress {
        let coordinateBuider = LMGDACoordinateBuilder()
        coordinateBuider.longitude = centre.first!
        coordinateBuider.latitude = centre.last!
        return LMGDAAddress(id: id, streetAddress: street, postalCode: postalcode, city: city, province: state, country: country, coordinate: coordinateBuider.build(), suite: suite, building: streetAddress)
    }
}
