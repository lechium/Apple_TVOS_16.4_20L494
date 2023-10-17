//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmStabilizedNOWRD
{
    unsigned short _echoedTimestamp;	// 4770 = 0x12a2
    unsigned short _previousTimestamp;	// 4772 = 0x12a4
    unsigned short _queuingDelayTimestamp;	// 4774 = 0x12a6
    unsigned int _receiveTimestamp;	// 4776 = 0x12a8
    unsigned int _timestampWrapAroundCounter;	// 4780 = 0x12ac
    unsigned int _lastRateChangeCounter;	// 4784 = 0x12b0
    unsigned int _newOWRDSampleCollected;	// 4788 = 0x12b4
    _Bool _isRemoteBandwidthEstimationStable;	// 4792 = 0x12b8
    struct {
        double owrd;
        double roundTripTime;
        double roundTripTimeMinEnvelope;
        double packetLossRate;
        int tierIndex;
    } _history[500];	// 4800 = 0x12c0
    int _currentHistorySize;	// 24800 = 0x60e0
    int _currentHistoryIndex;	// 24804 = 0x60e4
    double _previousNOWRD;	// 24808 = 0x60e8
    double _firstOWRDFrozenTime;	// 24816 = 0x60f0
    double _sendBitrateLimitedStartTime;	// 24824 = 0x60f8
    double _rampUpFrozenDuration;	// 24832 = 0x6100
    double _extendedRampUpFrozenExitTime;	// 24840 = 0x6108
    double _stabilizationTime;	// 24848 = 0x6110
    double _rateChangeSystemTime;	// 24856 = 0x6118
    double _lastPositiveOWRDTime;	// 24864 = 0x6120
    double _lastAllowRampUpTime;	// 24872 = 0x6128
    _Bool _isRampUpSettling;	// 24880 = 0x6130
    _Bool _isStable;	// 24881 = 0x6131
    double _inVideoBitrate;	// 24888 = 0x6138
    double _outVideoBitrate;	// 24896 = 0x6140
    double _inAudioBitrate;	// 24904 = 0x6148
    double _outAudioBitrate;	// 24912 = 0x6150
    unsigned int _fastRampDownBitrateRange;	// 24920 = 0x6158
    double _rampUpSettleDuration;	// 24928 = 0x6160
    _Bool _shouldSuppressRampDown;	// 24936 = 0x6168
    unsigned int _rampDownSuppressionBitrateThreshold;	// 24940 = 0x616c
    double _basebandNotificationArrivalTime;	// 24944 = 0x6170
    unsigned int _basebandAverageBitrate;	// 24952 = 0x6178
    unsigned int _basebandTotalQueueDepth;	// 24956 = 0x617c
    double _basebandExpectedQueuingDelay;	// 24960 = 0x6180
    double _basebandNormalizedBDCD;	// 24968 = 0x6188
    double _basebandNormalizedQueuingDelay;	// 24976 = 0x6190
    double _basebandLTEOrGreaterRATSwitchTime;	// 24984 = 0x6198
    int _basebandRadioTechnology;	// 24992 = 0x61a0
    _Bool _isWaitingForBasebandRampDown;	// 24996 = 0x61a4
    double _lastBasebandRampDownTime;	// 25000 = 0x61a8
    double _lastHighNBDCDTime;	// 25008 = 0x61b0
    int _basebandAdditionalTiersForRampUp;	// 25016 = 0x61b8
    _Bool _basebandAdaptationEnabled;	// 25020 = 0x61bc
    unsigned int _packetReceivedVideo;	// 25024 = 0x61c0
    unsigned int _packetBurstLoss;	// 25028 = 0x61c4
    unsigned int _roundTripTimeTick;	// 25032 = 0x61c8
    double _roundTripTimeMinEnvelope;	// 25040 = 0x61d0
    double _previousRoundTripTime;	// 25048 = 0x61d8
    double _lastNetworkUnstableTime;	// 25056 = 0x61e0
    _Bool _withBTCoex;	// 25064 = 0x61e8
    _Bool _abnormalNetworkDetected;	// 25065 = 0x61e9
}

- (void)printRateControlInfoToLogDump;	// IMP=0x0000000000239b89
- (void)checkStabilizationWithEchoedTimestamp:(unsigned short)arg1 queuingDelay:(unsigned short)arg2;	// IMP=0x00000000002397d6
- (void)checkMediaQueueBitrates;	// IMP=0x0000000000239616
- (unsigned int)getRampDownSuppressionBitrateThresholdWithRTT;	// IMP=0x0000000000239588
- (_Bool)updateParametersForRampDownSuppression;	// IMP=0x0000000000239539
- (void)checkAbnormalNetworkCondition;	// IMP=0x00000000002393fc
- (void)checkCongestionStatus;	// IMP=0x00000000002393a5
- (void)calculatePacketLossWithReceivedPacketCount:(unsigned int)arg1 receivedPacketCountVideo:(unsigned int)arg2 packetBurstLoss:(unsigned short)arg3 packetLossSample:(double)arg4;	// IMP=0x00000000002392a0
- (void)calculateRoundTripTimeWithSample:(double)arg1;	// IMP=0x0000000000239112
- (void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2;	// IMP=0x000000000023907c
- (int)basebandAdditionalTiersForRampUp;	// IMP=0x0000000000238f80
- (_Bool)isBasebandNotificationOutOfKeyFrameCoolDownTime;	// IMP=0x0000000000238ef2
- (_Bool)shouldRampUpDueToBaseband;	// IMP=0x0000000000238e89
- (_Bool)shouldUnblockRampUpAfterTimeOut;	// IMP=0x0000000000238e08
- (_Bool)shouldRampDownDueToBaseband;	// IMP=0x0000000000238957
- (_Bool)shouldRampDownDueToNOWRDAcc;	// IMP=0x0000000000238728
- (_Bool)shouldRampDownDueToNOWRD;	// IMP=0x0000000000238670
- (_Bool)shouldRampDown;	// IMP=0x0000000000238382
- (_Bool)shouldRampUp;	// IMP=0x00000000002380d9
- (_Bool)shouldBlockRampUpDueToNetworkUnstable;	// IMP=0x000000000023805b
- (_Bool)checkNetworkSaturationWithRoundTripTime:(double)arg1 minRoundTripTime:(double)arg2 packetLossRate:(double)arg3 owrd:(double)arg4;	// IMP=0x0000000000237fdd
- (_Bool)isRoundTripTimeDecreasingOrLessThanMinEnvelope;	// IMP=0x0000000000237f80
- (_Bool)isNetworkSaturated;	// IMP=0x0000000000237e6b
- (_Bool)isBitrateOscillatingWithCurrentTierIndex:(int)arg1;	// IMP=0x0000000000237cb3
- (void)setBitrateUnstable;	// IMP=0x0000000000237c16
- (int)rampDownTierDueToBaseband:(double)arg1;	// IMP=0x0000000000237915
- (int)rampDownTier;	// IMP=0x0000000000237629
- (int)rampUpTier;	// IMP=0x00000000002372ed
- (void)stateEnter;	// IMP=0x00000000002371ff
- (void)stateExit;	// IMP=0x0000000000237190
- (_Bool)shouldFastRampUp;	// IMP=0x000000000023704d
- (double)getRampUpFrozenDuration;	// IMP=0x0000000000236f8d
- (double)getRampUpSettleDuration;	// IMP=0x0000000000236f26
- (void)updateVCRateControlHistory;	// IMP=0x0000000000236e4f
- (void)updateInternalStatus;	// IMP=0x0000000000236d58
- (_Bool)updateInternalStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x0000000000236a48
- (void)runRateControlStateTransition;	// IMP=0x000000000023656a
- (unsigned int)worstRecentBurstLoss;	// IMP=0x0000000000236550
- (double)worstRecentRoundTripTime;	// IMP=0x0000000000236533
- (void)setLocalBandwidthEstimation:(unsigned int)arg1;	// IMP=0x0000000000236513
- (_Bool)shouldEnableBasebandAdaptationWithBasebandStatistics:(CDStruct_f0a7dbac)arg1 previousBasebandRAT:(int)arg2;	// IMP=0x0000000000236389
- (_Bool)isBasebandRATGreaterOrSameAsLTE:(int)arg1;	// IMP=0x000000000023636d
- (_Bool)doRateControlWithBasebandStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x00000000002360df
- (_Bool)doRateControlWithNWStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x0000000000236056
- (_Bool)doRateControlWithVCRCStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x0000000000235eb1
- (_Bool)doRateControlWithStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x0000000000235e17
- (void)configure:(struct tagVCRateControlAlgorithmConfig)arg1 restartRequired:(_Bool)arg2;	// IMP=0x0000000000235b5c
- (id)init;	// IMP=0x0000000000235adc

@end
