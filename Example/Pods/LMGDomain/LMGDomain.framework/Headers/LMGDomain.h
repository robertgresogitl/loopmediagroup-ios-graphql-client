//
//  LMGDomain.h
//  LMGDomain
//
//  Created by Myroslav Pomazan on 2018-11-16.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for LMGDomain.
FOUNDATION_EXPORT double LMGDomainVersionNumber;

//! Project version string for LMGDomain.
FOUNDATION_EXPORT const unsigned char LMGDomainVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LMGDomain/PublicHeader.h>

// Common junk
#import <LMGDomain/NSArray+Monads.h>
#import <LMGDomain/NSError+Domain.h>
#import <LMGDomain/NSSet+Monads.h>
#import <LMGDomain/NSString+EmptyCheck.h>
#import <LMGDomain/LMGObservable.h>
#import <LMGDomain/LMGBaseUseCase.h>
#import <LMGDomain/LMGSessionRequiredUseCase.h>

// Business Use Cases
#import <LMGDomain/LMGBusinessRepository.h>
#import <LMGDomain/LMGGetBusinessesWithParams.h>
#import <LMGDomain/LMGGetBusinessInfo.h>
#import <LMGDomain/LMGGetCollectionBusinesses.h>

// Collecitons Use Cases
#import <LMGDomain/LMGCollectionRepository.h>
#import <LMGDomain/LMGGetCollectionsList.h>
#import <LMGDomain/LMGGetCollectionInfo.h>

// Initialization Use Cases
#import <LMGDomain/LMGSessionRepository.h>
#import <LMGDomain/LMGSessionUseCaseFactory.h>
#import <LMGDomain/LMGGetSession.h>
#import <LMGDomain/LMGRenewSession.h>
#import <LMGDomain/LMGResetSession.h>
#import <LMGDomain/LMGRestartSession.h>
#import <LMGDomain/LMGStartSession.h>
#import <LMGDomain/LMGUpdateSessionUser.h>

// Locations Use Cases
#import <LMGDomain/LMGLocationsRepository.h>
#import <LMGDomain/LMGGetLocationsMap.h>

// Offer Use Cases
#import <LMGDomain/LMGOfferRepository.h>
#import <LMGDomain/LMGBookmarkOffer.h>
#import <LMGDomain/LMGGetOfferInfo.h>
#import <LMGDomain/LMGGetRedeemAction.h>
#import <LMGDomain/LMGTransitionRedemptionState.h>

// Search Term Use Cases
#import <LMGDomain/LMGSearchTermsRepository.h>
#import <LMGDomain/LMGAddSearchTerm.h>
#import <LMGDomain/LMGGetSearchTerms.h>

// User Use Cases
#import <LMGDomain/LMGUserRepository.h>
#import <LMGDomain/LMGGetUser.h>
#import <LMGDomain/LMGIdentifyUser.h>

// Device GeoPoint Use Cases
#import <LMGDomain/LMGDeviceLocationRepository.h>
#import <LMGDomain/LMGGetDeviceLocation.h>

// Notifications
#import <LMGDomain/LMGBusinessCalled.h>
#import <LMGDomain/LMGBusinessShared.h>
#import <LMGDomain/LMGBusinessShown.h>
#import <LMGDomain/LMGBusinessViewed.h>
#import <LMGDomain/LMGBusinessWebsiteVisited.h>
#import <LMGDomain/LMGCollectionsListed.h>
#import <LMGDomain/LMGCollectionViewed.h>
#import <LMGDomain/LMGDeviceLocationChanged.h>
#import <LMGDomain/LMGOfferBookmarked.h>
#import <LMGDomain/LMGOfferUnbookmarked.h>
#import <LMGDomain/LMGOfferShared.h>
#import <LMGDomain/LMGOfferShown.h>
#import <LMGDomain/LMGOfferStateChanged.h>
#import <LMGDomain/LMGOfferStateChangeError.h>
#import <LMGDomain/LMGOfferViewed.h>
#import <LMGDomain/LMGSDKInitialized.h>
#import <LMGDomain/LMGSDKVersionDeprecated.h>
#import <LMGDomain/LMGSessionError.h>
#import <LMGDomain/LMGSessionIdentified.h>
#import <LMGDomain/LMGSessionStarted.h>
#import <LMGDomain/LMGUseCaseFinished.h>
#import <LMGDomain/LMGUseCaseStarted.h>
#import <LMGDomain/LMGContentFilterDidChange.h>
#import <LMGDomain/LMGNotification.h>
#import <LMGDomain/LMGNotificationCenter.h>
#import <LMGDomain/LMGNotifications.h>

// Models
#import <LMGDomain/LMGAddress.h>
#import <LMGDomain/LMGAuthTokenExpired.h>
#import <LMGDomain/LMGBusiness.h>
#import <LMGDomain/LMGBusinessesListRequestParams.h>
#import <LMGDomain/LMGCollection.h>
#import <LMGDomain/LMGCollectionRequestParams.h>
#import <LMGDomain/LMGCollectionsListRequestParams.h>
#import <LMGDomain/LMGCoordinate.h>
#import <LMGDomain/LMGDataRequestParams.h>
#import <LMGDomain/LMGDetailsRequestParams.h>
#import <LMGDomain/LMGLocation.h>
#import <LMGDomain/LMGLocationCategory.h>
#import <LMGDomain/LMGLocationRequestParams.h>
#import <LMGDomain/LMGLocationsMapRequestParams.h>
#import <LMGDomain/LMGOffer.h>
#import <LMGDomain/LMGOfferLimits.h>
#import <LMGDomain/LMGPagedResult.h>
#import <LMGDomain/LMGPlatformId.h>
#import <LMGDomain/LMGRedemptionState.h>
#import <LMGDomain/LMGRedemptionStateTransition.h>
#import <LMGDomain/LMGRedemptionTransitionArgument.h>
#import <LMGDomain/LMGRedemptionTransitionRequestParams.h>
#import <LMGDomain/LMGSchedule.h>
#import <LMGDomain/LMGSearchTermsRequestParams.h>
#import <LMGDomain/LMGSession.h>
#import <LMGDomain/LMGSocialMedia.h>
#import <LMGDomain/LMGUrlPath.h>
#import <LMGDomain/LMGUser.h>
#import <LMGDomain/LMGUserBuilder.h>
#import <LMGDomain/LMGContentFilter.h>
#import <LMGDomain/LMGRequestParams+ContentFilter.h>
#import <LMGDomain/LMGBranding.h>
