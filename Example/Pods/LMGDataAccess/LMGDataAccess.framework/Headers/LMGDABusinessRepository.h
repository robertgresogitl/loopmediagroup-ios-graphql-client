//
//  LMGDABusinessRepository.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
@import LMGDomain;
#import "LMGDABusinessStoreFactory.h"

@interface LMGDABusinessRepository : NSObject <LMGBusinessRepository>

- (nonnull instancetype)initWith:(nonnull LMGDABusinessStoreFactory *)factory NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
