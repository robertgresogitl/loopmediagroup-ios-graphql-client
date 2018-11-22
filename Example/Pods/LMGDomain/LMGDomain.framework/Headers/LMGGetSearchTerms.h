//
//  LMGGetSearchTerms.h
//  LMGData
//
//  Created by Róbert Grešo on 30/10/2018.
//

#import "LMGBaseUseCase.h"
#import "LMGSearchTermsRepository.h"
#import "LMGBaseUseCase.h"

@interface LMGGetSearchTerms : LMGBaseUseCase<NoParams *, NSArray<NSString *> *>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter searchTermsRepository:(nonnull id<LMGSearchTermsRepository>)repository NS_DESIGNATED_INITIALIZER;
- (instancetype _Nonnull )initWithNotificationCenter:(id<LMGNotificationCenter>_Nonnull)notificationCenter NS_UNAVAILABLE;

@end
