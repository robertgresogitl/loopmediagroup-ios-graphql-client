//
//  LMGTransitionRedemptionState.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import "LMGSessionRequiredUseCase.h"
#import "LMGOfferRepository.h"
#import "LMGDeviceLocationRepository.h"
#import "LMGRedemptionTransitionRequestParams.h"

extern NSString *_Nonnull const LMGTransitionRedemptionStateErrorDomain;
extern NSString *_Nonnull const LMGTransitionRedemptionStateErrorArgKey;
extern NSInteger const LMGTransitionRedemptionStateErrorNotFoundArg;
extern NSInteger const LMGTransitionRedemptionStateErrorTransitionNotAllowed;

@class LMGGetDeviceLocation;
@class LMGGetRedeemAction;

@interface LMGTransitionRedemptionState : LMGSessionRequiredUseCase<LMGRedemptionTransitionRequestParams *, LMGRedemptionState *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notification getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession getDeviceLocation:(nonnull LMGGetDeviceLocation *)getDeviceLocation getRedemptionState:(nonnull LMGGetRedeemAction *)getRedemptionState offerRepository:(nonnull id<LMGOfferRepository>)offerRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession NS_UNAVAILABLE;

@end

@interface NSError (LMGTransitionRedemptionState)

+ (nonnull NSError *)notFoundRequiredArg:(nonnull LMGRedemptionTransitionArgument *)arg;
+ (nonnull NSError *)transitionNotAllowed;

@end
