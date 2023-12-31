//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionUplinkBandwidthAllocatorOneToOne
{
    NSMutableDictionary *_streamTokenToTableEntryMap;	// 24 = 0x18
    NSMutableDictionary *_streamTokenToEnableMap;	// 32 = 0x20
    NSMutableDictionary *_bandwithAllocationTable;	// 40 = 0x28
}

+ (id)videoCallMicrophoneTierTable;	// IMP=0x001000000019eba1
+ (id)microphoneOnlyTierTable;	// IMP=0x001000000019ea88
+ (unsigned long long)insertionIndex:(id)arg1 forValue:(id)arg2;	// IMP=0x001000000019e9fd
+ (id)valueForNetworkBitrate:(id)arg1 networkBitrate:(unsigned int)arg2;	// IMP=0x001000000019e960
- (id)streamIDsForStreamToken:(long long)arg1 targetBitrateCap:(unsigned int)arg2;	// IMP=0x000000000019f76d
- (id)streamIDsForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2;	// IMP=0x000000000019f6e6
- (id)streamIDsIfStreamTokenIsEnabled:(long long)arg1;	// IMP=0x000000000019f3eb
- (id)mediaBitratesForStreamToken:(long long)arg1 targetNetworkBitrate:(unsigned int)arg2;	// IMP=0x000000000019ecba
- (id)baseNetworkBitrateSplitForTargetBitrate:(unsigned int)arg1 baseNetworkBitrate:(unsigned long long *)arg2;	// IMP=0x000000000019e777
- (_Bool)shouldUseMultipleStreamGroupAlgorithm;	// IMP=0x000000000019e592
- (_Bool)shouldUseMinMicBitrate:(unsigned long long)arg1 streamToken:(long long)arg2 remainderBitrate:(long long)arg3;	// IMP=0x000000000019e470
- (_Bool)isStreamGroupEnabled:(unsigned int)arg1;	// IMP=0x000000000019e28f
- (unsigned long long)findAndSplitExtraBitrateFromCappedStreams:(id)arg1 remainderBitrate:(long long)arg2 currentStreamGroupBitrate:(unsigned long long)arg3 streamToken:(long long)arg4 totalRemainderBitrateWeight:(unsigned long long)arg5;	// IMP=0x000000000019de93
- (id)findBitrateSplitForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2;	// IMP=0x000000000019d9fc
@property(nonatomic, getter=isRedundancyEnabledFor720Stream) _Bool redundancyEnabledFor720Stream;
@property(nonatomic, getter=isRedundancyEnabled) _Bool redundancyEnabled;
- (id)repairStreamIDsForStreamToken:(long long)arg1;	// IMP=0x000000000019d9d8
- (id)streamIDsForStreamToken:(long long)arg1;	// IMP=0x000000000019d9c6
- (id)streamIDsIfStreamTokenIsPresent:(long long)arg1;	// IMP=0x000000000019d8bc
- (void)recomputeAllocationTableIfRequired;	// IMP=0x000000000019d7e9
- (void)generateBandwidthAllocationTableWithTierTables:(id)arg1 qualityIndices:(id)arg2 qualityIndexToStreamToken:(id)arg3;	// IMP=0x000000000019d407
- (void)getCurrentEnabledTierTables:(id)arg1 qualityIndices:(id)arg2 qualityIndexToStreamToken:(id)arg3;	// IMP=0x000000000019cf07
- (_Bool)peerSubscription:(_Bool)arg1 streamID:(unsigned short)arg2;	// IMP=0x000000000019ceff
- (_Bool)isEnabledStreamToken:(long long)arg1;	// IMP=0x000000000019ce85
- (void)streamToken:(long long)arg1 enabled:(_Bool)arg2;	// IMP=0x000000000019cdc0
- (void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(_Bool)arg2;	// IMP=0x000000000019cd13
- (void)dealloc;	// IMP=0x000000000019cc8a
- (id)init;	// IMP=0x000000000019c8e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

