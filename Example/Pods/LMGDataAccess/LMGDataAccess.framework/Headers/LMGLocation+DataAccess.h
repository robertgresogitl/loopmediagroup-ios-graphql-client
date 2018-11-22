//
//  LMGLocation+DataAccess.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

@import LMGDomain;
#import "LMGDALocation.h"

@interface LMGLocation (DataAccess)

- (nonnull LMGDALocation *)toDataAccess;

@end

@interface LMGDALocation (DataAccess)

- (nonnull LMGLocation *)toDomain;

@end
