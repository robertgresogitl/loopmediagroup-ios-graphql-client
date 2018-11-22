//
//  LMGObservable.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-28.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol LMGObservable

- (void)addObserver:(nonnull id<NSObject>)observer;
- (void)removeObserver:(nonnull id<NSObject>)observer;
- (void)notifyObservers:(nonnull NSInvocation *)invocation;

@end
