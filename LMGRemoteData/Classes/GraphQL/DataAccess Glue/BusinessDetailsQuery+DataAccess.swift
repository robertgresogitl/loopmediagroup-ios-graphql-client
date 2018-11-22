//
//  BusinessDetailsQuery+DataAccess.swift
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

import Foundation
import LMGDataAccess

extension BusinessDetails {

    func toDataAccess(locations: [LMGDALocation]) -> LMGDABusiness {
        let builder = LMGDABusinessBuilder(id: id, name: name, shortName: shortName)
        builder.slogan = slogan
        builder.details = desc
        builder.url = url
        builder.phone = phone
        builder.offers = offers.compactMap { $0.fragments.offerListItem.toDataAccess(business: builder.build()) }
        builder.locations = locations
        builder.categories = categories.compactMap { $0.fragments.categoryItem.toDataAccess() }
        builder.images = heroStandardImages.map { $0.url }
        builder.logo = profileImages.first?.url
        return builder.build()
    }
}

extension CategoryItem {

    func toDataAccess() -> LMGDALocationCategory {
        let builder = LMGDALocationCategoryBuilder(id, name: name, shortName: shortName)
        builder.icon = iconSmallImages.first?.url
        return builder.build()
    }
}
