//
//  LMGLocationRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>

@interface LMGLocationRequestParams : NSObject<NSCopying>

@property (nonatomic, readonly) BOOL fetchCurrent;

- (nonnull instancetype)initWithShouldFetchCurrent:(BOOL)fetchCurrent;

@end
