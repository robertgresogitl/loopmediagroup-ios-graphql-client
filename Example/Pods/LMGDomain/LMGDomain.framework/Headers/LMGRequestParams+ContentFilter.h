//
//  LMGDetailsRequestParams+ContentFilter.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-11-07.
//

#import "LMGDetailsRequestParams.h"
#import "LMGContentFilter.h"

@interface LMGDetailsRequestParams (ContentFilter)

- (nonnull instancetype)paramsWithContentFilter:(nonnull LMGContentFilter *)contentFilter;

@end
