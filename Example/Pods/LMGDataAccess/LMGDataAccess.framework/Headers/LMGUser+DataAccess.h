//
//  LMGUser+DataAccess.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

@import LMGDomain;
#import "LMGDAUser.h"

@interface LMGUser (DataAccess)

- (nonnull LMGDAUser *)toDataAccess;

@end


@interface LMGDAUser (DataAccess)

- (nonnull LMGUser *)toDomain;

@end
