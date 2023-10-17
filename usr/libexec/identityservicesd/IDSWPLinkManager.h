//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSWPLinkManagerDelegate, WPContinuity;

@interface IDSWPLinkManager : NSObject
{
    id <WPContinuity> _continuity;	// 8 = 0x8
    _Bool _systemIsFastUserSwitched;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    MISSING_TYPE *_advertisingTypes;	// 32 = 0x20
    NSMutableSet *_scanningTypes;	// 40 = 0x28
    NSMutableDictionary *_linkIDToLink;	// 48 = 0x30
    NSMutableDictionary *_linkIDsConnecting;	// 56 = 0x38
    NSMutableDictionary *_linkIDsDisconnecting;	// 64 = 0x40
    NSMutableSet *_linkIDsAlwaysConnected;	// 72 = 0x48
    id <IDSWPLinkManagerDelegate> _delegate;	// 80 = 0x50
    NSHashTable *_connectivityDelegates;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x002000000025a620
- (void).cxx_destruct;	// IMP=0x0020000000261e90
- (void)sendReset;	// IMP=0x0010000000261e80
- (unsigned long long)sendData:(id)arg1 peerID:(id)arg2;	// IMP=0x00100000002619f0
- (void)removeLink:(id)arg1;	// IMP=0x0010000000261660
- (void)disconnectFromPeer:(id)arg1;	// IMP=0x0010000000261540
- (void)disconnectOnMainQueueFromPeer:(id)arg1;	// IMP=0x0010000000260c00
- (void)connectToPeer:(id)arg1;	// IMP=0x0010000000260ae0
- (void)connectOnMainQueueToPeer:(id)arg1;	// IMP=0x001000000025fac0
- (void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x001000000025fa70
- (void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x001000000025fa20
- (void)stopScanningForType:(long long)arg1;	// IMP=0x001000000025f620
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(_Bool)arg4 duplicates:(_Bool)arg5;	// IMP=0x001000000025ee10
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(_Bool)arg5 duplicates:(_Bool)arg6;	// IMP=0x001000000025e440
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3;	// IMP=0x001000000025dd80
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;	// IMP=0x001000000025d440
- (void)stopAdvertisingOfType:(long long)arg1;	// IMP=0x001000000025d040
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;	// IMP=0x001000000025c960
- (void)clientInstancesRemoved;	// IMP=0x001000000025bd90
- (void)clientInstanceCreatedWithMessageContext:(id)arg1;	// IMP=0x001000000025b810
- (void)setAlwaysConnectedForCBUUID:(id)arg1;	// IMP=0x001000000025b4c0
- (void)removeConnectivityDelegate:(id)arg1;	// IMP=0x001000000025b460
- (void)addConnectivityDelegate:(id)arg1;	// IMP=0x001000000025b0e0
- (_Bool)isScanningOrAdvertising;	// IMP=0x001000000025b060
- (void)setDelegateOnMainQueue:(id)arg1;	// IMP=0x001000000025aff0
- (void)setDelegate:(id)arg1;	// IMP=0x001000000025aed0
- (void)_checkWPContinuitySetup;	// IMP=0x001000000025aa40
- (id)init;	// IMP=0x001000000025a6e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

