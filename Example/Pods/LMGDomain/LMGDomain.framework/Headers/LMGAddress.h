//
//  LMGAddress.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-27.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"

@class LMGCoordinate;

@interface LMGAddress : NSObject<NSCopying>

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *id;
@property (nullable, nonatomic, copy, readonly) NSString *suite;
@property (nullable, nonatomic, copy, readonly) NSString *building;
@property (nonnull, nonatomic, copy, readonly) NSString *streetAddress;
@property (nonnull, nonatomic, copy, readonly) NSString *postalCode;
@property (nonnull, nonatomic, copy, readonly) NSString *city;
@property (nonnull, nonatomic, copy, readonly) NSString *province;
@property (nonnull, nonatomic, copy, readonly) NSString *country;
@property (nonnull, nonatomic, copy, readonly) LMGCoordinate *coordinate;

- (nonnull instancetype)initWithId:(nonnull LMGPlatformId *)id
                     streetAddress:(nonnull NSString *)streetAddress
                        postalCode:(nonnull NSString *)postalCode
                              city:(nonnull NSString *)city
                          province:(nonnull NSString *)province
                           country:(nonnull NSString *)country
                        coordinate:(nonnull LMGCoordinate *)coordinate
                             suite:(nullable NSString *)suite
                          building:(nullable NSString *)building NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
