//
//  LMGRenewSession.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-13.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGBaseUseCase.h"
#import "LMGSessionRepository.h"

extern NSInteger const LMGSessionRenewalFailed;

@class LMGGetSession;
@class LMGResetSession;

@interface LMGRenewSession : LMGBaseUseCase<NoParams *, LMGSession *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession sessionRepository:(nonnull id<LMGSessionRepository>)sessionRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;

@end

@interface NSError (LMGRenewSession)

+ (nonnull NSError *)renewSessionFailureUnderlyingError:(nonnull NSError *)error;

@end
