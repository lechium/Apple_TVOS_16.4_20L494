//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUCoalescer, CUSystemMonitor, NSArray, NSMutableArray, NSString, RPIdentity;
@protocol OS_dispatch_queue;

@interface RPIdentityDaemon : NSObject
{
    int _homeViewChangeToken;	// 8 = 0x8
    int _homeViewReadyToken;	// 12 = 0xc
    CUCoalescer *_identitiesChangedCoalescer;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    _Bool _invalidateDone;	// 25 = 0x19
    unsigned long long _keychainRefetchTicks;	// 32 = 0x20
    NSArray *_pairedDeviceIdentities;	// 40 = 0x28
    int _pairedDevicesNotifier;	// 48 = 0x30
    _Bool _prefFamilyResolve;	// 52 = 0x34
    _Bool _prefFriendResolve;	// 53 = 0x35
    _Bool _prefOwnerResolve;	// 54 = 0x36
    _Bool _prefPairedResolve;	// 55 = 0x37
    _Bool _prefSharedHomeResolve;	// 56 = 0x38
    NSArray *_sameAccountDeviceIdentities;	// 64 = 0x40
    RPIdentity *_selfIdentityCache;	// 72 = 0x48
    NSMutableArray *_sharedHomeDeviceIdentities;	// 80 = 0x50
    NSMutableArray *_sharedHomeExtraDeviceIdentities;	// 88 = 0x58
    CUSystemMonitor *_systemMonitor;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 104 = 0x68
    RPIdentity *_homeKitIdentity;	// 112 = 0x70
}

+ (id)sharedIdentityDaemon;	// IMP=0x0020000000049730
- (void).cxx_destruct;	// IMP=0x0020000000052e76
@property(retain, nonatomic) RPIdentity *homeKitIdentity; // @synthesize homeKitIdentity=_homeKitIdentity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (unsigned int)_updateSelfIdentityPublic:(id)arg1 privateIdentity:(id)arg2;	// IMP=0x00100000000526e8
- (unsigned int)_updateSelfIdentityPrivate:(id)arg1 create:(_Bool)arg2;	// IMP=0x00100000000521ba
- (void)_removeSelfIdentityPublicWithPrivateIdentity:(id)arg1;	// IMP=0x0010000000051f5e
- (void)_saveSelfIdentityPublicWithPrivateIdentity:(id)arg1 force:(_Bool)arg2;	// IMP=0x00100000000518b1
- (void)_saveSelfIdentityPrivate:(id)arg1;	// IMP=0x0010000000051637
- (void)_loadSelfIdentity:(_Bool)arg1;	// IMP=0x00100000000511ca
- (void)_updateSameAccountIdentities;	// IMP=0x00100000000508c4
- (void)_updatePairedDeviceIdentities;	// IMP=0x0010000000050196
- (void)_triggerKeychainRefetch;	// IMP=0x001000000004ff8c
- (void)_postIdentitiesChangedNotification;	// IMP=0x001000000004fe90
- (void)_ensureStopped;	// IMP=0x001000000004fd39
- (void)_ensureStarted;	// IMP=0x001000000004f906
- (_Bool)saveIdentityWithIDSDeviceID:(id)arg1 message:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004f593
- (_Bool)saveIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f257
- (_Bool)removeIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004ef7f
- (void)addSharedHomeIdentityWithRPMessage:(id)arg1;	// IMP=0x001000000004e98f
- (void)addSelfIdentityInfoToMessage:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x001000000004e674
- (void)getPairedIdentityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004e38f
- (id)identityOfSelfAndReturnError:(id *)arg1;	// IMP=0x001000000004e250
- (id)_identitiesOfType:(int)arg1 error:(id *)arg2;	// IMP=0x001000000004d650
- (id)identitiesOfType:(int)arg1 error:(id *)arg2;	// IMP=0x001000000004d5c1
- (unsigned int)resolveIdentityTypesForSignature:(id)arg1 data:(id)arg2 typeFlags:(unsigned int)arg3;	// IMP=0x001000000004d124
- (id)resolveIdentityForSignature:(id)arg1 data:(id)arg2 typeFlags:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x001000000004c992
- (id)resolveIdentityForBonjourDevice:(id)arg1 typeFlags:(unsigned int)arg2;	// IMP=0x001000000004bd1a
- (id)resolveIdentitiesForBonjourDevice:(id)arg1 typeFlags:(unsigned int)arg2;	// IMP=0x001000000004bc5b
- (void)resolvableAccessoriesUpdated:(id)arg1;	// IMP=0x001000000004b27e
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x001000000004b245
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b23d
- (void)_update;	// IMP=0x001000000004b22b
- (void)regenerateSelfIdentity:(id)arg1;	// IMP=0x001000000004b19f
- (void)prefsChanged;	// IMP=0x001000000004ae8f
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x001000000004ab74
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x001000000004aa05
- (void)_invalidated;	// IMP=0x001000000004a990
- (void)_invalidate;	// IMP=0x001000000004a8e8
- (void)invalidate;	// IMP=0x001000000004a887
- (void)_activate;	// IMP=0x001000000004a736
- (void)activate;	// IMP=0x001000000004a6d5
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0010000000049804
- (id)init;	// IMP=0x0010000000049785

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

