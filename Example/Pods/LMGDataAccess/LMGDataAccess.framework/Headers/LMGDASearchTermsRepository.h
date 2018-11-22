//
//  LMGDASearchTermsRepository.h
//  LMGData
//
//  Created by Róbert Grešo on 01/11/2018.
//

#import <Foundation/Foundation.h>
@import LMGDomain;
#import "LMGDASearchTermsStoreFactory.h"

@interface LMGDASearchTermsRepository : NSObject<LMGSearchTermsRepository>

- (nonnull instancetype)initWithFactory:(nonnull LMGDASearchTermsStoreFactory *)factory NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;


@end
