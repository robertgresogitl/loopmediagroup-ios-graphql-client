//
//  LMGContentFilter.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-11-07.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface LMGContentFilter : NSObject

@property (nonatomic, readonly) CLLocationCoordinate2D orderingGeoPoint;
@property (nullable, nonatomic, readonly) NSArray<CLLocation *> *contentFilterGeometry;

@end

@interface LMGContentFilterBuilder : NSObject

- (void)setGeoPointForOrdering:(CLLocationCoordinate2D)coordinate;

// Square built using center and radius
- (void)setGeoPointForOrdering:(CLLocationCoordinate2D)coordinate showContentInRadius:(CLLocationDistance)radius;

// Counter clockwise closed polygon
- (void)setGeoPointForOrdering:(CLLocationCoordinate2D)coordinate showContentInArea:(nonnull NSArray<CLLocation *> *)geometry;

- (nullable LMGContentFilter *)build;

@end
