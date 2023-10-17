//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmAudioLegacy : NSObject
{
    unsigned int _redundancyPercentage;	// 8 = 0x8
    double _redundancyInterval;	// 16 = 0x10
    unsigned int _packetLossPercentage;	// 24 = 0x18
    _Bool _isUplinkRecentlyCongested;	// 28 = 0x1c
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
- (void)computeRedundancyInfo;	// IMP=0x000000000039c103
- (void)updateRedundancyStrategyWithNetworkStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000039c085

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

