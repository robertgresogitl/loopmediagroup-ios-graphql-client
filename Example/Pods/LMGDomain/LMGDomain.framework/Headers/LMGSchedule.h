//
//  LMGSchedule.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LMGSchedule : NSObject <NSCopying>

@property (nonnull, nonatomic, copy, readonly) NSString *humanReadable;
@property (nonatomic, readonly) BOOL withinSchedule;

- (nonnull instancetype)initWithSchedule:(nonnull NSString *)schedule withinSchedule:(BOOL)withinSchedule NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
