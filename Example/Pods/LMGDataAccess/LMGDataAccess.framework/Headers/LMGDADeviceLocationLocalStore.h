//
//  LMGDADeviceLocationLocalStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>
#import "LMGDADeviceLocationStore.h"

@protocol LMGDADeviceLocationLocalSource <NSObject>

- (nullable LMGDACoordinate *)getDeviceCoordinateExpect:(NSError * _Nullable * _Nullable)error;


- (BOOL)hasLocation;


- (void)save:(nonnull LMGDACoordinate *)coordinate;


@end

@interface LMGDADeviceLocationLocalStore : NSObject<LMGDADeviceLocationStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDADeviceLocationLocalSource>)localSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
