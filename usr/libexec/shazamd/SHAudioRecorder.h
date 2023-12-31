//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, SHAudioRecorderDelegate;

@interface SHAudioRecorder : NSObject
{
    struct AudioQueueBuffer *mBuffers[3];	// 8 = 0x8
    id <SHAudioRecorderDelegate> _delegate;	// 32 = 0x20
    long long _recordingSource;	// 40 = 0x28
    struct OpaqueAudioQueue *_audioQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_audioRecorderDispatchQueue;	// 56 = 0x38
    struct AudioStreamBasicDescription _audioStreamBasicDescription;	// 64 = 0x40
}

+ (_Bool)hasAudioQueueFailedWithStatus:(int)arg1 annotateError:(id *)arg2;	// IMP=0x0020000000021bf5
+ (_Bool)isAudioQueueRunning:(struct OpaqueAudioQueue *)arg1;	// IMP=0x0010000000021961
+ (id)audioBufferFromData:(void *)arg1 byteSize:(unsigned long long)arg2 inFormat:(id)arg3;	// IMP=0x00100000000218ad
- (void).cxx_destruct;	// IMP=0x0020000000021f43
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioRecorderDispatchQueue; // @synthesize audioRecorderDispatchQueue=_audioRecorderDispatchQueue;
@property(nonatomic) struct AudioStreamBasicDescription audioStreamBasicDescription; // @synthesize audioStreamBasicDescription=_audioStreamBasicDescription;
@property(nonatomic) struct OpaqueAudioQueue *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(nonatomic) long long recordingSource; // @synthesize recordingSource=_recordingSource;
@property(nonatomic) __weak id <SHAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)startAudioQueueAfterRetrySecondsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021c4b
- (_Bool)stopAudioQueueAndClearBuffersWithError:(id *)arg1;	// IMP=0x00100000000219c5
- (_Bool)stopRecordingWithError:(id *)arg1;	// IMP=0x001000000002189b
- (void)startRecordingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021145
- (id)initWithRecordingSource:(long long)arg1;	// IMP=0x00100000000210e2
- (void)dealloc;	// IMP=0x0010000000021046

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

