//
//  LMGOfferStateChanged.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGNotification.h"

@interface LMGOfferStateChanged : NSObject<LMGNotification>

@property (nonnull, nonatomic, readonly) LMGPlatformId *offerId;
@property (nullable, nonatomic, readonly) LMGPlatformId *locationId;
@property (nonnull, nonatomic, readonly) NSString *prevState;
@property (nonnull, nonatomic, readonly) NSString *currentState;

- (nonnull instancetype)initWithOfferId:(nonnull LMGPlatformId *)offerId locationId:(nullable LMGPlatformId *)locationId prevState:(nonnull NSString *)prevState nextState:(nonnull NSString *)nextState NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
