//
//  LMGSessionError.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGSession.h"
#import "LMGNotification.h"

@interface LMGSessionError : NSObject<LMGNotification>

@property (nullable, nonatomic, copy, readonly) LMGSession *session;
@property (nonnull, nonatomic, copy, readonly) NSError *error;

- (nonnull instancetype)initWithSession:(nullable LMGSession *)session error:(nonnull NSError *)error NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;


@end
