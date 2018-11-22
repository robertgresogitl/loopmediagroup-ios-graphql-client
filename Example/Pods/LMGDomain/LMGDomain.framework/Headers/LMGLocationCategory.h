//
//  LMGLocationCategory.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGUrlPath.h"

@class LMGLocationCategoryBuilder;

@interface LMGLocationCategory : NSObject <NSCopying>

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *shortName;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nullable, nonatomic, copy, readonly) NSString *slug;
@property (nullable, nonatomic, copy, readonly) LMGUrlPath *icon;

- (nonnull instancetype)initWith:(nonnull LMGLocationCategoryBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

@interface LMGLocationCategoryBuilder: NSObject

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *shortName;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nullable, nonatomic, copy) LMGUrlPath *icon;
@property (nullable, nonatomic, copy) NSString *slug;

- (nonnull instancetype)initWith:(nonnull LMGPlatformId *)id name:(nonnull NSString *)name shortName:(nonnull NSString *)shortName NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWith:(nonnull LMGLocationCategory *)category;
- (nullable LMGLocationCategory *)build;

@end

