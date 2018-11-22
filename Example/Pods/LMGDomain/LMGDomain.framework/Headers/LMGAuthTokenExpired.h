//
//  LMGAuthTokenExpired.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-18.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSInteger const LMGAuthTokenExpiredErrorCode;

@interface LMGAuthTokenExpired : NSError

- (nonnull instancetype)init;

@end

@interface NSError (LMGAuthTokenExpired)

- (BOOL)isAuthTokenExpired;

@end
