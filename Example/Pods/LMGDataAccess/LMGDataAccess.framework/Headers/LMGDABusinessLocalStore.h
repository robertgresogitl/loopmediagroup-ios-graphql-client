//
//  LMGDABusinessStoreLocal.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDABusinessStore.h"
#import "LMGDASaveableParams.h"

@protocol LMGDABusinessLocalSource


- (nullable LMGDAPagedResult<LMGDABusiness *> *)getListWith:(nonnull id<LMGDASaveableParams>)params
                                                     expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGDAPagedResult<LMGDABusiness *> *)getListWithBookmarkedOffersFor:(nonnull id<LMGDASaveableParams>)params expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGDABusiness *)getWith:(nonnull LMGDADetailsRequestParams *)params
                                        expect:(NSError * _Nullable * _Nullable)error;


- (void)save:(nonnull LMGDABusiness *)business;


- (void)saveList:(nonnull LMGDAPagedResult<LMGDABusiness *> *)list
          params:(nonnull id<LMGDASaveableParams>)params;


- (void)saveBookmarkedList:(nonnull LMGDAPagedResult<LMGDABusiness *> *)list
                    params:(nonnull id<LMGDASaveableParams>)params;


- (BOOL)hasBusinessForParams:(nonnull LMGDADetailsRequestParams *)params;


- (BOOL)hasListForParams:(nonnull id<LMGDASaveableParams>)params;


- (void)reset;


@end

@interface LMGDABusinessLocalStore : NSObject <LMGDABusinessStore>

- (nonnull instancetype)initWith:(nonnull id<LMGDABusinessLocalSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
