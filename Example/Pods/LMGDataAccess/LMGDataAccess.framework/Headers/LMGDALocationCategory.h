//
//  LMGDALocationCategory.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDAPlatformId.h"

@class LMGDALocationCategoryBuilder;

@interface LMGDALocationCategory : NSObject <NSCopying>

@property (nonnull, nonatomic, copy, readonly) LMGDAPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *shortName;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nullable, nonatomic, copy, readonly) NSString *slug;
@property (nullable, nonatomic, copy, readonly) NSString *icon;

- (nonnull instancetype)initWith:(nonnull LMGDALocationCategoryBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

@interface LMGDALocationCategoryBuilder: NSObject

@property (nonnull, nonatomic, copy, readonly) LMGDAPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *shortName;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nullable, nonatomic, copy) NSString *icon;
@property (nullable, nonatomic, copy) NSString *slug;

- (nonnull instancetype)initWith:(nonnull LMGDAPlatformId *)id name:(nonnull NSString *)name shortName:(nonnull NSString *)shortName NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWith:(nonnull LMGDALocationCategory *)category;
- (nonnull LMGDALocationCategory *)build;

@end

