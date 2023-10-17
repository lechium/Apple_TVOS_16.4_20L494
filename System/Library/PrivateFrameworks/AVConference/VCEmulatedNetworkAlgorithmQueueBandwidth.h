//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkAlgorithmQueueBandwidth : NSObject
{
    NSDictionary *_policies;	// 8 = 0x8
    double _expectedProcessEndTime;	// 16 = 0x10
    unsigned int _packetCountInNetworkQueue;	// 24 = 0x18
    unsigned int _networkQueueServiceRate;	// 28 = 0x1c
    unsigned int _networkQueueServiceRateMean;	// 32 = 0x20
    unsigned int _networkQueueServiceRateStdDev;	// 36 = 0x24
    unsigned int _networkQueueAQMRate;	// 40 = 0x28
    int _currentIndexForServiceRate;	// 44 = 0x2c
    int _currentIndexForServiceRateDistribution;	// 48 = 0x30
    int _currentIndexForAQMRate;	// 52 = 0x34
    double _lastNetworkQueueServiceRateLoadTime;	// 56 = 0x38
    double _lastNetworkQueueServiceRateDistributionLoadTime;	// 64 = 0x40
    double _lastNetworkQueueAQMRateLoadTime;	// 72 = 0x48
    double _budgetBufferPktTime[4096];	// 80 = 0x50
    double _budgetBufferPktSize[4096];	// 32848 = 0x8050
    int _budgentBufferIndex;	// 65616 = 0x10050
    int _budgetBufferSize;	// 65620 = 0x10054
}

@property unsigned int packetCountInNetworkQueue; // @synthesize packetCountInNetworkQueue=_packetCountInNetworkQueue;
@property(readonly, nonatomic) double expectedProcessEndTime; // @synthesize expectedProcessEndTime=_expectedProcessEndTime;
- (int)getRemainingAQMBudgetWithPacket:(id)arg1;	// IMP=0x00000000000620b4
- (void)addPacketToBudgetBuffer:(id)arg1;	// IMP=0x0000000000062012
- (_Bool)shouldDropPacketWithCurrentAQMBudget:(id)arg1;	// IMP=0x0000000000061f9f
- (void)process:(id)arg1;	// IMP=0x0000000000061cfe
- (double)computeNetworkServiceRate;	// IMP=0x0000000000061c2d
- (void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2;	// IMP=0x000000000006190a
- (id)init;	// IMP=0x00000000000618ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

