//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface SYDDaemon : NSObject
{
    _Bool _initializingSyncManagers;	// 8 = 0x8
    NSXPCListener *_xpcListener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableSet *_clientConnections;	// 32 = 0x20
    NSMutableDictionary *_syncManagersByPersona;	// 40 = 0x28
}

+ (id)containerForStoreType:(long long)arg1 containerID:(id)arg2;	// IMP=0x00200000000064ad
- (void).cxx_destruct;	// IMP=0x0020000000007671
@property(retain, nonatomic) NSMutableDictionary *syncManagersByPersona; // @synthesize syncManagersByPersona=_syncManagersByPersona;
@property(retain, nonatomic) NSMutableSet *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(nonatomic, getter=isInitializingSyncManagers) _Bool initializingSyncManagers; // @synthesize initializingSyncManagers=_initializingSyncManagers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void)sendAnalyticsEventForCurrentState;	// IMP=0x0010000000006b42
- (void)registerForPeriodAnalyticsXPCActivity;	// IMP=0x001000000000694f
- (id)allStoreIdentifiersWithError:(id *)arg1;	// IMP=0x0010000000006598
- (void)removeInvalidSyncManagers;	// IMP=0x0010000000006021
- (void)initializeKnownSyncManagers;	// IMP=0x0010000000005ccd
- (id)syncManagerForStoreType:(long long)arg1 containerID:(id)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x0010000000005386
- (id)syncManagerForStoreType:(long long)arg1 containerID:(id)arg2;	// IMP=0x001000000000536e
- (id)syncManagerForStoreType:(long long)arg1 environment:(long long)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x0010000000005307
- (id)syncManagerForStoreType:(long long)arg1 environment:(long long)arg2;	// IMP=0x00100000000052ef
- (id)applicationIdentifiersForStoreIdentifiers:(id)arg1;	// IMP=0x0010000000004ce4
- (_Bool)syncManager:(id)arg1 shouldSyncStoreWithIdentifier:(id)arg2;	// IMP=0x0010000000004c69
- (void)_processAccountChanges;	// IMP=0x001000000000410e
- (void)processAccountChanges;	// IMP=0x0010000000004087
- (void)connectionDidInvalidate:(id)arg1;	// IMP=0x0010000000003f4c
- (id)connection:(id)arg1 syncManagerForStoreID:(id)arg2;	// IMP=0x0010000000003d68
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000003b54
@property(readonly, nonatomic) ACAccountStore *accountStore;
- (id)_queue_allSyncManagers;	// IMP=0x001000000000399b
- (id)allSyncManagers;	// IMP=0x0010000000003841
- (void)start;	// IMP=0x001000000000373d
- (id)initWithInitialStoreCreation:(_Bool)arg1;	// IMP=0x001000000000366d
- (id)init;	// IMP=0x0010000000003656

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

