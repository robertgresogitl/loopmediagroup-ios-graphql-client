//
//  LMGDASessionLocalStore.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-07.
//

#import <Foundation/Foundation.h>
#import "LMGDASessionStore.h"

@protocol LMGDASessionLocalSource <NSObject>

- (nullable LMGDASession *)get;
- (nullable LMGDASession *)startWith:(nonnull LMGDAIntegrationKey *)integrationKey expect:(NSError * _Nullable * _Nullable)error;
- (void)save:(nonnull LMGDASession *)session;
- (BOOL)isValid;
- (void)reset;

@end

@interface LMGDASessionLocalStore : NSObject<LMGDASessionStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDASessionLocalSource>)localSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
