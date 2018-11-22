//
//  LMGNotifications.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>

/**
 Notifications
*/

extern NSNotificationName const LMGUseCaseStartedNotificationName;
extern NSNotificationName const LMGUseCaseFinishedNotificationName;
extern NSNotificationName const LMGSDKInitializedNotificationName;
extern NSNotificationName const LMGSDKVersionDeprecatedNotificationName;
extern NSNotificationName const LMGSessionStartedNotificationName;
extern NSNotificationName const LMGSessionIdentifiedNotificationName;
extern NSNotificationName const LMGSessionErrorNotificationName;
extern NSNotificationName const LMGCollectionsListedNotificationName;
extern NSNotificationName const LMGCollectionViewedNotificationName;
extern NSNotificationName const LMGOfferShownNotificationName;
extern NSNotificationName const LMGOfferViewedNotificationName;
extern NSNotificationName const LMGOfferBookmarkedNotificationName;
extern NSNotificationName const LMGOfferUnbookmarkedNotificationName;
extern NSNotificationName const LMGOfferSharedNotificationName;
extern NSNotificationName const LMGBusinessShownNotificationName;
extern NSNotificationName const LMGBusinessViewedNotificationName;
extern NSNotificationName const LMGBusinessCalledNotificationName;
extern NSNotificationName const LMGBusinessSharedNotificationName;
extern NSNotificationName const LMGBusinessWebsiteVisitedNotificationName;
extern NSNotificationName const LMGOfferStateChangedNotificationName;
extern NSNotificationName const LMGOfferStateChangeErrorNotificationName;
extern NSNotificationName const LMGDeviceLocationChangedNotificationName;
extern NSNotificationName const LMGContentFilterDidChangeNotificationName;

typedef NS_ENUM(NSUInteger, LMGSharingMethod) {
    LMGSharingMethodUnknown,
    LMGSharingMethodFacebook,
    LMGSharingMethodTwitter,
    LMGSharingMethodEmail,
    LMGSharingMethodSms,
    LMGSharingMethodCopy
};
