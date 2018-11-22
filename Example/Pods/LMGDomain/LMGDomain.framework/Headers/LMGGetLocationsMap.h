//
//  LMGGetLocationsMap.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

#import "LMGSessionRequiredUseCase.h"
#import "LMGLocationsRepository.h"

@class LMGGetDeviceLocation;

@interface LMGGetLocationsMap : LMGSessionRequiredUseCase<LMGLocationsMapRequestParams *, LMGPagedResult<LMGLocation *> *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession getDeviceLocation:(nonnull LMGGetDeviceLocation *)getDeviceLocation locationsRepository:(nonnull id<LMGLocationsRepository>)locationsRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession NS_UNAVAILABLE;

@end
