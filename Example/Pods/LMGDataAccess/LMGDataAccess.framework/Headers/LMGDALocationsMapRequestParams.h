//
//  LMGDALocationsMapRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGDAPlatformId.h"
#import "LMGDASaveableParams.h"

@class LMGDACoordinate;
@class LMGDALocationsMapRequestParamsBuilder;
typedef void (^DALocationsMapRequestParamsBuildBlock)(LMGDALocationsMapRequestParamsBuilder  * _Nonnull builder);

@interface LMGDALocationsMapRequestParams : NSObject<NSCopying, LMGDASaveableParams>

@property (nullable, nonatomic, readonly) NSArray<LMGDACoordinate *> *contentArea;
@property (nullable, nonatomic, readonly) LMGDACoordinate *sortCoordinate;
@property (nullable, nonatomic, readonly) LMGDACoordinate *originCoordinate;
@property (nullable, nonatomic, readonly) NSString *nextPage;
@property (nonatomic, readonly) NSUInteger limit;

- (nonnull instancetype)initWithBuilder:(nonnull LMGDALocationsMapRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)paramsWith:(nullable DALocationsMapRequestParamsBuildBlock)block;

@end

@interface LMGDALocationsMapRequestParamsBuilder: NSObject

@property (nullable, nonatomic) NSArray<LMGDACoordinate *> *contentArea;
@property (nullable, nonatomic) LMGDACoordinate *sortCoordinate;
@property (nullable, nonatomic) LMGDACoordinate *originCoordinate;
@property (nullable, nonatomic) NSString *nextPage;
@property (nonatomic) NSUInteger limit;

- (nonnull instancetype)initWith:(nonnull LMGDALocationsMapRequestParams *)params;
- (nonnull LMGDALocationsMapRequestParams *)build;

@end
