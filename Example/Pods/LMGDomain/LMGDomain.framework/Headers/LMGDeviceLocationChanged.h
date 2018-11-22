//
//  LMGDeviceLocationChanged.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGCoordinate.h"
#import "LMGNotification.h"

@interface LMGDeviceLocationChanged : NSObject<LMGNotification>

@property (nullable, nonatomic, copy, readonly) LMGCoordinate *coordinate;

- (nonnull instancetype)initWithCoordinate:(nullable LMGCoordinate *)coordinate NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
