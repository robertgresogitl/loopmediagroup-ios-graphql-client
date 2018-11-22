//
//  LMGUseCaseFinished.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-17.
//

#import <Foundation/Foundation.h>
#import "LMGNotification.h"

@interface LMGUseCaseFinished : NSObject<LMGNotification>

@property (nonnull, nonatomic, readonly) NSString *useCaseName;
@property (nullable, nonatomic, readonly) id params;
@property (nullable, nonatomic, readonly) NSError *error;
@property (nullable, nonatomic, readonly) id result;
@property (nonatomic, readonly) BOOL isSuccess;

- (nonnull instancetype)initForClass:(nonnull NSString *)useCaseClassName params:(nullable id)params error:(nullable NSError *)error result:(nullable id)result NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;


@end
