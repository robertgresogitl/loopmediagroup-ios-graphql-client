//
//  LMGDAOffer.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDAPlatformId.h"

@class LMGDABusiness;
@class LMGDALocation;
@class LMGDASchedule;
@class LMGDAOfferBuilder;

typedef NS_ENUM(NSUInteger, LMGDAFlagType) {
    LMGDAFlagTypeNone,
    LMGDAFlagTypeExclusive,
    LMGDAFlagTypeLimited,
    LMGDAFlagTypeFeatured,
    LMGDAFlagTypeNew,
    LMGDAFlagTypeHot,
    LMGDAFlagTypeLocked,
    LMGDAFlagTypeOther
};

@interface LMGDAOffer : NSObject <NSCopying>

@property (nonnull, nonatomic, copy, readonly) LMGDAPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *headline;
@property (nonnull, nonatomic, copy, readonly) NSString *subHeadline;

@property (nullable, nonatomic, copy, readonly) NSString *slug;
@property (nullable, nonatomic, copy, readonly) NSString *details;
@property (nullable, nonatomic, copy, readonly) NSString *legal;
@property (nullable, nonatomic, copy, readonly) NSString *promoCode;
@property (nullable, nonatomic, copy, readonly) NSURL *shareUrl;
@property (nullable, nonatomic, copy, readonly) LMGDABusiness *business;
@property (nullable, nonatomic, copy, readonly) LMGDASchedule *redemptionSchedule;

@property (nonnull, nonatomic, copy, readonly) NSArray<NSString *> *images;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGDALocation *> *locations;

@property (nonatomic, readonly) LMGDAFlagType flag;
@property (nonatomic, readonly) BOOL bookmarked;

- (nullable instancetype)initWithBuilder:(nonnull LMGDAOfferBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)copyWithBlock:(void (^_Nonnull)(LMGDAOfferBuilder *_Nonnull builder))configurationBlock;

@end

@interface LMGDAOfferBuilder: NSObject

@property (nonnull, nonatomic, copy, readonly) LMGDAPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *headline;
@property (nonnull, nonatomic, copy, readonly) NSString *subHeadline;
@property (nullable, nonatomic, copy) LMGDASchedule *redemptionSchedule;
@property (nullable, nonatomic, copy) LMGDABusiness *business;
@property (nullable, nonatomic, copy) NSString *slug;
@property (nullable, nonatomic, copy) NSString *details;
@property (nullable, nonatomic, copy) NSString *legal;
@property (nullable, nonatomic, copy) NSString *promoCode;
@property (nullable, nonatomic, copy) NSURL *shareUrl;
@property (nonnull, nonatomic, copy) NSArray<NSString *> *images;
@property (nonnull, nonatomic, copy) NSArray<LMGDALocation *> *locations;
@property (nonatomic) LMGDAFlagType flag;
@property (nonatomic) BOOL bookmarked;

- (nonnull instancetype)initWith:(nonnull LMGDAPlatformId *)offerId headline:(nonnull NSString *)headline subHeadline:(nonnull NSString *)subHeadline NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWith:(nonnull LMGDAOffer *)offer;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull LMGDAOffer *)build;

@end
