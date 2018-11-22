//
//  LMGRedemptionState+DataAccess.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-02.
//

@import LMGDomain;
#import "LMGDARedemptionState.h"

@interface LMGRedemptionState (DataAccess)

- (nonnull LMGDARedemptionState *)toDataAccess;

@end

@interface LMGDARedemptionState (DataAccess)

- (nonnull LMGRedemptionState *)toDomain;

@end
