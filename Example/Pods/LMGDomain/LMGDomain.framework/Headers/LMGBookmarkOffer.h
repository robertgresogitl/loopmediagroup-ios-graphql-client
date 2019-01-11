//
//  LMGBookmarkOffer.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-13.
//

#import "LMGSessionRequiredUseCase.h"
#import "LMGOfferRepository.h"
#import "LMGPlatformId.h"

@class LMGBookmarkOfferParams;

@interface LMGBookmarkOffer : LMGSessionRequiredUseCase<LMGBookmarkOfferParams *, NoParams *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession offerRepository:(nonnull id<LMGOfferRepository>)offerRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter getSession:(nonnull LMGGetSession *)getSession restartSession:(nonnull LMGRestartSession *)restartSession renewSession:(nonnull LMGRenewSession *)renewSession NS_UNAVAILABLE;

@end

@interface LMGBookmarkOfferParams: NSObject

@property (nonnull, nonatomic, readonly) LMGPlatformId *offerId;
@property (nullable, nonatomic, readonly) LMGPlatformId *locationId;
@property (nonatomic, readonly) BOOL isBookmarked;

- (nonnull instancetype)initForOffer:(nonnull LMGPlatformId *)offerId locationId:(nullable LMGPlatformId *)location bookmark:(BOOL)bookmark NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

@interface NSError (LMGBookmarkOffer)

+ (nonnull NSError *)userNotIdentifiedWhileBookmarking;

@end

