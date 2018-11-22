//
//  LMGDASearchTermsLocalStore.h
//  LMGData
//
//  Created by Róbert Grešo on 01/11/2018.
//

#import <Foundation/Foundation.h>
#import "LMGDASearchTermsStore.h"

@protocol LMGDASearchTermsLocalSource <NSObject>

- (nullable NSArray<NSString *> *)recentTerms;
- (void)save:(NSString *)term;
- (void)reset;

@end

@interface LMGDASearchTermsLocalStore : NSObject<LMGDASearchTermsStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDASearchTermsLocalSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

