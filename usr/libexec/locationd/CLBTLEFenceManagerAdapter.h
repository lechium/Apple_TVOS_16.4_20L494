//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLBTLEFenceManagerAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x002000000096cb2a
+ (id)getSilo;	// IMP=0x001000000096c916
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000096c8fd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000096c8a0
- (void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4;	// IMP=0x002000000096ce0e
- (_Bool)syncgetMonitoredRegions:(void *)arg1 forClient:(id)arg2;	// IMP=0x001000000096cd7f
- (_Bool)syncgetHasMonitoredRegions:(id)arg1;	// IMP=0x001000000096ccf8
- (void)requestRegionState:(CDUnknownBlockType)arg1;	// IMP=0x001000000096cc8a
- (void)removeMonitoredRegion:(CDUnknownBlockType)arg1;	// IMP=0x001000000096cc1c
- (void)addMonitoredRegion:(CDUnknownBlockType)arg1;	// IMP=0x001000000096cba3
- (void)queryBundleIdentifiersWithEnteredRegionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000096cb75
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000096cb02
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000096cad5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000096caad
- (void *)adaptee;	// IMP=0x001000000096ca7a
- (void)endService;	// IMP=0x001000000096ca5f
- (void)beginService;	// IMP=0x001000000096c9af
- (id)init;	// IMP=0x001000000096c972

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

