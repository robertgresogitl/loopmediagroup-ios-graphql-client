//
//  LMGBranding.h
//  LMGDomain
//
//  Created by Róbert Grešo on 15/03/2019.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LMGBranding : NSObject

@property (nullable, nonatomic, copy, readonly) NSString *title;
@property (nullable, nonatomic, copy, readonly) NSString *brandingDesc;
@property (nullable, nonatomic, copy, readonly) NSURL *logoUrl;
@property (nullable, nonatomic, copy, readonly) NSURL *backgroundImageUrl;
@property (nullable, nonatomic, copy, readonly) NSURL *infoUrl;

- (nonnull instancetype)initWithTitle:(nullable NSString *)title brandingDesc:(nullable NSString *)brandingDesc logoUrl:(nullable NSURL *)logoUrl backgroundImageUrl:(nullable NSURL *)backgroundImageUrl infoUrl:(nullable NSURL *)infoUrl;

@end
