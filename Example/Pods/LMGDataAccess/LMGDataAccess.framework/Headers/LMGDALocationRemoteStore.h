//
//  LMGDALocationRemoteStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGDALocationStore.h"

@protocol LMGDALocationRemoteSource <NSObject>


- (nullable LMGDAPagedResult<LMGDALocation *> *)getWithParams:(nonnull LMGDALocationsMapRequestParams *)params
                                             session:(nonnull LMGDASession *)session
                                              expect:(NSError * _Nullable * _Nullable)error;


@end

@interface LMGDALocationRemoteStore : NSObject<LMGDALocationStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDALocationRemoteSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
