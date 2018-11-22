//
//  LMGCollectionsListed.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGNotification.h"

@interface LMGCollectionsListed : NSObject<LMGNotification>

@property (nullable, nonatomic, readonly) NSString *tag;

- (nonnull instancetype)initWithTag:(nullable NSString *)tag NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
