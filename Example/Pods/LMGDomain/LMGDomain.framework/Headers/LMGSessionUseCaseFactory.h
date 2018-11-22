//
//  LMGSessionUseCaseFactory.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-14.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGNotificationCenter.h"
#import "LMGSessionRepository.h"
#import "LMGUserRepository.h"
#import "LMGSearchTermsRepository.h"

@class LMGStartSession;
@class LMGGetSession;
@class LMGUpdateSessionUser;
@class LMGResetSession;
@class LMGRenewSession;
@class LMGRestartSession;

@interface LMGSessionUseCaseFactory : NSObject

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter sessionRepository:(nonnull id<LMGSessionRepository>)sessionRepository userRepository:(nonnull id<LMGUserRepository>)userRepository searchTermsRepository:(nonnull id<LMGSearchTermsRepository>)searchTermsRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull LMGGetSession *)get;
- (nonnull LMGStartSession *)start;
- (nonnull LMGResetSession *)reset;
- (nonnull LMGRestartSession *)restart;
- (nonnull LMGRenewSession *)renew;
- (nonnull LMGUpdateSessionUser *)setUser;

@end
