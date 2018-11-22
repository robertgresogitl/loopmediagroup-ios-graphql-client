//
//  LMGRestartSession.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-10.
//

#import <Foundation/Foundation.h>
#import "LMGSessionRepository.h"
#import "LMGBaseUseCase.h"

@class LMGStartSession;
@class LMGGetUser;
@class LMGUpdateSessionUser;

@interface LMGRestartSession : LMGBaseUseCase<LMGSession *, LMGSession *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter> )notificationCenter startSession:(nonnull LMGStartSession *)startSession updateSessionUser:(nonnull LMGUpdateSessionUser *)updateSessionUser NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter> )notificationCenter NS_UNAVAILABLE;

@end
