//
//  LMGSearchTermsRepository.h
//  LMGData
//
//  Created by Róbert Grešo on 30/10/2018.
//

#import <Foundation/Foundation.h>

@protocol LMGSearchTermsRepository <NSObject>

- (NSArray<NSString *> *)recentTerms;
- (void)save:(NSString *)term;
- (void)reset;

@end

