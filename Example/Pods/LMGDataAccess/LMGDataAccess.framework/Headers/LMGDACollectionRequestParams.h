//
//  LMGDACollectionRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-18.
//

#import <Foundation/Foundation.h>
#import "LMGDAPlatformId.h"
#import "LMGDACoordinate.h"
#import "LMGDASaveableParams.h"

@class LMGDACollection;
@class LMGDACollectionRequestParamsBuilder;

typedef void (^DACollectionRequestParamsBuildBlock)(LMGDACollectionRequestParamsBuilder  * _Nonnull builder);

@interface LMGDACollectionRequestParams : NSObject<NSCopying, LMGDASaveableParams>

@property (nonnull, nonatomic, readonly) LMGDAPlatformId *collectionId;
@property (nullable, nonatomic, readonly) LMGDAPlatformId *categoryId;
@property (nullable, nonatomic, readonly) NSString *tag;
@property (nullable, nonatomic, readonly) NSArray<LMGDACoordinate *> *contentArea;
@property (nullable, nonatomic, readonly) LMGDACoordinate *sortCoordinate;
@property (nullable, nonatomic, readonly) LMGDACoordinate *originCoordinate;
@property (nullable, nonatomic, readonly) NSString *nextPage;
@property (nonatomic, readonly) NSUInteger limit;

- (nonnull instancetype)initWith:(nonnull LMGDACollectionRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)copyWithBlock:(nonnull DACollectionRequestParamsBuildBlock)block;

@end

@interface LMGDACollectionRequestParamsBuilder : NSObject

@property (nonnull, nonatomic, readonly) LMGDAPlatformId *collectionId;
@property (nullable, nonatomic) LMGDAPlatformId *categoryId;
@property (nullable, nonatomic) NSString *tag;
@property (nullable, nonatomic) NSArray<LMGDACoordinate *> *contentArea;
@property (nullable, nonatomic) LMGDACoordinate *sortCoordinate;
@property (nullable, nonatomic) LMGDACoordinate *originCoordinate;
@property (nullable, nonatomic) NSString *nextPage;
@property (nonatomic) NSUInteger limit;

- (nonnull instancetype)initWithCollection:(nonnull LMGDAPlatformId *)collectionId NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWith:(nonnull LMGDACollectionRequestParams *)params;
- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull LMGDACollectionRequestParams *)build;

@end

