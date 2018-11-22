//
//  LMGPagedResult.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-16.
//

#import <Foundation/Foundation.h>


@interface LMGPagedResult<Type> : NSObject

@property (nullable, nonatomic, copy, readonly) NSString *nextPageCursor;
@property (nonnull, nonatomic, copy, readonly) NSArray<Type> *result;

- (nonnull instancetype)initWithResult:(nonnull NSArray<Type> *)result nextPageCursor:(nullable NSString *)nextPageCursor NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;


@end
