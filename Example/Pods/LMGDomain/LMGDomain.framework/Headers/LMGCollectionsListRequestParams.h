//
//  LMGCollectionsListRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-04.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGDataRequestParams.h"

@class LMGCollection;
@class LMGCollectionsListRequestParamsBuilder;

typedef void (^CollectionsListRequestParamsBuildBlock)(LMGCollectionsListRequestParamsBuilder  * _Nonnull builder);

@interface LMGCollectionsListRequestParams : NSObject<NSCopying, LMGDataListRequestParams>

@property (nullable, nonatomic, copy, readonly) LMGPlatformId *categoryId;
@property (nullable, nonatomic, copy, readonly) NSString *tag;

- (nonnull instancetype)initWith:(nonnull LMGCollectionsListRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

+ (nonnull instancetype)paramsWithBlock:(nonnull CollectionsListRequestParamsBuildBlock)block;
- (nonnull instancetype)copyWithBlock:(nonnull CollectionsListRequestParamsBuildBlock)block;

@end

@interface LMGCollectionsListRequestParamsBuilder : NSObject

@property (nullable, nonatomic, copy) LMGPlatformId *categoryId;
@property (nullable, nonatomic, copy) NSString *tag;
@property (nullable, nonatomic, copy) NSArray<LMGCoordinate *> *contentArea;
@property (nullable, nonatomic, copy) LMGCoordinate *sortCoordinate;
@property (nullable, nonatomic, copy) LMGCoordinate *originCoordinate;
@property (nullable, nonatomic, copy) NSString *nextPage;
@property (nonatomic) BOOL refresh;
@property (nonatomic) BOOL useDeviceLocation;
@property (nonatomic) NSUInteger limit;

- (nonnull instancetype)initWith:(nonnull LMGCollectionsListRequestParams *)params;
- (nonnull LMGCollectionsListRequestParams *)build;

@end
