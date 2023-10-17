//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPCRecordingSession, MPCVocalAttenuationPolicyController, MPCWhiskyControllerDisabledState, MSVTimer, NSDate, NSObject, NSString;
@protocol MPCVocalAttenuationModelProvider, MPCVocalAttenuationProcessor, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCWhiskyController
{
    NSObject<OS_dispatch_queue> *_setupQueue;	// 8 = 0x8
    float _vocalLevel;	// 16 = 0x10
    _Bool _processIsBackgrounded;	// 20 = 0x14
    NSDate *_shutdownSequenceStartDate;	// 24 = 0x18
    float _minVocalLevel;	// 32 = 0x20
    float _maxVocalLevel;	// 36 = 0x24
    float _defaultVocalLevel;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    MPCWhiskyControllerDisabledState *_disabledState;	// 56 = 0x38
    MPCRecordingSession *_recordingSession;	// 64 = 0x40
    id <MPCVocalAttenuationModelProvider> _modelProvider;	// 72 = 0x48
    id <MPCVocalAttenuationProcessor> _processor;	// 80 = 0x50
    MPCVocalAttenuationPolicyController *_policyController;	// 88 = 0x58
    MSVTimer *_shutdownTimer;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001b104e
@property(retain, nonatomic) MSVTimer *shutdownTimer; // @synthesize shutdownTimer=_shutdownTimer;
@property(readonly, nonatomic) MPCVocalAttenuationPolicyController *policyController; // @synthesize policyController=_policyController;
@property(readonly, nonatomic) id <MPCVocalAttenuationProcessor> processor; // @synthesize processor=_processor;
@property(readonly, nonatomic) id <MPCVocalAttenuationModelProvider> modelProvider; // @synthesize modelProvider=_modelProvider;
@property(readonly, nonatomic) MPCRecordingSession *recordingSession; // @synthesize recordingSession=_recordingSession;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy) NSString *description;
- (void)_emitStatisticsEvent;	// IMP=0x00000000001b0282
- (void)engineDidResetMediaServices:(id)arg1;	// IMP=0x00000000001b0254
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;	// IMP=0x00000000001b0158
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;	// IMP=0x00000000001b00e1
- (void)vocalAttenuationPolicyControllerDidChange:(id)arg1;	// IMP=0x00000000001affe6
- (void)_stopShutdownSequenceIfRelevant;	// IMP=0x00000000001aff5c
- (void)_startShutdownSequenceIfRelevant;	// IMP=0x00000000001afd74
- (float)_vocalLevelForProcessorLevel:(float)arg1;	// IMP=0x00000000001afb9b
- (float)_processorLevelForVocalLevel:(float)arg1;	// IMP=0x00000000001af9c0
- (void)_tearDownTapData;	// IMP=0x00000000001af983
- (void)_loadModel;	// IMP=0x00000000001af858
- (void)_updateState:(long long)arg1;	// IMP=0x00000000001af323
@property(readonly, nonatomic) double renderingTimeLimit;
- (id)blockingPolicy;	// IMP=0x00000000001af283
@property(readonly, copy, nonatomic) NSString *modelID;
- (void)finalizeTap:(struct opaqueMTAudioProcessingTap *)arg1;	// IMP=0x00000000001af181
- (void)processTap:(struct opaqueMTAudioProcessingTap *)arg1 sampleIndex:(long long)arg2 numberFrames:(long long)arg3 flags:(unsigned int)arg4 audioBufferList:(struct AudioBufferList *)arg5 numberFramesOut:(long long *)arg6 flagsOut:(unsigned int *)arg7;	// IMP=0x00000000001aeedf
- (void)unprepareTap:(struct opaqueMTAudioProcessingTap *)arg1;	// IMP=0x00000000001aee3b
- (void)prepareTap:(struct opaqueMTAudioProcessingTap *)arg1 maxFrames:(long long)arg2 processingFormat:(const struct AudioStreamBasicDescription *)arg3;	// IMP=0x00000000001aebc1
- (unsigned int)creationFlags;	// IMP=0x00000000001aebb6
- (_Bool)shouldAttachAudioTapToItem:(id)arg1;	// IMP=0x00000000001ae8c1
- (void)dealloc;	// IMP=0x00000000001ae84c
- (id)initWithPlaybackEngine:(id)arg1 modelProvider:(id)arg2 processor:(id)arg3;	// IMP=0x00000000001ae475
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x00000000001ae3f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
