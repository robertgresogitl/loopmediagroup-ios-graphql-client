//
//  LMGDACoordinate.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-24.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LMGDACoordinateBuilder;

@interface LMGDACoordinate : NSObject <NSCopying>

@property (nonatomic, assign, readonly) double latitude;
@property (nonatomic, assign, readonly) double longitude;
@property (nonatomic, assign, readonly) int accuracy;
@property (nonnull, nonatomic, copy, readonly) NSDate *createdAt;

- (nonnull instancetype)initWith:(nonnull LMGDACoordinateBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)coordinateWith:(void (^_Nonnull)(LMGDACoordinateBuilder * _Nonnull builder))block;

@end

@interface LMGDACoordinateBuilder: NSObject

@property (nonatomic, assign) double latitude;
@property (nonatomic, assign) double longitude;
@property (nonatomic, assign) int accuracy;
@property (nonnull, nonatomic, copy) NSDate *createdAt;

- (nonnull instancetype)initWith:(nonnull LMGDACoordinate *)coordinate;
- (nonnull LMGDACoordinate *)build;

@end
