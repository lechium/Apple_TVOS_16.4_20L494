//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSInstallProgressList, NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _LSInstallProgressService : NSObject
{
    NSMutableSet *_observers;	// 8 = 0x8
    LSInstallProgressList *_progresses;	// 16 = 0x10
    NSMutableSet *_publishingStrings;	// 24 = 0x18
    NSMutableDictionary *_installIndexes;	// 32 = 0x20
    NSMutableOrderedSet *_orderedInstalls;	// 40 = 0x28
    NSMutableSet *_inactiveInstalls;	// 48 = 0x30
    NSMutableDictionary *_installTypes;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_installControlsQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_observersQueue;	// 72 = 0x48
    NSArray *_journalledNotificationsToReplay;	// 80 = 0x50
    NSMutableArray *_startupJournalledNotifications;	// 88 = 0x58
    _Bool _replayingJournalToNewClients;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_progressProportionsSaveTimerSource;	// 104 = 0x68
    struct os_unfair_lock_s _progressProportionsLock;	// 112 = 0x70
    NSMutableDictionary *_progressProportions;	// 120 = 0x78
    _Bool _usingNetwork;	// 128 = 0x80
}

+ (int)notificationTypeForOperation:(unsigned long long)arg1;	// IMP=0x0010000000157dcb
+ (void)beginListening;	// IMP=0x0010000000157ccb
+ (id)sharedInstance;	// IMP=0x0010000000157c76
- (void).cxx_destruct;	// IMP=0x00000000001620aa
- (void)dispatchJournalledNotificationsToObserver:(id)arg1;	// IMP=0x00000000001619f8
- (void)directlySendNotification:(int)arg1 withProxies:(id)arg2 toObserver:(id)arg3;	// IMP=0x0000000000161840
- (void)directlySendNotification:(int)arg1 withProxies:(id)arg2 toObserverProxy:(id)arg3;	// IMP=0x000000000016156e
- (void)dispatchJournalledNotificationsToConnectedClients;	// IMP=0x0000000000161178
- (void)performJournalRecovery;	// IMP=0x0000000000160fab
- (id)loadJournalledNotificationsFromDisk;	// IMP=0x0000000000160730
- (void)addSendNotificationFenceWithTimeout:(double)arg1 fenceBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001601f8
- (void)sendNetworkUsageChangedNotification;	// IMP=0x00000000001600d5
- (void)setProgressProportionsByPhase:(id)arg1 forInstallOfApplicationWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000015fdbb
- (id)progressProportionsForBundleID:(id)arg1;	// IMP=0x000000000015fd2e
- (void)discardProportionsForBundleID:(id)arg1;	// IMP=0x000000000015fc45
- (void)coalesceProportionsSave;	// IMP=0x000000000015fbad
- (void)saveProportions;	// IMP=0x000000000015f9f4
- (void)loadProportions;	// IMP=0x000000000015f31a
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000015f25e
- (id)_prepareApplicationProxiesForNotification:(int)arg1 identifiers:(id)arg2 withPlugins:(_Bool)arg3;	// IMP=0x000000000015ef02
- (void)sendDatabaseRebuiltNotification;	// IMP=0x000000000015ecf7
- (void)sendDatabaseRebuiltNotificationToObserver:(id)arg1;	// IMP=0x000000000015ebad
- (void)sendNotification:(int)arg1 forAppProxies:(id)arg2 Plugins:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000015d318
- (SEL)observerSelectorForNotification:(int)arg1;	// IMP=0x000000000015d25b
- (void)sendNotification:(id)arg1 forApplicationExtensionRecords:(id)arg2;	// IMP=0x000000000015cb98
- (void)sendNotification:(id)arg1 ForPlugins:(id)arg2;	// IMP=0x000000000015c952
- (void)_placeholdersUninstalled:(id)arg1;	// IMP=0x000000000015c548
- (void)_placeholderIconUpdatedForApp:(id)arg1;	// IMP=0x000000000015c3f1
- (void)installationFailedForApplication:(id)arg1;	// IMP=0x000000000015bfbf
- (void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;	// IMP=0x000000000015bce7
- (void)rebuildInstallIndexes;	// IMP=0x000000000015bc01
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000015ae8d
- (id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(_Bool)arg3;	// IMP=0x000000000015a482
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000001595be
- (unsigned long long)finalInstallPhaseForAppProxy:(id)arg1;	// IMP=0x0000000000159570
- (void)getMaxProgressPhaseUnitsForLoading:(int *)arg1 restoring:(int *)arg2 installing:(int *)arg3 essentialAssets:(int *)arg4 forAppProxy:(id)arg5;	// IMP=0x00000000001590c4
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000159017
- (void)addObserver:(id)arg1;	// IMP=0x0000000000158b80
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000158851
- (void)restoreInactiveInstalls;	// IMP=0x000000000015835d
- (id)_LSFindPlaceholderApplications;	// IMP=0x000000000015813c
- (id)init;	// IMP=0x0000000000157de6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

