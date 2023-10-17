//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioChunkForTV, CSAudioRecorder, NSData, NSDictionary, NSError;

@protocol CSAudioRecorderDelegate <NSObject>
- (void)audioRecorderBufferAvailable:(CSAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(CSAudioChunkForTV *)arg3;
- (void)audioRecorderBufferAvailable:(CSAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(NSData *)arg3 remoteVAD:(NSData *)arg4 atTime:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 numberOfChannels:(int)arg7;

@optional
- (void)audioRecorderStreamHandleIdInvalidated:(unsigned long long)arg1;
- (void)audioRecorderBuiltInAudioStreamInvalidated:(CSAudioRecorder *)arg1 error:(NSError *)arg2;
- (void)audioRecorderWillBeDestroyed:(CSAudioRecorder *)arg1;
- (void)audioRecorderLostMediaserverd:(CSAudioRecorder *)arg1;
- (void)audioRecorderDisconnected:(CSAudioRecorder *)arg1;
- (void)voiceTriggerDetectedOnAOP:(NSDictionary *)arg1;
- (void)audioRecorder:(CSAudioRecorder *)arg1 didSetAudioSessionActive:(_Bool)arg2;
- (void)audioRecorder:(CSAudioRecorder *)arg1 willSetAudioSessionActive:(_Bool)arg2;
- (void)audioRecorderEndRecordInterruption:(CSAudioRecorder *)arg1;
- (void)audioRecorderBeginRecordInterruption:(CSAudioRecorder *)arg1 withContext:(NSDictionary *)arg2;
- (void)audioRecorderBeginRecordInterruption:(CSAudioRecorder *)arg1;
- (void)audioRecorderDidFinishAlertPlayback:(CSAudioRecorder *)arg1 ofType:(long long)arg2 error:(NSError *)arg3;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(CSAudioRecorder *)arg1 toConfiguration:(long long)arg2;
- (void)audioRecorderDidStopRecord:(CSAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(long long)arg3;
- (void)audioRecorderDidStartRecord:(CSAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(NSError *)arg4;
@end

