//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmLowLatencyNOWRD
{
    unsigned short _echoedTimestamp;	// 4770 = 0x12a2
    unsigned short _previousTimestamp;	// 4772 = 0x12a4
    unsigned short _queuingDelayTimestamp;	// 4774 = 0x12a6
    unsigned int _receiveTimestamp;	// 4776 = 0x12a8
    unsigned int _timestampWrapAroundCounter;	// 4780 = 0x12ac
    unsigned int _newOWRDSampleCollected;	// 4784 = 0x12b0
    double _previousNOWRD;	// 4792 = 0x12b8
    double _sendBitrateLimitedStartTime;	// 4800 = 0x12c0
    double _sendBitrateStartTime;	// 4808 = 0x12c8
    double _lastSendDataTime;	// 4816 = 0x12d0
    double _lastRampDownTime;	// 4824 = 0x12d8
    double _lastPositiveOWRDTime;	// 4832 = 0x12e0
    _Bool _isRampUpSettling;	// 4840 = 0x12e8
    unsigned int _actualSendBitrate;	// 4844 = 0x12ec
    unsigned int _instantBitrate;	// 4848 = 0x12f0
    unsigned int _fastRampDownBitrateRange;	// 4852 = 0x12f4
    unsigned int _maxBurstyLoss;	// 4856 = 0x12f8
    unsigned int _nwConnectionMaxThroughput;	// 4860 = 0x12fc
    unsigned int _nwConnectionAvgThroughput;	// 4864 = 0x1300
    int _nwConnectionRateTrendSuggestion;	// 4868 = 0x1304
    double _nwConnectionAvgDelay;	// 4872 = 0x1308
    _Bool _shouldBlockRampUpForNWConnection;	// 4880 = 0x1310
    unsigned int _nwConnectionOverDelayThresholdCount;	// 4884 = 0x1314
    unsigned int _nwConnectionPacketLossPerFrame;	// 4888 = 0x1318
}

- (void)printRateControlInfoToLogDump;	// IMP=0x000000000011fc62
- (void)checkCongestionStatus;	// IMP=0x000000000011fc15
- (void)checkRampUpSettlingStatus;	// IMP=0x000000000011fbbb
- (int)rampDownTierDueToNWConnection;	// IMP=0x000000000011faa0
- (_Bool)shouldRampDownDueToNWConnection;	// IMP=0x000000000011f973
- (_Bool)shouldRampUpDueToNWConnection;	// IMP=0x000000000011f90e
- (double)computeNWConnectionDelayThresholdForRampDown:(_Bool)arg1;	// IMP=0x000000000011f8c6
- (_Bool)shouldRampDownDueToNOWRDAcc;	// IMP=0x000000000011f745
- (_Bool)shouldRampDownDueToNOWRD;	// IMP=0x000000000011f6a1
- (_Bool)shouldRampDown;	// IMP=0x000000000011f49e
- (_Bool)shouldRampUp;	// IMP=0x000000000011f2e3
- (void)setRateChangeCounter;	// IMP=0x000000000011f28e
- (int)rampDownTier;	// IMP=0x000000000011f175
- (int)rampUpTier;	// IMP=0x000000000011f0ba
- (void)updateInternalStatus;	// IMP=0x000000000011f022
- (void)updateSendBitrateAndCheckIdlePeriod:(unsigned int)arg1 instantBitrate:(unsigned int)arg2;	// IMP=0x000000000011ef16
- (_Bool)doRateControlWithNWConnectionStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000011ed60
- (_Bool)doRateControlWithVCRCStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000011e824
- (_Bool)doRateControlWithStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000011e798
- (void)configure:(struct tagVCRateControlAlgorithmConfig)arg1 restartRequired:(_Bool)arg2;	// IMP=0x000000000011e580
- (id)init;	// IMP=0x000000000011e500

@end

