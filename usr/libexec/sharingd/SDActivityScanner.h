//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSContinuity, MISSING_TYPE, NSMutableDictionary, NSObject, NSString, SDStatusMonitor;
@protocol OS_os_transaction;

@interface SDActivityScanner
{
    unsigned long long _stateHandle;	// 8 = 0x8
    unsigned char _versionByte;	// 16 = 0x10
    SDStatusMonitor *_monitor;	// 24 = 0x18
    IDSContinuity *_continuity;	// 32 = 0x20
    unsigned long long _scanTypes;	// 40 = 0x28
    _Bool _scannerEnabled;	// 48 = 0x30
    _Bool _isScanning;	// 49 = 0x31
    NSObject<OS_os_transaction> *_scanningTransaction;	// 56 = 0x38
    MISSING_TYPE *_stopScanLostDeviceTimer;	// 64 = 0x40
    NSMutableDictionary *_deviceIdentifierToDeviceRecord;	// 72 = 0x48
    NSMutableDictionary *_deviceIdentifierToLostDeviceTimers;	// 80 = 0x50
}

+ (id)sharedScanner;	// IMP=0x002000000013cae4
- (void).cxx_destruct;	// IMP=0x0020000000140419
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001401dc
- (void)scanForTypes:(unsigned long long)arg1;	// IMP=0x00100000001400ac
- (void)didLosePeerTimer:(id)arg1;	// IMP=0x0010000000140005
- (void)lostAllDevices;	// IMP=0x001000000013fe1d
- (void)didLosePeer:(id)arg1;	// IMP=0x001000000013fb24
- (void)continuity:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4;	// IMP=0x001000000013fa3a
- (void)continuity:(id)arg1 didFailToStartScanningForType:(long long)arg2 withError:(id)arg3;	// IMP=0x001000000013f899
- (void)continuity:(id)arg1 didStopScanningForType:(long long)arg2;	// IMP=0x001000000013f7a8
- (void)continuity:(id)arg1 didStartScanningForType:(long long)arg2;	// IMP=0x001000000013f6d0
- (void)continuityDidUpdateState:(id)arg1;	// IMP=0x001000000013f42c
- (void)consoleUserChanged:(id)arg1;	// IMP=0x001000000013f32f
- (void)systemHasPoweredOn:(id)arg1;	// IMP=0x001000000013f26a
- (void)systemWillSleep:(id)arg1;	// IMP=0x001000000013f1c1
- (void)resetStateRequested:(id)arg1;	// IMP=0x001000000013f1af
- (void)removeObservers;	// IMP=0x001000000013f15c
- (void)addObservers;	// IMP=0x001000000013f093
- (id)state;	// IMP=0x001000000013ee58
- (struct os_state_data_s *)dumpState;	// IMP=0x001000000013eaca
- (void)initializeStateCaptureBlock;	// IMP=0x001000000013ea4a
- (void)connectionInvalidated:(id)arg1;	// IMP=0x001000000013e9b1
- (void)connectionEstablished:(id)arg1;	// IMP=0x001000000013e727
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x001000000013e71f
- (id)remoteObjectInterface;	// IMP=0x001000000013e5a0
- (id)exportedInterface;	// IMP=0x001000000013e580
- (id)machServiceName;	// IMP=0x001000000013e573
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000013e561
- (void)_remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000013e54f
- (void)handleNewAdvertisementDevice:(id)arg1 data:(id)arg2 receivedViaScanning:(_Bool)arg3 withSuccessHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000013ddbd
- (void)nearbyServiceDevicesChanged:(id)arg1;	// IMP=0x001000000013db79
- (void)activityServiceDevicesChanged:(id)arg1;	// IMP=0x001000000013d629
- (void)_createOSTransactionIfNeeded;	// IMP=0x001000000013d5ee
- (_Bool)restart;	// IMP=0x001000000013cd92
- (void)stop;	// IMP=0x001000000013cd4f
- (void)start;	// IMP=0x001000000013cd32
- (_Bool)shouldBoostScan;	// IMP=0x001000000013cd1d
- (_Bool)shouldScanForCopyPaste;	// IMP=0x001000000013cd09
- (_Bool)shouldScanForHandoff;	// IMP=0x001000000013ccf7
- (id)init;	// IMP=0x001000000013cb85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

