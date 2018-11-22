//
//  LMGCoordinate+DataAccess.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

@import LMGDomain;
#import "LMGDACoordinate.h"

@interface LMGCoordinate (DataAccess)

- (nonnull LMGDACoordinate *)toDataAccess;

@end

@interface LMGDACoordinate (DataAccess)

- (nonnull LMGCoordinate *)toDomain;

@end
