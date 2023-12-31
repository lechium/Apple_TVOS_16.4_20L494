//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSRecursiveLock, NSSet, NSString, TaskQueue;
@protocol OS_dispatch_queue;

@interface UpdatesManager_ObjC : NSObject
{
    _Bool _agentRequestedUpdateAll;	// 8 = 0x8
    _Bool _automaticDownloadsAreDisabled;	// 9 = 0x9
    NSNumber *_currentAccountDSID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_badgeQueue;	// 40 = 0x28
    _Bool _hasLoadedTVProviderApps;	// 48 = 0x30
    NSSet *_tvProviderApps;	// 56 = 0x38
    NSRecursiveLock *_DSIDLessAppsLock;	// 64 = 0x40
    TaskQueue *_taskQueue;	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x0020000000139cd5
- (void).cxx_destruct;	// IMP=0x002000000013ab0e
- (void)verifyUpdatesForRemovedBundleIDs:(id)arg1;	// IMP=0x001000000013a742
- (void)verifyUpdatesFollowingExternalAppInstall:(id)arg1;	// IMP=0x001000000013a73c
- (void)verifyPendingUpdates:(id)arg1;	// IMP=0x001000000013a736
- (void)verifyAllPendingUpdates;	// IMP=0x001000000013a458
- (void)updateAllWithOrder:(id)arg1 requestToken:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000013a3e8
- (void)showPendingUpdatesBadge;	// IMP=0x001000000013a3e2
- (void)setupFollowingMigration;	// IMP=0x001000000013a3dc
- (void)setAutoUpdateEnabled:(_Bool)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000013a2ff
- (void)reloadUpdatesWithContext:(id)arg1;	// IMP=0x001000000013a24d
- (void)reloadManagedUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000013a1df
- (void)reloadFromServerWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000013a176
- (void)reloadFromServerInBackgroundWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000013a108
- (void)refreshUpdateCountWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000013a09f
- (void)reloadApplicationBadgeWithReason:(id)arg1;	// IMP=0x001000000013a099
- (void)performPostRestoreUpdatesCheck;	// IMP=0x001000000013a093
- (void)performBackgroundSoftwareUpdateCheck;	// IMP=0x001000000013a08d
- (void)postProcessBackgroundUpdateMetrics;	// IMP=0x001000000013a087
- (void)noteUpdatesStateChangedWithReason:(id)arg1 logKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000013a07c
- (void)noteUpdatesStateChanged:(id)arg1 logKey:(id)arg2;	// IMP=0x001000000013a067
- (void)hidePendingUpdatesBadge;	// IMP=0x001000000013a061
- (void)getUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000013a04c
- (void)getUpdateMetadataForBundleID:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000013a03c
- (void)getUpdatesWithContext:(id)arg1;	// IMP=0x0010000000139f8a
- (void)getManagedUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000139f1c
- (void)confirmAgentRequestedUpdateAll:(CDUnknownBlockType)arg1;	// IMP=0x0010000000139f06
- (void)autoUpdateEnabled:(CDUnknownBlockType)arg1;	// IMP=0x0010000000139ec1
- (void)isTVProviderApp:(long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000139eb1
- (id)init;	// IMP=0x0010000000139d2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;

@end

