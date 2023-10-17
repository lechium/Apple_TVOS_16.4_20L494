//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSContentRating, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface TVSettingsRestrictionsFacade : NSObject
{
    _Bool _isLoadingMediaRestrictions;	// 8 = 0x8
    NSString *_contentRestrictionsCountryCode;	// 16 = 0x10
    NSArray *_availableMovieRestrictions;	// 24 = 0x18
    NSArray *_availableTVShowRestrictions;	// 32 = 0x20
    NSArray *_availableAppRestrictions;	// 40 = 0x28
    NSArray *_availableContentRestrictionCountryCodes;	// 48 = 0x30
    NSArray *_allVideoStoreFronts;	// 56 = 0x38
    NSArray *_allAppStoreFronts;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_ratingsLoadQueue;	// 72 = 0x48
}

+ (id)keyPathsForValuesAffectingAppRestriction;	// IMP=0x00400000000c23be
+ (id)keyPathsForValuesAffectingTvShowRestriction;	// IMP=0x00100000000c239e
+ (id)keyPathsForValuesAffectingMovieRestriction;	// IMP=0x00100000000c237e
+ (unsigned long long)_restrictionSettingsAccessModeFromAccessMode:(unsigned long long)arg1;	// IMP=0x00100000000c2364
+ (unsigned long long)_accessModeFromRestrictionSettingsAccessMode:(unsigned long long)arg1;	// IMP=0x00100000000c234a
+ (id)sharedInstance;	// IMP=0x00100000000beaca
- (void).cxx_destruct;	// IMP=0x00200000000c24ab
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ratingsLoadQueue; // @synthesize ratingsLoadQueue=_ratingsLoadQueue;
@property(retain, nonatomic) NSArray *allAppStoreFronts; // @synthesize allAppStoreFronts=_allAppStoreFronts;
@property(retain, nonatomic) NSArray *allVideoStoreFronts; // @synthesize allVideoStoreFronts=_allVideoStoreFronts;
@property(retain, nonatomic) NSArray *availableContentRestrictionCountryCodes; // @synthesize availableContentRestrictionCountryCodes=_availableContentRestrictionCountryCodes;
@property(retain, nonatomic) NSArray *availableAppRestrictions; // @synthesize availableAppRestrictions=_availableAppRestrictions;
@property(retain, nonatomic) NSArray *availableTVShowRestrictions; // @synthesize availableTVShowRestrictions=_availableTVShowRestrictions;
@property(retain, nonatomic) NSArray *availableMovieRestrictions; // @synthesize availableMovieRestrictions=_availableMovieRestrictions;
@property(copy, nonatomic) NSString *contentRestrictionsCountryCode; // @synthesize contentRestrictionsCountryCode=_contentRestrictionsCountryCode;
@property(nonatomic) _Bool isLoadingMediaRestrictions; // @synthesize isLoadingMediaRestrictions=_isLoadingMediaRestrictions;
- (id)_allDictionaryForDomain:(id)arg1;	// IMP=0x00100000000c2100
- (id)_noneDictionaryForDomain:(id)arg1;	// IMP=0x00100000000c1eb6
- (id)_ratingForDomain:(id)arg1 withRanking:(id)arg2;	// IMP=0x00100000000c1aaa
- (id)_orderedRatingsInDomain:(id)arg1 countryCode:(id)arg2;	// IMP=0x00100000000c15a4
- (id)_baseRatingsFromStoreFront:(id)arg1 forDomain:(id)arg2;	// IMP=0x00100000000c0ff7
- (id)storeFrontForDomain:(id)arg1 countryCode:(id)arg2;	// IMP=0x00100000000c0eb2
- (id)_ratingSystemTypesByDomain;	// IMP=0x00100000000c0e62
- (void)_loadAllStorefrontsForMediaType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c0ca8
- (unsigned long long)_ratingsMediaTypeForDomain:(id)arg1;	// IMP=0x00100000000c0be8
- (void)_fetchRatings;	// IMP=0x00100000000c0608
- (void)_refreshRatings;	// IMP=0x00100000000c0491
- (void)_restrictionSettingsDidChange:(id)arg1;	// IMP=0x00100000000c03e6
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x00100000000c0304
@property(nonatomic) _Bool allowsBackgroundAppRefreshModification;
@property(nonatomic) _Bool allowsLocationServicesUI;
@property(nonatomic) unsigned long long allowsConferenceRoomDisplaySettingsUI;
@property(nonatomic) unsigned long long allowsAirPlaySettingsUI;
@property(nonatomic) _Bool friendSharingAllowed;
@property(nonatomic) _Bool replayKitAllowed;
@property(nonatomic) _Bool allowsProfileChanges;
@property(nonatomic) _Bool allowsProfilePrivacyChanges;
@property(nonatomic) _Bool allowsPrivateMessaging;
@property(nonatomic) _Bool allowsNearbyMultiplayer;
@property(nonatomic) long long allowedMultiplayerGamingType;
@property(readonly, nonatomic) _Bool gameCenterEnabled;
@property(nonatomic) _Bool allowsSiriExplicitLanaguage;
@property(nonatomic) unsigned long long allowsBookstoreErotica;
@property(nonatomic) unsigned long long allowsExplicitContent;
@property(nonatomic) _Bool allowsInAppPurchase;
@property(nonatomic) unsigned long long allowsPurchaseAndRental;
@property(nonatomic) _Bool allowsMusicVideos;
@property(nonatomic) _Bool allowsMusicSocialFeatures;
@property(nonatomic) _Bool allowsVideoSubscriberAccountChanges;
@property(readonly, nonatomic) _Bool automaticDateAndTimeIsManaged;
@property(readonly, nonatomic) _Bool allowsRemoteAppPairingIsManaged;
@property(nonatomic) _Bool allowsRemoteAppPairing;
@property(copy, nonatomic) AMSContentRating *appRestriction;
@property(copy, nonatomic) AMSContentRating *tvShowRestriction;
@property(copy, nonatomic) AMSContentRating *movieRestriction;
@property(readonly, nonatomic) _Bool restrictionsEnabled;
- (void)resetRestrictionSettings;	// IMP=0x00100000000becf7
- (void)setRestrictionsPasscode:(id)arg1;	// IMP=0x00100000000becd7
- (id)init;	// IMP=0x00100000000beb1f

@end

