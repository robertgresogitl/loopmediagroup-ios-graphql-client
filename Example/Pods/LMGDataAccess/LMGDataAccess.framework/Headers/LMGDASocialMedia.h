//
//  LMGDASocialMedia.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LMGDASocialMedia : NSObject <NSCopying>

@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nonnull, nonatomic, copy, readonly) NSString *urlPath;

- (nonnull instancetype)initWithName:(nonnull NSString *)name urlPath:(nonnull NSString *)urlPath NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
