//
//  LMGDetailsRequestParams+DataAccess.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-18.
//

@import LMGDomain;
#import "LMGDADetailsRequestParams.h"

@interface LMGDetailsRequestParams (DataAccess)

- (nonnull LMGDADetailsRequestParams *)toDataAccess;

@end
