//
//  LMGDAUserRepository.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-12.
//

#import <Foundation/Foundation.h>
@import LMGDomain;
#import "LMGDAUserStoreFactory.h"


@interface LMGDAUserRepository : NSObject<LMGUserRepository>

- (nonnull instancetype)initWithFactory:(nonnull LMGDAUserStoreFactory *)factory NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
