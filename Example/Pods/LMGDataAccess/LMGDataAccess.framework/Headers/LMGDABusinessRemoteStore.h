//
//  LMGDABusinessStoreRemote.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDABusinessStore.h"

@protocol LMGDABusinessRemoteSource <NSObject>

- (nullable LMGDAPagedResult<LMGDABusiness *> *)getWith:(nonnull LMGDABusinessesListRequestParams *)params
                                     session:(nonnull LMGDASession *)session
                                      expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGDAPagedResult<LMGDABusiness *> *)getForCollection:(nonnull LMGDACollectionRequestParams *)params
                                                session:(nonnull LMGDASession *)session
                                                 expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGDABusiness *)getWithParams:(nonnull LMGDADetailsRequestParams *)params
                                inSession:(nonnull LMGDASession *)session
                                  expect:(NSError * _Nullable * _Nullable)error;


@end

@interface LMGDABusinessRemoteStore : NSObject <LMGDABusinessStore>

- (nonnull instancetype)initWith:(nonnull id<LMGDABusinessRemoteSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
