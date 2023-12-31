//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/SCROBrailleDisplayManager.h>

@class RadiosPreferences;

@interface MSCRODBrailleDisplayManager : SCROBrailleDisplayManager
{
    struct {
        unsigned int rootPort;
        struct IONotificationPort *notifyPortRef;
        unsigned int notifierObject;
    } _sleepWake;	// 224 = 0xe0
    int _notifyLockStateToken;	// 248 = 0xf8
    int _blankScreenToken;	// 252 = 0xfc
    int _keybagLockStateToken;	// 256 = 0x100
    _Bool _isInDisconnectedState;	// 260 = 0x104
    _Bool _isScreenBlank;	// 261 = 0x105
    _Bool _isScreenUILocked;	// 262 = 0x106
    _Bool _airplaneMode;	// 263 = 0x107
    _Bool _isBrailleSystemSleeping;	// 264 = 0x108
    RadiosPreferences *_radiosPrefs;	// 272 = 0x110
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0020000000001f74
+ (void)initialize;	// IMP=0x0010000000001f1d
+ (id)sharedManager;	// IMP=0x0010000000001f0c
- (void).cxx_destruct;	// IMP=0x0020000000006f29
@property(nonatomic) _Bool isBrailleSystemSleeping; // @synthesize isBrailleSystemSleeping=_isBrailleSystemSleeping;
@property(retain, nonatomic) RadiosPreferences *radiosPrefs; // @synthesize radiosPrefs=_radiosPrefs;
@property(nonatomic) _Bool airplaneMode; // @synthesize airplaneMode=_airplaneMode;
- (id)brailleInputManager;	// IMP=0x0010000000006eab
- (id)newBrailleDisplayCommandDispatcher;	// IMP=0x0010000000006e8a
- (void)airplaneModeChanged;	// IMP=0x0010000000006d9f
- (void)_registerHasBlankedScreenNotification;	// IMP=0x00100000000066e6
- (void)_updateScreenUILock:(int)arg1 screenBlank:(int)arg2;	// IMP=0x001000000000618e
- (void)_handleSystemSleep;	// IMP=0x0010000000006170
- (void)_delayedHandleSystemSleep;	// IMP=0x0010000000005da8
- (void)_wakeFromSleep;	// IMP=0x0010000000005d8a
- (void)_delayedWakeFromSleep;	// IMP=0x0010000000005d67
- (void)_reallyDelayedWakeFromSleep;	// IMP=0x0010000000005b33
- (_Bool)_hasUserInteractedWithDeviceRecently;	// IMP=0x0010000000005a64
- (void)setLastUserInteractionTime:(double)arg1;	// IMP=0x00100000000058c0
- (unsigned int)_rootPowerPort;	// IMP=0x00100000000058b0
- (_Bool)_registerSleepNotifications;	// IMP=0x0010000000005764
- (_Bool)isConfigured;	// IMP=0x0010000000005627
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;	// IMP=0x00100000000055b7
- (id)driverConfiguration;	// IMP=0x001000000000546e
- (void)_removeBluetoothDriverWithIOElement:(id)arg1 removeFromPreferences:(_Bool)arg2;	// IMP=0x00100000000048a2
- (void)_removeBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000004815
- (void)removeBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000004711
- (void)_loadBluetoothDriverFromPreferences;	// IMP=0x0010000000003da5
- (void)_loadBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000002bc0
- (void)loadBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000002ba1
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;	// IMP=0x0010000000002ae9
- (void)_delayedPowerChangedNotification:(id)arg1;	// IMP=0x00100000000028c5
- (void)powerChangedNotification:(id)arg1;	// IMP=0x00100000000028a6
- (void)_setupBluetooth;	// IMP=0x00100000000027d3
- (void)_eventQueue_setShowEightDotBraille:(_Bool)arg1;	// IMP=0x0010000000002771
- (void)_eventQueue_setContractionMode:(int)arg1;	// IMP=0x0010000000002710
- (void)_eventQueue_setMasterStatusCellIndex:(long long)arg1;	// IMP=0x0010000000002689
- (void)_eventQueue_setVirtualStatusAlignment:(int)arg1;	// IMP=0x0010000000002602
- (void)invalidate;	// IMP=0x00100000000025c1
- (void)_eventQueue_begin;	// IMP=0x00100000000024ba
- (void)handleSettingsChange:(id)arg1;	// IMP=0x00100000000023c8
- (id)init;	// IMP=0x0010000000001fb1

@end

