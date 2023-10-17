//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFQueue, AFVoiceInfo, NSMutableArray, NSMutableDictionary, NSString, SRPowerLevelListener, VSSpeechSynthesizer;
@protocol OS_dispatch_group, OS_dispatch_queue, SRTTSManagerClientStateManagerDelegate, SRTTSManagerDelegate;

@interface SRTTSManager : NSObject
{
    VSSpeechSynthesizer *_synthesizer;	// 8 = 0x8
    AFVoiceInfo *_outputVoice;	// 16 = 0x10
    NSMutableDictionary *_availableVoicesForLanguage;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_processingTasksQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_pendingTasksQueue;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_pendingTasksGroup;	// 48 = 0x30
    SRPowerLevelListener *_powerLevelListener;	// 56 = 0x38
    unsigned int _audioSessionID;	// 64 = 0x40
    id <SRTTSManagerDelegate> _delegate;	// 72 = 0x48
    id <SRTTSManagerClientStateManagerDelegate> _clientStateManagerDelegate;	// 80 = 0x50
    AFQueue *_taskQueue;	// 88 = 0x58
    NSMutableArray *_activeTasks;	// 96 = 0x60
    NSMutableDictionary *_delayedTasks;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000062478
@property(readonly, nonatomic, getter=_delayedTasks) NSMutableDictionary *delayedTasks; // @synthesize delayedTasks=_delayedTasks;
@property(readonly, nonatomic, getter=_activeTasks) NSMutableArray *activeTasks; // @synthesize activeTasks=_activeTasks;
@property(readonly, nonatomic, getter=_taskQueue) AFQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) __weak id <SRTTSManagerClientStateManagerDelegate> clientStateManagerDelegate; // @synthesize clientStateManagerDelegate=_clientStateManagerDelegate;
@property(nonatomic) __weak id <SRTTSManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)powerLevelListener:(id)arg1 powerLevelDidUpdateTo:(float)arg2;	// IMP=0x00100000000623bf
- (void)_setSynthesizer:(id)arg1;	// IMP=0x00100000000623ae
- (void)_processProvisionalTasks;	// IMP=0x00100000000621a4
- (id)_filterVoices:(id)arg1 gender:(id)arg2;	// IMP=0x0010000000061f0b
- (long long)_genderForString:(id)arg1;	// IMP=0x0010000000061e77
- (void)_findVoiceForLanguage:(id)arg1 gender:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061a76
- (id)_activeTaskWithSpeechRequest:(id)arg1;	// IMP=0x00100000000618b9
- (id)_activeTaskWithPresynthesizedAudioRequest:(id)arg1;	// IMP=0x00100000000616d7
- (void)_processTaskQueue;	// IMP=0x0010000000060ded
- (void)_handleText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f576
- (void)_handleAudioData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005eff9
- (void)processDelayedItem:(id)arg1;	// IMP=0x001000000005ef01
- (void)enqueueText:(id)arg1 identifier:(id)arg2 sessionId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005eea3
- (void)_enqueueText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 sessionId:(id)arg4 language:(id)arg5 gender:(id)arg6 isPhonetic:(_Bool)arg7 provisionally:(_Bool)arg8 eligibleAfterDuration:(double)arg9 delayed:(_Bool)arg10 canUseServerTTS:(_Bool)arg11 preparationIdentifier:(id)arg12 shouldCache:(_Bool)arg13 completion:(CDUnknownBlockType)arg14 analyticsContext:(id)arg15 speakableContextInfo:(id)arg16;	// IMP=0x001000000005e7a2
- (void)enqueuePhaticWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005e655
- (void)enqueueAudioData:(id)arg1 identifier:(id)arg2 sessionId:(id)arg3 provisionally:(_Bool)arg4 eligibleAfterDuration:(double)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000005e5f2
- (void)enqueueText:(id)arg1 identifier:(id)arg2 sessionId:(id)arg3 language:(id)arg4 gender:(id)arg5 isPhonetic:(_Bool)arg6 provisionally:(_Bool)arg7 eligibleAfterDuration:(double)arg8 delayed:(_Bool)arg9 canUseServerTTS:(_Bool)arg10 preparationIdentifier:(id)arg11 completion:(CDUnknownBlockType)arg12 analyticsContext:(id)arg13 speakableContextInfo:(id)arg14;	// IMP=0x001000000005e55e
- (void)setOutputVoice:(id)arg1;	// IMP=0x001000000005e43e
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;	// IMP=0x001000000005dcba
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;	// IMP=0x001000000005d1c4
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;	// IMP=0x001000000005cf72
- (void)speechSynthesizer:(id)arg1 didFinishPresynthesizedAudioRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;	// IMP=0x001000000005c998
- (void)speechSynthesizer:(id)arg1 didStopPresynthesizedAudioRequest:(id)arg2 atEnd:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000005c87b
- (void)speechSynthesizer:(id)arg1 didStartPresynthesizedAudioRequest:(id)arg2;	// IMP=0x001000000005c6cc
- (void)ttsTaskEligibilityDidChange:(id)arg1;	// IMP=0x001000000005c60c
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;	// IMP=0x001000000005c5fa
- (void)invalidate;	// IMP=0x001000000005c544
- (void)invalidateOnMainThread;	// IMP=0x001000000005c532
- (void)_cancelByCancellingActiveTasksOnly:(_Bool)arg1;	// IMP=0x001000000005c1e9
- (void)skipCurrentSynthesis;	// IMP=0x001000000005c1d2
- (void)cancel;	// IMP=0x001000000005c1be
- (_Bool)_isSynthesisQueueEmpty;	// IMP=0x001000000005c12e
- (void)isSynthesisQueueEmpty:(CDUnknownBlockType)arg1;	// IMP=0x001000000005bfef
- (_Bool)isSpeaking;	// IMP=0x001000000005bfd9
- (void)prewarmIfNeeded;	// IMP=0x001000000005bec5
- (id)_synthesizer;	// IMP=0x001000000005beb7
- (id)init;	// IMP=0x001000000005bcbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

