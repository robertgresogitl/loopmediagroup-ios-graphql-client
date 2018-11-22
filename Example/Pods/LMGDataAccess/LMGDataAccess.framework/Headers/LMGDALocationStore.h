//
//  LMGDALocationStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGDALocation.h"
#import "LMGDASession.h"
#import "LMGDALocationsMapRequestParams.h"
#import "LMGDAPagedResult.h"

@protocol LMGDALocationStore <NSObject>

- (nullable LMGDAPagedResult<LMGDALocation *> *)getWithParams:(nonnull LMGDALocationsMapRequestParams *)params
                                             session:(nonnull LMGDASession *)session
                                              expect:(NSError * _Nullable * _Nullable)error;


- (void)save:(nonnull LMGDAPagedResult<LMGDALocation *> *)locations
   mapParams:(nonnull LMGDALocationsMapRequestParams *)params;

@end
