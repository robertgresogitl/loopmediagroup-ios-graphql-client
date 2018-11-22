//
//  NSString+SaveableKey.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-19.
//

#import <Foundation/Foundation.h>
#import "LMGDASaveableParams.h"

@interface NSString (SaveableParams) <LMGDASaveableParams>

- (NSString *)saveableKey;

@end
