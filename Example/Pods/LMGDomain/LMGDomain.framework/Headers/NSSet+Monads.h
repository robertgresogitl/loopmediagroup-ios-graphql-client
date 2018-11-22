//
//  NSOrderedSet+Monads.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSSet<ObjectType> (Monads)

- (nonnull NSSet *)flatMap:(id _Nonnull (^_Nonnull)(ObjectType _Nonnull object))block;

@end
