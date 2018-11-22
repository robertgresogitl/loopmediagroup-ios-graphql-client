//
//  LMGRedemptionStateTransition.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>

@class LMGRedemptionTransitionArgument;

@interface LMGRedemptionStateTransition : NSObject<NSCopying>

@property (nonatomic, readonly) NSInteger id;
@property (nonnull, nonatomic, copy, readonly) NSString *transitionCta;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGRedemptionTransitionArgument *> *args;

- (nonnull instancetype)initWithId:(NSInteger)id transitionCta:(nonnull NSString *)transitionCta args:(nonnull NSArray<LMGRedemptionTransitionArgument *> *)args NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
