//
//  LMGNotification.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>

@protocol LMGNotification <NSObject>

+ (NSNotificationName)name;
- (NSNotificationName)name;

@end
