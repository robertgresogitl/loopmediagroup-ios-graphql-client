//
//  LMGNotificationCenter.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGNotification.h"


@protocol LMGNotificationCenter <NSObject>

- (void)postLMGNotification:(nonnull id<LMGNotification>)notification;
- (nonnull id<NSObject>)addObserverForLMGName:(nullable NSNotificationName)name usingBlock:(void (^_Nonnull)(id<LMGNotification> _Nonnull note))block;
- (void)removeObserver:(nonnull id<NSObject>)listener;

@end
