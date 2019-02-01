//
//  OfferRedeemAction+DataAccess.swift
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-02.
//

import Foundation
import LMGDataAccess

extension LMGDALimitDescription {
    
    func isEqual(_ rhs: LMGDALimitDescription) -> Bool {
        return self.total == rhs.total && self.used == rhs.used && self.priority == rhs.priority
    }
}

extension RedeemAction {

    func toDataAccess() -> LMGDARedemptionState {
        let builder = LMGDARedemptionStateBuilder()
        builder.status = state
        builder.displayStatuses = display
        builder.action = meta.actionType
        builder.actionTarget = meta.actionTarget
        builder.refreshInterval = TimeInterval(refreshInterval)
        builder.expiresIn = TimeInterval(expiresIn ?? 0)
        builder.transitions = transitions.compactMap { $0.toDataAccess() }
        return builder.build()
    }
}

extension RedeemAction.Transition {

    func toDataAccess() -> LMGDARedemptionStateTransition? {
        let daArgs = args.compactMap { $0.toDataAccess() }
        guard daArgs.count == args.count else {
            return nil
        }
        return LMGDARedemptionStateTransition(id: index, transitionCta: meta.transitionButtonText ?? "Offer Used", args: daArgs)
    }
}

let lmgrdDeviceGeoPoint = "deviceGeoPoint"
let lmgrdDeviceGeoPointAccuracy = "deviceGeoPointAccuracy"
let lmgrdDeviceGeoPointAge = "deviceGeoPointAge"
let lmgrdConfirmPromptDisplayed = "confirmPromptDisplayed"

extension RedeemAction.Transition.Arg {

    func toDataAccess() -> LMGDARedemptionTransitionArgument<NSObject & NSCopying>? {
        guard let argType = argType(from: name) else {
            return nil
        }
        return LMGDARedemptionTransitionArgument<NSObject & NSCopying>(type: argType, required: required)
    }
    
    func argType(from type: String) -> LMGDARedemptionArgumentType? {
        switch name {
        case lmgrdDeviceGeoPoint:
            return .geoPoint
        case lmgrdDeviceGeoPointAccuracy:
            return .geoPointAccuracy
        case lmgrdDeviceGeoPointAge:
            return .geoPointAge
        case lmgrdConfirmPromptDisplayed:
            return .prompt
        default:
            return .unknown
        }
    }
}

extension LMGDARedemptionTransitionArgument {

    @objc var argName: String? {
        switch self.type {
            case .geoPoint:
                return lmgrdDeviceGeoPoint
            case .geoPointAccuracy:
                return lmgrdDeviceGeoPointAccuracy
            case .geoPointAge:
                return lmgrdDeviceGeoPointAge
            case .prompt:
                return lmgrdConfirmPromptDisplayed
            case .none, .unknown:
                return nil
        }
    }
}
