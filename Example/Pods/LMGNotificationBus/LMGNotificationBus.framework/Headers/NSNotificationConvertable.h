//
//  NSNotificationConvertable.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>

@protocol NSNotificationConvertable <NSObject>

- (nullable instancetype)initWithNotification:(nonnull NSNotification *)note;
- (nonnull NSNotification *)toNSNotification;

@end
