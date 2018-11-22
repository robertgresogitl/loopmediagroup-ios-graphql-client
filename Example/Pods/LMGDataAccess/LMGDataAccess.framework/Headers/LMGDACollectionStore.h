//
//  LMGDACollectionStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-19.
//

#import <Foundation/Foundation.h>
#import "LMGDACollection.h"
#import "LMGDACollectionsListRequestParams.h"
#import "LMGDADetailsRequestParams.h"
#import "LMGDASession.h"
#import "LMGDASaveableParams.h"
#import "LMGDAPagedResult.h"

@protocol LMGDACollectionStore <NSObject>

- (nullable LMGDAPagedResult<LMGDACollection *> *)getWithListParams:(nonnull LMGDACollectionsListRequestParams *)params
                                                   session:(nonnull LMGDASession *)session
                                                    expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGDACollection *)getWithDetailParams:(nonnull LMGDADetailsRequestParams *)params
                                          session:(nonnull LMGDASession *)session
                                           expect:(NSError * _Nullable * _Nullable)error;


- (void)save:(nonnull LMGDACollection *)collection;


- (void)save:(nonnull LMGDAPagedResult<LMGDACollection *> *)collections
      params:(nonnull id<LMGDASaveableParams>)params;


- (void)reset;

@end
