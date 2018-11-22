//
//  LMGReset.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-12.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGBaseUseCase.h"
#import "LMGSessionRepository.h"
#import "LMGSearchTermsRepository.h"


@class LMGGetSession;
@class LMGStartSession;

@interface LMGResetSession : LMGBaseUseCase<NoParams *, LMGSession *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession startSession:(nonnull LMGStartSession *)startSession sessionRepository:(nonnull id<LMGSessionRepository>)sessionRepository searchTermsRespository:(nonnull id<LMGSearchTermsRepository>)searchTermsRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;

@end
