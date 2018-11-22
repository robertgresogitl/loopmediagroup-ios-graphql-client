//
//  LMGUseCaseStarted.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGNotification.h"

@interface LMGUseCaseStarted : NSObject<LMGNotification>

@property (nonnull, nonatomic, readonly) NSString *useCaseName;
@property (nullable, nonatomic, readonly) id params;

- (nonnull instancetype)initForClass:(nonnull NSString *)useCaseClassName params:(nullable id)params NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
