//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAudioCircularBuffer, CSAudioInjectionDevice, CSKeywordAnalyzerNDAPI, NSObject, NSString, NSUUID;
@protocol CSAudioInjectionEngineDelegate, OS_dispatch_queue;

@interface CSAudioInjectionHearstEngine
{
    _Bool _voiceTriggerEnabled;	// 8 = 0x8
    _Bool _isForwarding;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSAudioInjectionEngineDelegate> _delegate;	// 24 = 0x18
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;	// 32 = 0x20
    CSAudioCircularBuffer *_circularBuffer;	// 40 = 0x28
    unsigned long long _lastDetectedVoiceTriggerBeginSampleCount;	// 48 = 0x30
    unsigned long long _lastForwardedSampleCount;	// 56 = 0x38
    CSAudioInjectionDevice *_connectedDevice;	// 64 = 0x40
    NSUUID *_uuid;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000c1a8d
@property(nonatomic) _Bool isForwarding; // @synthesize isForwarding=_isForwarding;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak CSAudioInjectionDevice *connectedDevice; // @synthesize connectedDevice=_connectedDevice;
@property(nonatomic) _Bool voiceTriggerEnabled; // @synthesize voiceTriggerEnabled=_voiceTriggerEnabled;
@property(nonatomic) unsigned long long lastForwardedSampleCount; // @synthesize lastForwardedSampleCount=_lastForwardedSampleCount;
@property(nonatomic) unsigned long long lastDetectedVoiceTriggerBeginSampleCount; // @synthesize lastDetectedVoiceTriggerBeginSampleCount=_lastDetectedVoiceTriggerBeginSampleCount;
@property(retain, nonatomic) CSAudioCircularBuffer *circularBuffer; // @synthesize circularBuffer=_circularBuffer;
@property(retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer; // @synthesize keywordAnalyzer=_keywordAnalyzer;
@property(nonatomic) __weak id <CSAudioInjectionEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x00100000000c1929
- (void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;	// IMP=0x00100000000c12d7
- (void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000000c12d1
- (void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000000c12cb
- (void)stopAudioStream;	// IMP=0x00100000000c11ab
- (void)startAudioStreamWithOption:(id)arg1;	// IMP=0x00100000000c1021
- (_Bool)isRecording;	// IMP=0x00100000000c0f6d
- (_Bool)injectAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c0f3e
- (_Bool)injectAudio:(id)arg1;	// IMP=0x00100000000c0f0f
- (void)stop;	// IMP=0x00100000000c0e4a
- (void)start;	// IMP=0x00100000000c0d72
- (void)dealloc;	// IMP=0x00100000000c0cb8
- (void)attachDevice:(id)arg1;	// IMP=0x00100000000c0bc6
- (_Bool)alwaysOnVoiceTriggerEnabled;	// IMP=0x00100000000c0b12
- (void)setAlwaysOnVoiceTriggerEnabled:(_Bool)arg1;	// IMP=0x00100000000c0aa6
- (_Bool)isAlwaysOnVoiceTriggerAvailable;	// IMP=0x00100000000c0a9e
- (id)initWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000c0934

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

