//
//  LMGRedemptionState.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-24.
//

#import <Foundation/Foundation.h>

@class LMGSchedule;
@class LMGOfferLimits;
@class LMGRedemptionStateTransition;
@class LMGRedemptionStateBuilder;

typedef NS_ENUM(NSUInteger, LMGRedemptionStatus) {
    LMGRedemptionStatusDefault,
    LMGRedemptionStatusRedeemed,
    LMGRedemptionStatusUnknown
};

typedef NS_ENUM(NSUInteger, LMGRedemptionDisabilityReason) {
    LMGRedemptionDisabilityReasonNone,
    LMGRedemptionDisabilityReasonDisabled,
    LMGRedemptionDisabilityReasonOfferUsed,
    LMGRedemptionDisabilityReasonSoldOut,
    LMGRedemptionDisabilityReasonSoldOutPerWindow,
    LMGRedemptionDisabilityReasonSoldOutPerProfile,
    LMGRedemptionDisabilityReasonSoldOutPerProfilePerWindow,
    LMGRedemptionDisabilityReasonSchedule,
    LMGRedemptionDisabilityReasonNotVisible,
    LMGRedemptionDisabilityReasonLocationPermission,
    LMGRedemptionDisabilityReasonNotSupported,
};

typedef NS_ENUM(NSUInteger, LMGRedemptionAction) {
    LMGRedemptionActionDefault,
    LMGRedemptionActionPhone,
    LMGRedemptionActionUrl,
    LMGRedemptionActionUnknown
};

typedef void (^RedemptionStateBuildBlock)(LMGRedemptionStateBuilder  * _Nonnull builder);

@interface LMGRedemptionState : NSObject<NSCopying>

@property (nonatomic, readonly) LMGRedemptionStatus displayStatus;
@property (nonatomic, readonly) LMGRedemptionDisabilityReason disabilityReason;
@property (nonatomic, readonly) LMGRedemptionAction action;
@property (nonatomic, readonly) NSTimeInterval refreshInterval;
@property (nonatomic, readonly) NSTimeInterval expiresIn;

@property (nonnull, nonatomic, copy, readonly) NSString *state;
@property (nullable, nonatomic, copy, readonly) NSString *actionTarget;
@property (nullable, nonatomic, copy, readonly) NSString *promoCode;
@property (nullable, nonatomic, copy, readonly) LMGOfferLimits *limits;
@property (nullable, nonatomic, copy, readonly) LMGSchedule *schedule;

@property (nonatomic, assign, readonly, getter=isUsable) BOOL usable;
@property (nullable, nonatomic, copy, readonly) NSArray<LMGRedemptionStateTransition *> *transitions;

- (nonnull instancetype)initWithBuilder:(nonnull LMGRedemptionStateBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)copyWithBlock:(nullable RedemptionStateBuildBlock)block;

@end

@interface LMGRedemptionStateBuilder : NSObject

@property (nullable, nonatomic, copy, readonly) NSArray<LMGRedemptionStateTransition *> *supportedTransitions;

@property (nonnull, nonatomic, copy, readonly) NSString *state;
@property (nonatomic) LMGRedemptionStatus displayStatus;
@property (nonatomic) LMGRedemptionDisabilityReason disabilityReason;
@property (nonatomic) LMGRedemptionAction action;
@property (nonatomic) NSTimeInterval refreshInterval;
@property (nonatomic) NSTimeInterval expiresIn;
@property (nonatomic) BOOL usable;

@property (nullable, nonatomic, copy) NSString *actionTarget;
@property (nullable, nonatomic, copy) NSString *promoCode;
@property (nullable, nonatomic, copy) LMGOfferLimits *limits;
@property (nullable, nonatomic, copy) LMGSchedule *schedule;
@property (nullable, nonatomic, copy) NSArray<LMGRedemptionStateTransition *> *transitions;

- (nonnull instancetype)initWithState:(nonnull NSString *)state NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithRedemptionState:(nonnull LMGRedemptionState *)state;
- (nonnull LMGRedemptionState *)build;

@end
