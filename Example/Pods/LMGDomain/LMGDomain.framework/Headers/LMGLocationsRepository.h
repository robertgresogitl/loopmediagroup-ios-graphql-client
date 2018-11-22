//
//  LMGLocationsRepository.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

#import <Foundation/Foundation.h>
#import "LMGLocation.h"
#import "LMGLocationsMapRequestParams.h"
#import "LMGPagedResult.h"

@class LMGSession;

@protocol LMGLocationsRepository <NSObject>

- (nullable LMGPagedResult<LMGLocation *> *)getWithParams:(nonnull LMGLocationsMapRequestParams *)params
                                           session:(nonnull LMGSession *)session
                                            expect:(NSError * _Nullable * _Nullable)error;

@end
