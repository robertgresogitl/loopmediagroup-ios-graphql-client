//
//  LMGGetOfferInfo.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-22.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGSessionRequiredUseCase.h"
#import "LMGOfferRepository.h"

@class LMGDetailsRequestParams;
@class LMGGetDeviceLocation;

@interface LMGGetOfferInfo : LMGSessionRequiredUseCase<LMGDetailsRequestParams *, LMGOffer *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession getLocation:(nonnull LMGGetDeviceLocation *)getDeviceLocation offerRepository:(nonnull id<LMGOfferRepository>)offerRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession NS_UNAVAILABLE;


@end
