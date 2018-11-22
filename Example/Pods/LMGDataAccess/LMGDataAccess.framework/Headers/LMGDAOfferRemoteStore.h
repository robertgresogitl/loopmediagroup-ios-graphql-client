//
//  LMGDAOfferRemoteStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

#import <Foundation/Foundation.h>
#import "LMGDAOfferStore.h"

@protocol LMGDAOfferRemoteSource <NSObject>


- (nullable LMGDAOffer *)getWithDetailParams:(nonnull LMGDADetailsRequestParams *)params
                                     session:(nonnull LMGDASession *)session
                                      expect:(NSError *__autoreleasing  _Nullable * _Nullable)error;


- (nullable LMGDARedemptionState *)getRedemptionStateForId:(nonnull LMGDAPlatformId *)offerId
                                                atLocation:(nonnull LMGDAPlatformId *)locationId
                                                 inSession:(nonnull LMGDASession *)session
                                                    expect:(NSError * _Nullable * _Nullable)error;


- (BOOL)bookmark:(BOOL)bookmark
           offer:(nonnull LMGDAPlatformId *)offerId
      atLocation:(nonnull LMGDAPlatformId *)locationId
       inSession:(nonnull LMGDASession *)session
          expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGDARedemptionState *)transitionOfferState:(nonnull NSString *)redemptionState
                                        usingTransition:(nonnull LMGDARedemptionStateTransition *)transition
                                               withArgs:(nonnull NSArray<LMGDARedemptionTransitionArgument *> *)args
                                               forOffer:(nonnull LMGDAPlatformId *)offerId
                                             atLocation:(nonnull LMGDAPlatformId *)locationId
                                         deviceLocation:(nullable LMGDACoordinate *)coordinate
                                              inSession:(nonnull LMGDASession *)session
                                                 expect:(NSError * _Nullable * _Nullable)error;


@end

@interface LMGDAOfferRemoteStore : NSObject<LMGDAOfferStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDAOfferRemoteSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
