//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSString, VCSessionBandwidthAllocationTable;

__attribute__((visibility("hidden")))
@interface VCSessionUplinkBandwidthAllocatorMultiway
{
    VCSessionBandwidthAllocationTable *_table;	// 24 = 0x18
    NSDictionary *_currentTable;	// 32 = 0x20
    NSMutableDictionary *_streamTokenToEnableMap;	// 40 = 0x28
    _Bool _redundancyEnabled;	// 48 = 0x30
    _Bool _redundancyEnabledFor720Stream;	// 49 = 0x31
}

- (id)getBitrateToStreamTable;	// IMP=0x000000000012bd11
- (void)_recomputeCurrentTable;	// IMP=0x000000000012bcb4
- (id)streamIDsForStreamToken:(long long)arg1 targetBitrateCap:(unsigned int)arg2;	// IMP=0x000000000012b914
- (id)streamIDsForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2;	// IMP=0x000000000012b73f
- (id)repairStreamIDsForStreamToken:(long long)arg1;	// IMP=0x000000000012b573
- (id)streamIDsForStreamToken:(long long)arg1;	// IMP=0x000000000012b3a7
- (id)mediaBitratesForStreamToken:(long long)arg1 targetNetworkBitrate:(unsigned int)arg2;	// IMP=0x000000000012af90
- (id)tableEntriesForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2 remainingBitrate:(unsigned int *)arg3 isLastEntryForStreamToken:(_Bool *)arg4;	// IMP=0x000000000012acbd
- (_Bool)peerSubscription:(_Bool)arg1 streamID:(unsigned short)arg2;	// IMP=0x000000000012abfe
@property(nonatomic, getter=isRedundancyEnabledFor720Stream) _Bool redundancyEnabledFor720Stream;
@property(nonatomic, getter=isRedundancyEnabled) _Bool redundancyEnabled;
- (_Bool)isEnabledStreamToken:(long long)arg1;	// IMP=0x000000000012aaf3
- (void)streamToken:(long long)arg1 enabled:(_Bool)arg2;	// IMP=0x000000000012aa2e
- (void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(_Bool)arg2;	// IMP=0x000000000012a984
- (void)dealloc;	// IMP=0x000000000012a8fb
- (id)init;	// IMP=0x000000000012a7a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

