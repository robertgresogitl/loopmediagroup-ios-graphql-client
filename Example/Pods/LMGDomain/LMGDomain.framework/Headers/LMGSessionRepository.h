//
//  SessionRepository.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-12.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGSession.h"

@protocol LMGSessionRepository <NSObject>

- (nonnull LMGSession *)get;
- (nullable LMGSession *)startWith:(nonnull LMGIntegrationKey *)integrationKey expect:(NSError * _Nullable * _Nullable)error;
- (nullable LMGSession *)updateSession:(nonnull LMGSession *)session userId:(nonnull LMGUserId *)userId hmac:(nullable LMGUserHMAC *)hmac expect:(NSError * _Nullable * _Nullable)error;
- (nullable LMGSession *)refreshAuthOn:(nonnull LMGSession *)session expect:(NSError * _Nullable * _Nullable)error;
- (void)reset;

@end
