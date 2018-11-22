//
//  LMGBusinessesListRequestParams+DataAccess.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-13.
//

@import LMGDomain;
#import "LMGDABusinessesListRequestParams.h"

@interface LMGBusinessesListRequestParams (DataAccess)

- (nonnull LMGDABusinessesListRequestParams *)toDataAccess;

@end
