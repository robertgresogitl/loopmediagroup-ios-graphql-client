//
//  NSString+EmptyCheck.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (EmptyCheck)

@property (assign, readonly) BOOL isEmpty;

+ (BOOL)isNilOrEmpty:(NSString *)value;

@end
