//
//  LMGDAStateTransitionArgument.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-02.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, LMGDARedemptionArgumentType) {
    LMGDARedemptionArgumentTypeNone,
    LMGDARedemptionArgumentTypeGeoPoint,
    LMGDARedemptionArgumentTypeGeoPointAccuracy,
    LMGDARedemptionArgumentTypeGeoPointAge,
    LMGDARedemptionArgumentTypePrompt,
    LMGDARedemptionArgumentTypeUnknown
};

@interface LMGDARedemptionTransitionArgument<ValueType: NSObject<NSCopying> *> : NSObject<NSCopying>

@property (nullable, nonatomic, copy, readonly) ValueType value;
@property (nonatomic, readonly, getter=isRequired) BOOL required;
@property (nonatomic, readonly) LMGDARedemptionArgumentType type;

- (nonnull instancetype)initWithType:(LMGDARedemptionArgumentType)argumentType required:(BOOL)isRequired NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)argWithValue:(nonnull ValueType)value;

@end

