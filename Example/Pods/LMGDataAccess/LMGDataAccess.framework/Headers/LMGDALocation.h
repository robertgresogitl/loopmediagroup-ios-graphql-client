//
//  LMGDALocation.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDAPlatformId.h"

@class LMGDAAddress;
@class LMGDALocationCategory;
@class LMGDASocialMedia;
@class LMGDALocationBuilder;
@class LMGDABusiness;

@interface LMGDALocation : NSObject <NSCopying>

@property (nonnull, nonatomic, copy, readonly) LMGDAPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) LMGDAAddress *address;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGDASocialMedia *> *socialMedia;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGDALocationCategory *> *categories;
@property (nullable, nonatomic, copy, readonly) NSNumber *distance;
@property (nullable, nonatomic, copy, readonly) NSString *slug;
@property (nullable, nonatomic, copy, readonly) NSString *phoneNumber;
@property (nullable, nonatomic, copy, readonly) NSString *urlPath;
@property (nullable, nonatomic, copy, readonly) LMGDABusiness *business;
@property (nullable, nonatomic, copy, readonly) NSURL *shareUrl;

- (nonnull instancetype)initWith:(nonnull LMGDALocationBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

@interface LMGDALocationBuilder: NSObject

@property (nonnull, nonatomic, copy, readonly) LMGDAPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) LMGDAAddress *address;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nonnull, nonatomic, copy) NSArray<LMGDALocationCategory *> *categories;
@property (nonnull, nonatomic, copy) NSArray<LMGDASocialMedia *> *socialMedia;
@property (nullable, nonatomic, copy) NSNumber *distance;
@property (nullable, nonatomic, copy) NSString *slug;
@property (nullable, nonatomic, copy) NSString *phoneNumber;
@property (nullable, nonatomic, copy) NSString *urlPath;
@property (nullable, nonatomic, copy) LMGDABusiness *business;
@property (nullable, nonatomic, copy) NSURL *shareUrl;

- (nonnull instancetype)initWith:(nonnull LMGDAPlatformId *)locationId address:(nonnull LMGDAAddress *)address name:(nonnull NSString *)name NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWith:(nonnull LMGDALocation *)location;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull LMGDALocation *)build;

@end
