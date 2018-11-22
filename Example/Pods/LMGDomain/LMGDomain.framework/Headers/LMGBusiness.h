//
//  LMGBusiness.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGUrlPath.h"

@class LMGLocationCategory;
@class LMGSocialMedia;
@class LMGBusinessBuilder;
@class LMGOffer;
@class LMGLocation;

@interface LMGBusiness : NSObject <NSCopying>

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nonnull, nonatomic, copy, readonly) NSString *shortName;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGLocationCategory *> *categories;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGOffer *> *offers;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGSocialMedia *> *socialMedia;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGLocation *> *locations;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGUrlPath *> *images;

@property (nullable, nonatomic, copy, readonly) NSString *slug;
@property (nullable, nonatomic, copy, readonly) LMGUrlPath *logo;
@property (nullable, nonatomic, copy, readonly) NSString *slogan;
@property (nullable, nonatomic, copy, readonly) NSString *details;
@property (nullable, nonatomic, copy, readonly) NSString *phone;
@property (nullable, nonatomic, copy, readonly) LMGUrlPath *url;

- (nullable instancetype)initWith:(nonnull LMGBusinessBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

@interface LMGBusinessBuilder: NSObject

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nonnull, nonatomic, copy, readonly) NSString *shortName;
@property (nonnull, nonatomic, copy) NSArray<LMGLocationCategory *> *categories;
@property (nonnull, nonatomic, copy) NSArray<LMGOffer *> *offers;
@property (nonnull, nonatomic, copy) NSArray<LMGSocialMedia *> *socialMedia;
@property (nonnull, nonatomic, copy) NSArray<LMGLocation *> *locations;
@property (nonnull, nonatomic, copy) NSArray<LMGUrlPath *> *images;

@property (nullable, nonatomic, copy) LMGUrlPath *logo;
@property (nullable, nonatomic, copy) NSString *slug;
@property (nullable, nonatomic, copy) NSString *slogan;
@property (nullable, nonatomic, copy) NSString *details;
@property (nullable, nonatomic, copy) NSString *phone;
@property (nullable, nonatomic, copy) LMGUrlPath *url;

- (nonnull instancetype)initWithId:(nonnull LMGPlatformId *)businessId name:(nonnull NSString *)name shortName:(nonnull NSString *)shortName NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWith:(nonnull LMGBusiness *)business;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nullable LMGBusiness *)build;

@end
