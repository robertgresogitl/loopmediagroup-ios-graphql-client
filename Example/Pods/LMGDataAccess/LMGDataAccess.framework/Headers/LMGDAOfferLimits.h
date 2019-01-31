//
//  LMGDAOfferLimits.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

#import <Foundation/Foundation.h>

typedef struct
{
   NSUInteger used;
   NSUInteger total;
   NSUInteger priority;
} LMGDALimitDescription;

bool LMGDALimitDescEqualToLMGDALimitDesc(LMGDALimitDescription desc1, LMGDALimitDescription desc2);
NSUInteger LMGDALimitDescHash(LMGDALimitDescription desc);

extern const LMGDALimitDescription LMGDALimitDescriptionZero;

@interface LMGDAOfferLimits : NSObject<NSCopying>

@property (nonatomic, readonly) BOOL isLimited;
@property (nonatomic, assign, readonly) LMGDALimitDescription perProfile;
@property (nonatomic, assign, readonly) LMGDALimitDescription perProfilePerWindow;
@property (nonatomic, assign, readonly) LMGDALimitDescription global;
@property (nonatomic, assign, readonly) LMGDALimitDescription globalPerWindow;

@property (nullable, nonatomic, copy, readonly) NSString *profileWindow;
@property (nullable, nonatomic, copy, readonly) NSString *globalWindow;

- (nonnull instancetype)initWithPerProfile:(LMGDALimitDescription)perProfileLimits perProfilePerWindow:(LMGDALimitDescription)perProfilePerWindowLimits global:(LMGDALimitDescription)globalLimits globalPerWindow:(LMGDALimitDescription)globalPerWindowLimits profileWindow:(nullable NSString *)profileWindow globalWindow:(nullable NSString *)globalWindow NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

