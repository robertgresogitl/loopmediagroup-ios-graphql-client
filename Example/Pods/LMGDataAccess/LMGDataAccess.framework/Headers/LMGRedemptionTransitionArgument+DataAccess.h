//
//  LMGRedemptionTransitionArgument+DataAccess.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-02.
//

@import LMGDomain;
#import "LMGDARedemptionTransitionArgument.h"

@interface LMGRedemptionTransitionArgument (DataAccess)

- (nonnull LMGDARedemptionTransitionArgument *)toDataAccess;

@end

@interface LMGDARedemptionTransitionArgument (DataAccess)

- (nonnull LMGRedemptionTransitionArgument *)toDomain;

@end
