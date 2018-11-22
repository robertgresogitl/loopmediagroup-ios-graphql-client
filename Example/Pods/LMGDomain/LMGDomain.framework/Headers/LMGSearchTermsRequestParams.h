//
//  LMGSearchTermsRequestParams.h
//  LMGData
//
//  Created by Róbert Grešo on 30/10/2018.
//

#import <Foundation/Foundation.h>

@interface LMGSearchTermsRequestParams : NSObject

@property (nonatomic, readonly) NSString * _Nonnull searchTerm;

- (nonnull instancetype)initWithSearchTerm:(NSString *_Nonnull)searchTerm;

@end
