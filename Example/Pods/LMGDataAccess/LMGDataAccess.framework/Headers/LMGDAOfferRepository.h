//
//  LMGDAOfferRepository.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

@import LMGDomain;
#import "LMGDAOfferStoreFactory.h"

@interface LMGDAOfferRepository : NSObject<LMGOfferRepository>

- (nonnull instancetype)initWithFactory:(nonnull LMGDAOfferStoreFactory *)factory NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
