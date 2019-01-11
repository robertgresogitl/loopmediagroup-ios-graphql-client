//
//  LMGSchedule.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LMGSchedule : NSObject <NSCopying>

@property (nonnull, nonatomic, copy, readonly) NSArray<NSString *> *humanReadable;

- (nonnull instancetype)initWithSchedule:(nonnull NSArray<NSString *> *)schedules NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
