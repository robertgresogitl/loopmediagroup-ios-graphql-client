//
//  LMGBaseUseCase.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-19.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGNotificationCenter.h"

typedef NSNull NoParams;

typedef id _Nullable (^BaseUseCaseExecutionBlock)(id _Nullable, NSError * _Nullable * _Nullable);

/**
 @posts LMGUseCaseStarted
 @posts LMGUseCaseFinished
 */
@interface LMGBaseUseCase<Params, ReturnType> : NSObject

@property (nonnull, nonatomic, readonly) id<LMGNotificationCenter> notificationCenter;

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nullable ReturnType)executeWithParams:(nullable Params)params expect:(NSError * _Nullable * _Nullable)error;
- (ReturnType _Nullable (^_Nonnull)(Params _Nullable, NSError * _Nullable * _Nullable))executionBlock;


@end
