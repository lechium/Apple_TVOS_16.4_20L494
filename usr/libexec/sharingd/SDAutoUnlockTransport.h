//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSService, MISSING_TYPE, NSDate, NSMapTable, NSMutableDictionary, NSNumber, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue, SDAutoUnlockTransportClient;

@interface SDAutoUnlockTransport
{
    NSDate *_lastSeenWatchDate;	// 8 = 0x8
    NSNumber *_watchExistedInUnlockList;	// 16 = 0x10
    NSNumber *_watchCurrentlyInList;	// 24 = 0x18
    IDSService *_autoUnlockService;	// 32 = 0x20
    id <SDAutoUnlockTransportClient> _primaryClient;	// 40 = 0x28
    IDSService *_idsService;	// 48 = 0x30
    IDSService *_activityService;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_transportQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_clientQueue;	// 72 = 0x48
    NSMapTable *_clientMap;	// 80 = 0x50
    NSMutableDictionary *_completionHandlers;	// 88 = 0x58
    NSMutableDictionary *_sendIdentifierToSessionID;	// 96 = 0x60
    NSMutableDictionary *_sendDates;	// 104 = 0x68
    NSDate *_lastSendDate;	// 112 = 0x70
    NSMutableDictionary *_autoUnlockDeviceCache;	// 120 = 0x78
    NSMutableDictionary *_cloudPairRetryRecords;	// 128 = 0x80
    NSMutableDictionary *_cachedBluetoothIDToUniqueIDs;	// 136 = 0x88
    NSSet *_cachedApproveBluetoothIDs;	// 144 = 0x90
}

+ (id)sharedTransport;	// IMP=0x002000000010ac85
- (void).cxx_destruct;	// IMP=0x0020000000112b1b
@property(retain, nonatomic) NSSet *cachedApproveBluetoothIDs; // @synthesize cachedApproveBluetoothIDs=_cachedApproveBluetoothIDs;
@property(retain, nonatomic) NSMutableDictionary *cachedBluetoothIDToUniqueIDs; // @synthesize cachedBluetoothIDToUniqueIDs=_cachedBluetoothIDToUniqueIDs;
@property(retain, nonatomic) NSMutableDictionary *cloudPairRetryRecords; // @synthesize cloudPairRetryRecords=_cloudPairRetryRecords;
@property(retain, nonatomic) NSMutableDictionary *autoUnlockDeviceCache; // @synthesize autoUnlockDeviceCache=_autoUnlockDeviceCache;
@property(retain, nonatomic) NSDate *lastSendDate; // @synthesize lastSendDate=_lastSendDate;
@property(retain) NSMutableDictionary *sendDates; // @synthesize sendDates=_sendDates;
@property(retain, nonatomic) NSMutableDictionary *sendIdentifierToSessionID; // @synthesize sendIdentifierToSessionID=_sendIdentifierToSessionID;
@property(retain) NSMutableDictionary *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSMapTable *clientMap; // @synthesize clientMap=_clientMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transportQueue; // @synthesize transportQueue=_transportQueue;
@property(retain, nonatomic) IDSService *activityService; // @synthesize activityService=_activityService;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property __weak id <SDAutoUnlockTransportClient> primaryClient; // @synthesize primaryClient=_primaryClient;
- (id)autoUnlockService;	// IMP=0x00100000001128f8
- (id)state;	// IMP=0x0010000000112472
- (_Bool)pairingRequestIsValidForDeviceID:(id)arg1 messageContext:(id)arg2;	// IMP=0x00100000001121f4
- (MISSING_TYPE *)disableEncryption;	// IMP=0x00100000001121db
- (_Bool)showOtherDevices;	// IMP=0x00100000001121c2
- (_Bool)showIDInName;	// IMP=0x00100000001121a9
@property(retain, nonatomic) NSNumber *watchCurrentlyInList; // @synthesize watchCurrentlyInList=_watchCurrentlyInList;
@property(retain, nonatomic) NSNumber *watchExistedInUnlockList; // @synthesize watchExistedInUnlockList=_watchExistedInUnlockList;
@property(retain, nonatomic) NSDate *lastSeenWatchDate; // @synthesize lastSeenWatchDate=_lastSeenWatchDate;
@property(readonly, nonatomic) _Bool watchSeenRecently;
- (void)resetAppleWatchExisted;	// IMP=0x0010000000111ade
@property(readonly, nonatomic) _Bool appleWatchExisted;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x0010000000111799
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000110d3f
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x0010000000110b94
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0010000000110a6d
- (id)dataFromUUID:(id)arg1;	// IMP=0x00100000001109ed
- (id)transferDataFromPayload:(id)arg1 sessionID:(id)arg2;	// IMP=0x0010000000110905
- (id)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 wantsACK:(_Bool)arg6 timeout:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00100000001108ac
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000110870
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 errorHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000011079c
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 timeout:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000110770
- (void)loadCloudPairRetries;	// IMP=0x00100000001106ab
- (_Bool)canRetryCloudPairingForDeviceID:(id)arg1 useShortDate:(_Bool)arg2;	// IMP=0x001000000011045b
- (void)updateRetryDatesForDeviceIDs:(id)arg1;	// IMP=0x0010000000110083
- (void)triggerCloudPairRetryWithShortRetryDeviceIDs:(id)arg1;	// IMP=0x001000000011007d
- (void)handleSuccessfulMessageSentWithIdentifier:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000010ff4b
- (id)stableBluetoothIdentifierForIDSDevice:(id)arg1;	// IMP=0x001000000010ff36
- (id)connectionCacheDevices;	// IMP=0x001000000010fdb1
- (_Bool)localDeviceIDSRegistered;	// IMP=0x001000000010fb6e
- (_Bool)activityServiceHasWatch;	// IMP=0x001000000010f90e
- (id)placeholderDevice;	// IMP=0x001000000010f7e8
- (void)updateBluetoothIDCache;	// IMP=0x001000000010f3e5
- (void)logBluetoothIDCache;	// IMP=0x001000000010f333
- (id)cachedIDSDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x001000000010f2b0
- (id)idsDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x001000000010f055
- (id)idsDeviceForBluetoothID:(id)arg1;	// IMP=0x001000000010ee5c
- (id)idsDeviceForUniqueID:(id)arg1;	// IMP=0x001000000010ec63
- (id)proxyBluetoothDeviceIDForDeviceID:(id)arg1;	// IMP=0x001000000010eb70
- (id)nameForDevice:(id)arg1;	// IMP=0x001000000010ea84
- (_Bool)macVersionEligibleForDeviceID:(id)arg1;	// IMP=0x001000000010e74c
- (_Bool)watchVersionEligibleForDevice:(id)arg1;	// IMP=0x001000000010e640
- (id)modelNameForDevice:(id)arg1;	// IMP=0x001000000010e60e
- (void)updateApproveBluetoothIDs;	// IMP=0x001000000010e2b6
- (id)approveBluetoothIDs;	// IMP=0x001000000010e212
- (id)autoUnlockDeviceForIDSDevice:(id)arg1 cloudPaired:(_Bool)arg2 cached:(_Bool)arg3 deviceType:(long long)arg4;	// IMP=0x001000000010db3f
- (id)autoUnlockDeviceForIDSDevice:(id)arg1 cloudPaired:(_Bool)arg2 cached:(_Bool)arg3;	// IMP=0x001000000010db27
- (id)autoUnlockDeviceForIDSDevice:(id)arg1;	// IMP=0x001000000010db0d
- (id)onqueue_enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x001000000010d6e9
- (id)enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x001000000010d588
- (id)enabledAutoUnlockDevices;	// IMP=0x001000000010d574
- (id)onqueue_autoUnlockEligibleDevices:(_Bool)arg1 deviceType:(long long)arg2;	// IMP=0x001000000010cc55
- (id)autoUnlockEligibleDevicesWithCloudPairing:(_Bool)arg1 deviceType:(long long)arg2;	// IMP=0x001000000010caeb
- (id)autoUnlockEligibleWatchesWithCloudPairing:(_Bool)arg1;	// IMP=0x001000000010cad4
- (id)autoUnlockEligibleWatches;	// IMP=0x001000000010cabd
- (id)onqueue_devicesWithLTKs;	// IMP=0x001000000010c851
- (id)devicesWithLTKs;	// IMP=0x001000000010c709
- (id)autoUnlockDeviceForBluetoothID:(id)arg1 cached:(_Bool)arg2;	// IMP=0x001000000010c698
- (id)autoUnlockDeviceForBluetoothID:(id)arg1;	// IMP=0x001000000010c684
- (id)autoUnlockDeviceForDeviceID:(id)arg1;	// IMP=0x001000000010c625
- (id)modelIdentifierForDeviceID:(id)arg1;	// IMP=0x001000000010c5d5
- (long long)deviceTypeForDevice:(id)arg1;	// IMP=0x001000000010c45d
- (long long)deviceTypeForDeviceID:(id)arg1;	// IMP=0x001000000010c40a
- (id)deviceNameForDeviceID:(id)arg1;	// IMP=0x001000000010c3ba
- (id)idsMacDeviceIDs;	// IMP=0x001000000010c140
- (id)idsDevicesIDs;	// IMP=0x001000000010bf75
- (_Bool)deviceNearby;	// IMP=0x001000000010bf31
- (_Bool)isDeviceSatellitePaired;	// IMP=0x001000000010bf29
- (id)activeDevice;	// IMP=0x001000000010bdac
- (id)pairedAutoUnlockDevice;	// IMP=0x001000000010bd4d
- (id)pairedDeviceID;	// IMP=0x001000000010bcfd
- (id)onqueue_bluetoothDeviceIdentifiers;	// IMP=0x001000000010baf8
- (id)bluetoothDeviceIdentifiers;	// IMP=0x001000000010b9ba
- (id)onqueue_bluetoothIDForIDSID:(id)arg1;	// IMP=0x001000000010b764
- (id)bluetoothIDForIDSID:(id)arg1;	// IMP=0x001000000010b549
- (void)clearAutoUnlockDeviceCache;	// IMP=0x001000000010b4a5
- (void)refreshAutoUnlockDeviceCache;	// IMP=0x001000000010b46e
- (void)logDevices;	// IMP=0x001000000010b38e
- (void)removeClientForIdentifier:(id)arg1;	// IMP=0x001000000010b029
- (void)addClient:(id)arg1 forIdentifer:(id)arg2;	// IMP=0x001000000010aef8
- (id)init;	// IMP=0x001000000010acda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
