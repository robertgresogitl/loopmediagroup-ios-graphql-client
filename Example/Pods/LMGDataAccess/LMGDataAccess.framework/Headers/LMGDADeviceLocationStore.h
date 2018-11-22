//
//  LMGDADeviceLocationStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>
#import "LMGDACoordinate.h"

@protocol LMGDADeviceLocationStore <NSObject>

- (nullable LMGDACoordinate *)getDeviceCoordinateExpect:(NSError * _Nullable * _Nullable)error;


- (BOOL)hasDevicePermissions;


- (void)save:(nonnull LMGDACoordinate *)coordinate;


@end
