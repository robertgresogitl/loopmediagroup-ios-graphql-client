//
//  LMGDABusinessStoreFactory.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDAPlatformId.h"
#import "LMGDASaveableParams.h"

@protocol LMGDABusinessStore;
@protocol LMGDABusinessRemoteSource;
@protocol LMGDABusinessLocalSource;
@class LMGDADetailsRequestParams;

@interface LMGDABusinessStoreFactory : NSObject

- (nonnull instancetype)initWithLocalSource:(nonnull id<LMGDABusinessLocalSource>)localSource remoteSource:(nonnull id<LMGDABusinessRemoteSource>)remoteSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull id<LMGDABusinessStore>)storeForParams:(nonnull LMGDADetailsRequestParams *)params refresh:(BOOL)shouldRefresh;
- (nonnull id<LMGDABusinessStore>)storeForListParams:(nonnull id<LMGDASaveableParams>)params refresh:(BOOL)shouldRefresh;
- (nonnull id<LMGDABusinessStore>)storeForSave;

@end
