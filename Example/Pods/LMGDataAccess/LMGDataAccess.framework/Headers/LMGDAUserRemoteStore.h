//
//  LMGDAUserRemoteStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-12.
//

#import <Foundation/Foundation.h>
#import "LMGDAUserStore.h"

@protocol LMGDAUserRemoteSource <NSObject>

- (nullable LMGDAUser *)getFor:(nonnull LMGDASession *)session
                  expectError:(NSError * _Nullable * _Nullable)error;


- (BOOL)save:(nonnull LMGDAUser *)user
  forSession:(nonnull LMGDASession *)session
 expectError:(NSError * _Nullable * _Nullable)error;

@end


@interface LMGDAUserRemoteStore : NSObject<LMGDAUserStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDAUserRemoteSource>)remoteSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
