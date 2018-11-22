//
//  LMGAddress+DataAccess.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-27.
//

@import LMGDomain;
#import "LMGDAAddress.h"

@interface LMGAddress (DataAccess)

- (nonnull LMGDAAddress *)toDataAccess;

@end

@interface LMGDAAddress (DataAccess)

- (nonnull LMGAddress *)toDomain;

@end
