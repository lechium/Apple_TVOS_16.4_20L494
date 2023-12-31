//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDatabase, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSLaunchSequence, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSReachabilityTracker, CKKSZoneModifier, CKOperationGroup, NSArray, NSHashTable, NSMutableSet, NSSet, NSString, TPSpecificUser, TPSyncingPolicy;
@protocol CKKSDatabaseProviderProtocol, OTPersonaAdapter, OctagonStateFlagHandler;

@interface CKKSOperationDependencies : NSObject
{
    _Bool _limitOperationToPriorityViewsSet;	// 8 = 0x8
    NSSet *_allPriorityViews;	// 16 = 0x10
    NSSet *_allViews;	// 24 = 0x18
    NSString *_contextID;	// 32 = 0x20
    TPSpecificUser *_activeAccount;	// 40 = 0x28
    id <OTPersonaAdapter> _personaAdapter;	// 48 = 0x30
    NSMutableSet *_currentFetchReasons;	// 56 = 0x38
    CKOperationGroup *_ckoperationGroup;	// 64 = 0x40
    CKDatabase *_ckdatabase;	// 72 = 0x48
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 80 = 0x50
    CKOperationGroup *_currentOutgoingQueueOperationGroup;	// 88 = 0x58
    id <OctagonStateFlagHandler> _flagHandler;	// 96 = 0x60
    CKKSLaunchSequence *_overallLaunch;	// 104 = 0x68
    CKKSAccountStateTracker *_accountStateTracker;	// 112 = 0x70
    CKKSLockStateTracker *_lockStateTracker;	// 120 = 0x78
    CKKSReachabilityTracker *_reachabilityTracker;	// 128 = 0x80
    NSArray *_peerProviders;	// 136 = 0x88
    TPSyncingPolicy *_syncingPolicy;	// 144 = 0x90
    id <CKKSDatabaseProviderProtocol> _databaseProvider;	// 152 = 0x98
    CKKSZoneModifier *_zoneModifier;	// 160 = 0xa0
    CKKSNearFutureScheduler *_savedTLKNotifier;	// 168 = 0xa8
    CKKSNearFutureScheduler *_requestPolicyCheck;	// 176 = 0xb0
    NSHashTable *_keysetProviderOperations;	// 184 = 0xb8
    NSSet *_viewsOverride;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00200000000a1bab
@property _Bool limitOperationToPriorityViewsSet; // @synthesize limitOperationToPriorityViewsSet=_limitOperationToPriorityViewsSet;
@property(retain) NSSet *viewsOverride; // @synthesize viewsOverride=_viewsOverride;
@property(retain) NSHashTable *keysetProviderOperations; // @synthesize keysetProviderOperations=_keysetProviderOperations;
@property(retain) CKKSNearFutureScheduler *requestPolicyCheck; // @synthesize requestPolicyCheck=_requestPolicyCheck;
@property(readonly) CKKSNearFutureScheduler *savedTLKNotifier; // @synthesize savedTLKNotifier=_savedTLKNotifier;
@property(retain) CKKSZoneModifier *zoneModifier; // @synthesize zoneModifier=_zoneModifier;
@property(readonly) id <CKKSDatabaseProviderProtocol> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(retain) TPSyncingPolicy *syncingPolicy; // @synthesize syncingPolicy=_syncingPolicy;
@property(retain) NSArray *peerProviders; // @synthesize peerProviders=_peerProviders;
@property(readonly) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(readonly) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(readonly) CKKSAccountStateTracker *accountStateTracker; // @synthesize accountStateTracker=_accountStateTracker;
@property(readonly) CKKSLaunchSequence *overallLaunch; // @synthesize overallLaunch=_overallLaunch;
@property(readonly) id <OctagonStateFlagHandler> flagHandler; // @synthesize flagHandler=_flagHandler;
@property(retain) CKOperationGroup *currentOutgoingQueueOperationGroup; // @synthesize currentOutgoingQueueOperationGroup=_currentOutgoingQueueOperationGroup;
@property(retain) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property(retain) CKDatabase *ckdatabase; // @synthesize ckdatabase=_ckdatabase;
@property(retain) CKOperationGroup *ckoperationGroup; // @synthesize ckoperationGroup=_ckoperationGroup;
@property(readonly) NSMutableSet *currentFetchReasons; // @synthesize currentFetchReasons=_currentFetchReasons;
@property(retain) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(retain) TPSpecificUser *activeAccount; // @synthesize activeAccount=_activeAccount;
@property(readonly) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain) NSSet *allViews; // @synthesize allViews=_allViews;
@property(retain) NSSet *allPriorityViews; // @synthesize allPriorityViews=_allPriorityViews;
- (id)keychainMusrForCurrentAccount;	// IMP=0x00100000000a17a7
- (id)viewNameForItem:(struct SecDbItem *)arg1;	// IMP=0x00100000000a159f
- (_Bool)intransactionCKWriteFailed:(id)arg1 attemptedRecordsChanged:(id)arg2;	// IMP=0x00100000000a0560
- (_Bool)intransactionCKRecordDeleted:(id)arg1 recordType:(id)arg2 resync:(_Bool)arg3;	// IMP=0x00100000000a0030
- (_Bool)intransactionCKRecordChanged:(id)arg1 resync:(_Bool)arg2;	// IMP=0x001000000009f6be
- (void)provideKeySets:(id)arg1;	// IMP=0x001000000009f39c
- (_Bool)considerSelfTrusted:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009f0e8
- (id)currentTrustStates;	// IMP=0x001000000009eeaa
- (void)applyNewSyncingPolicy:(id)arg1 viewStates:(id)arg2;	// IMP=0x001000000009ebf4
- (id)readyAndSyncingViews;	// IMP=0x001000000009e8d9
- (id)viewStateForName:(id)arg1;	// IMP=0x001000000009e6c9
- (id)viewStatesByNames:(id)arg1;	// IMP=0x001000000009e47e
- (id)viewsInState:(id)arg1;	// IMP=0x001000000009e271
- (void)limitOperationToPriorityViews;	// IMP=0x001000000009e1a4
- (void)operateOnAllViews;	// IMP=0x001000000009e0c7
- (void)operateOnSelectViews:(id)arg1;	// IMP=0x001000000009dfdf
- (void)setStateForAllViews:(id)arg1;	// IMP=0x001000000009de8e
- (void)setStateForActiveExternallyManagedViews:(id)arg1;	// IMP=0x001000000009dd08
- (void)setStateForActiveCKKSManagedViews:(id)arg1;	// IMP=0x001000000009db82
- (void)setStateForActiveZones:(id)arg1;	// IMP=0x001000000009da31
@property(readonly) NSSet *allExternalManagedViews;
@property(readonly) NSSet *allCKKSManagedViews;
@property(readonly) NSSet *activeManagedViews;
@property(readonly) NSSet *views;
- (id)initWithViewStates:(id)arg1 contextID:(id)arg2 activeAccount:(id)arg3 zoneModifier:(id)arg4 ckdatabase:(id)arg5 cloudKitClassDependencies:(id)arg6 ckoperationGroup:(id)arg7 flagHandler:(id)arg8 overallLaunch:(id)arg9 accountStateTracker:(id)arg10 lockStateTracker:(id)arg11 reachabilityTracker:(id)arg12 peerProviders:(id)arg13 databaseProvider:(id)arg14 savedTLKNotifier:(id)arg15 personaAdapter:(id)arg16;	// IMP=0x001000000009d1d3

@end

