//
//  NSArray+Monads.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray<ObjectType> (Monads)

- (nonnull NSArray *)flatMap:(id _Nullable (^_Nonnull)(ObjectType _Nonnull object))block;

@end
