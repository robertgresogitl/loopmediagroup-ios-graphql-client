//
//  LMGCollectionsListRequestParams+DataAccess.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-04.
//

@import LMGDomain;
#import "LMGDACollectionsListRequestParams.h"

@interface LMGCollectionsListRequestParams (DataAccess)

- (nonnull LMGDACollectionsListRequestParams *)toDataAccess;

@end
