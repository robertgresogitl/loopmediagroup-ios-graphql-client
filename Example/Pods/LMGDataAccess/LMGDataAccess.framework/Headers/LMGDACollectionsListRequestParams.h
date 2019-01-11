//
//  LMGDACollectionsListRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-04.
//

#import <Foundation/Foundation.h>
#import "LMGDAPlatformId.h"
#import "LMGDASaveableParams.h"

@class LMGDACollection;
@class LMGDACoordinate;
@class LMGDACollectionsListRequestParamsBuilder;

typedef void (^DACollectionsListRequestParamsBuildBlock)(LMGDACollectionsListRequestParamsBuilder  * _Nonnull builder);

@interface LMGDACollectionsListRequestParams : NSObject<NSCopying, LMGDASaveableParams>

@property (nullable, nonatomic, copy, readonly) LMGDAPlatformId *categoryId;
@property (nullable, nonatomic, copy, readonly) NSString *tag;
@property (nullable, nonatomic, copy, readonly) NSArray<LMGDACoordinate *> *contentArea;
@property (nullable, nonatomic, copy, readonly) NSString *nextPage;
@property (nonatomic, readonly) NSUInteger limit;

- (nonnull instancetype)initWith:(nonnull LMGDACollectionsListRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)copyWithBlock:(nonnull DACollectionsListRequestParamsBuildBlock)block;

@end

@interface LMGDACollectionsListRequestParamsBuilder : NSObject

@property (nullable, nonatomic, copy) LMGDAPlatformId *categoryId;
@property (nullable, nonatomic, copy) NSString *tag;
@property (nullable, nonatomic, copy) NSArray<LMGDACoordinate *> *contentArea;
@property (nullable, nonatomic, copy) NSString *nextPage;
@property (nonatomic) NSUInteger limit;

- (nonnull instancetype)initWith:(nonnull LMGDACollectionsListRequestParams *)params;
- (nonnull LMGDACollectionsListRequestParams *)build;

@end

