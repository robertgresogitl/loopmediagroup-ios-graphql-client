//
//  LMGOfferShared.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGNotification.h"
#import "LMGNotifications.h"

@class LMGOffer;
@class LMGBusiness;
@class LMGLocation;

@interface LMGOfferShared : NSObject<LMGNotification>

@property (nonnull, nonatomic, copy, readonly) LMGOffer *offer;
@property (nonnull, nonatomic, copy, readonly) LMGBusiness *business;
@property (nullable, nonatomic, copy, readonly) LMGLocation *location;
@property (nonatomic, readonly) LMGSharingMethod shareMethod;

- (nonnull instancetype)initWithOffer:(nonnull LMGOffer *)offer business:(nonnull LMGBusiness *)business location:(nullable LMGLocation *)location sharingMethod:(LMGSharingMethod)sharingMethod NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
