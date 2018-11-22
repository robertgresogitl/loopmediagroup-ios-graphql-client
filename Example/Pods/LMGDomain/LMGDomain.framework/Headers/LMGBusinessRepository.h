//
//  LMGBusinessRepository.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGBusinessesListRequestParams.h"
#import "LMGCollectionRequestParams.h"
#import "LMGDetailsRequestParams.h"
#import "LMGBusiness.h"
#import "LMGPagedResult.h"

@class LMGOffer;
@class LMGSession;
@class LMGCoordinate;

@protocol LMGBusinessRepository <NSObject>


- (nullable LMGPagedResult<LMGBusiness *> *)getWithListParams:(nonnull LMGBusinessesListRequestParams *)params
                                               session:(nonnull LMGSession *)session
                                                expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGPagedResult<LMGBusiness *> *)getWithCollectionParams:(nonnull LMGCollectionRequestParams *)params
                                                     session:(nonnull LMGSession *)session
                                                      expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGBusiness *)getWithDetailParams:(nonnull LMGDetailsRequestParams *)params
                                      session:(nonnull LMGSession *)session
                                       expect:(NSError * _Nullable * _Nullable)error;

@end
