//
//  LMGCollectionRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-17.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGDataRequestParams.h"

@class LMGCollection;
@class LMGCollectionRequestParamsBuilder;

typedef void (^CollectionRequestParamsBuildBlock)(LMGCollectionRequestParamsBuilder  * _Nonnull builder);

@interface LMGCollectionRequestParams : NSObject<NSCopying, LMGDataListRequestParams>

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *collectionId;
@property (nullable, nonatomic, copy, readonly) LMGPlatformId *categoryId;
@property (nullable, nonatomic, copy, readonly) NSString *tag;

- (nonnull instancetype)initWith:(nonnull LMGCollectionRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

+ (nonnull instancetype)paramsForCollection:(nonnull LMGCollection *)collection configure:(nullable CollectionRequestParamsBuildBlock)block;
- (nonnull instancetype)copyWithBlock:(nonnull CollectionRequestParamsBuildBlock)block;

@end

@interface LMGCollectionRequestParamsBuilder : NSObject

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *collectionId;
@property (nullable, nonatomic, copy) LMGPlatformId *categoryId;
@property (nullable, nonatomic, copy) NSString *tag;
@property (nullable, nonatomic, copy) NSArray<LMGCoordinate *> *contentArea;
@property (nullable, nonatomic, copy) LMGCoordinate *sortCoordinate;
@property (nullable, nonatomic, copy) LMGCoordinate *originCoordinate;
@property (nullable, nonatomic, copy) NSString *nextPage;
@property (nonatomic) BOOL refresh;
@property (nonatomic) BOOL useDeviceLocation;
@property (nonatomic) NSUInteger limit;

- (nonnull instancetype)initWithCollection:(nonnull LMGPlatformId *)collectionId NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWith:(nonnull LMGCollectionRequestParams *)params;
- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull LMGCollectionRequestParams *)build;

@end
