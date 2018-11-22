//
//  LMGRedemptionTransitionArgument.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, LMGRedemptionArgumentType) {
    LMGRedemptionArgumentTypeNone,
    LMGRedemptionArgumentTypeGeoPoint,
    LMGRedemptionArgumentTypeGeoPointAccuracy,
    LMGRedemptionArgumentTypeGeoPointAge,
    LMGRedemptionArgumentTypePrompt,
    LMGRedemptionArgumentTypeUnknown
};

typedef NS_ENUM(NSUInteger, LMGRedemptionArgumentPermissionRequired) {
    LMGRedemptionArgumentPermissionRequiredNone,
    LMGRedemptionArgumentPermissionRequiredLocation
};

@interface LMGRedemptionTransitionArgument<ValueType: NSObject<NSCopying> *> : NSObject<NSCopying>

@property (nullable, nonatomic, copy, readonly) ValueType value;
@property (nonatomic, readonly, getter=isRequired) BOOL required;
@property (nonatomic, readonly) LMGRedemptionArgumentType type;
@property (nonatomic, readonly) LMGRedemptionArgumentPermissionRequired requiredPermission;

- (nonnull instancetype)initWithType:(LMGRedemptionArgumentType)argumentType required:(BOOL)isRequired NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)argWithValue:(nonnull ValueType)value;

@end
