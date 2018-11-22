//
//  LMGDABusiness.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDAPlatformId.h"

@class LMGDALocationCategory;
@class LMGDASocialMedia;
@class LMGDABusinessBuilder;
@class LMGDAOffer;
@class LMGDALocation;

@interface LMGDABusiness : NSObject <NSCopying>

@property (nonnull, nonatomic, copy, readonly) LMGDAPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nonnull, nonatomic, copy, readonly) NSString *shortName;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGDALocationCategory *> *categories;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGDAOffer *> *offers;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGDASocialMedia *> *socialMedia;
@property (nonnull, nonatomic, copy, readonly) NSArray<NSString *> *images;
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGDALocation *> *locations;

@property (nullable, nonatomic, copy, readonly) NSString *slug;
@property (nullable, nonatomic, copy, readonly) NSString *logo;
@property (nullable, nonatomic, copy, readonly) NSString *slogan;
@property (nullable, nonatomic, copy, readonly) NSString *details;
@property (nullable, nonatomic, copy, readonly) NSString *phone;
@property (nullable, nonatomic, copy, readonly) NSString *url;

- (nullable instancetype)initWith:(nonnull LMGDABusinessBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

@interface LMGDABusinessBuilder: NSObject

@property (nonnull, nonatomic, copy, readonly) LMGDAPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nonnull, nonatomic, copy, readonly) NSString *shortName;
@property (nonnull, nonatomic, copy) NSArray<LMGDALocationCategory *> *categories;
@property (nonnull, nonatomic, copy) NSArray<LMGDAOffer *> *offers;
@property (nonnull, nonatomic, copy) NSArray<LMGDASocialMedia *> *socialMedia;
@property (nonnull, nonatomic, copy) NSArray<NSString *> *images;
@property (nonnull, nonatomic, copy) NSArray<LMGDALocation *> *locations;

@property (nullable, nonatomic, copy) NSString *logo;
@property (nullable, nonatomic, copy) NSString *slug;
@property (nullable, nonatomic, copy) NSString *slogan;
@property (nullable, nonatomic, copy) NSString *details;
@property (nullable, nonatomic, copy) NSString *phone;
@property (nullable, nonatomic, copy) NSString *url;

- (nonnull instancetype)initWithId:(nonnull LMGDAPlatformId *)businessId name:(nonnull NSString *)name shortName:(nonnull NSString *)shortName NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWith:(nonnull LMGDABusiness *)business;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull LMGDABusiness *)build;

@end
