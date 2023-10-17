//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, NSArray, NSDictionary, NSMutableArray, NSString, VCAudioPayload, VCAudioPayloadConfig, VCAudioRedBuilder, VCAudioTier, VCAudioTierPicker, VCPacketBundler, VCRedundancyControllerAudio, VCTransportSession;
@protocol VCAudioTransmitterDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitter : NSObject
{
    VCPacketBundler *_audioBundler;	// 8 = 0x8
    VCAudioRedBuilder *_redBuilder;	// 16 = 0x10
    VCRedundancyControllerAudio *_redundancyController;	// 24 = 0x18
    struct opaqueVCAudioBufferList *_encodeBuffer;	// 32 = 0x20
    _Bool _lastIsTalking;	// 40 = 0x28
    double _lastTierSwitch;	// 48 = 0x30
    double _audioInterval;	// 56 = 0x38
    int _audioTierChangeRequestCount;	// 64 = 0x40
    int _audioTxBitrate;	// 68 = 0x44
    int _actualAudioSendingBitrate;	// 72 = 0x48
    unsigned int _lastSentAudioSampleTime;	// 76 = 0x4c
    unsigned char _inputMeter;	// 80 = 0x50
    long long _blockSize;	// 88 = 0x58
    float _blockSeconds;	// 96 = 0x60
    double _lastUpdateQualityIndicator;	// 104 = 0x68
    int _qualityIndicator;	// 112 = 0x70
    VCAudioTierPicker *_audioTierPicker;	// 120 = 0x78
    VCAudioTier *_currentAudioTier;	// 128 = 0x80
    VCAudioTier *_requestedAudioTier;	// 136 = 0x88
    char *_lastInputSampleBuffer;	// 144 = 0x90
    unsigned int _lastInputSampleBufferSize;	// 152 = 0x98
    int _audioHeaderSize;	// 156 = 0x9c
    _Bool _audioTierHysteresis;	// 160 = 0xa0
    void *_packetThread;	// 168 = 0xa8
    unsigned int _targetBitrate;	// 176 = 0xb0
    unsigned int _rateChangeCounter;	// 180 = 0xb4
    unsigned int _currentTargetBitrate;	// 184 = 0xb8
    unsigned int _currentDuplication;	// 188 = 0xbc
    unsigned int _redundancyPercentage;	// 192 = 0xc0
    double _redundancyInterval;	// 200 = 0xc8
    unsigned int _redundancyControllerNumPayloads;	// 208 = 0xd0
    unsigned int _redundancyControllerMaxDelay20ms;	// 212 = 0xd4
    AVCStatisticsCollector *_statisticsCollector;	// 216 = 0xd8
    _Bool _isAudioStalled;	// 224 = 0xe0
    unsigned int _sentAudioBytes;	// 228 = 0xe4
    unsigned int _encodedBytes;	// 232 = 0xe8
    unsigned int _totalTxAudioBytes;	// 236 = 0xec
    unsigned int _estimateTxAudioBytes;	// 240 = 0xf0
    unsigned int _audioFrameCounter;	// 244 = 0xf4
    unsigned int _silenceFrameCounter;	// 248 = 0xf8
    unsigned int _vadSegmentCounter;	// 252 = 0xfc
    struct tagHANDLE *_rtpHandle;	// 256 = 0x100
    struct tagHANDLE *_afrc;	// 264 = 0x108
    struct tagHANDLE *_mediaQueue;	// 272 = 0x110
    struct tagHANDLE *_rtpVideo;	// 280 = 0x118
    void *_controlInfoGenerator;	// 288 = 0x120
    _Bool _useRateControl;	// 296 = 0x128
    _Bool _isUseCaseWatchContinuity;	// 297 = 0x129
    _Bool _allowAudioSwitching;	// 298 = 0x12a
    _Bool _supportsAdaptation;	// 299 = 0x12b
    _Bool _needsPacketThread;	// 300 = 0x12c
    _Bool _isLocalCellular_LowestConnectionQuality;	// 301 = 0x12d
    _Bool _isRemoteCellular_LowestConnectionQuality;	// 302 = 0x12e
    _Bool _isConnectedOnIPv6_LowestConnectionQuality;	// 303 = 0x12f
    _Bool _isRedEnabled;	// 304 = 0x130
    _Bool _includeRedSequenceOffset;	// 305 = 0x131
    unsigned int _redNumPayloads;	// 308 = 0x134
    unsigned int _redMaxDelay20ms;	// 312 = 0x138
    _Bool _transmitROC;	// 316 = 0x13c
    NSMutableArray *_audioPayloads;	// 320 = 0x140
    VCAudioPayload *_currentDTXPayload;	// 328 = 0x148
    VCAudioPayload *_currentAudioPayload;	// 336 = 0x150
    int _currentRedPayloadType;	// 344 = 0x158
    unsigned int _currentAudioCap;	// 348 = 0x15c
    struct tagVCAudioFrameFormat _inputFormat;	// 352 = 0x160
    struct opaqueRTCReporting *_reportingAgent;	// 400 = 0x190
    int _reportingModuleID;	// 408 = 0x198
    int _operatingMode;	// 412 = 0x19c
    VCTransportSession *_transportSession;	// 416 = 0x1a0
    id _delegate;	// 424 = 0x1a8
    _Bool _ignoreSilence;	// 432 = 0x1b0
    unsigned int _tierNetworkBitrate;	// 436 = 0x1b4
    _Bool _sendActiveVoiceOnly;	// 440 = 0x1b8
    unsigned int _qualityIndex;	// 444 = 0x1bc
    int _ratType;	// 448 = 0x1c0
    double _lastReportingCallbackTime;	// 456 = 0x1c8
    double _lastReportingCallbackTimeShort;	// 464 = 0x1d0
    CDStruct_b671a7c4 _currentChannelMetrics;	// 472 = 0x1d8
    _Bool _periodicReportingEnabled;	// 560 = 0x230
    struct tagVCIDSChannelDataFormat _idsChannelDataFormat;	// 568 = 0x238
    unsigned int _maxIDSStreamIdCount;	// 648 = 0x288
    NSArray *_supportedNumRedundantPayload;	// 656 = 0x290
    _Bool _currentDTXEnable;	// 664 = 0x298
    unsigned char _mediaControlInfoVersion;	// 665 = 0x299
    _Bool _alwaysOnAudioRedundancyEnabled;	// 666 = 0x29a
    _Bool _cellularAllowRedLowBitratesEnabled;	// 667 = 0x29b
    _Bool _wifiAllowRedLowBitratesEnabled;	// 668 = 0x29c
    struct tagVCMemoryPool *_audioBundlePool;	// 672 = 0x2a0
    unsigned long long _remoteIDSParticipantID;	// 680 = 0x2a8
    _Bool _useChannelDataFormat;	// 688 = 0x2b0
    _Bool _useWiFiTiers;	// 689 = 0x2b1
    _Bool _supportsCodecBandwidthUpdate;	// 690 = 0x2b2
    struct ifnet_interface_advisory _lastNWConnectionNotification;	// 696 = 0x2b8
    struct tagVCCryptor *_sframeCryptor;	// 792 = 0x318
    struct tagVCAudioIssueDetector *_audioIssueDetector;	// 800 = 0x320
    _Bool _audioDumpEnabled;	// 808 = 0x328
    struct tagVCAudioDump *_encoderOutAudioDump;	// 816 = 0x330
    struct tagVCAudioDump *_encoderInAudioDump;	// 824 = 0x338
    struct tagVCAudioDumpPayloadInfo _payloadInfo;	// 832 = 0x340
    int _payloadUsed;	// 856 = 0x358
    _Bool _canSendPacket;	// 860 = 0x35c
    int _sentBytes;	// 864 = 0x360
    unsigned int _rtpTimestampBase;	// 868 = 0x364
    _Bool _shouldApplyRedAsBoolean;	// 872 = 0x368
    unsigned int _sentAudioBytesShort;	// 876 = 0x36c
    unsigned int _packetExpirationTimeInMillisecond;	// 880 = 0x370
    _Bool _targetBitrateIsAudioOnly;	// 884 = 0x374
}

@property(nonatomic) unsigned char mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
@property _Bool periodicReportingEnabled; // @synthesize periodicReportingEnabled=_periodicReportingEnabled;
@property(retain, nonatomic) VCAudioTierPicker *audioTierPicker; // @synthesize audioTierPicker=_audioTierPicker;
@property(nonatomic) _Bool useWiFiTiers; // @synthesize useWiFiTiers=_useWiFiTiers;
@property(nonatomic, getter=isCurrentDTXEnabled) _Bool currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property(nonatomic) _Bool sendActiveVoiceOnly; // @synthesize sendActiveVoiceOnly=_sendActiveVoiceOnly;
@property(nonatomic) CDStruct_b671a7c4 currentChannelMetrics; // @synthesize currentChannelMetrics=_currentChannelMetrics;
@property(retain, nonatomic) NSArray *supportedNumRedundantPayload; // @synthesize supportedNumRedundantPayload=_supportedNumRedundantPayload;
@property(nonatomic) unsigned int maxIDSStreamIdCount; // @synthesize maxIDSStreamIdCount=_maxIDSStreamIdCount;
@property(nonatomic) int qualityIndicator; // @synthesize qualityIndicator=_qualityIndicator;
@property(nonatomic) _Bool isAudioStalled; // @synthesize isAudioStalled=_isAudioStalled;
@property(nonatomic) unsigned int rateChangeCounter; // @synthesize rateChangeCounter=_rateChangeCounter;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) _Bool ignoreSilence; // @synthesize ignoreSilence=_ignoreSilence;
@property(readonly, nonatomic) _Bool isRedEnabled; // @synthesize isRedEnabled=_isRedEnabled;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(readonly, nonatomic) unsigned int lastSentAudioSampleTime; // @synthesize lastSentAudioSampleTime=_lastSentAudioSampleTime;
@property unsigned char inputMeter; // @synthesize inputMeter=_inputMeter;
@property(readonly, nonatomic) int actualAudioSendingBitrate; // @synthesize actualAudioSendingBitrate=_actualAudioSendingBitrate;
@property(readonly, nonatomic) int audioTxBitrate; // @synthesize audioTxBitrate=_audioTxBitrate;
@property(readonly, nonatomic) VCAudioTier *currentAudioTier; // @synthesize currentAudioTier=_currentAudioTier;
@property(readonly, nonatomic) VCPacketBundler *audioBundler; // @synthesize audioBundler=_audioBundler;
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000003dbdd7
- (void)audioIssueDetectorStopAndFinalize;	// IMP=0x00000000003db9e9
- (void)audioIssueDetectorCreateAndConfigure;	// IMP=0x00000000003db746
- (void)reportRTCPPacket;	// IMP=0x00000000003db72e
- (void)processNWConnectionNotification:(struct ifnet_interface_advisory *)arg1;	// IMP=0x00000000003db505
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000003db1c6
- (void)setStreamIDs:(id)arg1;	// IMP=0x00000000003db0a2
- (void)setRedNumPayloads:(int)arg1 withMaxDelay:(int)arg2 shouldResetHistory:(_Bool)arg3;	// IMP=0x00000000003daf68
- (void)logTierInfo:(int)arg1;	// IMP=0x00000000003dae1c
@property(readonly, nonatomic) unsigned int redMaxDelay20ms;
@property(readonly, nonatomic) unsigned int redNumPayloads;
@property(readonly, nonatomic) unsigned int encodedBytes;
- (unsigned int)sentAudioBytesShort;	// IMP=0x00000000003dadce
@property(readonly, nonatomic) unsigned int sentAudioBytes;
- (void)stop;	// IMP=0x00000000003dab5f
- (void)start;	// IMP=0x00000000003da594
- (void)useAudioTier:(id)arg1;	// IMP=0x00000000003da4fb
- (void)useAudioPayload:(id)arg1 withBitrate:(unsigned int)arg2;	// IMP=0x00000000003da334
- (void)updateAudioTxBitrate;	// IMP=0x00000000003d9e91
- (_Bool)setupAudioTierPicker;	// IMP=0x00000000003d9a90
- (id)packetsPerBundle;	// IMP=0x00000000003d98cd
- (void)setupAudioHeaderSize;	// IMP=0x00000000003d9838
- (_Bool)chooseAudioNetworkBitrate;	// IMP=0x00000000003d8bb3
- (void)currentPayloadUsed:(int)arg1 payloadUsed:(id)arg2;	// IMP=0x00000000003d8a83
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x00000000003d8966
- (unsigned int)maximumSamplesPerFrame;	// IMP=0x00000000003d7b6a
- (_Bool)allocateLastInputSampleBuffer:(unsigned int)arg1;	// IMP=0x00000000003d7a83
- (_Bool)setupAudioEncoders;	// IMP=0x00000000003d7826
- (void)removeUnusedAudioPayloads;	// IMP=0x00000000003d74dc
- (float)nextAudioInterval:(int)arg1;	// IMP=0x00000000003d7458
@property(readonly, nonatomic) NSDictionary *dtxMetrics;
- (void)reportRedundancyConfigChange;	// IMP=0x00000000003d6add
- (void)registerReportingTask;	// IMP=0x00000000003d6a74
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x00000000003d6648
- (void)updateAudioTxRate;	// IMP=0x00000000003d658e
- (_Bool)setupAudio:(id *)arg1;	// IMP=0x00000000003d634d
- (_Bool)setupEncoderBuffer;	// IMP=0x00000000003d61a0
- (void)setCellTech:(int)arg1 remoteCellular:(int)arg2 isIPV6:(int)arg3 audioCap:(unsigned int)arg4;	// IMP=0x00000000003d6141
- (_Bool)sendCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000003d5f62
- (void)handleCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1 didUpdateBandwidth:(_Bool *)arg2 didUpdateBitrate:(_Bool *)arg3;	// IMP=0x00000000003d5b53
- (_Bool)isCodecModeChangeRequestValid:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000003d5a4e
- (_Bool)shouldUpdateCodecBandwidth:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000003d57a6
- (_Bool)shouldUpdateCodecBitrate:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000003d544f
@property id <VCAudioTransmitterDelegate> delegate;
@property(readonly, nonatomic) VCAudioPayloadConfig *currentAudioPayloadConfig;
- (void)dealloc;	// IMP=0x00000000003d5282
- (void)initAudioValues;	// IMP=0x00000000003d5238
- (unsigned int)redundancyControllerModeForOperatingMode:(int)arg1 isRedEnabled:(_Bool)arg2;	// IMP=0x00000000003d520b
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000003d4050
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x00000000003d3ffb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
