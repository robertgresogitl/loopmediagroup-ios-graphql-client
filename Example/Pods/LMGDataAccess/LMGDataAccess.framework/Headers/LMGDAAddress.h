//
//  LMGDAAddress.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-27.
//

#import <Foundation/Foundation.h>

#import "LMGDAPlatformId.h"

@class LMGDACoordinate;

@interface LMGDAAddress : NSObject<NSCopying>

@property (nonnull, nonatomic, readonly) LMGDAPlatformId *id;
@property (nullable, nonatomic, readonly) NSString *suite;
@property (nullable, nonatomic, readonly) NSString *building;
@property (nonnull, nonatomic, readonly) NSString *streetAddress;
@property (nonnull, nonatomic, readonly) NSString *postalCode;
@property (nonnull, nonatomic, readonly) NSString *city;
@property (nonnull, nonatomic, readonly) NSString *province;
@property (nonnull, nonatomic, readonly) NSString *country;
@property (nonnull, nonatomic, readonly) LMGDACoordinate *coordinate;

- (nonnull instancetype)initWithId:(nonnull LMGDAPlatformId *)id
                     streetAddress:(nonnull NSString *)streetAddress
                        postalCode:(nonnull NSString *)postalCode
                              city:(nonnull NSString *)city
                          province:(nonnull NSString *)province
                           country:(nonnull NSString *)country
                        coordinate:(nonnull LMGDACoordinate *)coordinate
                             suite:(nullable NSString *)suite
                          building:(nullable NSString *)building NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
