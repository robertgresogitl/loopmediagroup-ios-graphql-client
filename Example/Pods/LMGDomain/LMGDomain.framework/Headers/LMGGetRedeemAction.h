//
//  LMGGetRedeemAction.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-04.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGSessionRequiredUseCase.h"
#import "LMGOfferRepository.h"
#import "LMGDeviceLocationRepository.h"

@interface LMGGetRedeemAction : LMGSessionRequiredUseCase<LMGDetailsRequestParams *, LMGRedemptionState *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession offerRepository:(nonnull id<LMGOfferRepository>)offerRepository deviceLocationRepository:(nonnull id<LMGDeviceLocationRepository>)deviceLocationRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession NS_UNAVAILABLE;

@end
