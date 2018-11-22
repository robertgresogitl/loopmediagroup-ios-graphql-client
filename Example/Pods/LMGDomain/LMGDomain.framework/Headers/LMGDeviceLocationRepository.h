//
//  LMGLocationRepository.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-10.
//

#import <Foundation/Foundation.h>
#import "LMGCoordinate.h"

@protocol LMGDeviceLocationRepository <NSObject>


- (nullable LMGCoordinate *)getLastKnownDeviceCoordinateExpect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGCoordinate *)getCurrentDeviceCoordinateExpect:(NSError * _Nullable * _Nullable)error;


- (BOOL)hasDevicePermissions;

@end
