//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/SCROBrailleDisplay.h>

@class NSMutableDictionary;

@interface MSCRODBluetoothBrailleDisplay : SCROBrailleDisplay
{
    struct __CFRunLoopTimer *_reconnectionEventTimer;	// 216 = 0xd8
    double _reconnectionInterval;	// 224 = 0xe0
    double _beganReconnectionInterval;	// 232 = 0xe8
    NSMutableDictionary *_bluetoothConnectedDevices;	// 240 = 0xf0
    _Bool _isReconnectionEnabled;	// 248 = 0xf8
    _Bool _isDriverLoading;	// 249 = 0xf9
    _Bool _isDriverDisconnected;	// 250 = 0xfa
}

+ (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 modelIdentifier:(id)arg3 mainSize:(id)arg4 statusSize:(id)arg5 inputMode:(id)arg6 delegate:(id)arg7 reconnectionEnabled:(_Bool)arg8;	// IMP=0x0040000000007400
+ (id)displayWithIOElement:(id)arg1 cachedInfo:(id)arg2 delegate:(id)arg3 reconnectionEnabled:(_Bool)arg4;	// IMP=0x00100000000071a3
+ (id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3 reconnectionEnabled:(_Bool)arg4;	// IMP=0x001000000000716a
+ (id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;	// IMP=0x001000000000712e
- (void).cxx_destruct;	// IMP=0x002000000000b400
- (id)configuration;	// IMP=0x001000000000acca
- (void)resetReconnectionTimer;	// IMP=0x001000000000acc4
- (void)_delayedDeviceUpdatedNotification:(id)arg1;	// IMP=0x001000000000ac85
- (void)connectionStatusChanged:(id)arg1;	// IMP=0x001000000000ac66
- (void)deviceUpdatedNotification:(id)arg1;	// IMP=0x001000000000ac47
- (void)_delayedRemoveDeviceNotification:(id)arg1;	// IMP=0x001000000000aa39
- (void)removeDeviceNotification:(id)arg1;	// IMP=0x001000000000aa1a
- (void)_delayedAddDeviceNotification:(id)arg1;	// IMP=0x001000000000a7a1
- (void)addDeviceNotification:(id)arg1;	// IMP=0x001000000000a5f8
- (void)addDeviceFailedNotification:(id)arg1;	// IMP=0x001000000000a472
- (void)_stopWatchingForDevices;	// IMP=0x001000000000a378
- (void)_startWatchingForDevices;	// IMP=0x001000000000a024
- (void)_reloadDriver;	// IMP=0x00100000000099b5
- (_Bool)requiresPersistentConnection;	// IMP=0x0010000000009953
- (void)_enableReconnectionTimer:(_Bool)arg1;	// IMP=0x00100000000097c8
- (void)_resetReconnectionTimer;	// IMP=0x001000000000970f
- (void)_reconnectionEventHandler;	// IMP=0x00100000000092ff
- (void)_unloadHandler;	// IMP=0x0010000000009145
- (void)_setupDriverSupport;	// IMP=0x0010000000008f5b
- (void)_runThread;	// IMP=0x0010000000008109
- (void)invalidate;	// IMP=0x0010000000007dd3
- (void)unsleep;	// IMP=0x0010000000007d47
- (void)sleep;	// IMP=0x0010000000007cbe
- (void)_delayedDisplayLoad;	// IMP=0x0010000000007ca0
- (void)dealloc;	// IMP=0x0010000000007c60
- (id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 modelIdentifier:(id)arg3 ioElement:(id)arg4 mainSize:(long long)arg5 statusSize:(long long)arg6 inputMode:(int)arg7 delegate:(id)arg8 reconnectionEnabled:(_Bool)arg9;	// IMP=0x0010000000007b8c
- (id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 ioElement:(id)arg3 delegate:(id)arg4;	// IMP=0x0010000000007b52

@end

