//
//  LMGCollectionRepository.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-14.
//

#import <Foundation/Foundation.h>
#import "LMGCollection.h"
#import "LMGCollectionsListRequestParams.h"
#import "LMGDetailsRequestParams.h"
#import "LMGPagedResult.h"

@class LMGSession;

@protocol LMGCollectionRepository <NSObject>

- (nullable LMGPagedResult<LMGCollection *> *)getWithListParams:(nonnull LMGCollectionsListRequestParams *)params
                                                 session:(nonnull LMGSession *)session
                                                  expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGCollection *)getWithDetailParams:(nonnull LMGDetailsRequestParams *)params
                                        session:(nonnull LMGSession *)session
                                         expect:(NSError * _Nullable * _Nullable)error;

@end
