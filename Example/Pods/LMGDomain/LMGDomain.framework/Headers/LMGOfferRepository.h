//
//  LMGOfferRepository.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGOffer.h"
#import "LMGRedemptionState.h"
#import "LMGRedemptionStateTransition.h"
#import "LMGRedemptionTransitionArgument.h"
#import "LMGCollectionRequestParams.h"
#import "LMGDetailsRequestParams.h"
#import "LMGCoordinate.h"
#import "LMGPagedResult.h"

@class LMGSession;

@protocol LMGOfferRepository <NSObject>

- (nullable LMGOffer *)getWithDetailParams:(nonnull LMGDetailsRequestParams *)params
                                   session:(nonnull LMGSession *)session
                                    expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGRedemptionState *)getRedemptionStateForId:(nonnull LMGPlatformId *)offerId
                                              atLocation:(nonnull LMGPlatformId *)locationId
                                               inSession:(nonnull LMGSession *)session
                                                  expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGRedemptionState *)transitionOfferState:(nonnull NSString *)redemptionState
                                      usingTransition:(nonnull LMGRedemptionStateTransition *)transition
                                             withArgs:(nonnull NSArray<LMGRedemptionTransitionArgument *> *)args
                                             forOffer:(nonnull LMGPlatformId *)offerId
                                           atLocation:(nonnull LMGPlatformId *)locationId
                                       deviceLocation:(nullable LMGCoordinate *)coordinate
                                            inSession:(nonnull LMGSession *)session
                                               expect:(NSError * _Nullable * _Nullable)error;


- (BOOL)bookmark:(BOOL)bookmark
           offer:(nonnull LMGPlatformId *)offerId
      atLocation:(nonnull LMGPlatformId *)locationId
       inSession:(nonnull LMGSession *)session
          expect:(NSError * _Nullable * _Nullable)error;

@end
