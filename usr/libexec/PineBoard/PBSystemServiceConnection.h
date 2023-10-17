//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, PBAirPlayService, PBAppInfoService, PBBulletinService, PBDisplayManagerService, PBEARCConfiguratorService, PBOSUpdateService, PBOverlayLayoutService, PBPictureInPictureService, PBRestrictionService, PBUserPresentationService, PBVideoSubscriberAccountService;
@protocol PBSystemServiceNowPlayingDelegate;

@interface PBSystemServiceConnection : NSObject
{
    PBAirPlayService *_airPlayService;	// 8 = 0x8
    PBAppInfoService *_appInfoService;	// 16 = 0x10
    PBBulletinService *_bulletinService;	// 24 = 0x18
    PBOSUpdateService *_osUpdateService;	// 32 = 0x20
    PBRestrictionService *_restrictionService;	// 40 = 0x28
    PBUserPresentationService *_userPresentationService;	// 48 = 0x30
    PBVideoSubscriberAccountService *_videoSubscriberAccountService;	// 56 = 0x38
    PBDisplayManagerService *_displayManagerService;	// 64 = 0x40
    PBPictureInPictureService *_pictureInPictureService;	// 72 = 0x48
    PBOverlayLayoutService *_overlayLayoutService;	// 80 = 0x50
    PBEARCConfiguratorService *_eARCConfiguratorService;	// 88 = 0x58
    NSXPCConnection *_remoteConnection;	// 96 = 0x60
    _Bool _hiliteModeActive;	// 104 = 0x68
    NSString *_clientBundleIdentifier;	// 112 = 0x70
    id <PBSystemServiceNowPlayingDelegate> _nowPlayingPresentationDelegate;	// 120 = 0x78
}

+ (id)systemServiceConnectionForProcessIdentifier:(int)arg1;	// IMP=0x002000000019e904
+ (void)_registerConnection:(id)arg1;	// IMP=0x001000000019e771
+ (id)_activeConnectionsByProcessIdentifier;	// IMP=0x001000000019e705
- (void).cxx_destruct;	// IMP=0x00200000001a8614
@property(nonatomic) _Bool hiliteModeActive; // @synthesize hiliteModeActive=_hiliteModeActive;
@property(retain, nonatomic) id <PBSystemServiceNowPlayingDelegate> nowPlayingPresentationDelegate; // @synthesize nowPlayingPresentationDelegate=_nowPlayingPresentationDelegate;
@property(readonly, copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(readonly, nonatomic) NSXPCConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (id)_clientBundleIdentifierFromConnection;	// IMP=0x00100000001a8537
- (_Bool)sendMessagePresentNowPlayingUI;	// IMP=0x00100000001a84eb
- (void)defaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x00100000001a845c
- (void)listen;	// IMP=0x00100000001a8456
- (void)getEARCConfiguratorServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a8396
- (void)getOverlayLayoutServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a82d6
- (void)_getPictureInPictureServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a8216
- (void)getDisplayManagerServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a8156
- (void)getVideoSubscriberAccountServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a7fd7
- (void)getUserPresentationServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a7e38
- (void)getMediaRemoteServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a7dce
- (void)getRestrictionServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a7d0e
- (void)getAirPlayServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a7b8f
- (void)getOSUpdateServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a7a10
- (void)getBulletinServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a7891
- (void)getAppInfoServiceProxyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a75f2
- (void)endpointForProviderType:(id)arg1 withIdentifier:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a755b
- (void)registerServiceProviderEndpoint:(id)arg1 forProviderType:(id)arg2;	// IMP=0x00100000001a74aa
- (void)getStoreFrontCountryCodeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a73f5
- (void)showVolumeHUDWithImageName:(id)arg1 level:(id)arg2;	// IMP=0x00100000001a721b
- (void)showVolumeHUDForRouteType:(long long)arg1 withLevel:(id)arg2;	// IMP=0x00100000001a706f
- (void)setShouldSuppressSystemVolumeHUD:(_Bool)arg1;	// IMP=0x00100000001a6ec9
- (void)setWantsVolumeButtonEvents:(_Bool)arg1;	// IMP=0x00100000001a6d23
- (void)setWantsPlayPauseButtonEvents:(_Bool)arg1;	// IMP=0x00100000001a6b7d
- (void)pairAppleRemote:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a69cf
- (void)fetchPairedAppleRemoteStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a684c
- (void)fetchEnforceProvisioningOnSystemAppsEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a6723
- (void)fetchApplicationIdentifiersByBundleIdentifierMappingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a65e6
- (void)fetchDisabledAdamIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a644f
- (void)fetchProvisionAppIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a62bb
- (void)launchKioskApp;	// IMP=0x00100000001a5f93
- (void)stopSiriListening;	// IMP=0x00100000001a5ce9
- (void)startSiriListening;	// IMP=0x00100000001a5a3f
- (void)activateSiri;	// IMP=0x00100000001a5795
- (void)presentAirDropPromptForDiagnosticFileWithOptions:(id)arg1;	// IMP=0x00100000001a564f
- (void)handleShowHomeIntentWithFilters:(id)arg1 time:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a3ef1
- (void)takeScreenshotWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a3d5e
- (void)setKioskAppBundleIdentifier:(id)arg1;	// IMP=0x00100000001a3b06
- (void)kioskAppBundleIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a3933
- (void)setSystemAppearance:(long long)arg1;	// IMP=0x00100000001a36d5
- (void)systemAppearanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a343c
- (void)sendMenuButtonEvent;	// IMP=0x00100000001a317a
- (void)performScreenActionWithName:(id)arg1 forItemIdentifier:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001a2bd1
- (void)setNextAssistantRecognitionStrings:(id)arg1;	// IMP=0x00100000001a2a30
- (void)setNextVoiceRecognitionAudioInputPaths:(id)arg1;	// IMP=0x00100000001a288f
- (void)topActiveOrActivatingApplicationIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a2624
- (void)recentApplicationBundleIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a2448
- (void)purgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x00100000001a2349
- (void)dismissSoftwareUpdateWindowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a20b5
- (void)presentSoftwareUpdateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a1d77
- (void)dismissEventMaskingWindowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a1ae3
- (void)presentEventMaskingWindowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a184f
- (void)dismissThermalAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a1593
- (void)presentThermalAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a12d7
- (void)fetchHintStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a1224
- (void)noteHintShown:(unsigned long long)arg1;	// IMP=0x00100000001a1193
- (void)presentNowPlayingWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a0ed0
- (void)presentSystemRoutingUIWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a0b75
- (void)presentAudioUpsellWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000019ff50
- (void)launchCRDApp;	// IMP=0x001000000019fe16
- (void)setAirPlayActive:(_Bool)arg1;	// IMP=0x001000000019fc9c
- (void)deactivateScreenSaver;	// IMP=0x001000000019fa56
- (void)activateScreenSaverWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000019f79d
- (void)activateScreenSaver;	// IMP=0x001000000019f788
- (void)sleepTimeoutWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000019f5c1
- (void)setSleepTimeout:(double)arg1;	// IMP=0x001000000019f415
- (void)reboot;	// IMP=0x001000000019f282
- (void)relaunch;	// IMP=0x001000000019f0ef
- (void)fetchDeviceIsAsleepWithResult:(CDUnknownBlockType)arg1;	// IMP=0x001000000019efcf
- (void)wakeSystemForReason:(id)arg1;	// IMP=0x001000000019ee01
- (void)sleepSystemForReason:(id)arg1;	// IMP=0x001000000019ec33
- (void)deactivateApplication;	// IMP=0x001000000019ebc1
- (void)registerNowPlayingDelegate:(id)arg1;	// IMP=0x001000000019ebae
- (id)osUpdateService;	// IMP=0x001000000019eb9f
- (void)invalidate;	// IMP=0x001000000019e9ff
- (void)resume;	// IMP=0x001000000019e9e8
- (void)dealloc;	// IMP=0x001000000019e66a
- (id)init;	// IMP=0x001000000019e65c
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000019d70b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
