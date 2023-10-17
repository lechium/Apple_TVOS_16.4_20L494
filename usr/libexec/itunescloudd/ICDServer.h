//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudPushNotificationController, CloudUserNotificationController, ICDCloudServiceStatusMonitor, ICDEnhancedAudioKeyManager, ICDMediaUserStateCenterServer, ICDNetworkAvailabilityService, ICDServerNotificationsManager, ICDServerOperationsManager, ICDelegateAccountStoreServiceListener, ICDelegationProviderService, NSMutableDictionary, NSOperationQueue, NSString, NSUserDefaults;
@protocol ICDAccountManaging, ICDBackgroundTaskManaging, ICDHandlerCoordinating, ICMediaUserStateCenterServerProtocol, OS_dispatch_queue, OS_dispatch_source;

@interface ICDServer : NSObject
{
    _Bool _startupSequenceCompleted;	// 8 = 0x8
    _Bool _ignoreAccountChanges;	// 9 = 0x9
    _Bool _havePendingOperationToReloadSecondaryAccountLibraries;	// 10 = 0xa
    unsigned int _outputClusterType;	// 12 = 0xc
    ICDCloudServiceStatusMonitor *_cloudServiceStatusMonitor;	// 16 = 0x10
    long long _preferredVideoQuality;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_startupQueue;	// 40 = 0x28
    NSOperationQueue *_internalOperationQueue;	// 48 = 0x30
    NSMutableDictionary *_xpcListeners;	// 56 = 0x38
    ICDNetworkAvailabilityService *_networkAvailabilityService;	// 64 = 0x40
    ICDServerOperationsManager *_serverOperationsManager;	// 72 = 0x48
    ICDServerNotificationsManager *_serverNotificationsManager;	// 80 = 0x50
    id <ICDAccountManaging> _accountManager;	// 88 = 0x58
    id <ICDHandlerCoordinating> _handlerCoordinator;	// 96 = 0x60
    id <ICDBackgroundTaskManaging> _backgroundTaskManager;	// 104 = 0x68
    ICDelegateAccountStoreServiceListener *_delegateAccountStoreListener;	// 112 = 0x70
    ICDelegationProviderService *_delegationProviderService;	// 120 = 0x78
    CloudPushNotificationController *_pushNotificationController;	// 128 = 0x80
    NSUserDefaults *_mediaPlaybackDefaults;	// 136 = 0x88
    CloudUserNotificationController *_userNotificationController;	// 144 = 0x90
    ICDMediaUserStateCenterServer<ICMediaUserStateCenterServerProtocol> *_mediaUserStateCenterServer;	// 152 = 0x98
    unsigned long long _stateHandle;	// 160 = 0xa0
    ICDEnhancedAudioKeyManager *_enhancedAudioKeyManager;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_sigtermSource;	// 176 = 0xb0
}

+ (id)server;	// IMP=0x00200000000586ce
- (void).cxx_destruct;	// IMP=0x0020000000052101
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *sigtermSource; // @synthesize sigtermSource=_sigtermSource;
@property(readonly, nonatomic) ICDEnhancedAudioKeyManager *enhancedAudioKeyManager; // @synthesize enhancedAudioKeyManager=_enhancedAudioKeyManager;
@property(nonatomic) _Bool havePendingOperationToReloadSecondaryAccountLibraries; // @synthesize havePendingOperationToReloadSecondaryAccountLibraries=_havePendingOperationToReloadSecondaryAccountLibraries;
@property(readonly, nonatomic) unsigned int outputClusterType; // @synthesize outputClusterType=_outputClusterType;
@property(readonly, nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(readonly, nonatomic) ICDMediaUserStateCenterServer<ICMediaUserStateCenterServerProtocol> *mediaUserStateCenterServer; // @synthesize mediaUserStateCenterServer=_mediaUserStateCenterServer;
@property(readonly, nonatomic) CloudUserNotificationController *userNotificationController; // @synthesize userNotificationController=_userNotificationController;
@property(readonly, nonatomic) NSUserDefaults *mediaPlaybackDefaults; // @synthesize mediaPlaybackDefaults=_mediaPlaybackDefaults;
@property(readonly, nonatomic) CloudPushNotificationController *pushNotificationController; // @synthesize pushNotificationController=_pushNotificationController;
@property(readonly, nonatomic) ICDelegationProviderService *delegationProviderService; // @synthesize delegationProviderService=_delegationProviderService;
@property(readonly, nonatomic) ICDelegateAccountStoreServiceListener *delegateAccountStoreListener; // @synthesize delegateAccountStoreListener=_delegateAccountStoreListener;
@property(readonly, nonatomic) id <ICDBackgroundTaskManaging> backgroundTaskManager; // @synthesize backgroundTaskManager=_backgroundTaskManager;
@property(readonly, nonatomic) id <ICDHandlerCoordinating> handlerCoordinator; // @synthesize handlerCoordinator=_handlerCoordinator;
@property(readonly, nonatomic) id <ICDAccountManaging> accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) ICDServerNotificationsManager *serverNotificationsManager; // @synthesize serverNotificationsManager=_serverNotificationsManager;
@property(readonly, nonatomic) ICDServerOperationsManager *serverOperationsManager; // @synthesize serverOperationsManager=_serverOperationsManager;
@property(readonly, nonatomic) ICDNetworkAvailabilityService *networkAvailabilityService; // @synthesize networkAvailabilityService=_networkAvailabilityService;
@property(readonly, nonatomic) NSMutableDictionary *xpcListeners; // @synthesize xpcListeners=_xpcListeners;
@property(readonly, nonatomic) NSOperationQueue *internalOperationQueue; // @synthesize internalOperationQueue=_internalOperationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *startupQueue; // @synthesize startupQueue=_startupQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) long long preferredVideoQuality; // @synthesize preferredVideoQuality=_preferredVideoQuality;
@property(nonatomic) _Bool ignoreAccountChanges; // @synthesize ignoreAccountChanges=_ignoreAccountChanges;
- (void)_updateAirPlaySettingsForConfiguration:(id)arg1;	// IMP=0x0010000000051cfa
- (void)_handleFamilyContentDeletionEvent:(id)arg1;	// IMP=0x00100000000518e7
- (void)_handleFlushPlayActivityEvents;	// IMP=0x00100000000518a1
- (void)_updateHTTPCookieStoreForContentRestrictions;	// IMP=0x0010000000051856
- (void)_updateEnhancedAudioAvailabilityIfNeeded;	// IMP=0x001000000005172c
- (void)_performPeriodicSubscriptionTasks;	// IMP=0x001000000005162c
- (void)_retryLoadingCloudLibraryForSecondaryAccountsOnAppleTV;	// IMP=0x0010000000051518
- (void)_preprocessURLResolutionCacheDictionary:(id)arg1;	// IMP=0x0010000000050dec
- (void)_writeURLResolutionCacheFileUsingBag:(id)arg1;	// IMP=0x0010000000050793
- (void)_ensureURLResolutionCacheFileExists;	// IMP=0x0010000000050560
- (id)_urlResolutionCacheFilePath;	// IMP=0x001000000005053f
- (void)_handleURLBagProviderDidUpdateBagNotification:(id)arg1;	// IMP=0x0010000000050405
- (void)_handleApplicationRegistrationNotification:(id)arg1;	// IMP=0x001000000004ffc0
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x001000000004fe4b
- (void)_ensureMusicSubscriptionKeysAreAvailableForConfiguration:(id)arg1;	// IMP=0x001000000004fc2a
- (void)_ensureSubscriptionInformationIsUpToDateForConfiguration:(id)arg1;	// IMP=0x001000000004faf3
- (void)_updateAllowsExplicitContentSettingForConfiguration:(id)arg1 automatically:(_Bool)arg2;	// IMP=0x001000000004f3e7
- (void)_setupMPMediaLibraryFilteringForConfigurations:(id)arg1;	// IMP=0x001000000004f027
- (void)_migrateToLatestUserVersionForConfigurations:(id)arg1;	// IMP=0x001000000004ed36
- (void)_completeStartupSequenceIfNeeded;	// IMP=0x001000000004ec35
- (_Bool)_canCompleteStartupSequence;	// IMP=0x001000000004eae0
@property(nonatomic, getter=isStartupSequenceCompleted) _Bool startupSequenceCompleted; // @synthesize startupSequenceCompleted=_startupSequenceCompleted;
@property(readonly, nonatomic) ICDCloudServiceStatusMonitor *cloudServiceStatusMonitor; // @synthesize cloudServiceStatusMonitor=_cloudServiceStatusMonitor;
- (void)_tearDownKVO;	// IMP=0x001000000004e933
- (void)_setupKVO;	// IMP=0x001000000004e907
- (void)_stopAncillaryServices;	// IMP=0x001000000004e771
- (void)_startAncillaryServices;	// IMP=0x001000000004dfb7
- (void)_initializeAncillaryServices;	// IMP=0x001000000004df46
- (void)_setupSigtermHandler;	// IMP=0x001000000004de04
- (void)_setupInternalQueues;	// IMP=0x001000000004dd0f
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000004dbfb
- (void)notificationsManagerDidRecieveICPlayActivityFlushInternalTestRequestNotification:(id)arg1;	// IMP=0x001000000004db04
- (void)notificationsManagerDidReceiveMusicSettingsChangedNotification:(id)arg1;	// IMP=0x001000000004da0d
- (void)notificationsManagerDidReceivePhoneNumberChangedNotification:(id)arg1;	// IMP=0x001000000004d8be
- (void)notificationsManagerDidReceiveFirstUnlockNotification:(id)arg1;	// IMP=0x001000000004d7c7
- (void)notificationsManager:(id)arg1 didReceiveApplicationInstallationNotification:(id)arg2;	// IMP=0x001000000004d6b1
- (void)notificationsManager:(id)arg1 didReceiveFamilyDeletionEventNotification:(id)arg2;	// IMP=0x001000000004d550
- (void)notificationsManager:(id)arg1 didReceiveAuthServiceTokenDidChangeNotification:(id)arg2;	// IMP=0x001000000004d464
- (void)notificationsManager:(id)arg1 didReceiveSubscriptionStatusDidChangeNotification:(id)arg2;	// IMP=0x001000000004d2dc
- (void)notificationsManager:(id)arg1 didReceiveAllowsMusicVideosDidChangeNotification:(id)arg2;	// IMP=0x001000000004d1e5
- (void)notificationsManager:(id)arg1 didReceiveAllowsExplicitContentDidChangeNotification:(id)arg2;	// IMP=0x001000000004cfee
- (void)notificationsManager:(id)arg1 didReceiveUserIdentityStoreDidChangeNotification:(id)arg2;	// IMP=0x001000000004cf29
- (void)notificationsManager:(id)arg1 didReceiveActiveUserIdentityDidChangeNotification:(id)arg2;	// IMP=0x001000000004ce64
- (void)notificationsManagerDidReceiveCloudAuthenticationDidChangeDarwinNotification:(id)arg1;	// IMP=0x001000000004cd20
- (void)notificationsManagerDidReceiveCellularDataRestrictionDidChangeDarwinNotification:(id)arg1;	// IMP=0x001000000004cab2
- (void)notificationsManagerDidReceiveLibraryImportDidFinishDarwinNotification:(id)arg1;	// IMP=0x001000000004c8aa
- (void)notificationsManagerDidReceiveBuddySetupDoneDarwinNotification:(id)arg1;	// IMP=0x001000000004c8a4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000004c3a9
- (long long)_ICCloudServerSupportedServiceForXPCListener:(id)arg1;	// IMP=0x001000000004c291
- (id)_setupXPCListenerForService:(long long)arg1;	// IMP=0x001000000004c180
- (void)notifyDeviceSetupFinishedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004c073
- (void)getListenerEndpointForService:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004be64
- (id)handlerWithType:(long long)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004b8e7
- (void)scheduleBackgroundUpdateType:(long long)arg1 forConfiguration:(id)arg2;	// IMP=0x000000000004b86f
- (void)listCloudServerOperations;	// IMP=0x001000000004b82a
- (void)processPendingKeyInvalidations;	// IMP=0x001000000004b780
- (void)fetchEnhancedAudioOfflineKeys;	// IMP=0x001000000004b6d6
- (void)refreshEnhancedAudioSharedKeys;	// IMP=0x001000000004b62c
- (id)daemonOptionsForConfiguration:(id)arg1;	// IMP=0x001000000004b191
- (void)enumerateBackgroundOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004b11f
- (void)enumerateOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004b0ad
- (_Bool)hasOperationsOfClass:(Class)arg1;	// IMP=0x001000000004b05a
- (_Bool)cancelOperationsByClass:(Class)arg1;	// IMP=0x001000000004b007
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000004af8f
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000004af17
- (void)stop;	// IMP=0x001000000004ad65
- (void)start;	// IMP=0x001000000004abf4
- (id)_stateDump;	// IMP=0x001000000004aba4
- (void)dealloc;	// IMP=0x001000000004ab22
- (id)_init;	// IMP=0x001000000004a978

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
