//
//  LMGGetBusinessInfo.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-22.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGSessionRequiredUseCase.h"
#import "LMGBusinessRepository.h"
#import "LMGDetailsRequestParams.h"

@class LMGGetDeviceLocation;

@interface LMGGetBusinessInfo : LMGSessionRequiredUseCase<LMGDetailsRequestParams *, LMGBusiness *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession getLocation:(nonnull LMGGetDeviceLocation *)getDeviceLocation businessRepository:(nonnull id<LMGBusinessRepository>)businessRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession NS_UNAVAILABLE;

@end
