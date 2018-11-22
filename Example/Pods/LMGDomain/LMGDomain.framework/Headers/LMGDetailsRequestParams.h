//
//  LMGOfferRequestParams.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-10.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGDataRequestParams.h"

@class LMGCoordinate;
@class LMGDetailsRequestParamsBuilder;

typedef void (^DetailsRequestParamsBuildBlock)(LMGDetailsRequestParamsBuilder  * _Nonnull builder);

@interface LMGDetailsRequestParams : NSObject<NSCopying, LMGDataRequestParams>

- (nonnull instancetype)initWithBuilder:(nonnull LMGDetailsRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)paramsWithId:(nonnull LMGPlatformId *)entityId configuration:(nullable DetailsRequestParamsBuildBlock)block;
- (nonnull instancetype)copyWithBlock:(nonnull DetailsRequestParamsBuildBlock)block;
- (nonnull instancetype)init NS_UNAVAILABLE;


@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *entityId;
@property (nullable, nonatomic, copy, readonly) LMGPlatformId *locationId;

@end



@interface LMGDetailsRequestParamsBuilder: NSObject

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *entityId;
@property (nullable, nonatomic, copy) LMGPlatformId *locationId;
@property (nullable, nonatomic, copy) LMGCoordinate *sortCoordinate;
@property (nullable, nonatomic, copy) LMGCoordinate *originCoordinate;
@property (nonatomic) BOOL useDeviceLocation;
@property (nonatomic) BOOL refresh;

- (nonnull instancetype)initWithId:(nonnull LMGPlatformId *)entityId NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithParams:(nonnull LMGDetailsRequestParams *)params;
- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull LMGDetailsRequestParams *)build;


@end
