//
//  LMGDASessionRemoteStore.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-07.
//

#import <Foundation/Foundation.h>
#import "LMGDASessionStore.h"

@protocol LMGDASessionRemoteSource <NSObject>

- (nullable LMGDASession *)startWith:(nonnull LMGDAIntegrationKey *)integrationKey expect:(NSError * _Nullable * _Nullable)error;
- (nullable LMGDASession *)updateSession:(nonnull LMGDASession *)session userId:(nonnull LMGDAUserId *)userId hmac:(nullable LMGDAUserHMAC *)hmac expect:(NSError * _Nullable * _Nullable)error;
- (nullable LMGDASession *)refreshAuthOn:(nonnull LMGDASession *)session expect:(NSError * _Nullable * _Nullable)error;

@end

@interface LMGDASessionRemoteStore : NSObject<LMGDASessionStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDASessionRemoteSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
