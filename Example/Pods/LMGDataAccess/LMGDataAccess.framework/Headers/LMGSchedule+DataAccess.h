//
//  LMGSchedule+DataAccess.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

@import LMGDomain;
#import "LMGDASchedule.h"

@interface LMGSchedule (DataAccess)

- (nonnull LMGDASchedule *)toDataAccess;

@end

@interface LMGDASchedule (DataAccess)

- (nonnull LMGSchedule *)toDomain;

@end
