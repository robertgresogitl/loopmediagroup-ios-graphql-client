//
//  LMGGetUser.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-14.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGUserRepository.h"
#import "LMGSessionRequiredUseCase.h"

@interface LMGGetUser : LMGSessionRequiredUseCase<NoParams *, LMGUser *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter
                                        getSession:(nonnull LMGGetSession *)getSession
                                    restartSession:(nonnull LMGRestartSession *)restartSession
                                      renewSession:(nonnull LMGRenewSession *)renewSession
                                    userRepository:(nonnull id<LMGUserRepository>)userRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession NS_UNAVAILABLE;


@end
