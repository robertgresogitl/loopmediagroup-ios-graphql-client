//
//  CollectionsListQuery+DataAccess.swift
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

import Foundation
import LMGDataAccess

extension CollectionItem {
    
    func toDataAccess() -> LMGDACollection {
        let builder = LMGDACollectionBuilder(id: id, name: name, shortName: shortName, slug: slug)
        builder.iconUrlPath = iconSmallImages.first?.url
        builder.imageUrlPath = heroStandardImages.first?.url
        return builder.build()
    }
}
