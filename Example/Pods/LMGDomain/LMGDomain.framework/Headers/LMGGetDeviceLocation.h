//
//  LMGGetDeviceLocation.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-10.
//

#import <Foundation/Foundation.h>
#import "LMGBaseUseCase.h"
#import "LMGDeviceLocationRepository.h"
#import "LMGLocationRequestParams.h"


@interface LMGGetDeviceLocation : LMGBaseUseCase<LMGLocationRequestParams *, LMGCoordinate *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter> )notificationCenter locationRepository:(nonnull id<LMGDeviceLocationRepository>)locationRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;

@end
