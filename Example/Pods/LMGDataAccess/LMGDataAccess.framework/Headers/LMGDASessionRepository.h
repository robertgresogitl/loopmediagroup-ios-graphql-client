//
//  LMGDASessionRepository.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-07.
//

#import <Foundation/Foundation.h>
@import LMGDomain;
#import "LMGDASessionStoreFactory.h"

@interface LMGDASessionRepository : NSObject<LMGSessionRepository>

- (nonnull instancetype)initWithFactory:(nonnull LMGDASessionStoreFactory *)factory NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
