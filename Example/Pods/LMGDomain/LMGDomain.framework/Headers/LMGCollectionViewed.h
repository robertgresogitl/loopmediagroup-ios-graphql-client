//
//  LMGCollectionViewed.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGNotification.h"

@class LMGCollection;

@interface LMGCollectionViewed : NSObject<LMGNotification>

@property (nonnull, nonatomic, copy, readonly) LMGCollection *collection;

- (nonnull instancetype)initWithCollection:(nonnull LMGCollection *)collection NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
