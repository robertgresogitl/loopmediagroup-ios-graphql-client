//
//  OfferDetailsQuery+DataAccess.swift
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

import Foundation
import LMGDataAccess

private let rawExlusiveFlag = "exclusive"
private let rawFeaturedFlag = "featured"
private let rawLimitedFlag = "limited"

extension LMGDAFlagType {

    init?(string: String) {
        switch string {
          case rawExlusiveFlag:
            self = .exclusive
          case rawFeaturedFlag:
            self = .featured
          case rawLimitedFlag:
            self = .limited
        
          default:
            return nil
        }
    }
}

extension OfferDetails {

    func toDataAccess(locations: [LMGDALocation]) -> LMGDAOffer {
        let builder = LMGDAOfferBuilder(id, headline: headline, subHeadline: subhead)
        builder.details = details
        builder.legal = legal
        builder.promoCode = promoCode
        builder.shareUrl = URL.init(string: shareUrl)
        builder.bookmarked = isBookmarked
        for rawFlag in flags {
            if let flag = LMGDAFlagType(string: rawFlag) {
                builder.flag = flag
                break
            }
        }
        builder.business = business.fragments.businessListItem.toDataAccess(locations: nil, offers: nil)
        builder.images = heroImages.compactMap { $0.url }
        
        builder.locations = locations.map({
            let locationBuilder = LMGDALocationBuilder($0)
            locationBuilder.business = builder.business
            
            return locationBuilder.build()
        })
        
        return builder.build()
    }
}

extension OfferListItem {

    func toDataAccess(business: LMGDABusiness) -> LMGDAOffer {
        let builder = LMGDAOfferBuilder(id, headline: headline, subHeadline: subhead)
        builder.images = heroImages.compactMap { $0.url }
        builder.business = business
        for rawFlag in flags {
            if let flag = LMGDAFlagType(string: rawFlag) {
                builder.flag = flag
                break
            }
        }
        builder.bookmarked = isBookmarked
        return builder.build()

    }
}
