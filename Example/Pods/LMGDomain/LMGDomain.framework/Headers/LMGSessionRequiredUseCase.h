//
//  LMGAuthRequiredUseCase.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-13.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGBaseUseCase.h"

@class LMGSession;
@class LMGGetSession;
@class LMGRestartSession;
@class LMGRenewSession;

typedef id _Nullable (^SesssionUseCaseExecutionBlock)(LMGSession * _Nonnull, id _Nullable, NSError * _Nullable * _Nullable);

@interface LMGSessionRequiredUseCase<Params, ReturnType> : LMGBaseUseCase<Params, ReturnType>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;

- (ReturnType _Nullable (^_Nonnull)(LMGSession * _Nonnull, Params _Nullable, NSError * _Nullable * _Nullable))sessionExecutionBlock;

@end
