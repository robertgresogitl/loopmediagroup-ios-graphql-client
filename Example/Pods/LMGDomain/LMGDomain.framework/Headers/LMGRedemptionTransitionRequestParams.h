//
//  LMGRedemptionTransitionRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"

@class LMGRedemptionState;
@class LMGRedemptionTransitionArgument;
@class LMGRedemptionStateTransition;

@interface LMGRedemptionTransitionRequestParams : NSObject<NSCopying>

@property (nonnull, nonatomic, copy, readonly) NSArray<LMGRedemptionTransitionArgument *> *args;
@property (nonnull, nonatomic, copy, readonly) LMGRedemptionState *currentState;
@property (nonnull, nonatomic, copy, readonly) LMGRedemptionStateTransition *transition;
@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *offerId;
@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *locationId;

- (nonnull instancetype)initWithState:(nonnull LMGRedemptionState *)state offerId:(nonnull LMGPlatformId *)offerId locationId:(nonnull LMGPlatformId *)locationId transition:(nonnull LMGRedemptionStateTransition *)transition args:(nonnull NSArray<LMGRedemptionTransitionArgument *> *)args NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
