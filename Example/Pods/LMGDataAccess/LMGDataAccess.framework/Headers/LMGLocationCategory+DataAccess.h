//
//  LMGLocationCategory+DataAccess.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

@import LMGDomain;
#import "LMGDALocationCategory.h"

@interface LMGLocationCategory (DataAccess)

- (nonnull LMGDALocationCategory *)toDataAccess;

@end

@interface LMGDALocationCategory (DataAccess)

- (nonnull LMGLocationCategory *)toDomain;

@end
