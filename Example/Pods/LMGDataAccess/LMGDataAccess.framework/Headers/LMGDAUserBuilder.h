//
//  LMGDAUserBuilder.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-19.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDAUser.h"

@interface LMGDAUserBuilder: NSObject

@property (nullable, nonatomic, copy) LMGDAUserId *id;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSString *email;
@property (nullable, nonatomic, copy) NSDate *birthday;
@property (nonnull, nonatomic, copy) NSDictionary *customTraits;
@property (assign) LMGDAUserGender gender;

- (nonnull instancetype)initWith:(nonnull LMGDAUser *)user;
- (nonnull LMGDAUser *)build;

@end
