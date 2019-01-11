//
//  LMGLocationsMapRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

#import <Foundation/Foundation.h>
#import "LMGDataRequestParams.h"

@class LMGLocationsMapRequestParamsBuilder;
typedef void (^LocationsMapRequestParamsBuildBlock)(LMGLocationsMapRequestParamsBuilder  * _Nonnull builder);

@interface LMGLocationsMapRequestParams : NSObject<NSCopying, LMGDataListRequestParams>

- (nonnull instancetype)initWithBuilder:(nonnull LMGLocationsMapRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)paramsWith:(nullable LocationsMapRequestParamsBuildBlock)block;
- (nonnull instancetype)copyWith:(nonnull LocationsMapRequestParamsBuildBlock)block;

@end

@interface LMGLocationsMapRequestParamsBuilder: NSObject

@property (nonatomic, getter=shouldRefresh) BOOL refresh;
@property (nonatomic, getter=shouldUseDeviceLocation) BOOL useDeviceLocation;
@property (nullable, nonatomic, copy) LMGCoordinate *sortCoordinate;
@property (nullable, nonatomic, copy) LMGCoordinate *originCoordinate;
@property (nullable, nonatomic, copy) NSArray<LMGCoordinate *> *contentArea;
@property (nullable, nonatomic, copy) NSString *nextPage;
@property (nonatomic) NSUInteger limit;

- (nonnull instancetype)initWith:(nonnull LMGLocationsMapRequestParams *)params;
- (nonnull LMGLocationsMapRequestParams *)build;

@end
