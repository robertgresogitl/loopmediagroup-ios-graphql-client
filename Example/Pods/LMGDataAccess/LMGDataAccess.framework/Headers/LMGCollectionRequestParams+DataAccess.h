//
//  LMGCollectionRequestParams+DataAccess.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-18.
//

@import LMGDomain;
#import "LMGDACollectionRequestParams.h"

@interface LMGCollectionRequestParams (DataAccess)

- (nonnull LMGDACollectionRequestParams *)toDataAccess;

@end
