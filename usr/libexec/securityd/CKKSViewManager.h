//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSCondition, CKKSLockStateTracker, CKKSRateLimiter, CKKSReachabilityTracker, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSXPCListener, TPSyncingPolicy;
@protocol OTAccountsAdapter, OTPersonaAdapter, OTSOSAdapter;

@interface CKKSViewManager : NSObject
{
    CKContainer *_container;	// 8 = 0x8
    CKKSAccountStateTracker *_accountTracker;	// 16 = 0x10
    CKKSLockStateTracker *_lockStateTracker;	// 24 = 0x18
    CKKSReachabilityTracker *_reachabilityTracker;	// 32 = 0x20
    id <OTPersonaAdapter> _personaAdapter;	// 40 = 0x28
    CKKSCondition *_completedSecCKKSInitialize;	// 48 = 0x30
    CKKSRateLimiter *_globalRateLimiter;	// 56 = 0x38
    id <OTSOSAdapter> _sosPeerAdapter;	// 64 = 0x40
    id <OTAccountsAdapter> _accountsAdapter;	// 72 = 0x48
    NSXPCListener *_listener;	// 80 = 0x50
    NSSet *_viewAllowList;	// 88 = 0x58
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 96 = 0x60
    NSMutableDictionary *_pendingSyncCallbacks;	// 104 = 0x68
    NSOperationQueue *_operationQueue;	// 112 = 0x70
    TPSyncingPolicy *_policy;	// 120 = 0x78
    CKKSCondition *_policyLoaded;	// 128 = 0x80
}

+ (id)manager;	// IMP=0x002000000010da2f
+ (void)callSyncCallbackWithErrorNoAccount:(CDUnknownBlockType)arg1;	// IMP=0x001000000010d9a8
- (void).cxx_destruct;	// IMP=0x002000000010bb99
@property(retain) CKKSCondition *policyLoaded; // @synthesize policyLoaded=_policyLoaded;
@property(retain) TPSyncingPolicy *policy; // @synthesize policy=_policy;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSMutableDictionary *pendingSyncCallbacks; // @synthesize pendingSyncCallbacks=_pendingSyncCallbacks;
@property(retain) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property(retain) NSSet *viewAllowList; // @synthesize viewAllowList=_viewAllowList;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) id <OTAccountsAdapter> accountsAdapter; // @synthesize accountsAdapter=_accountsAdapter;
@property(retain) id <OTSOSAdapter> sosPeerAdapter; // @synthesize sosPeerAdapter=_sosPeerAdapter;
@property(retain) CKKSRateLimiter *globalRateLimiter; // @synthesize globalRateLimiter=_globalRateLimiter;
@property(retain) CKKSCondition *completedSecCKKSInitialize; // @synthesize completedSecCKKSInitialize=_completedSecCKKSInitialize;
@property(retain) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(retain) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain) CKKSAccountStateTracker *accountTracker; // @synthesize accountTracker=_accountTracker;
@property(retain) CKContainer *container; // @synthesize container=_container;
- (void)dropAllActors;	// IMP=0x001000000010b925
- (void)haltAll;	// IMP=0x001000000010b8e1
- (void)xpc24HrNotification;	// IMP=0x001000000010b731
- (void)pcsMirrorKeysForServices:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000010b536
- (void)toggleHavoc:(CDUnknownBlockType)arg1;	// IMP=0x001000000010b29c
- (void)deleteSEView:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000010aecd
- (void)modifyTLKSharesForSEView:(id)arg1 adding:(id)arg2 deleting:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000010aac7
- (void)fetchSEViewKeyHierarchy:(id)arg1 forceFetch:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000010a6d3
- (void)proposeTLKForSEView:(id)arg1 proposedTLK:(id)arg2 wrappedOldTLK:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000010a2a1
- (id)sanitizeErrorDomain:(id)arg1;	// IMP=0x001000000010a178
- (void)rpcCKMetric:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000109f1f
- (void)rpcGetCKDeviceIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000109dc6
- (void)rpcPushOutgoingChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000010985a
- (void)rpcFetchAndProcessChanges:(id)arg1 classA:(_Bool)arg2 onlyIfNoRecentFetch:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001091de
- (void)rpcStatus:(id)arg1 fast:(_Bool)arg2 waitForNonTransientState:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000108ef8
- (void)rpcResyncLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000108a68
- (void)rpcResync:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000010859c
- (void)rpcResetCloudKit:(id)arg1 reason:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000108297
- (void)rpcResetLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000107f92
- (void)performanceCounters:(CDUnknownBlockType)arg1;	// IMP=0x0010000000107f7d
- (id)currentTLKsFilteredByPolicy:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000010774f
- (void)syncBackupAndNotifyAboutSync;	// IMP=0x00100000001076ac
- (void)notifyNewTLKsInKeychain;	// IMP=0x001000000010762d
- (void)getCurrentItemForAccessGroup:(id)arg1 identifier:(id)arg2 viewHint:(id)arg3 fetchCloudValue:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x00100000001073d8
- (void)setCurrentItemForAccessGroup:(id)arg1 hash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 viewHint:(id)arg5 replacing:(id)arg6 hash:(id)arg7 complete:(CDUnknownBlockType)arg8;	// IMP=0x0010000000107119
- (id)defaultViewError;	// IMP=0x0010000000107017
- (void)handleKeychainEventDbConnection:(struct __OpaqueSecDbConnection *)arg1 source:(unsigned long long)arg2 added:(struct SecDbItem *)arg3 deleted:(struct SecDbItem *)arg4;	// IMP=0x001000000010662a
- (void)cloudkitAccountStateChange:(id)arg1 to:(id)arg2;	// IMP=0x001000000010627a
- (id)pendingCallbackUUIDs;	// IMP=0x00100000001061b6
- (_Bool)peekCallbackForUUID:(id)arg1;	// IMP=0x00100000001060c7
- (CDUnknownBlockType)claimCallbackForUUID:(id)arg1;	// IMP=0x0010000000105f22
- (void)registerSyncStatusCallback:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0010000000105dbf
- (id)restartCKKSAccountSyncWithoutSettingPolicy:(id)arg1;	// IMP=0x0010000000105d38
- (id)ckksAccountSyncForContainer:(id)arg1 contextID:(id)arg2;	// IMP=0x0010000000105c3b
- (id)restartCKKSAccountSync:(id)arg1;	// IMP=0x0010000000105ba6
- (void)lockStateChangeNotification:(_Bool)arg1;	// IMP=0x0010000000105b22
- (id)getGlobalRateLimiter;	// IMP=0x0010000000105a1e
- (void)setupAnalytics;	// IMP=0x0010000000105657
- (_Bool)waitForTrustReady;	// IMP=0x00100000001055c5
- (_Bool)allowClientRPC:(id *)arg1;	// IMP=0x0010000000105494
- (id)initWithContainer:(id)arg1 sosAdapter:(id)arg2 accountStateTracker:(id)arg3 lockStateTracker:(id)arg4 reachabilityTracker:(id)arg5 personaAdapter:(id)arg6 cloudKitClassDependencies:(id)arg7 accountsAdapter:(id)arg8;	// IMP=0x00100000001051f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
