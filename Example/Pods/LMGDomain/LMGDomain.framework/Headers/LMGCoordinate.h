//
//  LMGCoordinate.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-24.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LMGCoordinateBuilder;

@interface LMGCoordinate : NSObject <NSCopying>

@property (nonatomic, assign, readonly) double latitude;
@property (nonatomic, assign, readonly) double longitude;
@property (nonatomic, assign, readonly) int accuracy;
@property (nonnull, nonatomic, copy, readonly) NSDate *createdAt;

- (nonnull instancetype)initWith:(nonnull LMGCoordinateBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)coordinateWith:(void (^_Nonnull)(LMGCoordinateBuilder * _Nonnull builder))block;

@end

@interface LMGCoordinateBuilder: NSObject

@property (nonatomic, assign) double latitude;
@property (nonatomic, assign) double longitude;
@property (nonatomic, assign) int accuracy;
@property (nonnull, nonatomic, copy) NSDate *createdAt;

- (nonnull instancetype)initWith:(nonnull LMGCoordinate *)coordinate;
- (nonnull LMGCoordinate *)build;

@end
