//
//  LMGDASearchTermsStore.h
//  LMGData
//
//  Created by Róbert Grešo on 01/11/2018.
//

#import <Foundation/Foundation.h>
#import "LMGDAPagedResult.h"

@protocol LMGDASearchTermsStore <NSObject>

- (nullable NSArray<NSString *> *)recentTerms;
- (void)save:(NSString *)term;
- (void)reset;

@end
