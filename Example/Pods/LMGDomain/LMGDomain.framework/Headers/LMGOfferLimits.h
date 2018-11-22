//
//  LMGOfferLimits.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

#import <Foundation/Foundation.h>

typedef struct
{
   NSInteger used;
   NSInteger total;
} LMGLimitDescription;

extern const LMGLimitDescription LMGLimitDescriptionZero;

@interface LMGOfferLimits : NSObject<NSCopying>

@property (nonatomic, assign, readonly) LMGLimitDescription perProfile;
@property (nonatomic, assign, readonly) LMGLimitDescription perProfilePerWindow;
@property (nonatomic, assign, readonly) LMGLimitDescription global;
@property (nonatomic, assign, readonly) LMGLimitDescription globalPerWindow;

@property (nullable, nonatomic, copy, readonly) NSString *profileWindow;
@property (nullable, nonatomic, copy, readonly) NSString *globalWindow;

@property (nonatomic, readonly) BOOL soldOut;
@property (nonatomic, readonly) BOOL soldOutPerWindow;

- (nonnull instancetype)initWithPerProfile:(LMGLimitDescription)perProfileLimits perProfilePerWindow:(LMGLimitDescription)perProfilePerWindowLimits global:(LMGLimitDescription)globalLimits globalPerWindow:(LMGLimitDescription)globalPerWindowLimits profileWindow:(nullable NSString *)profileWindow globalWindow:(nullable NSString *)globalWindow NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
