//
//  LMGOfferLimits+DataAccess.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

@import LMGDomain;
#import "LMGDAOfferLimits.h"

LMGLimitDescription LMGDALimitDescToLMGLimitDesc(LMGDALimitDescription desc);
LMGDALimitDescription LMGLimitDescToLMGDALimitDesc(LMGLimitDescription desc);

@interface LMGOfferLimits (DataAccess)

- (nonnull LMGDAOfferLimits *)toDataAccess;

@end

@interface LMGDAOfferLimits (DataAccess)

- (nonnull LMGOfferLimits *)toDomain;

@end
