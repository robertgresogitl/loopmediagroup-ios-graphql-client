//
//  LMGRedemptionStateTransition+DataAccess.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-02.
//

@import LMGDomain;
#import "LMGDARedemptionStateTransition.h"

@interface LMGRedemptionStateTransition (DataAccess)

- (nonnull LMGDARedemptionStateTransition *)toDataAccess;

@end

@interface LMGDARedemptionStateTransition (DataAccess)

- (nonnull LMGRedemptionStateTransition *)toDomain;

@end
