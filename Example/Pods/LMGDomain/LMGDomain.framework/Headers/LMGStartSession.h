//
//  LMGStartSession.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-12.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGSessionRepository.h"
#import "LMGBaseUseCase.h"

extern NSString * _Nonnull const LMGStartSessionDomain;
extern NSInteger const LMGStartSessionFailed;

@interface LMGStartSession: LMGBaseUseCase<LMGIntegrationKey *, LMGSession *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter sessionRepository:(nonnull id<LMGSessionRepository>)repository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;

@end

@interface NSError (LMGStartSessionError)

+ (nonnull instancetype)startSessionFailureUnderlyingError:(nonnull NSError *)error;

@end
