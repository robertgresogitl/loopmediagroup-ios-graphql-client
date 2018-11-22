//
//  LMGDAUser.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-13.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSUInteger, LMGDAUserGender) {
    LMGDAUserGenderUnknown,
    LMGDAUserGenderMale,
    LMGDAUserGenderFemale,
    LMGDAUserGenderNonBinary,
    LMGDAUserGenderPreferNotSaid
};

typedef NSString LMGDAUserId;
typedef NSString LMGDAUserHMAC;

@class LMGDAUserBuilder;
@class LMGDAUserTraits;
typedef void (^DAUserBuildBlock)(LMGDAUserBuilder  * _Nonnull builder);

@interface LMGDAUser : NSObject <NSCopying>

@property (nullable, nonatomic, copy, readonly) NSString *name;
@property (nullable, nonatomic, copy, readonly) NSString *email;
@property (nullable, nonatomic, copy, readonly) NSDate *birthday;
@property (nonnull, nonatomic, copy, readonly) NSDictionary *customTraits;
@property (assign, readonly) LMGDAUserGender gender;

- (nonnull instancetype)initWithBuilder:(nonnull LMGDAUserBuilder *)builder NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)userWith:(nullable DAUserBuildBlock)block;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)copyWithBlock:(nonnull DAUserBuildBlock)block;

@end
