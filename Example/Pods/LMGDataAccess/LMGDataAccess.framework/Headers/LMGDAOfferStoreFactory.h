//
//  LMGDAOfferStoreFactory.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

#import <Foundation/Foundation.h>
#import "LMGDAOfferStore.h"
#import "LMGDAOfferLocalStore.h"
#import "LMGDAOfferRemoteStore.h"

@interface LMGDAOfferStoreFactory : NSObject

- (nonnull instancetype)initWithLocalSource:(nonnull id<LMGDAOfferLocalSource>)localSource remoteSource:(nonnull id<LMGDAOfferRemoteSource>)remoteSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull id<LMGDAOfferStore>)storeForParams:(nonnull LMGDADetailsRequestParams *)params refresh:(BOOL)shouldRefresh;
- (nonnull id<LMGDAOfferStore>)storeForSave;
- (nonnull id<LMGDAOfferStore>)storeForActions;


@end
