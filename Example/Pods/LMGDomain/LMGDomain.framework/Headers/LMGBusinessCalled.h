//
//  LMGBusinessCalled.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGNotification.h"

@class LMGBusiness;
@class LMGLocation;

@interface LMGBusinessCalled : NSObject<LMGNotification>

@property (nonnull, nonatomic, copy, readonly) LMGBusiness *business;
@property (nullable, nonatomic, copy, readonly) LMGLocation *location;

- (nonnull instancetype)initWithBusiness:(nonnull LMGBusiness *)business location:(nullable LMGLocation *)location NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
@end
