//
//  LMGGetSession.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-12.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGBaseUseCase.h"
#import "LMGSessionRepository.h"

@interface LMGGetSession : LMGBaseUseCase<NoParams *, LMGSession *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter sessionRepository:(nonnull id<LMGSessionRepository>)sessionRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;

@end
