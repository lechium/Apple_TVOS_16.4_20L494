//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSContinuity, NSData, NSDictionary, NSMutableSet, NSObject, NSString, NSTimer, SDStatusMonitor;
@protocol OS_os_transaction;

@interface SDActivityAdvertiser
{
    unsigned char _versionByte;	// 8 = 0x8
    SDStatusMonitor *_monitor;	// 16 = 0x10
    IDSContinuity *_continuity;	// 24 = 0x18
    double _goodbyeTimerInterval;	// 32 = 0x20
    NSTimer *_goodbyeTimer;	// 40 = 0x28
    NSMutableSet *_shouldNotAdvertiseRequesters;	// 48 = 0x30
    _Bool _advertisingEnabled;	// 56 = 0x38
    _Bool _isAdvertising;	// 57 = 0x39
    NSObject<OS_os_transaction> *_advertisingTransaction;	// 64 = 0x40
    NSData *_rawAdvertisementData;	// 72 = 0x48
    NSData *_advertisementData;	// 80 = 0x50
    unsigned int _powerAssertionID;	// 88 = 0x58
    NSData *_currentAdvertisementPayload;	// 96 = 0x60
    NSDictionary *_currentAdvertisementOptions;	// 104 = 0x68
    CDUnknownBlockType _currentErrorHandler;	// 112 = 0x70
}

+ (id)sharedAdvertiser;	// IMP=0x00200000000516c8
- (void).cxx_destruct;	// IMP=0x0020000000054deb
@property(readonly, nonatomic) _Bool isAdvertising; // @synthesize isAdvertising=_isAdvertising;
- (void)pairedSFPeerDevicesWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000549c8
- (void)peerForUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054777
- (void)loginIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054697
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2 withErrorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000541c8
- (void)continuity:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;	// IMP=0x001000000005401e
- (void)continuity:(id)arg1 didStopAdvertisingOfType:(long long)arg2 withError:(id)arg3;	// IMP=0x0010000000053f2a
- (void)continuity:(id)arg1 continuityDidStopAdvertisingOfType:(long long)arg2 withError:(id)arg3;	// IMP=0x0010000000053f18
- (void)continuity:(id)arg1 didStopAdvertisingOfType:(long long)arg2;	// IMP=0x0010000000053df2
- (void)continuity:(id)arg1 didStartAdvertisingOfType:(long long)arg2;	// IMP=0x0010000000053ccc
- (void)continuityDidUpdateState:(id)arg1;	// IMP=0x0010000000053a5c
- (id)encryptedAdvertisingInformation;	// IMP=0x00100000000537f8
- (id)createAdvertisingInformation;	// IMP=0x0010000000053638
- (_Bool)updateAdvertiser;	// IMP=0x00100000000535ca
- (void)goodbyeTimeoutFired:(id)arg1;	// IMP=0x0010000000053559
- (void)invalidateGoodbyeTimer;	// IMP=0x00100000000534d9
- (void)startGoodbyeTimer;	// IMP=0x00100000000533b3
- (void)releaseIdleSleepAssertion;	// IMP=0x001000000005332d
- (void)preventIdleSleepAssertion;	// IMP=0x001000000005319e
- (void)consoleUserChanged:(id)arg1;	// IMP=0x00100000000530df
- (void)systemWillSleep:(id)arg1;	// IMP=0x001000000005303c
- (void)resetStateRequested:(id)arg1;	// IMP=0x001000000005302a
- (void)removeObservers;	// IMP=0x0010000000052fd7
- (void)addObservers;	// IMP=0x0010000000052f4e
@property(readonly) NSString *state;
- (void)activityPayloadForAdvertisementPayload:(id)arg1 command:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000052a9c
- (void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3;	// IMP=0x0010000000052941
- (void)connectionInvalidated:(id)arg1;	// IMP=0x00100000000528a8
- (void)connectionEstablished:(id)arg1;	// IMP=0x0010000000052867
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x001000000005285f
- (id)remoteObjectInterface;	// IMP=0x0010000000052703
- (id)exportedInterface;	// IMP=0x001000000005253a
- (id)machServiceName;	// IMP=0x001000000005252d
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000005251b
- (void)_remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000052509
- (void)activityServiceDevicesChanged:(id)arg1;	// IMP=0x00100000000520e8
- (void)resumeForReason:(id)arg1;	// IMP=0x0010000000051fa7
- (void)stopForReason:(id)arg1;	// IMP=0x0010000000051e7b
- (void)stop;	// IMP=0x0010000000051df9
- (_Bool)restart;	// IMP=0x001000000005193f
- (void)start;	// IMP=0x0010000000051939
- (id)init;	// IMP=0x0010000000051769

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
