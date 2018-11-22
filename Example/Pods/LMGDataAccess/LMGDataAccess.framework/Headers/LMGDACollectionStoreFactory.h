//
//  LMGDACollectionStoreFactory.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-19.
//

#import <Foundation/Foundation.h>
#import "LMGDACollectionLocalStore.h"
#import "LMGDACollectionRemoteStore.h"
#import "LMGDASaveableParams.h"

@interface LMGDACollectionStoreFactory : NSObject

- (nonnull instancetype)initWithLocal:(nonnull id<LMGDACollectionLocalSource>)localSource remote:(nonnull id<LMGDACollectionRemoteSource>)remoteSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull id<LMGDACollectionStore>)storeForParams:(nonnull LMGDADetailsRequestParams *)params refresh:(BOOL)shouldRefresh;
- (nonnull id<LMGDACollectionStore>)storeForListParams:(nonnull id<LMGDASaveableParams>)params refresh:(BOOL)shouldRefresh;
- (nonnull id<LMGDACollectionStore>)storeForSave;

@end
