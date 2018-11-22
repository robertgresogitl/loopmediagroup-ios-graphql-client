//
//  LMGIdentifyUser.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-13.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGSessionRequiredUseCase.h"
#import "LMGUserRepository.h"

@class LMGIdentifyUserParams;
@class LMGUpdateSessionUser;

@interface LMGIdentifyUser : LMGSessionRequiredUseCase<LMGIdentifyUserParams *, LMGUser *>


- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter
                                        getSession:(nonnull LMGGetSession *)getSession
                                    restartSession:(nonnull LMGRestartSession *)restartSession
                                      renewSession:(nonnull LMGRenewSession *)renewSession
                                 updateSessionUser:(nonnull LMGUpdateSessionUser *)updateSessionUser
                                    userRepository:(nonnull id<LMGUserRepository>)userRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession NS_UNAVAILABLE;

@end

@interface LMGIdentifyUserParams: NSObject

@property (nonnull, nonatomic, copy, readonly) LMGUserId *userId;
@property (nullable, nonatomic, copy, readonly) LMGUserTraits *traits;
@property (nullable, nonatomic, copy, readonly) LMGUserHMAC *hmac;

- (nonnull instancetype)initWith:(nonnull LMGUserId *)userId hmac:(nullable LMGUserHMAC *)hmac traits:(nullable LMGUserTraits *)traits;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
