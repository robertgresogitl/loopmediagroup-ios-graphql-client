//
//  LMGDAUserStoreFactory.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-12.
//

#import <Foundation/Foundation.h>
#import "LMGDAUserRemoteStore.h"


@interface LMGDAUserStoreFactory : NSObject

@property (nonnull, nonatomic, readonly) LMGDAUserRemoteStore *remoteStore;

- (nonnull instancetype)initWithRemoteSource:(nonnull id<LMGDAUserRemoteSource>)remoteSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
