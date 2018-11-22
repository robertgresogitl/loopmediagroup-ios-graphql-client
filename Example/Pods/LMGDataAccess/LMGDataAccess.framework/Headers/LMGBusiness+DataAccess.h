//
//  LMGBusiness+DataAccess.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

@import LMGDomain;
#import "LMGDABusiness.h"


@interface LMGBusiness (DataAccess)

- (nonnull LMGDABusiness *)toDataAccess;

@end

@interface LMGDABusiness (DataAccess)

- (nonnull LMGBusiness *)toDomain;

@end
