//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBController, CNContact, CNContactStore, CUSystemMonitor, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSMutableString, NSNumber, NSSet, NSString, SDAirDropServer, SDDeferrableOperation, SDSmartCoverMonitor, SFPowerSource, _TtC16DaemoniOSLibrary27SDAirDropContactHashManager;
@protocol OS_dispatch_source;

@interface SDStatusMonitor : NSObject
{
    _Bool _activateStarted;	// 8 = 0x8
    NSNumber *_airDropAllowed;	// 16 = 0x10
    int _airDropCount;	// 24 = 0x18
    int _airDropModeNotifyToken;	// 28 = 0x1c
    _Bool _airDropPublished;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_airDropEveryoneModeExpiryTimer;	// 40 = 0x28
    int _airPlayPrefsToken;	// 48 = 0x30
    NSNumber *_backlightOn;	// 56 = 0x38
    int _backlightLevelToken;	// 64 = 0x40
    NSString *_bonjourName;	// 72 = 0x48
    _Bool _carplayConnected;	// 80 = 0x50
    NSMutableDictionary *_certificates;	// 88 = 0x58
    NSString *_computerName;	// 96 = 0x60
    NSNumber *_computerToComputer;	// 104 = 0x68
    NSString *_consoleUser;	// 112 = 0x70
    unsigned int _consoleUserID;	// 120 = 0x78
    _TtC16DaemoniOSLibrary27SDAirDropContactHashManager *_contactHashManager;	// 128 = 0x80
    CNContactStore *_contactStore;	// 136 = 0x88
    NSString *_currentDiscoverableMode;	// 144 = 0x90
    NSString *_deviceInformation;	// 152 = 0x98
    _Bool _deviceIsHighPriority;	// 160 = 0xa0
    NSNumber *_deviceKeyBagState;	// 168 = 0xa8
    NSNumber *_deviceSupportsWAPI;	// 176 = 0xb0
    NSNumber *_deviceUIUnlocked;	// 184 = 0xb8
    _Bool _deviceWasUnlockedOnce;	// 192 = 0xc0
    struct __CFRunLoopSource *_dynamicStoreSource;	// 200 = 0xc8
    _Bool _finderAirDropEnabled;	// 208 = 0xd0
    SDAirDropServer *_finderServer;	// 216 = 0xd8
    NSNumber *_handoffVisible;	// 224 = 0xe0
    NSMutableDictionary *_identities;	// 232 = 0xe8
    int _keyBagUnlockToken;	// 240 = 0xf0
    NSString *_localHostName;	// 248 = 0xf8
    long long _mediaAccessControlSetting;	// 256 = 0x100
    NSDictionary *_mountPoints;	// 264 = 0x108
    NSString *_myAppleID;	// 272 = 0x110
    NSString *_myAppleIDCommonName;	// 280 = 0x118
    struct __SecCertificate *_myAppleIDIntermediateCertificate;	// 288 = 0x120
    struct __SecCertificate *_myAppleIDCertificate;	// 296 = 0x128
    struct __SecIdentity *_myAppleIDSecIdentity;	// 304 = 0x130
    NSMutableString *_myEmailHashes;	// 312 = 0x138
    NSMutableString *_myPhoneHashes;	// 320 = 0x140
    struct _DNSServiceRef_t *_nameMonitor;	// 328 = 0x148
    _Bool _needsExitForLocaleChange;	// 336 = 0x150
    NSString *_netbiosName;	// 344 = 0x158
    unsigned int _notifierObject;	// 352 = 0x160
    struct IONotificationPort *_notifyPortRef;	// 360 = 0x168
    NSDictionary *_odisksMountPoints;	// 368 = 0x170
    _Bool _pairedWatchHasLongPasscode;	// 376 = 0x178
    long long _pairedWatchWristState;	// 384 = 0x180
    _Bool _peopleProximityEnabled;	// 392 = 0x188
    NSNumber *_personalHotspotAutoState;	// 400 = 0x190
    _Bool _personalHotspotFamilyEnabled;	// 408 = 0x198
    NSMutableDictionary *_personalHotspotFamilyStates;	// 416 = 0x1a0
    NSNumber *_personalHotspotAllowed;	// 424 = 0x1a8
    struct __IOPMConnection *_pmConnection;	// 432 = 0x1b0
    unsigned int _rootPort;	// 440 = 0x1b8
    NSNumber *_screenOn;	// 448 = 0x1c0
    NSMutableDictionary *_serverNames;	// 456 = 0x1c8
    _Bool _sleepModeOn;	// 464 = 0x1d0
    struct __SCPreferences *_smbPreferences;	// 472 = 0x1d8
    NSMutableDictionary *_ssidHashes;	// 480 = 0x1e0
    CUSystemMonitor *_systemMonitor;	// 488 = 0x1e8
    unsigned int _systemUIFlags;	// 496 = 0x1f0
    int _uiLockStatusToken;	// 500 = 0x1f4
    NSNumber *_wirelessAccessPoint;	// 504 = 0x1f8
    NSString *_workgroup;	// 512 = 0x200
    long long _watchWristState;	// 520 = 0x208
    SDDeferrableOperation *_preventLocaleRestart;	// 528 = 0x210
    SDSmartCoverMonitor *_smartCoverMonitor;	// 536 = 0x218
    NSString *_requestedDiscoverableMode;	// 544 = 0x220
    CBController *_bluetoothController;	// 552 = 0x228
    int _screenBlankedToken;	// 560 = 0x230
    _Bool _controlCenterVisible;	// 564 = 0x234
    _Bool _multipleUsersLoggedIn;	// 565 = 0x235
    _Bool _wirelessCritical;	// 566 = 0x236
    CNContact *___meCard;	// 568 = 0x238
    NSDictionary *_awdlState;	// 576 = 0x240
    NSDate *_lastDarkWakeDate;	// 584 = 0x248
    NSSet *_effectiveBlacklistedAppBundleIDs;	// 592 = 0x250
}

+ (_Bool)enableShareSheetVectorSlots;	// IMP=0x0020000000156e4c
+ (_Bool)enableShareSheetHelperUsage;	// IMP=0x0000000000156e30
+ (_Bool)enableOOBPCredentialLogging;	// IMP=0x0010000000156da6
+ (_Bool)isBuddyCompleted;	// IMP=0x0010000000156a12
+ (_Bool)b332PairingEnabled;	// IMP=0x00100000001569d6
+ (long long)shareSheetMaxSuggestions;	// IMP=0x00100000001565ad
+ (long long)mrQLProgressUpdateFreqMsec;	// IMP=0x0010000000155b50
+ (double)b332BTAddressRotationDelay;	// IMP=0x00100000001558f3
+ (float)airDropProgressUIMaxPercentage;	// IMP=0x001000000015520e
+ (id)sharedMonitor;	// IMP=0x001000000014fb7c
- (void).cxx_destruct;	// IMP=0x002000000015a73f
@property(readonly) _Bool wirelessCritical; // @synthesize wirelessCritical=_wirelessCritical;
@property(readonly) _Bool multipleUsersLoggedIn; // @synthesize multipleUsersLoggedIn=_multipleUsersLoggedIn;
@property(readonly) _Bool controlCenterVisible; // @synthesize controlCenterVisible=_controlCenterVisible;
@property(readonly) NSSet *effectiveBlacklistedAppBundleIDs; // @synthesize effectiveBlacklistedAppBundleIDs=_effectiveBlacklistedAppBundleIDs;
@property(readonly) NSDate *lastDarkWakeDate; // @synthesize lastDarkWakeDate=_lastDarkWakeDate;
@property(readonly) NSDictionary *awdlState; // @synthesize awdlState=_awdlState;
- (double)_currentEveryoneModeExpiryInterval;	// IMP=0x001000000015a67e
- (double)_everyoneModeExpiryInterval;	// IMP=0x001000000015a5da
- (void)_cancelCheckForEveryoneModeExpiry;	// IMP=0x001000000015a4e0
- (void)_scheduleCheckForEveryoneModeExpiry;	// IMP=0x001000000015a2c2
- (void)_updateEveryoneModeExpiryDateOnChange:(id)arg1;	// IMP=0x001000000015a133
- (void)_expireEveryoneModeAndOnlySetDefault:(_Bool)arg1;	// IMP=0x0010000000159f6d
- (void)_checkEveryoneModeExpiry;	// IMP=0x0010000000159eb1
- (id)_everyoneModeExpiryDate;	// IMP=0x0010000000159cf8
- (_Bool)_isEveryoneModeExpired;	// IMP=0x0010000000159c49
- (void)logWiFiPowerState;	// IMP=0x0010000000159b97
- (void)clearWirelessState;	// IMP=0x0010000000159b5a
- (void)clearOperationModeInfo;	// IMP=0x0010000000159b07
- (void)installSSIDCacheMonitor;	// IMP=0x00100000001598d7
- (void)installWiFiPasswordSharingMonitor;	// IMP=0x00100000001597a8
- (void)handleWiFiPasswordSharingChanged;	// IMP=0x0010000000159784
- (id)stringForWatchWristState:(long long)arg1;	// IMP=0x0010000000159765
@property(readonly) long long watchWristState;
- (void)updateWatchWristState:(long long)arg1;	// IMP=0x0010000000159671
- (void)installWristStateMonitor;	// IMP=0x001000000015966b
- (void)installVolumesMonitor;	// IMP=0x0010000000159665
- (void)installUserPictureMonitor;	// IMP=0x001000000015965f
- (void)installUILockStatusMonitor;	// IMP=0x0010000000159659
- (void)installSystemUIMonitor;	// IMP=0x0010000000159653
- (void)installSpringBoardStateMonitor;	// IMP=0x0010000000159516
- (_Bool)smbConfiguration:(struct __SCPreferences *)arg1 netBiosName:(id *)arg2 workgroup:(id *)arg3;	// IMP=0x001000000015950e
- (void)reloadSMBConfInfo;	// IMP=0x00100000001593b8
- (void)installSMBPreferencesMonitor;	// IMP=0x00100000001593b2
- (void)installSleepWakeCallBack;	// IMP=0x00100000001592fe
- (void)installSleepNotification;	// IMP=0x00100000001592f8
- (void)handleSleepWakeCallBack:(unsigned int)arg1 messageArguement:(void *)arg2;	// IMP=0x0010000000159100
- (void)installSleepStateMonitor;	// IMP=0x00100000001590fa
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x00100000001590e8
@property(readonly) SFPowerSource *localPowerSource;
- (void)updateLocalPowerSource:(id)arg1;	// IMP=0x001000000015905a
- (void)handleMISStateChanged:(id)arg1;	// IMP=0x0010000000158fe4
- (void)installMISMonitor;	// IMP=0x0010000000158fde
- (void)updatePairedWatchHasLongPasscode:(_Bool)arg1;	// IMP=0x0010000000158f16
@property(readonly) _Bool pairedWatchHasLongPasscode;
- (void)updatePairedWatchLockState:(int)arg1;	// IMP=0x0010000000158e35
@property(readonly) int pairedWatchLockState;
- (void)updatePairedWatchWristState:(long long)arg1;	// IMP=0x0010000000158d57
@property(readonly) long long pairedWatchWristState;
- (void)handleNameMonitorCallBack:(const char *)arg1 flags:(unsigned int)arg2 error:(int)arg3;	// IMP=0x0010000000158c7c
- (void)updateBlacklistedAppBundleIDs;	// IMP=0x0010000000158b5e
- (void)managedConfigurationSettingsChanged:(id)arg1;	// IMP=0x0010000000158b23
- (void)installManagedConfigurationMonitor;	// IMP=0x0010000000158a6e
- (void)installLocaleChangeMonitor;	// IMP=0x0010000000158856
- (void)installKeyBagUnlockMonitor;	// IMP=0x0010000000158850
- (void)installFinderSidebarPrefsMonitor;	// IMP=0x001000000015884a
- (void)installDynamicStoreCallBack;	// IMP=0x00100000001585da
- (void)handleDynamicStoreCallback:(struct __SCDynamicStore *)arg1 changedKeys:(struct __CFArray *)arg2;	// IMP=0x0010000000158331
- (void)installDisplaySleepMonitor;	// IMP=0x001000000015832b
- (void)installDisplayConfigurationMonitor;	// IMP=0x0010000000158325
- (void)installCoreTelephonyMonitor;	// IMP=0x001000000015831f
- (void)installContactsMonitor;	// IMP=0x0010000000158195
- (void)meCardChanged:(id)arg1;	// IMP=0x001000000015809c
- (void)contactStoreDidChange:(id)arg1;	// IMP=0x0010000000157fb3
- (void)installSmartCoverStatusMonitor;	// IMP=0x0010000000157f84
- (void)installClamshellStateChangeMonitor;	// IMP=0x0010000000157f7e
- (void)uninstallCarPlayStatusMonitor;	// IMP=0x0010000000157f78
- (void)installWirelessCarPlayMonitor;	// IMP=0x0010000000157f72
- (void)installCarPlayStatusMonitor;	// IMP=0x0010000000157f6c
- (void)restartBonjourNameMonitor;	// IMP=0x0010000000157f1d
- (void)uninstallBonjourNameMonitor;	// IMP=0x0010000000157ef1
- (void)installBonjourNameMonitor;	// IMP=0x0010000000157de1
- (void)retryInstallBluetoothMonitor;	// IMP=0x0010000000157d03
- (void)bluetoothMonitorInvalidated;	// IMP=0x0010000000157c73
- (void)bluetoothDidSetPowerStateWithError:(id)arg1;	// IMP=0x0010000000157ba2
- (void)bluetoothActivatedWithError:(id)arg1;	// IMP=0x0010000000157ad1
- (void)bluetoothStateChanged;	// IMP=0x00100000001579ec
- (void)installBluetoothMonitor;	// IMP=0x0010000000157660
- (void)bluetoothAddressChanged;	// IMP=0x0010000000157604
- (void)airplaneModeChanged;	// IMP=0x00100000001575eb
- (void)installAirplaneModeMonitor;	// IMP=0x00100000001575e5
- (void)installBacklightMonitor;	// IMP=0x00100000001575df
- (void)installWirelessMonitor;	// IMP=0x00100000001575d9
- (void)updateAWDLStateInfo;	// IMP=0x00100000001575a0
- (void)handleAWDLState:(id)arg1;	// IMP=0x001000000015759a
- (void)installAppleIDAccountInfoMonitor;	// IMP=0x00100000001574e0
- (void)appleIDAccountInfoChanged:(id)arg1;	// IMP=0x0010000000157448
- (void)installAppleIDUsernameMonitor;	// IMP=0x00100000001573ca
- (long long)mediaAccessControlSetting;	// IMP=0x00100000001573bd
- (void)updateMediaAccessControlSetting:(_Bool)arg1;	// IMP=0x00100000001572fe
- (void)installAirPlayPreferencesMonitor;	// IMP=0x001000000015725d
- (void)logAirDropTransactionForClientServer:(_Bool)arg1 beginEnd:(_Bool)arg2 count:(int)arg3;	// IMP=0x0010000000157181
@property(readonly) _Bool asynchronousProxyLoadingEnabled;
@property(readonly) _Bool wirelessCarPlay;
@property(readonly) _Bool wirelessAccessPoint;
@property(readonly) _Bool wifiUserPowerPreference;
@property(readonly) _Bool testDiskFull;
@property(readonly) _Bool supportsXcodePairing;
@property(readonly) _Bool supportsFitnessPlusPairing;
@property(readonly) _Bool smartCoverIsClosed;
@property(readonly) _Bool sleepModeOn;
@property(readonly) _Bool signedIntoPrimaryiCloudAccount;
@property(readonly) _Bool showThisComputer;
@property(readonly) _Bool showMeInWormhole;
// Error: Property attributes should begin with the type ('T') attribute, property name: screenOn
// Property attributes: (null)

@property(readonly) _Bool runningAsSetupUser;
@property(readonly) _Bool registerAllInterfaces;
@property(readonly) _Bool myAppleIDIsManaged;
@property(readonly) _Bool internetSharingEnabled;
@property(readonly) _Bool ignoreIconDiskCache;
@property(readonly) _Bool handoffVisible;
@property(readonly) _Bool forceP2P;
@property(readonly) _Bool forceAWDL;
@property(readonly) _Bool finderAirDropEnabled;
@property(readonly) _Bool enableXML;
@property(readonly) _Bool enableWebloc;
@property(readonly) _Bool enableStreamDebugging;
@property(readonly) _Bool enableStrangers;
@property(readonly) _Bool enablePKZipCompression;
@property(readonly) _Bool enablePKZip;
@property(readonly) _Bool enableHotspotFallback;
@property(readonly) _Bool enableDVZip;
@property(readonly) _Bool enableDemoMode;
@property(readonly) _Bool enableDebugMode;
@property(readonly) _Bool enableContinuity;
@property(readonly) _Bool enableBugs;
@property(readonly) _Bool enableAllRecents;
@property(readonly) _Bool enableAirDropReceiving;
@property(readonly) _Bool enableAirDropAdvertising;
@property(readonly) _Bool eduModeEnabled;
@property(readonly) _Bool dockHasDownloadsFolder;
@property(readonly) _Bool disableTLS;
@property(readonly) _Bool disableRotation;
@property(readonly) _Bool disableTransformingPhotosAssetBundlesToFolders;
@property(readonly) _Bool disableExtractMediaFromBundles;
@property(readonly) _Bool disableQuarantine;
@property(readonly) _Bool disablePipelining;
@property(readonly) _Bool disablePictureQuery;
@property(readonly) _Bool disablePeopleSuggestions;
@property(readonly) _Bool disableContinuityTLS;
@property(readonly) _Bool disableCompression;
@property(readonly) _Bool disableAutoAcceptForPhotosAssetBundles;
@property(readonly) _Bool disableAutoAccept;
@property(readonly) _Bool deviceWasUnlockedOnce;
@property(readonly) _Bool deviceUIUnlocked;
@property(readonly) _Bool deviceSupportsWAPI;
@property(readonly) _Bool deviceSupportsRanging;
@property(readonly) _Bool deviceSupportsContinuity;
@property(readonly) _Bool deviceRequiresNewRanging;
@property(readonly) _Bool deviceKeyBagUnlocked;
@property(readonly) _Bool deviceKeyBagLocking;
@property(readonly) _Bool deviceKeyBagLocked;
@property(readonly) _Bool deviceKeyBagDisabled;
@property(readonly) _Bool currentConsoleUser;
@property(readonly) _Bool connectedEnabled;
@property(readonly) _Bool computerToComputer;
- (_Bool);	// IMP=0x0010000000156a83
@property(readonly) _Bool carplayConnected;
@property(readonly) _Bool bypassLTKeyAbort;
@property(readonly) _Bool browseAllInterfaces;
@property(readonly) _Bool bonjourEnabled;
@property(readonly) _Bool backlightOn;
@property(readonly) _Bool alwaysSendPayload;
@property(readonly) _Bool alwaysAutoAccept;
@property(readonly) _Bool altDSIDNeedsFixing;
@property(readonly) _Bool allEnabled;
@property(readonly) _Bool peopleProximityEnabled;
@property(readonly) _Bool lowPowerModeEnabled;
- (void)installLowPowerModeMonitor;	// IMP=0x00100000001567cd
- (void)lowPowerModeStateChanged;	// IMP=0x00100000001567c7
@property(readonly, getter=isAirDropAvailable) _Bool airdropAvailable;
- (void)updateAirDropAllowed;	// IMP=0x00100000001566ed
@property(readonly, getter=isAirDropAllowed) _Bool airdropAllowed;
@property(readonly) int workgroupThreshold;
@property(readonly) NSString *workgroup;
@property(readonly) unsigned int systemUIFlags;
@property(readonly) NSString *someComputerName;
@property(readonly) int sidebarMaxCount;
@property(readonly) NSString *netbiosName;
@property(readonly) NSData *myShortHashesForAirDrop;
@property(readonly) NSData *myMediumHashes;
@property(readonly) NSString *myPrimaryEmail;
@property(readonly) NSString *myGivenName;
@property(readonly) NSString *myName;
@property(readonly) NSString *myEmail;
@property(readonly) NSDictionary *myAppleIDValidationRecord;
@property(readonly) NSArray *myAppleIDPhoneNumbers;
@property(readonly) NSString *myAppleIDPhoneHash;
@property(readonly) NSString *myAppleIDEmailHash;
@property(readonly) NSArray *myAppleIDEmailAddresses;
@property(readonly) NSString *myAppleIDCommonName;
- (id)_myAppleID;	// IMP=0x0010000000155c1c
@property(readonly) NSString *myAppleID;
@property(readonly) NSString *myAltDSID;
@property(readonly) NSString *myAccountAppleID;
@property(readonly) NSString *modelName;
@property(readonly) NSString *modelCode;
@property(readonly) int minPersonImageSize;
- (void)clearLocalHostName;	// IMP=0x00100000001558b6
@property(readonly) NSString *localHostName;
@property(readonly) long long deviceKeyBagState;
@property(readonly) NSString *deviceInformation;
- (void)clearConsoleUser;	// IMP=0x001000000015537b
@property(readonly) NSString *consoleUser;
- (void)clearComputerName;	// IMP=0x001000000015530a
@property(readonly) NSString *computerName;
@property(readonly) NSString *bonjourName;
@property(readonly) NSData *bluetoothAddress;
- (id)awdlStateInfo;	// IMP=0x0010000000155241
@property(readonly) NSArray *awdlPeerList;
@property(readonly) NSDictionary *awdlInfo;
@property _Bool airplaneModeEnabled;
@property _Bool wirelessEnabled;
@property __weak SDAirDropServer *finderServer;
@property _Bool bluetoothEnabled;
@property _Bool airDropPublished;
- (id)wifiSSIDForSSIDHash:(id)arg1;	// IMP=0x0010000000154e4b
- (unsigned int)wifiPasswordSharingAvailability;	// IMP=0x0010000000154c7b
- (id)defaultWiFiDevice;	// IMP=0x0010000000154c73
- (_Bool)_multipleUsersLoggedIn;	// IMP=0x0010000000154c6b
- (void)postNotification:(id)arg1;	// IMP=0x0010000000154c57
- (void)postNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000154bcb
- (void)removePreventExitForLocaleReason:(id)arg1;	// IMP=0x0010000000154a62
- (void)pushDateForPreventExitForLocaleReason:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00100000001548c3
- (void)addPreventExitForLocaleReason:(id)arg1;	// IMP=0x001000000015475a
@property(readonly) _Bool simStateReady;
- (long long)signalStrength;	// IMP=0x0010000000154745
- (void)updatePersonalHotspotAllowed;	// IMP=0x0010000000154669
@property(readonly) _Bool personalHotspotAllowed;
- (unsigned char)networkType;	// IMP=0x00100000001545be
@property(readonly) _Bool familyHotspotEnabled;
- (void)updateFamilyHotspotState;	// IMP=0x001000000015456e
- (long long)familyHotspotStateForAltDSID:(id)arg1;	// IMP=0x0010000000154561
- (_Bool)lteConnectionShows4G;	// IMP=0x0010000000154559
- (void)cellularDataEnabled:(_Bool *)arg1 airplaneMode:(_Bool *)arg2;	// IMP=0x0010000000154543
- (void)updateAutoHotspotState;	// IMP=0x0010000000154520
- (long long)autoHotspotState;	// IMP=0x0010000000154518
- (id)phoneNumbersForContact:(id)arg1;	// IMP=0x0010000000154314
- (void)resetMeCardWithReason:(id)arg1;	// IMP=0x00100000001541a9
@property(readonly, nonatomic) CNContact *meCard; // @synthesize meCard=___meCard;
- (id)instantMessageEmailsForContact:(id)arg1;	// IMP=0x0010000000153d7f
- (id)emailOrPhoneForEmailHash:(id)arg1 phoneHash:(id)arg2;	// IMP=0x0010000000153cdb
- (id)emailsForContact:(id)arg1;	// IMP=0x0010000000153b17
- (id)contactWithContactIdentifier:(id)arg1;	// IMP=0x00100000001537e8
- (id)contactsWithPhoneNumberOrEmail:(id)arg1 keys:(id)arg2;	// IMP=0x001000000015369d
- (_Bool)isEmail:(id)arg1;	// IMP=0x0010000000153681
- (id)contactWithPreferredIdentifierForContacts:(id)arg1;	// IMP=0x001000000015335b
- (_Bool)contactsContainsShortHashes:(id)arg1;	// IMP=0x0010000000153342
- (_Bool)contactIsBlocked:(id)arg1;	// IMP=0x001000000015333a
- (_Bool)contactIdentifierIsBlocked:(id)arg1;	// IMP=0x0010000000153332
- (id)contactIdentifierForMediumHashes:(id)arg1;	// IMP=0x0010000000153319
- (id)contactsForEmailHash:(id)arg1 phoneHash:(id)arg2;	// IMP=0x0010000000153204
- (void)clearMyIconAndHash;	// IMP=0x001000000015313a
- (id)addAdditionalInformationToMeCard:(id)arg1;	// IMP=0x0010000000152906
- (id)awdlNetwork;	// IMP=0x00100000001528fe
- (id)awdlInfoForPeerWithServiceName:(id)arg1;	// IMP=0x00100000001528f6
- (id)awdlDevice;	// IMP=0x00100000001528ee
- (id)verifiedIdentityForAppleID:(id)arg1;	// IMP=0x0010000000152852
- (id)unifiedAppleIDInfo;	// IMP=0x0010000000152244
- (id)phoneNumbersForAppleID:(id)arg1;	// IMP=0x0010000000152181
- (void)hsa2EnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000152171
- (void)handleAppleAccountSignOut;	// IMP=0x00100000001520e5
- (void)handleAppleAccountSignIn;	// IMP=0x0010000000152059
- (void)fixAltDSIDIfNeeded;	// IMP=0x0010000000151dde
- (id)emailAddressesForAppleID:(id)arg1;	// IMP=0x0010000000151d1b
- (struct __SecIdentity *)_copyMyAppleIDSecIdentity;	// IMP=0x0010000000151c70
- (struct __SecIdentity *)copyMyAppleIDSecIdentity;	// IMP=0x0010000000151c34
- (struct __SecCertificate *)_copyMyAppleIDIntermediateCertificate;	// IMP=0x0010000000151b6a
- (struct __SecCertificate *)copyMyAppleIDIntermediateCertificate;	// IMP=0x0010000000151b2e
- (struct __SecCertificate *)_copyMyAppleIDCertificate;	// IMP=0x0010000000151a66
- (struct __SecCertificate *)copyMyAppleIDCertificate;	// IMP=0x0010000000151a2a
- (struct __SecCertificate *)copyCertificateForRealName:(id)arg1;	// IMP=0x0010000000151995
- (id)commonNameForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x00100000001518d8
- (void)clearMyAppleIDInfo;	// IMP=0x0010000000151777
- (void)cacheIdentity:(id)arg1;	// IMP=0x00100000001516a0
- (void)cacheCertificate:(struct __SecCertificate *)arg1 forRealName:(id)arg2;	// IMP=0x00100000001515f2
- (_Bool)verifyAndParseValidationRecordData:(id)arg1 intoDictionary:(out id *)arg2;	// IMP=0x00100000001512d2
- (long long)appleIDAccountState;	// IMP=0x0010000000151146
- (void)updateDiscoverableMode;	// IMP=0x0010000000150f4e
- (void)setServerMountPoints:(id)arg1;	// IMP=0x0010000000150ec0
@property(retain) NSString *discoverableMode;
- (void)setODiskMountPoints:(id)arg1;	// IMP=0x0010000000150db0
- (id)serverNameForHost:(id)arg1;	// IMP=0x0010000000150d04
- (void)removeServerName:(id)arg1;	// IMP=0x0010000000150c73
- (id)reconciledDiscoverableMode;	// IMP=0x0010000000150b01
- (id)odiskMountPointsForServer:(id)arg1;	// IMP=0x0010000000150a6e
- (id)newDiscoverableMode;	// IMP=0x0010000000150897
- (id)mountPointsForServer:(id)arg1;	// IMP=0x0010000000150804
- (_Bool)isAirDropReady;	// IMP=0x00100000001506b5
- (long long)discoverableLevel;	// IMP=0x0010000000150611
- (id)defaultDiscoverableMode;	// IMP=0x00100000001505f4
- (id)createHostNameKey:(id)arg1;	// IMP=0x001000000015053c
- (void)airDropTransactionEnd:(_Bool)arg1;	// IMP=0x00100000001504eb
- (void)airDropTransactionBegin:(_Bool)arg1;	// IMP=0x001000000015049e
- (void)addServerName:(id)arg1 forHostName:(id)arg2;	// IMP=0x00100000001503ce
@property(readonly, copy) NSString *description;
- (void)clearMonitorCache;	// IMP=0x0010000000150090
- (void)activate;	// IMP=0x001000000014fe8f
- (id)init;	// IMP=0x001000000014fbe5

// Remaining properties
@property(readonly) _Bool coalesceMe;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

