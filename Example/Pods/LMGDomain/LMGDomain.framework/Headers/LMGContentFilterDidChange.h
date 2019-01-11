//
//  LMGUserDefinedLocationDidChange.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-28.
//

#import <Foundation/Foundation.h>
#import "LMGContentFilter.h"
#import "LMGNotification.h"

@interface LMGContentFilterDidChange : NSObject<LMGNotification>

@property (nonnull, nonatomic, readonly) LMGContentFilter *contentFilter;

- (nonnull instancetype)initWithContentFilter:(nullable LMGContentFilter *)contentFilter NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
