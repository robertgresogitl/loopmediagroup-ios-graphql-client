//
//  LMGSession+DataAccess.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

@import LMGDomain;
#import "LMGDASession.h"

@interface LMGSession (DataAccess)

- (nonnull LMGDASession *)toDataAccess;

@end

@interface LMGDASession (DataAccess)

- (nonnull LMGSession *)toDomain;

@end
