//
//  LMGDACollectionLocalStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-19.
//

#import <Foundation/Foundation.h>
#import "LMGDACollectionStore.h"

@protocol LMGDACollectionLocalSource <NSObject>

- (nullable LMGDAPagedResult<LMGDACollection *> *)getWithListParams:(nonnull LMGDACollectionsListRequestParams *)params
                                                   session:(nonnull LMGDASession *)session
                                                    expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGDACollection *)getWithDetailParams:(nonnull LMGDADetailsRequestParams *)params
                                          session:(nonnull LMGDASession *)session
                                           expect:(NSError * _Nullable * _Nullable)error;


- (BOOL)hasCollectionForParams:(nonnull LMGDADetailsRequestParams *)params;


- (BOOL)hasListForParams:(nonnull id<LMGDASaveableParams>)params;


- (void)save:(nonnull LMGDACollection *)collection;


- (void)saveList:(nonnull LMGDAPagedResult<LMGDACollection *> *)collections
          params:(nonnull id<LMGDASaveableParams>)params;


- (void)reset;


@end

@interface LMGDACollectionLocalStore : NSObject<LMGDACollectionStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDACollectionLocalSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
