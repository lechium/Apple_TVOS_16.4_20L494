//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol GKPreferencesDelegate;

@interface GKPreferences : NSObject
{
    _Bool _shouldSynchronizeOnNextRead;	// 8 = 0x8
    _Bool _webKitInspectElementEnabled;	// 9 = 0x9
    NSDictionary *_overrideValues;	// 16 = 0x10
}

+ (id)displayNameForEnvironment:(long long)arg1;	// IMP=0x0020000000125b70
+ (id)hostNameForEnvironment:(long long)arg1;	// IMP=0x0010000000125b3b
+ (id)shared;	// IMP=0x0010000000123f2c
- (void).cxx_destruct;	// IMP=0x0010000000126986
@property(nonatomic, getter=isWebKitInspectElementEnabled) _Bool webKitInspectElementEnabled; // @synthesize webKitInspectElementEnabled=_webKitInspectElementEnabled;
@property(nonatomic) _Bool _shouldSynchronizeOnNextRead; // @synthesize _shouldSynchronizeOnNextRead;
@property(nonatomic) _Bool supportsChallenges;
@property(nonatomic) long long accessPointLocation;
@property(nonatomic) _Bool accessPointShowHighlights;
@property(nonatomic) _Bool accessPointIsOnAutomatically;
@property(nonatomic) _Bool activityFeedTestFeedOnly;
@property(nonatomic) long long fakeFriendRequestCount;
- (void)setInboxContactsOnly:(_Bool)arg1 refresh:(_Bool)arg2;	// IMP=0x001000000012680b
@property(nonatomic) _Bool inboxContactsOnly;
@property(nonatomic) _Bool dashboardDeepLinkEnabled;
@property(readonly, nonatomic) _Bool sharePlayIntegration;
@property(readonly, nonatomic) _Bool enhancedWelcomeBanner;
@property(nonatomic, getter=isComprehensiveLoggingEnabled) _Bool comprehensiveLoggingEnabled;
@property(nonatomic, getter=isClipGestureEnabled) _Bool clipGestureEnabled;
@property(readonly, nonatomic) _Bool HTTPShouldUsePipelining;
@property(readonly, nonatomic) unsigned long long exchangeDefaultMaxInitiatedExchangesPerPlayer;
@property(readonly, nonatomic) unsigned long long exchangeDataDefaultMaximumSize;
@property(readonly, nonatomic) unsigned long long maxDefaultGameStateSizeTurnBased;
@property(readonly, nonatomic) unsigned long long maxDefaultPlayersTurnBased;
@property(readonly, nonatomic) unsigned long long maxDefaultPlayersHosted;
@property(readonly, nonatomic) unsigned long long maxDefaultPlayersP2P;
@property(nonatomic) double maxRecentPlayersTime;
@property(nonatomic) unsigned long long maxRecentPlayersCount;
- (void)setMultiplayerShouldAlwaysReloadCollectionView:(_Bool)arg1;	// IMP=0x00100000001260a0
@property(readonly, nonatomic) _Bool multiplayerShouldAlwaysReloadCollectionView;
@property(readonly, nonatomic) _Bool shouldAllowCustomCommunication;
@property(nonatomic) _Bool shouldAddPlayerInfoToAddressBook;
@property(readonly, nonatomic) _Bool shouldAllowSharing;
@property(nonatomic) _Bool shouldAllowNearbyMultiplayer;
@property(readonly, nonatomic) _Bool shouldDisallowInvitesFromStrangers;
@property(nonatomic) _Bool shouldLinkPlayerToFacebook;
@property(nonatomic) _Bool shouldLinkPlayerToTwitter;
@property(nonatomic) _Bool shouldLinkPlayerToICloud;
@property(nonatomic) _Bool shouldUseTestIcons;
@property(nonatomic) _Bool shouldTrackAtlasImageUsage;
@property(nonatomic) _Bool shouldAnnotateImageUsage;
@property(nonatomic) double cacheTTLOverride;
@property(nonatomic) double minimumCacheTTL;
@property(nonatomic) double garbageCollectionInterval;
@property(nonatomic) double terminationInterval;
@property(nonatomic) _Bool useInternalHeader;
@property(nonatomic) unsigned long long exchangeMaxInitiatedExchangesPerPlayer;
@property(nonatomic) unsigned long long exchangeDataMaximumSize;
@property(nonatomic) unsigned long long maxGameStateSizeTurnBased;
@property(nonatomic) unsigned long long maxPlayersTurnBased;
@property(nonatomic) unsigned long long maxPlayersHosted;
@property(nonatomic) unsigned long long maxPlayersP2P;
- (void)setRecentNumberOfPlayers:(unsigned long long)arg1 forBundleID:(id)arg2;	// IMP=0x0010000000125766
- (unsigned long long)recentNumberOfPlayersForBundleID:(id)arg1;	// IMP=0x00100000001256aa
@property(retain, nonatomic) NSDictionary *recentNumberOfPlayersPerGame;
@property(nonatomic) unsigned long long recentNumberOfPlayers;
@property(nonatomic) unsigned long long maximumInviteVersionSupported;
@property(nonatomic) _Bool restrictToAutomatch;
@property(nonatomic) long long pipeliningSetting;
@property(nonatomic) long long pushEnvironment;
@property(nonatomic) _Bool useSharePlayToExchangeData;
@property(nonatomic) _Bool preemptiveRelay;
@property(nonatomic) _Bool forceRelay;
@property(copy, nonatomic) NSString *testRunID;
@property(nonatomic) unsigned int logFilter;
@property(nonatomic) _Bool verboseLogging;
@property(nonatomic) _Bool notificationAlertsEnabled;
@property(nonatomic) _Bool notificationSoundsEnabled;
@property(nonatomic) _Bool notificationBadgesEnabled;
@property(nonatomic, getter=isNotificationCenterEnabled) _Bool notificationCenterEnabled;
@property(nonatomic) double debugRequestTimeout;
@property(nonatomic) unsigned long long operationRetryCount;
@property(nonatomic) double operationRetryDelay;
@property(nonatomic) double operationTimeout;
@property(nonatomic) unsigned long long loginDisableThreshold;
@property(nonatomic) _Bool networkManagerIgnoreCache;
@property(nonatomic) long long networkManagerStateOverride;
@property(nonatomic) NSString *networkManagerUserOverride;
@property(nonatomic) unsigned long long coreRecentMultiplier;
@property(nonatomic) unsigned long long coreRecentUpperLimit;
@property(nonatomic) unsigned long long mescalSetupRetries;
@property(nonatomic) _Bool forceUnderage;
@property(nonatomic) _Bool forceDefaultContactsIntegrationConsent;
@property(nonatomic) _Bool forceFriendSuggestions;
@property(nonatomic) _Bool forceDefaultPrivacy;
@property(nonatomic) _Bool forceDefaultNickname;
@property(nonatomic) _Bool forcePrivacyNotice;
@property(nonatomic) _Bool enterSandbox;
@property(nonatomic) _Bool useTestProtocols;
@property(retain, nonatomic) NSString *storeBagURL;
@property(nonatomic) long long environment;
- (void)removeOverrideForKey:(id)arg1;	// IMP=0x00100000001246b3
- (void)setStringValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000124696
- (id)stringValueForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x0010000000124622
- (void)setTimeInterval:(double)arg1 forKey:(id)arg2;	// IMP=0x0010000000124588
- (double)timeIntervalForKey:(id)arg1 defaultValue:(double)arg2;	// IMP=0x0010000000124536
- (void)setDictionaryValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000124519
- (id)dictionaryValueForKey:(id)arg1;	// IMP=0x00100000001244b7
- (void)setUnsignedIntegerValue:(long long)arg1 forKey:(id)arg2;	// IMP=0x001000000012441f
- (long long)unsignedIntegerValueForKey:(id)arg1 defaultValue:(long long)arg2;	// IMP=0x00100000001243d4
- (void)setIntegerValue:(long long)arg1 forKey:(id)arg2;	// IMP=0x001000000012433c
- (long long)integerValueForKey:(id)arg1 defaultValue:(long long)arg2;	// IMP=0x00100000001242f1
- (void)setBooleanValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0010000000124278
- (_Bool)booleanValueForKey:(id)arg1;	// IMP=0x0010000000124264
- (_Bool)booleanValueForKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x0010000000124219
- (id)overrideValueForKey:(id)arg1;	// IMP=0x001000000012418d
@property(retain, nonatomic) NSDictionary *overrideValues; // @synthesize overrideValues=_overrideValues;
- (id)preferencesValueForKey:(id)arg1;	// IMP=0x001000000012408d
- (void)_didWriteKey:(id)arg1;	// IMP=0x001000000012406c
- (void)synchronize;	// IMP=0x0010000000124037
- (void)invalidate;	// IMP=0x0010000000124020
- (_Bool)isInternalBuild;	// IMP=0x0010000000123fc9
- (id)init;	// IMP=0x0010000000123f1a
- (id)initWithoutUIKitNotifications;	// IMP=0x0010000000123e89
- (id)initWithUIKitNotifications;	// IMP=0x0010000000123e77
- (void)updateArcadeSubscriptionState:(id)arg1;	// IMP=0x00100000001324e0
- (_Bool)hasConsumedArcadeSubscription:(id)arg1 arcadeFamilyId:(id)arg2;	// IMP=0x0010000000132326
@property(nonatomic) long long arcadeSubscriptionState;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000021cd79
- (id)valueRestrictionForKey:(id)arg1;	// IMP=0x001000000021ccf2
- (_Bool)restrictionEnabledForKey:(id)arg1;	// IMP=0x001000000021cc6f
@property(readonly, nonatomic, getter=isFriendRequestsRestricted) _Bool friendRequestsRestricted;
@property(readonly, nonatomic, getter=isFriendsSharingRestricted) _Bool friendsSharingRestricted;
@property(readonly, nonatomic, getter=isProfilePrivacyModificationRestricted) _Bool profilePrivacyModificationRestricted;
@property(readonly, nonatomic, getter=isNearbyMultiplayerRestricted) _Bool nearbyMultiplayerRestricted;
@property(readonly, nonatomic, getter=isCustomizedCommunicationRestricted) _Bool customizedCommunicationRestricted;
@property(readonly, nonatomic, getter=isProfileModificationRestricted) _Bool profileModificationRestricted;
@property(readonly, nonatomic, getter=isSharingRestricted) _Bool sharingRestricted;
@property(readonly, nonatomic, getter=isGameCenterRestricted) _Bool gameCenterRestricted;
@property(readonly, nonatomic, getter=isAccountModificationRestricted) _Bool accountModificationRestricted;
@property(readonly, nonatomic, getter=isAppInstallationRestricted) _Bool appInstallationRestricted;
@property(readonly, nonatomic, getter=isAddingFriendsRestricted) _Bool addingFriendsRestricted;
- (void)getMultiplayerAllowedPlayerTypeWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000021ca75
@property(readonly, nonatomic) unsigned long long multiplayerAllowedPlayerType;
@property(readonly, nonatomic, getter=isMultiplayerGamingRestricted) _Bool multiplayerGamingRestricted;
@property(readonly, nonatomic, getter=isStoreDemoModeEnabled) _Bool storeDemoModeEnabled;
@property(nonatomic) __weak id <GKPreferencesDelegate> preferencesDelegate;

@end
