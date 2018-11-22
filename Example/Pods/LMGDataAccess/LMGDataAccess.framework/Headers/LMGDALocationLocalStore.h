//
//  LMGDALocationLocalStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGDALocationStore.h"

@protocol LMGDALocationLocalSource <NSObject>

- (nullable LMGDAPagedResult<LMGDALocation *> *)getWithParams:(nonnull LMGDALocationsMapRequestParams *)params
                                             session:(nonnull LMGDASession *)session
                                              expect:(NSError * _Nullable * _Nullable)error;


- (void)save:(id)data
      params:(nonnull id<LMGDASaveableParams>)params;


- (BOOL)hasDataFor:(nonnull id<LMGDASaveableParams>)params;


- (void)reset;

@end

@interface LMGDALocationLocalStore : NSObject<LMGDALocationStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDALocationLocalSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
