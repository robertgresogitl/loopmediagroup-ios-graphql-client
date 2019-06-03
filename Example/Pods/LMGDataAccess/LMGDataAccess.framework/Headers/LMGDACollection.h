//
//  LMGDACollection.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-18.
//

#import <Foundation/Foundation.h>
#import "LMGDAPlatformId.h"

@class LMGDACollectionBuilder;

@interface LMGDACollection : NSObject<NSCopying>

@property (nonnull, nonatomic, readonly) LMGDAPlatformId *id;
@property (nonnull, nonatomic, readonly) NSString *name;
@property (nonnull, nonatomic, readonly) NSString *shortName;
@property (nonnull, nonatomic, readonly) NSString *slug;

@property (nullable, nonatomic, readonly) NSString *imageUrlPath;
@property (nullable, nonatomic, readonly) NSString *infoUrlPath;
@property (nullable, nonatomic, readonly) NSString *iconUrlPath;

- (nonnull instancetype)initWithBuilder:(nonnull LMGDACollectionBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

@interface LMGDACollectionBuilder : NSObject

@property (nonnull, nonatomic, readonly) LMGDAPlatformId *id;
@property (nonnull, nonatomic, readonly) NSString *name;
@property (nonnull, nonatomic, readonly) NSString *shortName;
@property (nonnull, nonatomic, readonly) NSString *slug;

@property (nullable, nonatomic) NSString *imageUrlPath;
@property (nullable, nonatomic) NSString *infoUrlPath;
@property (nullable, nonatomic) NSString *iconUrlPath;

- (nonnull instancetype)initWithId:(nonnull LMGDAPlatformId *)collectionId name:(nonnull NSString *)name shortName:(nonnull NSString *)shortName slug:(nonnull NSString *)slug NS_DESIGNATED_INITIALIZER;

- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull LMGDACollection *)build;

@end

