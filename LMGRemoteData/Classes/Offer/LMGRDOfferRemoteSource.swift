//
//  LMGRDOfferRemoteSource.swift
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

import Foundation
import LMGDataAccess
import Apollo

public final class LMGRDOfferRemoteSource: NSObject, LMGDAOfferRemoteSource {
    
    let client: AuthApolloClient
    let queue = DispatchQueue(label: "offer remote source")

    public required init(client: AuthApolloClient) {
        self.client = client
        super.init()
    }
    
    @objc public class func defaultImplementation() -> LMGRDOfferRemoteSource {
        return LMGRDOfferRemoteSource(client: AuthApolloClient.shared)
    }
    
    public func getWithDetailParams(_ params: LMGDADetailsRequestParams, session: LMGDASession) throws -> LMGDAOffer {
        client.session = session
        
        let data = try client.syncFetch(query: OfferDetailsQuery(id: params.entityId, orderPoint: params.sortCoordinate?.toRemoteData(), originPoint: params.originCoordinate?.toRemoteData()), queue: queue)
        let locations = data.offer.locations.compactMap { $0.fragments.offerLocationItem.toDataAccess(business: nil) }
        return data.offer.fragments.offerDetails.toDataAccess(locations: locations)
    }
    
    public func getRedemptionState(forId offerId: String, atLocation locationId: String, in session: LMGDASession) throws -> LMGDARedemptionState {
        client.session = session
        
        let data = try client.syncFetch(query: OfferRedeemActionQuery(id: offerId, locationId: locationId), queue: queue)        
        let detailStatus = data.offerStatus.fragments.offerDetailStatus
        let redemptionState = data.offerState.fragments.redeemAction.toDataAccess()
        
        return redemptionState.copy {
            $0.promoCode = data.offer.promoCode
            $0.schedule = LMGDASchedule(schedule: data.offer.schedules)
            $0.disabilityReason = detailStatus.reason
            if let limitsDetails = detailStatus.limitDetails {
                let perProfile = limitsDetails.perProfile != nil ? LMGDALimitDescription(used: UInt(limitsDetails.perProfile!.used), total: UInt(limitsDetails.perProfile!.total), priority: UInt(limitsDetails.perProfile!.priority)) : LMGDALimitDescriptionZero
                let perProfilePerWindow = limitsDetails.perProfilePerWindow != nil ? LMGDALimitDescription(used: UInt(limitsDetails.perProfilePerWindow!.used), total: UInt(limitsDetails.perProfilePerWindow!.total), priority: UInt(limitsDetails.perProfilePerWindow!.priority)) : LMGDALimitDescriptionZero
                let global = limitsDetails.global != nil ? LMGDALimitDescription(used: UInt(limitsDetails.global!.used), total: UInt(limitsDetails.global!.total), priority: UInt(limitsDetails.global!.priority)) : LMGDALimitDescriptionZero
                let globalPerWindow = limitsDetails.globalPerWindow != nil ? LMGDALimitDescription(used: UInt(limitsDetails.globalPerWindow!.used), total: UInt(limitsDetails.globalPerWindow!.total), priority: UInt(limitsDetails.globalPerWindow!.priority)) : LMGDALimitDescriptionZero
                if (!perProfile.isEqual(LMGDALimitDescriptionZero) ||
                    !perProfilePerWindow.isEqual(LMGDALimitDescriptionZero) ||
                    !global.isEqual(LMGDALimitDescriptionZero) ||
                    !globalPerWindow.isEqual(LMGDALimitDescriptionZero)) {
                    $0.limits = LMGDAOfferLimits(perProfile: perProfile, perProfilePerWindow: perProfilePerWindow, global: global, globalPerWindow: globalPerWindow, profileWindow:limitsDetails.perProfilePerWindow?.granularity, globalWindow:limitsDetails.globalPerWindow?.granularity)
                }
            }
        }
    }
    
    public func bookmark(_ bookmark: Bool, offer offerId: String, atLocation locationId: String, in session: LMGDASession) throws {
        client.session = session
        
        if bookmark {
            _ = try client.syncPerform(mutation: BookmarkOfferMutation(offerId: offerId), queue: queue)
        } else {
            _ = try client.syncPerform(mutation: UnbookmarkOfferMutation(offerId: offerId), queue: queue)
        }
    }
    
    public func transitionOfferState(_ redemptionState: String, using transition: LMGDARedemptionStateTransition, withArgs args: [LMGDARedemptionTransitionArgument<NSObject & NSCopying>], forOffer offerId: String, atLocation locationId: String, deviceLocation coordinate: LMGDACoordinate?, in session: LMGDASession) throws -> LMGDARedemptionState {
    
        var argsDict = [String: AnyObject]()
        for arg in args {
            if let argName = arg.argName {
                argsDict[argName] = arg.value!
            }
        }
        
        let argsData = try JSONSerialization.data(withJSONObject: argsDict, options: .prettyPrinted)
        guard let argsString = String(data: argsData, encoding: String.Encoding.utf8) else {
            throw NSError.argsSerializationFailure()
        }
        
        let data = try client.syncPerform(mutation: RedeemOfferMutation(offerId: offerId, locationId: locationId, currentState: redemptionState, transitionIndex: transition.id, clientArgs: argsString), queue: queue)
        return data.transitionOfferState.fragments.redeemAction.toDataAccess()
    }
}

public let lmgrdRedemptionStateTransitionErrorDomain = "lmgrdRedemptionStateTransitionErrorDomain"
public let lmgrdRedemptionStateTransitionErrorNotSupportedCode = 4001
public let lmgrdRedemptionStateTransitionErrorArgSerializationFailure = 4002

extension NSError {

    class func stateTransitionNotSuported() -> NSError {
        return NSError(domain: lmgrdRedemptionStateTransitionErrorDomain, code: lmgrdRedemptionStateTransitionErrorNotSupportedCode, userInfo: [
            NSLocalizedFailureReasonErrorKey : "This Action is not supported.",
            NSLocalizedRecoverySuggestionErrorKey : "Please reload offer and try again."
        ])
    }
    
    class func argsSerializationFailure() -> NSError {
        return NSError(domain: lmgrdRedemptionStateTransitionErrorDomain, code: lmgrdRedemptionStateTransitionErrorArgSerializationFailure, userInfo: [
            NSLocalizedFailureReasonErrorKey : "Something went wrong during transition.",
            NSLocalizedRecoverySuggestionErrorKey : "Please reload offer and try again."
        ])
    }
}
