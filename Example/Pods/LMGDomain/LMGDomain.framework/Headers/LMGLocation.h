//
//  LMGLocation.h
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
@class LMGLocationBuilder;
@class LMGAddress;
@class LMGBusiness;

@interface LMGLocation : NSObject <NSCopying>

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) LMGAddress *address;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGSocialMedia *> *socialMedia;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGLocationCategory *> *categories;
@property (nullable, nonatomic, copy, readonly) NSNumber *distance;
@property (nullable, nonatomic, copy, readonly) NSString *phoneNumber;
@property (nullable, nonatomic, copy, readonly) LMGUrlPath *urlPath;
@property (nullable, nonatomic, copy, readonly) LMGBusiness *business;
@property (nullable, nonatomic, copy, readonly) NSURL *shareUrl;

- (nonnull instancetype)initWith:(nonnull LMGLocationBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

@interface LMGLocationBuilder: NSObject

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) LMGAddress *address;
@property (nullable, nonatomic, copy, readonly) NSString *name;
@property (nonnull, nonatomic, copy) NSArray<LMGSocialMedia *> *socialMedia;
@property (nonnull, nonatomic, copy) NSArray<LMGLocationCategory *> *categories;
@property (nullable, nonatomic, copy) NSNumber *distance;
@property (nullable, nonatomic, copy) NSString *phoneNumber;
@property (nullable, nonatomic, copy) LMGUrlPath *urlPath;
@property (nullable, nonatomic, copy) LMGBusiness *business;
@property (nullable, nonatomic, copy) NSURL *shareUrl;

- (nonnull instancetype)initWith:(nonnull LMGPlatformId *)locationId address:(nonnull LMGAddress *)address name:(nonnull NSString *)name NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWith:(nonnull LMGLocation *)location;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull LMGLocation *)build;

@end
