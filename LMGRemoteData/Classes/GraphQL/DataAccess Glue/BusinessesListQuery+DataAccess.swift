//
//  BusinessesListQuery+DataAccess.swift
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

import Foundation
import LMGDataAccess

extension BusinessListItem {

    func toDataAccess(locations: [LMGDALocation]?, offers: [LMGDAOffer]?) -> LMGDABusiness {
        let builder = LMGDABusinessBuilder(id: id, name: name, shortName: shortName)
        builder.offers = offers ?? []
        builder.locations = locations ?? []
        builder.categories = categories.compactMap { $0.fragments.categoryItem.toDataAccess() }
        builder.logo = profileImages.first?.url
        builder.phone = phone
        builder.details = desc
        builder.slogan = slogan
        builder.url = url
        return builder.build()
    }
}
