//
//  LMGOfferStateChangeError.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGNotification.h"

@interface LMGOfferStateChangeError : NSObject<LMGNotification>

@property (nonnull, nonatomic, readonly) LMGPlatformId *offerId;
@property (nullable, nonatomic, readonly) LMGPlatformId *locationId;
@property (nonnull, nonatomic, readonly) NSString *state;
@property (nonnull, nonatomic, readonly) NSString *transition;
@property (nonnull, nonatomic, readonly) NSError *error;

- (nonnull instancetype)initWithOfferId:(nonnull LMGPlatformId *)offerId locationId:(nullable LMGPlatformId *)locationId state:(nonnull NSString *)currentState transition:(nonnull NSString *)transition error:(nonnull NSError *)error NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;


@end
