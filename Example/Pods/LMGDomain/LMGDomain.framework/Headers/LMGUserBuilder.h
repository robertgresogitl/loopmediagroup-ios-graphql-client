//
//  LMGUserBuilder.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-19.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGUser.h"

@interface LMGUserBuilder: NSObject

@property (nullable, nonatomic, copy) LMGUserId *id;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSString *email;
@property (nullable, nonatomic, copy) NSDate *birthday;
@property (nonnull, nonatomic, copy) NSDictionary *customTraits;
@property (assign) LMGUserGender gender;

- (nonnull instancetype)initWith:(nonnull LMGUser *)user;
- (nonnull LMGUser *)build;

@end
