//
//  LMGDAListRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

#import <Foundation/Foundation.h>
#import "LMGDASaveableParams.h"

@class LMGDABusinessesListRequestParamsBuilder;
@class LMGDACoordinate;

typedef void (^DABusinessesListRequestParamsBuildBlock)(LMGDABusinessesListRequestParamsBuilder  * _Nonnull builder);

@interface LMGDABusinessesListRequestParams : NSObject <NSCopying, LMGDASaveableParams>

@property (nullable, nonatomic, readonly) NSString *searchTerm;
@property (nullable, nonatomic, readonly) NSArray<LMGDACoordinate *> *contentArea;
@property (nullable, nonatomic, readonly) LMGDACoordinate *sortCoordinate;
@property (nullable, nonatomic, readonly) LMGDACoordinate *originCoordinate;
@property (nonatomic, readonly, getter=areOffersBookmarked) BOOL bookmarkedOffers;
@property (nullable, nonatomic, readonly) NSString *nextPage;
@property (nonatomic, readonly) NSUInteger limit;

- (nonnull instancetype)initWithBuilder:(nonnull LMGDABusinessesListRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)paramsWith:(nullable DABusinessesListRequestParamsBuildBlock)block;


@end

@interface LMGDABusinessesListRequestParamsBuilder: NSObject

@property (nullable, nonatomic) NSString *searchTerm;
@property (nullable, nonatomic) NSArray<LMGDACoordinate *> *contentArea;
@property (nullable, nonatomic) LMGDACoordinate *sortCoordinate;
@property (nullable, nonatomic) LMGDACoordinate *originCoordinate;
@property (nonatomic, getter=areOffersBookmarked) BOOL bookmarkedOffers;
@property (nullable, nonatomic) NSString *nextPage;
@property (nonatomic) NSUInteger limit;

- (nonnull LMGDABusinessesListRequestParams *)build;

@end
