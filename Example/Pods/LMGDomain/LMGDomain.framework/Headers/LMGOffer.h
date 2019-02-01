//
//  LMGOffer.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGUrlPath.h"

@class LMGBusiness;
@class LMGLocation;
@class LMGPlace;
@class LMGSchedule;
@class LMGOfferBuilder;

typedef NS_ENUM(NSUInteger, LMGFlagType) {
    LMGFlagTypeNone,
    LMGFlagTypeExclusive,
    LMGFlagTypeLimited,
    LMGFlagTypeFeatured,
    LMGFlagTypeNew,
    LMGFlagTypeHot,
    LMGFlagTypeLocked,
    LMGFlagTypeOther
};

@interface LMGOffer : NSObject <NSCopying>

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *headline;
@property (nonnull, nonatomic, copy, readonly) NSString *subHeadline;

@property (nullable, nonatomic, copy, readonly) NSString *slug;
@property (nullable, nonatomic, copy, readonly) NSString *details;
@property (nullable, nonatomic, copy, readonly) NSString *legal;
@property (nullable, nonatomic, copy, readonly) LMGUrlPath *priorityImage;
@property (nullable, nonatomic, copy, readonly) NSString *promoCode;
@property (nullable, nonatomic, copy, readonly) NSURL *shareUrl;
@property (nullable, nonatomic, copy, readonly) LMGSchedule *redemptionSchedule;
@property (nullable, nonatomic, copy, readonly) LMGBusiness *business;

@property (nonnull, nonatomic, copy, readonly) NSArray<LMGUrlPath *> *images;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGLocation *> *locations;

@property (nonatomic, assign, readonly, getter=isBookmarked) BOOL bookmarked;
@property (nonatomic, assign, readonly) LMGFlagType flag;

- (nullable instancetype)initWithBuilder:(nonnull LMGOfferBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)copyWithBlock:(void (^_Nonnull)(LMGOfferBuilder *_Nonnull builder))configurationBlock;

@end

@interface LMGOfferBuilder: NSObject

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *headline;
@property (nonnull, nonatomic, copy, readonly) NSString *subHeadline;
@property (nullable, nonatomic, copy) NSString *slug;
@property (nullable, nonatomic, copy) NSString *details;
@property (nullable, nonatomic, copy) NSString *legal;
@property (nullable, nonatomic, copy) NSString *promoCode;
@property (nullable, nonatomic, copy) NSURL *shareUrl;
@property (nullable, nonatomic, copy) LMGSchedule *redemptionSchedule;
@property (nullable, nonatomic, copy) LMGBusiness *business;
@property (nonnull, nonatomic, copy) NSArray<LMGUrlPath *> *images;
@property (nonnull, nonatomic, copy) NSArray<LMGLocation *> *locations;
@property (nonatomic, assign) LMGFlagType flag;
@property (nonatomic, assign) BOOL bookmarked;

- (nonnull instancetype)initWith:(nonnull LMGPlatformId *)offerId headline:(nonnull NSString *)headline subHeadline:(nonnull NSString *)subHeadline NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWith:(nonnull LMGOffer *)offer;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nullable LMGOffer *)build;

@end
