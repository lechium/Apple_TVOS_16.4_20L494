//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GCControllerCBDelegate : NSObject
{
    NSMutableArray *_foundPeripherals;	// 8 = 0x8
    NSMutableArray *_connectedPeripherals;	// 16 = 0x10
    CBCentralManager *_centralManager;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000008a995
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000000008a86d
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000000008a779
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;	// IMP=0x000000000008a39b
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x0000000000089fdc
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x0000000000089dd6
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x000000000008937c
- (void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3;	// IMP=0x0000000000089170
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x0000000000088f3b
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x0000000000088d5b
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x0000000000088ba6
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;	// IMP=0x0000000000088afb
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;	// IMP=0x0000000000088a50
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x0000000000088826
- (void)startScanWithTimeout:(double)arg1;	// IMP=0x0000000000088472
- (void)startScan;	// IMP=0x0000000000088458
- (void)stopScan;	// IMP=0x00000000000883d3
- (void)fireCompletionHandler;	// IMP=0x0000000000088322
- (id)init;	// IMP=0x00000000000882ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

