//
//  LMGDALocationRepository.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
@import LMGDomain;
#import "LMGDALocation.h"

@class LMGDALocationStoreFactory;

@interface LMGDALocationRepository : NSObject<LMGLocationsRepository>

- (nonnull instancetype)initWithFactory:(nonnull LMGDALocationStoreFactory *)factory NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
