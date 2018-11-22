//
//  LMGDASessionStore.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-07.
//

#import <Foundation/Foundation.h>
#import "LMGDASession.h"

@protocol LMGDASessionStore <NSObject>

- (nonnull LMGDASession *)get;
- (nullable LMGDASession *)startWith:(nonnull LMGDAIntegrationKey *)integrationKey expect:(NSError * _Nullable * _Nullable)error;
- (nullable LMGDASession *)updateSession:(nonnull LMGDASession *)session userId:(nonnull LMGDAUserId *)userId hmac:(nullable LMGDAUserHMAC *)hmac expect:(NSError * _Nullable * _Nullable)error;
- (nullable LMGDASession *)refreshAuthOn:(nonnull LMGDASession *)session expect:(NSError * _Nullable * _Nullable)error;
- (void)save:(nonnull LMGDASession *)session;
- (void)reset;

@end
