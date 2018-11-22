//
//  LMGDASession.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-11.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDAUser.h"

typedef NS_ENUM(NSUInteger, LMGDASdkState) {
    LMGDASdkStateNotStarted,
    LMGDASdkStateDeprecated,
    LMGDASdkStateInvalidKey,
    LMGDASdkStateStarting,
    LMGDASdkStateStarted
};

@class LMGDASessionBuilder;

typedef NSString LMGDASessionId;
typedef NSString LMGDAAccessToken;
typedef NSString LMGDAIntegrationKey;
typedef void (^DASessionBuildBlock)(LMGDASessionBuilder  * _Nonnull builder);

@interface LMGDASession : NSObject <NSCopying>

@property (nullable, nonatomic, copy, readonly) LMGDASessionId *id;
@property (nullable, nonatomic, copy, readonly) LMGDAAccessToken *accessToken;
@property (nullable, nonatomic, copy, readonly) LMGDAUserHMAC *hmac;
@property (nullable, nonatomic, copy, readonly) LMGDAUserId *userId;
@property (nullable, nonatomic, copy, readonly) LMGDAIntegrationKey *integrationKey;
@property (nullable, nonatomic, copy, readonly) NSString *analyticsUrlPath;

@property (nonnull, nonatomic, copy, readonly) NSDate *createdAt;
@property (nonnull, nonatomic, copy, readonly) NSDate *updatedAt;

@property (nonatomic, assign, readonly) LMGDASdkState state;

- (nonnull instancetype)initWithBuilder:(nonnull LMGDASessionBuilder *)builder NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)sessionWithConfiguration:(nullable DASessionBuildBlock)block;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)copyWithBlock:(nonnull DASessionBuildBlock)block;

@end

@interface LMGDASessionBuilder: NSObject

@property (nonnull, copy) NSDate *createdAt;
@property (nonnull, copy) NSDate *updatedAt;

@property (nullable, copy) LMGDAIntegrationKey *integrationKey;
@property (nullable, copy) LMGDASessionId *id;
@property (nullable, copy) LMGDAUserHMAC *hmac;
@property (nullable, copy) LMGDAAccessToken *accessToken;
@property (nullable, copy) LMGDAUserId *userId;
@property (nullable, copy) NSString *analyticsUrlPath;
@property (assign) LMGDASdkState state;

- (nonnull instancetype)initWithSession:(nonnull LMGDASession *)session;
- (nonnull LMGDASession *)build;

@end
