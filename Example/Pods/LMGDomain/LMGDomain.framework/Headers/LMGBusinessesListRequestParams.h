//
//  LMGBusinessRequestParams.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-24.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDataRequestParams.h"

@class LMGBusinessesListRequestParamsBuilder;
@class LMGCoordinate;

typedef void (^LMGBusinessesListRequestParamsBuildBlock)(LMGBusinessesListRequestParamsBuilder  * _Nonnull builder);

@interface LMGBusinessesListRequestParams : NSObject <NSCopying, LMGDataListRequestParams>

@property (nullable, nonatomic, copy, readonly) NSString *searchTerm;
@property (nonatomic, readonly, getter=areOffersBookmarked) BOOL bookmarkedOffers;
@property (nonatomic, readonly, getter=isContentAreaIgnored) BOOL ignoreContentArea;

- (nonnull instancetype)initWithBuilder:(nonnull LMGBusinessesListRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)paramsWith:(nullable LMGBusinessesListRequestParamsBuildBlock)block;
- (nonnull instancetype)copyWith:(nonnull LMGBusinessesListRequestParamsBuildBlock)block;

+ (nonnull instancetype)paramsForBookmarked;
+ (nonnull instancetype)paramsForSearchTerm:(nonnull NSString *)searchTerm;


@end

@interface LMGBusinessesListRequestParamsBuilder: NSObject

@property (nullable, nonatomic) NSString *searchTerm;
@property (nullable, nonatomic, copy) NSArray<LMGCoordinate *> *contentArea;
@property (nullable, nonatomic, copy) LMGCoordinate *sortCoordinate;
@property (nullable, nonatomic, copy) LMGCoordinate *originCoordinate;
@property (nullable, nonatomic) NSString *nextPage;
@property (nonatomic, getter=isContentAreaIgnored) BOOL ignoreContentArea;
@property (nonatomic, getter=shouldRefresh) BOOL refresh;
@property (nonatomic, getter=areOffersBookmarked) BOOL bookmarkedOffers;
@property (nonatomic, getter=shouldUseDeviceLocation) BOOL useDeviceLocation;
@property (nonatomic) NSUInteger limit;

- (nonnull instancetype)initWith:(nonnull LMGBusinessesListRequestParams *)params;
- (nonnull LMGBusinessesListRequestParams *)build;

@end
