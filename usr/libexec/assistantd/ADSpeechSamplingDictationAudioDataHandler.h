//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDictationSessionTracker, AFDictationOptions, NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ADSpeechSamplingDictationAudioDataHandler : NSObject
{
    _Bool adSpeechSessionEnded;	// 8 = 0x8
    _Bool _shouldStopAddingSamples;	// 9 = 0x9
    NSMutableArray *_audioDataFolders;	// 16 = 0x10
    NSString *_folderPath;	// 24 = 0x18
    NSString *_audioFilePath;	// 32 = 0x20
    NSDictionary *_audioMetadataDict;	// 40 = 0x28
    ADDictationSessionTracker *_sessionTracker;	// 48 = 0x30
    AFDictationOptions *_dictationOptions;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    long long _maxChunkSize;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001d73d5
@property(nonatomic) long long maxChunkSize; // @synthesize maxChunkSize=_maxChunkSize;
@property _Bool shouldStopAddingSamples; // @synthesize shouldStopAddingSamples=_shouldStopAddingSamples;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) AFDictationOptions *dictationOptions; // @synthesize dictationOptions=_dictationOptions;
@property(retain, nonatomic) ADDictationSessionTracker *sessionTracker; // @synthesize sessionTracker=_sessionTracker;
@property(copy, nonatomic) NSDictionary *audioMetadataDict; // @synthesize audioMetadataDict=_audioMetadataDict;
@property(copy, nonatomic) NSString *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
@property(copy, nonatomic) NSString *folderPath; // @synthesize folderPath=_folderPath;
@property(retain, nonatomic) NSMutableArray *audioDataFolders; // @synthesize audioDataFolders=_audioDataFolders;
@property(nonatomic) _Bool adSpeechSessionEnded; // @synthesize adSpeechSessionEnded;
- (void)adSpeechLocalRecognitionDidSucceedWithSessionUUID:(id)arg1;	// IMP=0x00100000001d72de
- (void)adSpeechRecordingWillStopWithSignpostID:(unsigned long long)arg1;	// IMP=0x00100000001d72d8
- (_Bool)adWaitingForAudioFile;	// IMP=0x00100000001d72d0
- (void)adSpeechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 context:(id)arg2;	// IMP=0x00100000001d72ca
- (void)adSpeechRecordingDidRecognizeTokens:(id)arg1 nluResult:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00100000001d72c4
- (void)adSpeechRecordingDidRecognizePhrases:(id)arg1 rawPhrases:(id)arg2 utterances:(id)arg3 rawUtterances:(id)arg4 nluResult:(id)arg5 sessionUUID:(id)arg6 refId:(id)arg7;	// IMP=0x00100000001d72be
- (void)adSpeechRecordingDidEndWithContext:(id)arg1;	// IMP=0x00100000001d72b8
- (void)adSpeechRecordingDidChangeAVRecordRoute:(id)arg1 bluetoothDevice:(id)arg2 isDucking:(_Bool)arg3 isTwoShot:(_Bool)arg4 speechEndHostTime:(unsigned long long)arg5 context:(id)arg6;	// IMP=0x00100000001d72b2
- (void)adSpeechRecordingDidCancelWithContext:(id)arg1;	// IMP=0x00100000001d72ac
- (void)adSpeechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2 bluetoothDevice:(id)arg3 sessionRequestUUID:(id)arg4 dictationOptions:(id)arg5 context:(id)arg6;	// IMP=0x00100000001d72a6
- (void)adSpeechRecognizedPartialResult:(id)arg1;	// IMP=0x00100000001d72a0
- (void)adSpeechRecordingDidFail:(id)arg1 context:(id)arg2;	// IMP=0x00100000001d7153
- (void)adSpeechRecognized:(id)arg1 usingSpeechModel:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00100000001d6fde
- (void)adSpeechRecognitionDidFail:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x00100000001d67e5
- (void)addAudioSamplesOnQueue:(id)arg1;	// IMP=0x00100000001d639f
- (void)sendAudioDataToServer;	// IMP=0x00100000001d606e
- (void)dealloc;	// IMP=0x00100000001d5fb9
- (id)initWithAudioDataFolders:(id)arg1;	// IMP=0x00100000001d5b5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
