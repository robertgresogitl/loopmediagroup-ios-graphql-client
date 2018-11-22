//
//  LMGNotificationBus.h
//  LMGNotificationBus
//
//  Created by Myroslav Pomazan on 2018-11-19.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for LMGNotificationBus.
FOUNDATION_EXPORT double LMGNotificationBusVersionNumber;

//! Project version string for LMGNotificationBus.
FOUNDATION_EXPORT const unsigned char LMGNotificationBusVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LMGNotificationBus/PublicHeader.h>

#import <LMGNotificationBus/NSNotificationCenter+LMGNotificationCenter.h>
#import <LMGNotificationBus/NSNotifications+NSNotificationConvertable.h>
#import <LMGNotificationBus/NSNotificationConvertable.h>
#import <LMGNotificationBus/NSNotificationCenter+LMGNotificationCenter.h>

#import <LMGNotificationBus/LMGBusinessCalled+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGBusinessShared+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGBusinessShown+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGBusinessViewed+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGBusinessWebsiteVisited+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGCollectionsListed+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGCollectionViewed+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGDeviceLocationChanged+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGOfferBookmarked+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGOfferUnbookmarked+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGOfferShared+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGOfferShown+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGOfferStateChanged+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGOfferStateChangeError+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGOfferViewed+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGSDKInitialized+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGSDKVersionDeprecated+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGSessionError+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGSessionIdentified+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGSessionStarted+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGUseCaseFinished+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGUseCaseStarted+NSNotificationConvertable.h>
#import <LMGNotificationBus/LMGContentFilterDidChange+NSNotificationConvertable.h>
