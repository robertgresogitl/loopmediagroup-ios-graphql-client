//
//  LMGUserRepository.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-13.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGUser.h"
#import "LMGSession.h"

@protocol LMGUserRepository <NSObject>

- (nonnull LMGUser *)getFor:(nonnull LMGSession *)session expectError:(NSError * _Nullable * _Nullable)error;
- (BOOL)save:(nonnull LMGUser *)user forSession:(nonnull LMGSession *)session expectError:(NSError * _Nullable * _Nullable)error;

@end
