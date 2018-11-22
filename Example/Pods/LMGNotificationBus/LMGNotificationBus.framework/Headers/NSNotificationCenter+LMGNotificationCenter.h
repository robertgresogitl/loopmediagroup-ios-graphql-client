//
//  NSNotificationCenter+LMGNotificationCenter.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
@import LMGDomain;

@interface NSOperationQueue (LMGNotificationOperationQueue)

+ (nonnull instancetype)lmgNotificationQueue;

@end

@interface NSNotificationCenter (LMGNotificationCenter)<LMGNotificationCenter>

+ (nonnull instancetype)lmgCenter;

@end
