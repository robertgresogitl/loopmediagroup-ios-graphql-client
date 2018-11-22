//
//  LMGUpdateSessionProfile.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-12.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGSessionRequiredUseCase.h"
#import "LMGSessionRepository.h"

@class LMGStartSession;
@class LMGResetSession;
@class LMGIdentifyUserParams;

extern NSInteger const LMGUpdateSessionUserFailed;

@interface LMGUpdateSessionUser : LMGBaseUseCase<LMGIdentifyUserParams *, LMGSession *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession resetSession:(nonnull LMGResetSession *)resetSession sessionRepository:(nonnull id<LMGSessionRepository>)repository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;


@end

@interface NSError (LMGUpdateSessionUser)

+ (nonnull NSError *)failedToUpdateSessionUserUnderlyingError:(nonnull NSError *)error;

@end

