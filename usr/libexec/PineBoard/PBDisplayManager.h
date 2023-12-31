//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSNumber, NSSet, NSString, NSUserDefaults, PBBulletinService, PBCableSignalInfo, PBMultiLatch, PBSDisplayMode;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PBDisplayManager : NSObject
{
    _Bool _filteredUsingdPineBoardPolicy;	// 8 = 0x8
    _Bool _canHandleHighBandwidthModes;	// 9 = 0x9
    _Bool _shouldModeSwitchForDynamicRange;	// 10 = 0xa
    _Bool _shouldModeSwitchForFrameRate;	// 11 = 0xb
    _Bool _atmosEnabled;	// 12 = 0xc
    _Bool _detectedPoorCableConnection;	// 13 = 0xd
    _Bool _deemed4KCapable;	// 14 = 0xe
    _Bool _usesDolbyLowLatency;	// 15 = 0xf
    double _baseCableCheckTimeInterval;	// 16 = 0x10
    NSArray *_blackScreenRecoveryDisplayModes;	// 24 = 0x18
    NSMutableDictionary *_nextEstablishModePerDisplays;	// 32 = 0x20
    NSHashTable *_stateObservers;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_reloadStateSource;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_notifyClientsSource;	// 56 = 0x38
    NSNumber *_displayConnectionToNotify;	// 64 = 0x40
    PBBulletinService *_bulletinService;	// 72 = 0x48
    PBMultiLatch *_wakeProgressLatch;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_displayIDStabilizer;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_displayUpdateQueue;	// 96 = 0x60
    double _localeRefreshRate;	// 104 = 0x68
    NSArray *_sortedDisplayModes;	// 112 = 0x70
    PBSDisplayMode *_currentDisplayMode;	// 120 = 0x78
    PBSDisplayMode *_fallbackDisplayMode;	// 128 = 0x80
    PBSDisplayMode *_userSelectedDisplayMode;	// 136 = 0x88
    NSSet *_seenDisplayIDs;	// 144 = 0x90
    NSString *_currentDisplayID;	// 152 = 0x98
    long long _displayConnection;	// 160 = 0xa0
    long long _lastCablePollStatus;	// 168 = 0xa8
    NSDictionary *_audioLatencies;	// 176 = 0xb0
    long long _eARCStatus;	// 184 = 0xb8
    double _userPreferredRefreshRate;	// 192 = 0xc0
    NSSet *_encodedPromotedDisplayModes;	// 200 = 0xc8
    NSNumber *_presentedDisplayAssistantKind;	// 208 = 0xd0
    NSUserDefaults *_defaults;	// 216 = 0xd8
    NSDictionary *_memoryStore;	// 224 = 0xe0
    NSString *_currentDisplayIdentifier;	// 232 = 0xe8
    NSObject<OS_dispatch_source> *_cableCheckTimer;	// 240 = 0xf0
    PBCableSignalInfo *_lastCableErrorInfo;	// 248 = 0xf8
    NSMutableArray *_matchContentRequestedModes;	// 256 = 0x100
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00200000001f05d3
+ (unsigned long long)migrateWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001f0222
+ (unsigned long long)migrateDisplayModes:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001ef85b
+ (unsigned long long)migratePreferenceKeyToDisplayIdentifier:(id)arg1;	// IMP=0x00100000001ef501
+ (void)reevaluateAtmosCapabilities;	// IMP=0x00100000001e8882
+ (id)sharedInstanceIfExists;	// IMP=0x00100000001e8870
+ (id)sharedInstance;	// IMP=0x00100000001e87d5
+ (id)dependencyDescription;	// IMP=0x00100000001e8686
+ (_Bool)shouldAllowModeSwitchForDynamicFrameRate;	// IMP=0x00100000000822ef
+ (_Bool)shouldAllowModeSwitchForDynamicRange;	// IMP=0x001000000008225c
+ (void)enumerateMutableDisplayPreferencesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000011323b
- (void).cxx_destruct;	// IMP=0x00100000001f11a5
@property(retain, nonatomic) NSMutableArray *matchContentRequestedModes; // @synthesize matchContentRequestedModes=_matchContentRequestedModes;
@property(copy, nonatomic) PBCableSignalInfo *lastCableErrorInfo; // @synthesize lastCableErrorInfo=_lastCableErrorInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *cableCheckTimer; // @synthesize cableCheckTimer=_cableCheckTimer;
@property(copy, nonatomic) NSString *currentDisplayIdentifier; // @synthesize currentDisplayIdentifier=_currentDisplayIdentifier;
@property(retain, nonatomic) NSDictionary *memoryStore; // @synthesize memoryStore=_memoryStore;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) _Bool usesDolbyLowLatency; // @synthesize usesDolbyLowLatency=_usesDolbyLowLatency;
@property(retain, nonatomic) NSNumber *presentedDisplayAssistantKind; // @synthesize presentedDisplayAssistantKind=_presentedDisplayAssistantKind;
@property(nonatomic) _Bool deemed4KCapable; // @synthesize deemed4KCapable=_deemed4KCapable;
@property(copy, nonatomic) NSSet *encodedPromotedDisplayModes; // @synthesize encodedPromotedDisplayModes=_encodedPromotedDisplayModes;
- (double);	// IMP=0x00100000001f109b
@property(nonatomic) long long eARCStatus; // @synthesize eARCStatus=_eARCStatus;
@property(retain, nonatomic) NSDictionary *audioLatencies; // @synthesize audioLatencies=_audioLatencies;
@property(nonatomic) long long lastCablePollStatus; // @synthesize lastCablePollStatus=_lastCablePollStatus;
@property(nonatomic) _Bool detectedPoorCableConnection; // @synthesize detectedPoorCableConnection=_detectedPoorCableConnection;
@property(nonatomic) long long displayConnection; // @synthesize displayConnection=_displayConnection;
@property(nonatomic) _Bool atmosEnabled; // @synthesize atmosEnabled=_atmosEnabled;
@property(nonatomic) _Bool shouldModeSwitchForFrameRate; // @synthesize shouldModeSwitchForFrameRate=_shouldModeSwitchForFrameRate;
@property(nonatomic) _Bool shouldModeSwitchForDynamicRange; // @synthesize shouldModeSwitchForDynamicRange=_shouldModeSwitchForDynamicRange;
@property(nonatomic) _Bool canHandleHighBandwidthModes; // @synthesize canHandleHighBandwidthModes=_canHandleHighBandwidthModes;
// Error: Property attributes should begin with the type ('T') attribute, property name: currentDisplayID
// Property attributes: (null)

@property(copy, nonatomic) NSSet *seenDisplayIDs; // @synthesize seenDisplayIDs=_seenDisplayIDs;
@property(copy, nonatomic) PBSDisplayMode *userSelectedDisplayMode; // @synthesize userSelectedDisplayMode=_userSelectedDisplayMode;
@property(copy, nonatomic) PBSDisplayMode *fallbackDisplayMode; // @synthesize fallbackDisplayMode=_fallbackDisplayMode;
@property(copy, nonatomic) PBSDisplayMode *currentDisplayMode; // @synthesize currentDisplayMode=_currentDisplayMode;
@property(copy, nonatomic) NSArray *sortedDisplayModes; // @synthesize sortedDisplayModes=_sortedDisplayModes;
@property(nonatomic) double localeRefreshRate; // @synthesize localeRefreshRate=_localeRefreshRate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *displayUpdateQueue; // @synthesize displayUpdateQueue=_displayUpdateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *displayIDStabilizer; // @synthesize displayIDStabilizer=_displayIDStabilizer;
@property(readonly, nonatomic) PBMultiLatch *wakeProgressLatch; // @synthesize wakeProgressLatch=_wakeProgressLatch;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
@property(retain, nonatomic) NSNumber *displayConnectionToNotify; // @synthesize displayConnectionToNotify=_displayConnectionToNotify;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *notifyClientsSource; // @synthesize notifyClientsSource=_notifyClientsSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *reloadStateSource; // @synthesize reloadStateSource=_reloadStateSource;
@property(retain, nonatomic) NSHashTable *stateObservers; // @synthesize stateObservers=_stateObservers;
@property(retain, nonatomic) NSMutableDictionary *nextEstablishModePerDisplays; // @synthesize nextEstablishModePerDisplays=_nextEstablishModePerDisplays;
@property(nonatomic) _Bool filteredUsingdPineBoardPolicy; // @synthesize filteredUsingdPineBoardPolicy=_filteredUsingdPineBoardPolicy;
@property(copy, nonatomic) NSArray *blackScreenRecoveryDisplayModes; // @synthesize blackScreenRecoveryDisplayModes=_blackScreenRecoveryDisplayModes;
@property(nonatomic) double baseCableCheckTimeInterval; // @synthesize baseCableCheckTimeInterval=_baseCableCheckTimeInterval;
- (void)sceneManager:(id)arg1 didChangeCurrentApplicationFromSceneHandle:(id)arg2 toSceneHandle:(id)arg3;	// IMP=0x00100000001f0e66
- (void)presentationElementFocusCoordinator:(id)arg1 didUpdateToActiveLayoutLevel:(long long)arg2 fromLevel:(long long)arg3;	// IMP=0x00100000001f0adb
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001f07f0
- (void)setDisplayStabilizationTimer:(double)arg1;	// IMP=0x00100000001f07b4
- (void)removeStateObserver:(id)arg1;	// IMP=0x00100000001f055d
- (void)addStateObserver:(id)arg1;	// IMP=0x00100000001f04e7
- (void)notifyStateChangeForDisplayConnection:(long long)arg1;	// IMP=0x00100000001f0324
- (void)displayConnectionUpdated:(long long)arg1;	// IMP=0x00100000001f02f5
- (id)audioLatencyForDisplayMode:(id)arg1;	// IMP=0x00100000001ef4e3
- (void)setAudioLatency:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000001ef4d0
- (_Bool)didCompleteDisplayAssistantForCurrentDisplay;	// IMP=0x00100000001ef4bd
- (void)displayAssistantDidCompleteForKind:(id)arg1 fromUserInteraction:(_Bool)arg2;	// IMP=0x00100000001ef396
- (void)removeCableCheckHistory;	// IMP=0x00100000001ef383
- (void)forgetDisplaysForDisplayAssistant;	// IMP=0x00100000001ef370
- (void)displayAssistantDidCompleteForKind:(id)arg1;	// IMP=0x00100000001ef35b
- (void)displayAssistantDidStartForKind:(id)arg1;	// IMP=0x00100000001ef348
- (void)presentDisplayAssistantWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ef1b2
- (void)handleRegionChangeWithNewCountryCode:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ef19f
- (void)wakeDisplayWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ef185
- (void)sleepDisplayWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ef08a
- (void)completeDisplayTransition:(long long)arg1 error:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001eed3a
- (void)_resetSettingsForCurrentDisplay;	// IMP=0x00100000001eeb77
- (void)_recalculateDefaultDisplayMode:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ee1d9
- (id)_recalculatedBlackScreenRecoveryDisplayModes;	// IMP=0x00100000001edce3
- (id)_recalculatedDisplayModesFromCoreAnimationModes:(id)arg1;	// IMP=0x00100000001ed70b
- (void)_applyAudioLatencyIfNeeded;	// IMP=0x00100000001ed461
- (void)_completeReloadingState;	// IMP=0x00100000001ed0f0
- (void)reloadState;	// IMP=0x00100000001ec1e3
- (void)updateDisplayManagerWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001eb120
- (void)updateCurrentCADisplayFromDisplayMode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ea749
- (void)enableAtmos:(_Bool)arg1;	// IMP=0x00100000001ea736
- (void)enableModeSwitchingForFrameRate:(_Bool)arg1;	// IMP=0x00100000001ea723
- (void)enableModeSwitchingForDynamicRange:(_Bool)arg1;	// IMP=0x00100000001ea710
- (id)findMatchingCAMode:(id)arg1;	// IMP=0x00100000001ea406
- (id)findMatchingLocaleMode:(id)arg1 enforceVirtualCheck:(_Bool)arg2;	// IMP=0x00100000001ea3e6
- (id)findFirstMode:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ea3c8
- (id)filterModes:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ea3aa
- (void)fetchCurrentDisplayStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ea345
@property(readonly, nonatomic) NSDictionary *serialisedState;
@property(readonly, nonatomic) _Bool isPresentingDisplayAssistant;
- (_Bool)isAdvertisingHDMI2;	// IMP=0x00100000001e9d5d
- (id)promotedVirtualDisplayModes;	// IMP=0x00100000001e9b72
@property(nonatomic) double userPreferredRefreshRate; // @synthesize userPreferredRefreshRate=_userPreferredRefreshRate;
- (void)dealloc;	// IMP=0x00100000001e9159
- (id)_init;	// IMP=0x00100000001e894b
- (id)init;	// IMP=0x00100000001e88ee
- (double)recalculatedCurrentLocaleRefreshRate;	// IMP=0x001000000005b5c3
- (void)updateDisplayForNewRegionWithCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b2df
- (_Bool)_isModeSwitchInProgress;	// IMP=0x0010000000083fd9
- (void)_notifyDisplayModeChange:(_Bool)arg1;	// IMP=0x0010000000083e21
- (void)_notifyDisplayModeChangeDidFinish;	// IMP=0x0010000000083e0c
- (void)_considerDisplayModeSwitchFinished:(id)arg1;	// IMP=0x0010000000083dc3
- (long long)reportingValueForMatchFrameRate;	// IMP=0x0010000000083da9
- (long long)reportingValueForMatchDynamicRange;	// IMP=0x0010000000083d8f
- (id)_bestSDRDisplayMode;	// IMP=0x0010000000083a75
- (_Bool)_shouldModeSwitchForBundleIdentifier:(id)arg1;	// IMP=0x001000000008384c
- (void)_updateDisplayManagerWithDisplayMode:(id)arg1;	// IMP=0x0010000000083647
- (id)_findDisplayModeFromPredicate:(id)arg1;	// IMP=0x001000000008333b
- (id)_bestDisplayModeForDynamicRange:(long long)arg1 frameRate:(double)arg2;	// IMP=0x00100000000831ad
- (id)_fallbackPredicatesForDynamicRange:(long long)arg1 frameRates:(id)arg2;	// IMP=0x0010000000082f42
- (id)_displayModePredicatesForDynamicRange:(long long)arg1 frameRate:(double)arg2;	// IMP=0x0010000000082c18
- (id)preferredDisplayModeForBundleIdentifier:(id)arg1;	// IMP=0x00100000000828dd
- (void)performModeSwitchForDisplayConfigurationRequest:(id)arg1;	// IMP=0x001000000008259a
- (void)performModeSwitchForBundleIdentifierIfNeeded:(id)arg1;	// IMP=0x0010000000082429
- (_Bool)isModeSwitchNeededForTransitionToBundleIdentifier:(id)arg1;	// IMP=0x0010000000082382
- (void)removeNativeAndPerformanceObservers;	// IMP=0x0010000000082208
- (void)addNativeAndPerformanceObservers;	// IMP=0x0010000000082045
- (void)runSleepWakeModeSetCycleToMode:(id)arg1 oldMode:(id)arg2 forDisplayIdentifier:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000eb3c1
- (void)_saveDisplayMode:(id)arg1 forDisplayID:(id)arg2;	// IMP=0x0010000000115c2d
- (id)_displayModeForDisplayID:(id)arg1;	// IMP=0x0010000000115b42
- (void)removeDisplayModeForKey:(id)arg1 persisted:(_Bool)arg2;	// IMP=0x0010000000115a9a
- (id)_readDisplayModeForKey:(id)arg1 persisted:(_Bool)arg2;	// IMP=0x0010000000115927
- (void)_saveDisplayMode:(id)arg1 forKey:(id)arg2 persisted:(_Bool)arg3;	// IMP=0x0010000000115836
- (void)_saveCurrentResolutionsPreferences:(id)arg1 toPersistentStore:(_Bool)arg2 forDisplayID:(id)arg3;	// IMP=0x001000000011557e
- (void)_saveCurrentResolutionsPreferences:(id)arg1 toPersistentStore:(_Bool)arg2;	// IMP=0x0010000000115506
- (id)_currentResolutionsPreferencesFromPersistentStore:(_Bool)arg1 forDisplayID:(id)arg2;	// IMP=0x00100000001151e5
- (id)_currentResolutionsPreferencesFromPersistentStore:(_Bool)arg1;	// IMP=0x0010000000115180
- (id)_locateLikelyOriginalDisplayPrefsForNewIdentifier:(id)arg1 fromSet:(id)arg2;	// IMP=0x0010000000114fab
- (double)readCableAlertIntervalOverride;	// IMP=0x0010000000114f54
- (int)readCableScoreOverride;	// IMP=0x0010000000114ecf
- (double)readCableErrorPollingIntervalOverride;	// IMP=0x0010000000114e78
- (double)readCableHistoryWindowOverride;	// IMP=0x0010000000114e21
- (_Bool)_debugAlwaysSaveModeEnabled;	// IMP=0x0010000000114dd6
- (_Bool)_shouldPreferDolbyVisionLowLatency;	// IMP=0x0010000000114d8b
- (void)resetCableCheckCumulativeTime;	// IMP=0x0010000000114d46
- (double)readCableCheckCumulativeTime;	// IMP=0x0010000000114cef
- (void)saveCableCheckCumulativeTime:(double)arg1;	// IMP=0x0010000000114c98
- (_Bool)readDetectedPoorCableConnection;	// IMP=0x0010000000114c4d
- (void)saveDetectedPoorCableConnection:(_Bool)arg1;	// IMP=0x0010000000114bf9
- (void)removeLastCableErrorInfo;	// IMP=0x0010000000114bb4
- (id)readLastCableErrorInfo;	// IMP=0x0010000000114a8d
- (void)saveLastCableErrorInfo:(id)arg1;	// IMP=0x0010000000114972
- (id)readAudioLatencies;	// IMP=0x00100000001148bd
- (void)adjustAtmos:(id)arg1;	// IMP=0x00100000001146eb
- (void)removeAudioLatencies;	// IMP=0x0010000000114637
- (void)saveNewAudioLatency:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000001144e2
- (id)readEncodedPromotedDisplayModes;	// IMP=0x00100000001143ef
- (void)removePromotedDisplayModes;	// IMP=0x001000000011433b
- (void)saveNewPromotedDisplayMode:(id)arg1;	// IMP=0x0010000000114126
- (void)removeAllCompleteDisplayAssistants;	// IMP=0x001000000011408f
- (_Bool)readDidCompleteDisplayAssistant;	// IMP=0x0010000000113ff4
- (void)saveDidCompleteDisplayAssistant:(_Bool)arg1;	// IMP=0x0010000000113f3c
- (double)readUserPreferredRefreshRate;	// IMP=0x0010000000113e90
- (void)saveUserPreferredRefreshRate:(double)arg1;	// IMP=0x0010000000113e0f
- (_Bool)readAtmosEnabled;	// IMP=0x0010000000113d76
- (_Bool)readShouldModeSwitchForFrameRate;	// IMP=0x0010000000113cdb
- (void)saveAtmosEnabled:(_Bool)arg1;	// IMP=0x0010000000113c23
- (void)saveShouldModeSwitchForFrameRate:(_Bool)arg1;	// IMP=0x0010000000113b6b
- (_Bool)readShouldModeSwitchForDynamicRange;	// IMP=0x0010000000113ad0
- (void)saveShouldModeSwitchForDynamicRange:(_Bool)arg1;	// IMP=0x0010000000113a18
- (_Bool)readCanDoHighBandwidth;	// IMP=0x001000000011397d
- (void)saveCanHandleHighBandwidthModes:(_Bool)arg1;	// IMP=0x00100000001138c5
- (id)readSeenDisplayIDs;	// IMP=0x0010000000113799
- (void)saveCurrentDisplayID:(id)arg1;	// IMP=0x00100000001136a5
- (void)removeUserSelectedDisplayMode;	// IMP=0x001000000011361d
- (id)readUserSelectedDisplayMode;	// IMP=0x0010000000113552
- (void)saveUserSelectedDisplayMode:(id)arg1;	// IMP=0x0010000000113480
- (MISSING_TYPE *)_historyWindowInterval;	// IMP=0x001000000012a178
- (double)_pollingInterval;	// IMP=0x001000000012a0e4
- (void)_stopBackgroundMonitoring;	// IMP=0x0010000000129faf
- (void)_startBackgroundMonitoringAndIgnoreFirstPoll:(_Bool)arg1;	// IMP=0x0010000000129fa9
- (void)_resetTimer;	// IMP=0x0010000000129f7c
- (void)registerModeSwitch;	// IMP=0x0010000000129f69
- (void)resetCableInfoHistory;	// IMP=0x0010000000129e78
- (void)_processCurrentCableInfo;	// IMP=0x0010000000129e72
- (void)stopMonitoringCable;	// IMP=0x0010000000129e6c
- (void)startMonitoringCable;	// IMP=0x0010000000129e66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

