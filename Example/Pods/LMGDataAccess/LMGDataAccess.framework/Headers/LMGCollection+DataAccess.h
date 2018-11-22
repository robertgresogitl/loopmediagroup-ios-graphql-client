//
//  LMGCollection+LMGDACollection.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-18.
//

@import LMGDomain;
#import "LMGDACollection.h"

@interface LMGCollection (DataAccess)

- (nonnull LMGDACollection *)toDataAccess;

@end

@interface LMGDACollection (DataAccess)

- (nonnull LMGCollection *)toDomain;

@end
