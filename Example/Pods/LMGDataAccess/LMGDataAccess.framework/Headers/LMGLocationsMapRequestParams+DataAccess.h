//
//  LMGLocationsMapRequestParams+DataAccess.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

@import LMGDomain;
#import "LMGDALocationsMapRequestParams.h"

@interface LMGLocationsMapRequestParams (DataAccess)

- (nonnull LMGDALocationsMapRequestParams *)toDataAccess;

@end
