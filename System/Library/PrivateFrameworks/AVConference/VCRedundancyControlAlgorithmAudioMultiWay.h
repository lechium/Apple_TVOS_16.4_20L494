//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmAudioMultiWay : NSObject
{
    unsigned int _redundancyPercentage;	// 8 = 0x8
    double _redundancyInterval;	// 16 = 0x10
    unsigned int _packetLossPercentageIncreaseThresholds[3];	// 24 = 0x18
    unsigned int _packetLossPercentageDecreaseThresholds[3];	// 36 = 0x24
    _Bool _isPacketLossIncreasing;	// 48 = 0x30
    double _packetLossPercentage;	// 56 = 0x38
    double _packetLossPercentageThreshold;	// 64 = 0x40
    double _plrEnvelope;	// 72 = 0x48
    unsigned int _burstLossPacketCount;	// 80 = 0x50
    _Bool _isUplinkRecentlyCongested;	// 84 = 0x54
    float _offChannelTimeRatio;	// 88 = 0x58
    _Bool _isOffChannelActivityHigh;	// 92 = 0x5c
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
- (unsigned int)updateRedundancyPercentageWithPLRThresholds:(unsigned int *)arg1;	// IMP=0x000000000026d473
- (void)computeRedundancyInfo;	// IMP=0x000000000026d400
- (void)processRCNetworkStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000026d2d3
- (void)processNWConnectionStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000026d239
- (void)updateRedundancyStrategyWithNetworkStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000026d20c
- (id)init;	// IMP=0x000000000026d19c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

