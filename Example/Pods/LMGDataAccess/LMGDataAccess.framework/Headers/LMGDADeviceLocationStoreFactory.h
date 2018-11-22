//
//  LMGDADeviceLocationStoreFactory.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>
#import "LMGDADeviceLocationLocalStore.h"
#import "LMGDADeviceLocationSensorStore.h"

@interface LMGDADeviceLocationStoreFactory : NSObject

- (nonnull instancetype)initWithLocal:(nonnull id<LMGDADeviceLocationLocalSource>)localSource sensor:(nonnull id<LMGDADeviceLocationSensorSource>)sensorSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull id<LMGDADeviceLocationStore>)storeForLocationCurrent:(BOOL)fetchCurrent;
- (nonnull id<LMGDADeviceLocationStore>)storeForSave;
- (nonnull id<LMGDADeviceLocationStore>)storeForPermissions;

@end
