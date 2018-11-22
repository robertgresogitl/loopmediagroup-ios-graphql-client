//
//  LMGGetCollectionBusinesses.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-19.
//

#import "LMGSessionRequiredUseCase.h"
#import "LMGBusinessRepository.h"

@class LMGGetSession;
@class LMGRenewSession;
@class LMGGetDeviceLocation;

@interface LMGGetCollectionBusinesses : LMGSessionRequiredUseCase<LMGCollectionRequestParams *, LMGPagedResult<LMGBusiness *> *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession getLocation:(nonnull LMGGetDeviceLocation *)getDeviceLocation businessRepository:(nonnull id<LMGBusinessRepository>)businessRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession NS_UNAVAILABLE;


@end
