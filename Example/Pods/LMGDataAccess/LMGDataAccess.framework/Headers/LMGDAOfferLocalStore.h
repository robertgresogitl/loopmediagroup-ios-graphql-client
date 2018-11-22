//
//  LMGDAOfferLocalStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

#import <Foundation/Foundation.h>
#import "LMGDAOfferStore.h"
#import "LMGDASaveableParams.h"

@protocol LMGDAOfferLocalSource <NSObject>


- (nullable LMGDAOffer *)getWith:(nonnull LMGDADetailsRequestParams *)params
                          expect:(NSError * _Nullable * _Nullable)error;
    

- (BOOL)bookmark:(BOOL)bookmark
           offer:(nonnull LMGDAPlatformId *)offerId
      atLocation:(nonnull LMGDAPlatformId *)locationId
       inSession:(nonnull LMGDASession *)session
          expect:(NSError * _Nullable * _Nullable)error;


- (void)save:(nonnull LMGDAOffer *)offer;


- (BOOL)hasOfferFor:(nonnull LMGDADetailsRequestParams *)params;


- (void)reset;

@end

@interface LMGDAOfferLocalStore : NSObject<LMGDAOfferStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDAOfferLocalSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
