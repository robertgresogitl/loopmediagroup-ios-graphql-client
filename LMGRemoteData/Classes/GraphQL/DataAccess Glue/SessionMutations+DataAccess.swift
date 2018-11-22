//
//  SessionMutations+DataAccess.swift
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

import Foundation
import LMGDataAccess

extension SessionFragment {

    func toDataAccess(integrationKey: String, userId: String?, hmac: String?) -> LMGDASession {
        return LMGDASession {
            $0.id = self.content.sessionId
            $0.accessToken = self.token
            $0.integrationKey = integrationKey
            $0.userId = userId
            $0.hmac = hmac
            $0.state = .started
            $0.analyticsUrlPath = self.meta.stats.ingestionUrl
        }
    }
}
