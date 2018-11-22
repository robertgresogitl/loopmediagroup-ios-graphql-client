//
//  LMGUser.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-13.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSUInteger, LMGUserGender) {
    LMGUserGenderUnknown,
    LMGUserGenderMale,
    LMGUserGenderFemale,
    LMGUserGenderNonBinary,
    LMGUserGenderPreferNotSaid
};

typedef NSString LMGUserId;
typedef NSString LMGUserHMAC;

@class LMGUserBuilder;
@class LMGUserTraits;
typedef void (^UserBuildBlock)(LMGUserBuilder  * _Nonnull builder);

@interface LMGUser : NSObject <NSCopying>

@property (nullable, nonatomic, copy, readonly) LMGUserId *id;
@property (nullable, nonatomic, copy, readonly) NSString *name;
@property (nullable, nonatomic, copy, readonly) NSString *email;
@property (nullable, nonatomic, copy, readonly) NSDate *birthday;
@property (nonnull, nonatomic, copy, readonly) NSDictionary *customTraits;
@property (assign, readonly) LMGUserGender gender;
@property (assign, readonly) BOOL isIdentified;

- (nonnull instancetype)initWithBuilder:(nonnull LMGUserBuilder *)builder NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)userWith:(nullable UserBuildBlock)block;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)copyWithBlock:(nonnull UserBuildBlock)block;
- (nonnull instancetype)setTraits:(nonnull LMGUserTraits *)traits;

@end

@interface LMGUserTraits: NSObject <NSCopying>

@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSString *email;
@property (nullable, nonatomic, copy) NSDate *birthday;
@property (nonnull, nonatomic, copy) NSDictionary *customTraits;
@property (assign) LMGUserGender gender;

+ (nonnull NSString *)nullStringAttribute;
+ (nonnull NSDate *)nullDateAttribute;

@end
