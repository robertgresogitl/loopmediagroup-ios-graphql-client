//
//  LMGSession.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-11.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGUrlPath.h"
#import "LMGUser.h"

extern NSString * _Nonnull const LMGSessionErrorDomain;
extern NSInteger const LMGSdkNotStartedErrorCode;
extern NSInteger const LMGSdkInvalidKeyErrorCode;
extern NSInteger const LMGSdkDeprecatedErrorCode;

typedef NS_ENUM(NSUInteger, LMGSdkState) {
    LMGSdkStateNotStarted,
    LMGSdkStateDeprecated,
    LMGSdkStateInvalidKey,
    LMGSdkStateStarted
};

@class LMGSessionBuilder;

typedef NSString LMGSessionId;
typedef NSString LMGAccessToken;
typedef NSString LMGIntegrationKey;
typedef void (^SessionBuildBlock)(LMGSessionBuilder  * _Nonnull builder);

@interface LMGSession : NSObject <NSCopying>

@property (nullable, nonatomic, copy, readonly) LMGSessionId *id;
@property (nullable, nonatomic, copy, readonly) LMGAccessToken *accessToken;
@property (nullable, nonatomic, copy, readonly) LMGUserHMAC *hmac;
@property (nullable, nonatomic, copy, readonly) LMGUserId *userId;
@property (nullable, nonatomic, copy, readonly) LMGIntegrationKey *integrationKey;
@property (nullable, nonatomic, copy, readonly) LMGUrlPath *analyticsUrlPath;

@property (nonnull, nonatomic, copy, readonly) NSDate *createdAt;
@property (nullable, nonatomic, copy, readonly) NSDate *updatedAt;

@property (nonatomic, assign, readonly) LMGSdkState state;
@property (nonatomic, assign, readonly) BOOL isIdentified;

- (nonnull instancetype)initWithBuilder:(nonnull LMGSessionBuilder *)builder NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)sessionWithIntegrationKey:(nonnull LMGIntegrationKey *)key;
+ (nonnull instancetype)sessionWithConfiguration:(nullable SessionBuildBlock)block;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)copyWithBlock:(nonnull SessionBuildBlock)block;
- (nonnull instancetype)merge:(nonnull LMGSession *)session;
- (BOOL)isInitializedExpectError:(NSError * _Nonnull * _Nonnull)error;

@end

@interface LMGSessionBuilder: NSObject

@property (nonnull, copy) NSDate *createdAt;
@property (nonnull, copy) NSDate *updatedAt;

@property (nullable, copy) LMGIntegrationKey *integrationKey;
@property (nullable, copy) LMGSessionId *id;
@property (nullable, copy) LMGUserHMAC *hmac;
@property (nullable, copy) LMGAccessToken *accessToken;
@property (nullable, copy) LMGUserId *userId;
@property (nullable, copy) LMGUrlPath *analyticsUrlPath;
@property (assign) LMGSdkState state;

- (nonnull instancetype)initWithSession:(nonnull LMGSession *)session;
- (nonnull LMGSession *)build;

@end

@interface NSError (LMGSession)

- (BOOL)isSessionNotStarted;
+ (nonnull NSError *)sessionNotInitialized;
+ (nonnull NSError *)sdkVersionDeprecated;
+ (nonnull NSError *)invalidSessionKey;

@end
