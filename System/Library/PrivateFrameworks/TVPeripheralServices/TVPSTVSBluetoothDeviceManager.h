//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable, NSSet, NSString, TVPSBluetoothDeviceManagerConfiguration;
@protocol OS_dispatch_queue_serial, TVPSBluetoothDeviceManagingPairingDelegate;

__attribute__((visibility("hidden")))
@interface TVPSTVSBluetoothDeviceManager : NSObject
{
    TVPSBluetoothDeviceManagerConfiguration *_configuration;	// 8 = 0x8
    id <TVPSBluetoothDeviceManagingPairingDelegate> _pairingDelegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue_serial> *_accessQueue;	// 24 = 0x18
    NSHashTable *_pairedDevicesObservers;	// 32 = 0x20
    NSHashTable *_pairableDevicesObservers;	// 40 = 0x28
    NSDictionary *_pairedDevicesDictionary;	// 48 = 0x30
    NSDictionary *_pairableDevicesDictionary;	// 56 = 0x38
    NSDictionary *_backingDevicesDictionary;	// 64 = 0x40
}

+ (id)_processNewBackingDevices:(id)arg1 currentDevicesDictionary:(id)arg2 devicesUpdate:(id *)arg3;	// IMP=0x001000000000be90
- (void).cxx_destruct;	// IMP=0x000000000000c980
@property(retain, nonatomic) NSDictionary *backingDevicesDictionary; // @synthesize backingDevicesDictionary=_backingDevicesDictionary;
@property(retain, nonatomic) NSDictionary *pairableDevicesDictionary; // @synthesize pairableDevicesDictionary=_pairableDevicesDictionary;
@property(retain, nonatomic) NSDictionary *pairedDevicesDictionary; // @synthesize pairedDevicesDictionary=_pairedDevicesDictionary;
@property(readonly, nonatomic) NSHashTable *pairableDevicesObservers; // @synthesize pairableDevicesObservers=_pairableDevicesObservers;
@property(readonly, nonatomic) NSHashTable *pairedDevicesObservers; // @synthesize pairedDevicesObservers=_pairedDevicesObservers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue_serial> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) TVPSBluetoothDeviceManagerConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_backingDeviceForDevice:(id)arg1;	// IMP=0x000000000000b850
- (id)_deviceForBackingDevice:(id)arg1;	// IMP=0x000000000000b770
- (void)_notifyPairableDevicesObserversWithUpdate:(id)arg1;	// IMP=0x000000000000b490
- (void)_notifyPairedDevicesObserversWithUpdate:(id)arg1;	// IMP=0x000000000000b1b0
- (void)_updateDeviceSets;	// IMP=0x000000000000a020
- (void)_performWorkOnCalloutQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009f00
- (void)_performBluetoothManagerDeviceWorkForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009c20
- (void)_performBluetoothManagerWorkWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009af0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000099d0
- (void)_handleBluetoothManagerDidUpdateNotification:(id)arg1;	// IMP=0x00000000000098c0
- (void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;	// IMP=0x00000000000096f0
- (void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;	// IMP=0x0000000000009520
- (void)bluetoothManager:(id)arg1 requestPairingPIN:(id)arg2;	// IMP=0x0000000000008e60
- (void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;	// IMP=0x0000000000008b10
- (void)bluetoothManagerDidUpdateDiscoveredDevices:(id)arg1;	// IMP=0x0000000000008a90
- (void)unpairDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000086d0
- (void)disconnectDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008310
- (void)connectDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007ef0
- (id)deviceForUniqueIdentifier:(id)arg1;	// IMP=0x0000000000007b40
- (void)removePairableDevicesObserver:(id)arg1;	// IMP=0x00000000000078c0
- (void)addPairableDevicesObserver:(id)arg1;	// IMP=0x0000000000007650
@property(readonly, copy, nonatomic) NSSet *pairableDevices;
@property(readonly, copy, nonatomic) NSSet *disconnectedPairedDevices;
@property(readonly, copy, nonatomic) NSSet *disconnectingPairedDevices;
@property(readonly, copy, nonatomic) NSSet *connectedPairedDevices;
@property(readonly, copy, nonatomic) NSSet *connectingPairedDevices;
- (void)removePairedDevicesObserver:(id)arg1;	// IMP=0x0000000000006f20
- (void)addPairedDevicesObserver:(id)arg1;	// IMP=0x0000000000006db0
@property(readonly, copy, nonatomic) NSSet *pairedDevices;
@property(nonatomic) __weak id <TVPSBluetoothDeviceManagingPairingDelegate> pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
- (void)dealloc;	// IMP=0x00000000000066f0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000006380
- (id)init;	// IMP=0x0000000000006340

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
