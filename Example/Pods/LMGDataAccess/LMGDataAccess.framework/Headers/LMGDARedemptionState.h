//
//  LMGDARedemptionState.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-24.
//

#import <Foundation/Foundation.h>

@class LMGDAOfferLimits;
@class LMGDASchedule;
@class LMGDARedemptionStateTransition;
@class LMGDARedemptionStateBuilder;

typedef void (^DARedemptionStateBuildBlock)(LMGDARedemptionStateBuilder  * _Nonnull builder);

@interface LMGDARedemptionState : NSObject<NSCopying>

@property (nonatomic, readonly) NSTimeInterval refreshInterval;
@property (nonatomic, readonly) NSTimeInterval expiresIn;

@property (nonnull, nonatomic, copy, readonly) NSArray<NSString *> * displayStatuses;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGDARedemptionStateTransition *> *transitions;
@property (nullable, nonatomic, copy, readonly) NSString *disabilityReason;
@property (nullable, nonatomic, copy, readonly) NSString *status;
@property (nullable, nonatomic, copy, readonly) NSString *action;
@property (nullable, nonatomic, copy, readonly) NSString *actionTarget;
@property (nullable, nonatomic, copy, readonly) NSString *promoCode;
@property (nullable, nonatomic, copy, readonly) LMGDAOfferLimits *limits;
@property (nullable, nonatomic, copy, readonly) LMGDASchedule *schedule;

@property (nonatomic, assign, readonly, getter=isUsable) BOOL usable;

- (nonnull instancetype)initWithBuilder:(nonnull LMGDARedemptionStateBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)copyWithBlock:(nullable DARedemptionStateBuildBlock)block;

@end

@interface LMGDARedemptionStateBuilder : NSObject

@property (nonatomic) NSString *status;
@property (nonatomic) NSArray<NSString *> *displayStatuses;
@property (nonatomic) NSString *action;
@property (nonatomic) NSString *disabilityReason;
@property (nonatomic) NSTimeInterval refreshInterval;
@property (nonatomic) NSTimeInterval expiresIn;
@property (nonatomic) BOOL usable;

@property (nullable, nonatomic, copy) NSString *actionTarget;
@property (nonnull, nonatomic, copy) NSArray<LMGDARedemptionStateTransition *> *transitions;
@property (nullable, nonatomic, copy) NSString *promoCode;
@property (nullable, nonatomic, copy) LMGDAOfferLimits *limits;
@property (nullable, nonatomic, copy) LMGDASchedule *schedule;

- (nonnull instancetype)initWithState:(nonnull LMGDARedemptionState *)state;
- (nonnull LMGDARedemptionState *)build;

@end

