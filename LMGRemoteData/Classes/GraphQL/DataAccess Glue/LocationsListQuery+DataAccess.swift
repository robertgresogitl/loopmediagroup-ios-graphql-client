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
        builder.shareUrl = URL(string: shareUrl)
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

extension LocationsLocationItem {
    
    func toDataAccess(business: LMGDABusiness?) -> LMGDALocation {
        let builder = LMGDALocationBuilder(id, address: address.toDataAccess(), name: name)
        builder.business = business
        return builder.build()
    }
}

extension LocationsLocationItem.Address {
    
    func toDataAccess() -> LMGDAAddress {
        let coordinateBuider = LMGDACoordinateBuilder()
        coordinateBuider.longitude = centre.first!
        coordinateBuider.latitude = centre.last!
        return LMGDAAddress(id: id, streetAddress: streetAddress, postalCode: nil, city: city, province: state, country: nil, coordinate: coordinateBuider.build(), suite: nil, building: building)
    }
}


extension CollectionLocationItem {
    
    func toDataAccess(business: LMGDABusiness?) -> LMGDALocation {
        let builder = LMGDALocationBuilder(id, address: address.toDataAccess(), name: name)
        builder.distance = distance != nil ? NSNumber(value: distance!) : nil
        builder.business = business
        return builder.build()
    }
}

extension CollectionLocationItem.Address {
    
    func toDataAccess() -> LMGDAAddress {
        let coordinateBuider = LMGDACoordinateBuilder()
        coordinateBuider.longitude = centre.first!
        coordinateBuider.latitude = centre.last!
        return LMGDAAddress(id: id, streetAddress: nil, postalCode: nil, city: city, province: state, country: nil, coordinate: coordinateBuider.build(), suite: nil, building: nil)
    }
}



// OfferLocationItem is a special query for LocationItem that does NOT
// include a shareUrl (not available on the node in the Graph API).
extension OfferLocationItem {
    
    func toDataAccess(business: LMGDABusiness?) -> LMGDALocation {
        let builder = LMGDALocationBuilder(id, address: address.toDataAccess(), name: name)
        builder.distance = distance != nil ? NSNumber(value: distance!) : nil
        builder.phoneNumber = phone
        builder.urlPath = url
        builder.business = business
        return builder.build()
    }
}

extension OfferLocationItem.Address {
    
    func toDataAccess() -> LMGDAAddress {
        let coordinateBuider = LMGDACoordinateBuilder()
        coordinateBuider.longitude = centre.first!
        coordinateBuider.latitude = centre.last!
        return LMGDAAddress(id: id, streetAddress: street, postalCode: postalcode, city: city, province: state, country: country, coordinate: coordinateBuider.build(), suite: suite, building: streetAddress)
    }
}

extension LocationsBusinessListItem {
    
    func toDataAccess(locations: [LMGDALocation]?, offers: [LMGDAOffer]?) -> LMGDABusiness {
        let builder = LMGDABusinessBuilder(id: id, name: name, shortName: shortName)
        builder.offers = []
        builder.locations = []
        builder.categories = categories.compactMap { $0.fragments.businessListCategoryItem.toDataAccess() }
        return builder.build()
    }
}

extension BusinessListCategoryItem {
    
    func toDataAccess() -> LMGDALocationCategory {
        let builder = LMGDALocationCategoryBuilder(id, name: nil, shortName: nil)
        builder.icon = iconSmallImages.first?.url
        return builder.build()
    }
}
