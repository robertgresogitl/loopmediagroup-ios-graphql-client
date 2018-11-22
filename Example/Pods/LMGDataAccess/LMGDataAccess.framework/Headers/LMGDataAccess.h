//
//  LMGDataAccess.h
//  LMGDataAccess
//
//  Created by Myroslav Pomazan on 2018-11-16.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for LMGDataAccess.
FOUNDATION_EXPORT double LMGDataAccessVersionNumber;

//! Project version string for LMGDataAccess.
FOUNDATION_EXPORT const unsigned char LMGDataAccessVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LMGDataAccess/PublicHeader.h>

// Common
#import <LMGDataAccess/LMGDASaveableParams.h>

// Business
#import <LMGDataAccess/LMGDABusinessRepository.h>
#import <LMGDataAccess/LMGDABusinessStore.h>
#import <LMGDataAccess/LMGDABusinessStoreFactory.h>
#import <LMGDataAccess/LMGDABusinessLocalStore.h>
#import <LMGDataAccess/LMGDABusinessRemoteStore.h>

// Collection
#import <LMGDataAccess/LMGDACollectionRepository.h>
#import <LMGDataAccess/LMGDACollectionStore.h>
#import <LMGDataAccess/LMGDACollectionStoreFactory.h>
#import <LMGDataAccess/LMGDACollectionLocalStore.h>
#import <LMGDataAccess/LMGDACollectionRemoteStore.h>

// Device Location
#import <LMGDataAccess/LMGDADeviceLocationRepository.h>
#import <LMGDataAccess/LMGDADeviceLocationStore.h>
#import <LMGDataAccess/LMGDADeviceLocationStoreFactory.h>
#import <LMGDataAccess/LMGDADeviceLocationLocalStore.h>
#import <LMGDataAccess/LMGDADeviceLocationSensorStore.h>

// Location
#import <LMGDataAccess/LMGDALocationRepository.h>
#import <LMGDataAccess/LMGDALocationStoreFactory.h>
#import <LMGDataAccess/LMGDALocationStore.h>
#import <LMGDataAccess/LMGDALocationLocalStore.h>
#import <LMGDataAccess/LMGDALocationRemoteStore.h>

// Offer
#import <LMGDataAccess/LMGDAOfferRepository.h>
#import <LMGDataAccess/LMGDAOfferStore.h>
#import <LMGDataAccess/LMGDAOfferStoreFactory.h>
#import <LMGDataAccess/LMGDAOfferLocalStore.h>
#import <LMGDataAccess/LMGDAOfferRemoteStore.h>

// Search Terms
#import <LMGDataAccess/LMGDASearchTermsRepository.h>
#import <LMGDataAccess/LMGDASearchTermsStore.h>
#import <LMGDataAccess/LMGDASearchTermsStoreFactory.h>
#import <LMGDataAccess/LMGDASearchTermsLocalStore.h>

// Session
#import <LMGDataAccess/LMGDASessionRepository.h>
#import <LMGDataAccess/LMGDASessionStore.h>
#import <LMGDataAccess/LMGDASessionStoreFactory.h>
#import <LMGDataAccess/LMGDASessionLocalStore.h>
#import <LMGDataAccess/LMGDASessionRemoteStore.h>

// User
#import <LMGDataAccess/LMGDAUserRepository.h>
#import <LMGDataAccess/LMGDAUserStore.h>
#import <LMGDataAccess/LMGDAUserStoreFactory.h>
#import <LMGDataAccess/LMGDAUserRemoteStore.h>

// Models
#import <LMGDataAccess/LMGDAAddress.h>
#import <LMGDataAccess/LMGDABusiness.h>
#import <LMGDataAccess/LMGDABusinessesListRequestParams.h>
#import <LMGDataAccess/LMGDACollection.h>
#import <LMGDataAccess/LMGDACollectionRequestParams.h>
#import <LMGDataAccess/LMGDACollectionsListRequestParams.h>
#import <LMGDataAccess/LMGDACoordinate.h>
#import <LMGDataAccess/LMGDADetailsRequestParams.h>
#import <LMGDataAccess/LMGDALocation.h>
#import <LMGDataAccess/LMGDALocationCategory.h>
#import <LMGDataAccess/LMGDALocationsMapRequestParams.h>
#import <LMGDataAccess/LMGDAOffer.h>
#import <LMGDataAccess/LMGDAOfferLimits.h>
#import <LMGDataAccess/LMGDAPagedResult.h>
#import <LMGDataAccess/LMGDAPlatformId.h>
#import <LMGDataAccess/LMGDARedemptionState.h>
#import <LMGDataAccess/LMGDARedemptionStateTransition.h>
#import <LMGDataAccess/LMGDARedemptionTransitionArgument.h>
#import <LMGDataAccess/LMGDASchedule.h>
#import <LMGDataAccess/LMGDASession.h>
#import <LMGDataAccess/LMGDASocialMedia.h>
#import <LMGDataAccess/LMGDAUser.h>
#import <LMGDataAccess/LMGDAUserBuilder.h>

// Model Domain & Data Access Glue
#import <LMGDataAccess/LMGAddress+DataAccess.h>
#import <LMGDataAccess/LMGBusiness+DataAccess.h>
#import <LMGDataAccess/LMGBusinessesListRequestParams+DataAccess.h>
#import <LMGDataAccess/LMGCollection+DataAccess.h>
#import <LMGDataAccess/LMGCollectionRequestParams+DataAccess.h>
#import <LMGDataAccess/LMGCollectionsListRequestParams+DataAccess.h>
#import <LMGDataAccess/LMGCoordinate+DataAccess.h>
#import <LMGDataAccess/LMGDetailsRequestParams+DataAccess.h>
#import <LMGDataAccess/LMGLocation+DataAccess.h>
#import <LMGDataAccess/LMGLocationCategory+DataAccess.h>
#import <LMGDataAccess/LMGLocationsMapRequestParams+DataAccess.h>
#import <LMGDataAccess/LMGOffer+DataAccess.h>
#import <LMGDataAccess/LMGOfferLimits+DataAccess.h>
#import <LMGDataAccess/LMGPagedResult+DataAccess.h>
#import <LMGDataAccess/LMGRedemptionState+DataAccess.h>
#import <LMGDataAccess/LMGRedemptionStateTransition+DataAccess.h>
#import <LMGDataAccess/LMGRedemptionTransitionArgument+DataAccess.h>
#import <LMGDataAccess/LMGSchedule+DataAccess.h>
#import <LMGDataAccess/LMGSession+DataAccess.h>
#import <LMGDataAccess/LMGSocialMedia+DataAccess.h>
#import <LMGDataAccess/LMGUser+DataAccess.h>
#import <LMGDataAccess/NSString+SaveableParams.h>
