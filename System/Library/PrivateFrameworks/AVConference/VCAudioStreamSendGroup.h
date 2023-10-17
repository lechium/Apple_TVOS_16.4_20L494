//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCBasebandCongestionDetector, VCAudioStreamGroupCommon, VCSystemAudioCaptureSession;

__attribute__((visibility("hidden")))
@interface VCAudioStreamSendGroup
{
    _Bool _isVADFilteringEnabled;	// 496 = 0x1f0
    _Bool _isCurrentDTXEnabled;	// 497 = 0x1f1
    AVCBasebandCongestionDetector *_basebandCongestionDetector;	// 504 = 0x1f8
    unsigned int _cellularUniqueTag;	// 512 = 0x200
    VCAudioStreamGroupCommon *_common;	// 520 = 0x208
    _Bool _lastEnqueuedStreamUpdateEventWasEmpty;	// 528 = 0x210
    struct opaqueCMSimpleQueue *_audioStreamUpdateEventQueue;	// 536 = 0x218
    struct opaqueCMSimpleQueue *_audioRedundancyChangeEventQueue;	// 544 = 0x220
    struct tagVCMemoryPool *_audioStreamUpdatePool;	// 552 = 0x228
    struct tagVCMemoryPool *_audioRedundancyEventPool;	// 560 = 0x230
    struct tagVCMediaQueue *_mediaQueue;	// 568 = 0x238
    unsigned char _lastAudioPriority;	// 576 = 0x240
    _Bool _forcedAudioPriorityEnabled;	// 577 = 0x241
    unsigned char _forcedAudioPriorityValue;	// 578 = 0x242
    double _forcedAudioPriorityLastUpdateTime;	// 584 = 0x248
    struct opaqueVCVoiceDetector *_voiceDetector;	// 592 = 0x250
    VCSystemAudioCaptureSession *_systemAudioCaptureSession;	// 600 = 0x258
    struct tagVCAudioDucker *_audioDucker;	// 608 = 0x260
    _Bool _shouldScheduleMediaQueue;	// 616 = 0x268
    float _averageInputPower;	// 620 = 0x26c
}

@property(readonly) VCAudioStreamGroupCommon *common; // @synthesize common=_common;
@property(nonatomic) unsigned int cellularUniqueTag; // @synthesize cellularUniqueTag=_cellularUniqueTag;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(nonatomic, setter=setCurrentDTXEnabled:) _Bool isCurrentDTXEnabled; // @synthesize isCurrentDTXEnabled=_isCurrentDTXEnabled;
@property(nonatomic, setter=setVADFilteringEnabled:) _Bool isVADFilteringEnabled; // @synthesize isVADFilteringEnabled=_isVADFilteringEnabled;
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x000000000018a391
- (void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x0000000000189e00
- (id)checkStreamsForAdditionalOptIn:(id)arg1;	// IMP=0x0000000000189c19
- (id)setupRedundancyControllerForMode:(unsigned int)arg1;	// IMP=0x00000000001897eb
- (void)setMuteOnStreams;	// IMP=0x0000000000189686
- (void)stopDynamicDucker;	// IMP=0x000000000018965e
- (void)startDynamicDucker;	// IMP=0x0000000000189576
- (void)stopVoiceActivityDetection;	// IMP=0x000000000018954e
- (void)startVoiceActivityDetection;	// IMP=0x00000000001894f9
- (void)flushAudioRedundancyEventQueue;	// IMP=0x00000000001894ab
- (void)flushAudioEventQueue;	// IMP=0x0000000000189452
- (void)cleanupIOEventQueues;	// IMP=0x00000000001893e9
- (_Bool)createIOEventQueues;	// IMP=0x0000000000188fe1
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;	// IMP=0x0000000000188fdb
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x0000000000188fd5
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000001889da
- (id)stopCapture;	// IMP=0x00000000001889bd
- (id)startCapture;	// IMP=0x00000000001889a0
- (_Bool)removeSyncDestination:(id)arg1;	// IMP=0x0000000000188585
- (_Bool)addSyncDestination:(id)arg1;	// IMP=0x000000000018816a
- (id)activeStreamKeys;	// IMP=0x0000000000188016
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4;	// IMP=0x00000000001877f6
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;	// IMP=0x00000000001876fb
- (void)collectAndLogChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000001876ac
- (_Bool)configureStreams;	// IMP=0x000000000018738a
@property(nonatomic, setter=setMuted:) _Bool isMuted;
- (void)didStop;	// IMP=0x00000000001871f1
- (id)willStart;	// IMP=0x0000000000187135
- (void)updateActiveVoiceOnly:(_Bool)arg1;	// IMP=0x0000000000186bdd
@property(setter=setPowerSpectrumEnabled:) _Bool isPowerSpectrumEnabled;
@property(readonly, nonatomic) int deviceRole;
- (_Bool)configureAudioStreams:(id)arg1 deviceRole:(int)arg2 operatingMode:(int)arg3;	// IMP=0x00000000001860fd
- (_Bool)setDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x0000000000185ce3
- (_Bool)setupStreamGroupWithConfig:(id)arg1;	// IMP=0x0000000000185c4e
- (void)dealloc;	// IMP=0x0000000000185b53
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000001852e3

@end
