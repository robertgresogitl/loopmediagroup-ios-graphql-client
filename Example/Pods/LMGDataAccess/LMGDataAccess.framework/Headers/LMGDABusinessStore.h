//
//  LMGDABusinessStore.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDABusiness.h"
#import "LMGDASession.h"
#import "LMGDABusinessesListRequestParams.h"
#import "LMGDACollectionRequestParams.h"
#import "LMGDADetailsRequestParams.h"
#import "LMGDASaveableParams.h"
#import "LMGDAPagedResult.h"

@protocol LMGDABusinessStore <NSObject>

- (nullable LMGDAPagedResult<LMGDABusiness *> *)getWithListParams:(nonnull LMGDABusinessesListRequestParams *)params
                                                 session:(nonnull LMGDASession *)session
                                                  expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGDAPagedResult<LMGDABusiness *> *)getListWithBookmarkedOffersFor:(nonnull LMGDABusinessesListRequestParams *)params session:(nonnull LMGDASession *)session expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGDAPagedResult<LMGDABusiness *> *)getWithCollectionParams:(nonnull LMGDACollectionRequestParams *)params
                                                       session:(nonnull LMGDASession *)session
                                                        expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGDABusiness *)getWithDetailParams:(nonnull LMGDADetailsRequestParams *)params
                                        session:(nonnull LMGDASession *)session
                                         expect:(NSError * _Nullable * _Nullable)error;


- (void)save:(nonnull LMGDABusiness *)business;


- (void)save:(nonnull LMGDAPagedResult<LMGDABusiness *> *)businesses
      params:(nonnull id<LMGDASaveableParams>)params;


- (void)saveBookmarked:(nonnull LMGDAPagedResult<LMGDABusiness *> *)businesses
                params:(nonnull id<LMGDASaveableParams>)params;


- (void)reset;


@end

