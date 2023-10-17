//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSSet, NSString, NSTimer, SFPeerDevice, UADispatchScheduler;

@interface UASharingReceiver
{
    NSMutableSet *_sfActivityScanners;	// 8 = 0x8
    NSMutableSet *_receivedItems;	// 16 = 0x10
    NSMutableSet *_activeDevices;	// 24 = 0x18
    NSString *_lastAutoPullActivitiesRequesterId;	// 32 = 0x20
    NSMutableSet *_recentlyLostDeviceIDs;	// 40 = 0x28
    _Bool _forceScanning;	// 48 = 0x30
    UADispatchScheduler *_periodicCleanup;	// 56 = 0x38
    SFPeerDevice *_lastSeenPasteboardDevice;	// 64 = 0x40
    long long _lastSeenPasteboardVersionBit;	// 72 = 0x48
    NSTimer *_remotePboardTimer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000005f4a7
@property(retain) NSTimer *remotePboardTimer; // @synthesize remotePboardTimer=_remotePboardTimer;
@property long long lastSeenPasteboardVersionBit; // @synthesize lastSeenPasteboardVersionBit=_lastSeenPasteboardVersionBit;
@property(retain) SFPeerDevice *lastSeenPasteboardDevice; // @synthesize lastSeenPasteboardDevice=_lastSeenPasteboardDevice;
@property(readonly, retain) UADispatchScheduler *periodicCleanup; // @synthesize periodicCleanup=_periodicCleanup;
@property _Bool forceScanning; // @synthesize forceScanning=_forceScanning;
- (void)clearRemotePasteboardAvailable:(id)arg1;	// IMP=0x001000000005f309
- (_Bool)terminate;	// IMP=0x001000000005f287
- (id)statusString;	// IMP=0x001000000005e677
- (void)addNewItemsFromPayloads:(id)arg1 device:(id)arg2 scanner:(id)arg3 force:(_Bool)arg4;	// IMP=0x001000000005dda7
- (void)fetchMoreAppSuggestionsFromDevice:(id)arg1;	// IMP=0x001000000005dad6
- (_Bool)fetchMoreAppSuggestions;	// IMP=0x001000000005d570
- (void)receiveAdvertisement:(id)arg1 scanner:(id)arg2;	// IMP=0x0010000000059ed9
- (void)activityScanner:(id)arg1 receivedAdvertisement:(id)arg2;	// IMP=0x0010000000059d2d
- (id)sharingBTLESuggestedItemForAdvertisementPayload:(id)arg1 forDevice:(id)arg2;	// IMP=0x0010000000059a57
- (void)periodicCleanupFunc;	// IMP=0x00100000000595c9
- (void)removeAllFromDevice:(id)arg1;	// IMP=0x0010000000058d1d
- (_Bool)removeItem:(id)arg1;	// IMP=0x0010000000058c4a
- (_Bool)addItem:(id)arg1 scheduleUpdates:(_Bool)arg2;	// IMP=0x00100000000588d9
- (_Bool)_addItem:(id)arg1 scheduleUpdates:(_Bool)arg2;	// IMP=0x001000000005809d
- (void)lostDeviceWithUUID:(id)arg1;	// IMP=0x0010000000057eb0
- (void)lostDevice:(id)arg1;	// IMP=0x0010000000057a8f
- (void)activityScanner:(id)arg1 lostDeviceWithDevice:(id)arg2;	// IMP=0x0010000000057632
- (void)foundDevice:(id)arg1;	// IMP=0x0010000000057369
- (void)activityScanner:(id)arg1 foundDeviceWithDevice:(id)arg2;	// IMP=0x00100000000571b4
- (_Bool)resume;	// IMP=0x0010000000056f52
- (_Bool)suspend;	// IMP=0x0010000000056d38
- (id)sfActivityScanner;	// IMP=0x0010000000056bd8
- (_Bool)removeSFActivityScanner:(id)arg1;	// IMP=0x0010000000056aa9
- (_Bool)addSFActivityScanner:(id)arg1;	// IMP=0x00100000000568ce
@property(readonly, copy) NSSet *sfActivityScanners;
- (_Bool)active;	// IMP=0x00100000000567f3
@property(readonly, retain) NSSet *activeDevices;
- (id)receivedItems;	// IMP=0x0010000000056725
- (void)setScanningForTypes:(id)arg1;	// IMP=0x00100000000560e8
- (_Bool)receiving;	// IMP=0x0010000000056085
- (id)initWithManager:(id)arg1;	// IMP=0x0010000000055e94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

