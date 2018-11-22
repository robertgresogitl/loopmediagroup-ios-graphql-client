//
//  LMGGetCollectionsList.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-19.
//

#import "LMGSessionRequiredUseCase.h"
#import "LMGCollectionRepository.h"

@class LMGGetDeviceLocation;

@interface LMGGetCollectionsList : LMGSessionRequiredUseCase<LMGCollectionsListRequestParams *, LMGPagedResult<LMGCollection *> *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession getLocation:(nonnull LMGGetDeviceLocation *)getDeviceLocation collectionRepository:(nonnull id<LMGCollectionRepository>)collectionRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession NS_UNAVAILABLE;

@end
