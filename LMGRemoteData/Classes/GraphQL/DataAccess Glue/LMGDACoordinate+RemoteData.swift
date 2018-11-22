//
//  LMGDACoordinate+RemoteData.swift
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-11-07.
//

import Foundation
import LMGDataAccess

extension LMGDACoordinate {
    func toRemoteData() -> [Double] {
        return [self.longitude, self.latitude]
    }
}
