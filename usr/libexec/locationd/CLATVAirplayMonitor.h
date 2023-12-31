//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLTimer, NSMutableArray, NSMutableSet, NSString, WPAirPlaySolo;

@interface CLATVAirplayMonitor : CLIntersiloService
{
    _Bool _power;	// 8 = 0x8
    NSMutableSet *_clients;	// 16 = 0x10
    WPAirPlaySolo *_airplaySolo;	// 24 = 0x18
    CLTimer *_scanDeliveryDelayTimer;	// 32 = 0x20
    NSMutableArray *_bufferedDevices;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x00200000003792c6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000003792ad
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000379250
@property(retain, nonatomic) NSMutableArray *bufferedDevices; // @synthesize bufferedDevices=_bufferedDevices;
@property(retain, nonatomic) CLTimer *scanDeliveryDelayTimer; // @synthesize scanDeliveryDelayTimer=_scanDeliveryDelayTimer;
@property(nonatomic) _Bool power; // @synthesize power=_power;
@property(retain, nonatomic) WPAirPlaySolo *airplaySolo; // @synthesize airplaySolo=_airplaySolo;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;	// IMP=0x001000000037a2bf
- (void)airPlaySoloStoppedScanning:(id)arg1;	// IMP=0x001000000037a210
- (void)airPlaySoloStartedScanning:(id)arg1;	// IMP=0x001000000037a161
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;	// IMP=0x0010000000379c74
- (void)airPlaySoloDidUpdateState:(id)arg1;	// IMP=0x0010000000379c3a
- (void)sendBufferedScanNotifications;	// IMP=0x0010000000379b3e
- (void)stopScan;	// IMP=0x0010000000379b0b
- (void)startScan;	// IMP=0x0010000000379918
- (void)withClients:(CDUnknownBlockType)arg1;	// IMP=0x00100000003797fb
- (id)init;	// IMP=0x00100000003797be
- (void)getPowerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000379796
- (void)stopMonitoringDevicesForClient:(byref id)arg1;	// IMP=0x001000000037971b
- (void)startMonitoringDevicesForClient:(byref id)arg1;	// IMP=0x00100000003796d1
- (void)removeClient:(byref id)arg1;	// IMP=0x001000000037967a
- (void)addClient:(byref id)arg1;	// IMP=0x0010000000379623
- (void)dealloc;	// IMP=0x00100000003795e5
- (void)releaseData;	// IMP=0x001000000037957b
- (void)endService;	// IMP=0x0010000000379540
- (void)beginServiceWithAirPlaySolo:(id)arg1;	// IMP=0x0010000000379374
- (void)beginService;	// IMP=0x0010000000379322

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

