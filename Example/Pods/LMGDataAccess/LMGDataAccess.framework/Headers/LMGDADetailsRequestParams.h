//
//  LMGDADetailsRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-18.
//

#import <Foundation/Foundation.h>
#import "LMGDAPlatformId.h"
#import "LMGDASaveableParams.h"

@class LMGDACoordinate;
@class LMGDADetailsRequestParamsBuilder;

typedef void (^DADetailsRequestParamsBuildBlock)(LMGDADetailsRequestParamsBuilder  * _Nonnull builder);

@interface LMGDADetailsRequestParams : NSObject<NSCopying>

- (nonnull instancetype)initWithBuilder:(nonnull LMGDADetailsRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)paramsWithId:(nonnull LMGDAPlatformId *)entityId configuration:(nullable DADetailsRequestParamsBuildBlock)block;
- (nonnull instancetype)copyWithBlock:(nonnull DADetailsRequestParamsBuildBlock)block;
- (nonnull instancetype)init NS_UNAVAILABLE;


@property (nonnull, nonatomic, readonly) LMGDAPlatformId *entityId;
@property (nullable, nonatomic, readonly) LMGDAPlatformId *locationId;
@property (nullable, nonatomic, readonly) LMGDACoordinate *sortCoordinate;
@property (nullable, nonatomic, readonly) LMGDACoordinate *originCoordinate;

@end



@interface LMGDADetailsRequestParamsBuilder: NSObject

@property (nonnull, nonatomic, readonly) LMGDAPlatformId *entityId;
@property (nullable, nonatomic) LMGDAPlatformId *locationId;
@property (nullable, nonatomic) LMGDACoordinate *sortCoordinate;
@property (nullable, nonatomic) LMGDACoordinate *originCoordinate;

- (nonnull instancetype)initWithId:(nonnull LMGDAPlatformId *)entityId NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithParams:(nonnull LMGDADetailsRequestParams *)params;
- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull LMGDADetailsRequestParams *)build;


@end
