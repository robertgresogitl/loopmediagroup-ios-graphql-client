//
//  LMGDataRequestParams.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-18.
//

#import <Foundation/Foundation.h>

@class LMGCoordinate;

@protocol LMGDataRequestParams <NSObject>

@property (nonatomic, readonly, getter=shouldUseDeviceLocation) BOOL useDeviceLocation;
@property (nonatomic, readonly, getter=shouldRefresh) BOOL refresh;
@property (nullable, nonatomic, copy, readonly) LMGCoordinate *sortCoordinate;
@property (nullable, nonatomic, copy, readonly) LMGCoordinate *originCoordinate;

- (nonnull instancetype)paramsWithOriginCoordinate:(nonnull LMGCoordinate *)coordinate;
- (nonnull instancetype)paramsWithSortCoordinate:(nonnull LMGCoordinate *)coordinate;
- (nonnull instancetype)forceReloadParams;

@end

@protocol LMGDataListRequestParams <LMGDataRequestParams>

@property (nonatomic, readonly) NSUInteger limit;
@property (nullable, nonatomic, copy, readonly) NSArray<LMGCoordinate *> *contentArea;
@property (nullable, nonatomic, copy, readonly) NSString *nextPage;

- (nonnull instancetype)paramsWithContentArea:(nonnull NSArray<LMGCoordinate *> *)contentArea;
- (nonnull instancetype)paramsForNextPage:(nonnull NSString *)nextPageCursor;

@end
