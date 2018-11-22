//
//  LMGDARedemptionStateTransition.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-02.
//

#import <Foundation/Foundation.h>

@class LMGDARedemptionTransitionArgument;

@interface LMGDARedemptionStateTransition : NSObject<NSCopying>

@property (nonatomic, readonly) NSInteger id;
@property (nonnull, nonatomic, copy, readonly) NSString *transitionCta;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGDARedemptionTransitionArgument *> *args;

- (nonnull instancetype)initWithId:(NSInteger)id transitionCta:(nonnull NSString *)transitionCta args:(nonnull NSArray<LMGDARedemptionTransitionArgument *> *)args NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
