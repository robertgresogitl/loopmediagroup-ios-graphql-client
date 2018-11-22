//
//  LMGDASearchTermsStoreFactory.h
//  LMGData
//
//  Created by Róbert Grešo on 01/11/2018.
//

#import <Foundation/Foundation.h>
#import "LMGDASearchTermsLocalStore.h"

@interface LMGDASearchTermsStoreFactory : NSObject

- (nonnull instancetype)initWitnLocalSource:(nonnull id<LMGDASearchTermsLocalSource>)localSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull id<LMGDASearchTermsStore>)store;

@end

