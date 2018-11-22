//
//  LMGAddSearchTerm.h
//  LMGData
//
//  Created by Róbert Grešo on 30/10/2018.
//

#import "LMGSearchTermsRequestParams.h"
#import "LMGSearchTermsRepository.h"
#import "LMGBaseUseCase.h"

@interface LMGAddSearchTerm : LMGBaseUseCase<LMGSearchTermsRequestParams *, NoParams *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter searchTermsRepository:(nonnull id<LMGSearchTermsRepository>)repository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;


@end

