//
//  LMGDASaveableParams.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-18.
//

#import <Foundation/Foundation.h>

@protocol LMGDASaveableParams <NSObject>

- (nullable NSString *)nextPage;
- (nonnull NSString *)saveableKey;

@end
