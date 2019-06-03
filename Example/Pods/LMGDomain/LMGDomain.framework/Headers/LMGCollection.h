///Users/shadowrider/Work/ios-data-sdk/LMGData/Classes/Domain/Model
//  LMGCollection.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-14.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGUrlPath.h"

@class LMGCollectionBuilder;

@interface LMGCollection : NSObject<NSCopying>

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nonnull, nonatomic, copy, readonly) NSString *shortName;
@property (nonnull, nonatomic, copy, readonly) NSString *slug;

@property (nullable, nonatomic, copy, readonly) LMGUrlPath *imageUrlPath;
@property (nullable, nonatomic, copy, readonly) LMGUrlPath *iconUrlPath;
@property (nullable, nonatomic, copy, readonly) LMGUrlPath *infoUrlPath;

- (nonnull instancetype)initWithBuilder:(nonnull LMGCollectionBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

@interface LMGCollectionBuilder : NSObject

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *id;
@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nonnull, nonatomic, copy, readonly) NSString *shortName;
@property (nonnull, nonatomic, copy, readonly) NSString *slug;

@property (nullable, nonatomic, copy) LMGUrlPath *imageUrlPath;
@property (nullable, nonatomic, copy) LMGUrlPath *iconUrlPath;
@property (nullable, nonatomic, copy) LMGUrlPath *infoUrlPath;

- (nonnull instancetype)initWithId:(nonnull LMGPlatformId *)collectionId name:(nonnull NSString *)name shortName:(nonnull NSString *)shortName slug:(nonnull NSString *)slug NS_DESIGNATED_INITIALIZER;

- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull LMGCollection *)build;

@end

