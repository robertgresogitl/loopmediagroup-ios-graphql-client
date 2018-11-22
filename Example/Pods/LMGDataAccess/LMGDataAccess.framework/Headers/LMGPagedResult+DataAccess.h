//
//  LMGPagedResult+DataAccess.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-16.
//

@import LMGDomain;
#import "LMGDAPagedResult.h"

@interface LMGPagedResult (DataAccess)

- (nonnull LMGDAPagedResult *)toDataAccess;

@end

@interface LMGDAPagedResult (DataAccess)

- (nonnull LMGPagedResult *)toDomain;

@end

