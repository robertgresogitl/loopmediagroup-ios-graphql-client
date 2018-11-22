//
//  LMGDAUserStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-12.
//

#import <Foundation/Foundation.h>
#import "LMGDASession.h"
#import "LMGDAUser.h"

@protocol LMGDAUserStore <NSObject>

- (nonnull LMGDAUser *)getFor:(nonnull LMGDASession *)session
                  expectError:(NSError * _Nullable * _Nullable)error;


- (BOOL)save:(nonnull LMGDAUser *)user
  forSession:(nonnull LMGDASession *)session
 expectError:(NSError * _Nullable * _Nullable)error;

@end
