//
//  LMGOffer+DataAccess.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

@import LMGDomain;
#import "LMGDAOffer.h"

@interface LMGOffer (DataAccess)

- (nonnull LMGDAOffer *)toDataAccess;

@end

@interface LMGDAOffer (DataAccess)

- (nonnull LMGOffer *)toDomain;

@end
