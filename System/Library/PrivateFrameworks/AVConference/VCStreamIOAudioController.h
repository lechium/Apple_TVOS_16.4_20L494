//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCStreamOutputSource-Protocol.h>

@class NSDictionary, NSObject, NSString, VCAudioIOControllerClient, VCAudioRelay, VCAudioRelayIO, VCStreamInputAudio, VCStreamOutput;
@protocol OS_dispatch_queue, VCStreamSychronizationDelegate;

__attribute__((visibility("hidden")))
@interface VCStreamIOAudioController <VCStreamOutputSource>
{
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
    _Bool _isRunning;	// 32 = 0x20
    _Bool _sourceStarted;	// 33 = 0x21
    _Bool _sinkStarted;	// 34 = 0x22
    VCAudioRelay *_outputThread;	// 40 = 0x28
    VCAudioRelayIO *_outputThreadClient;	// 48 = 0x30
    long long _streamToken;	// 56 = 0x38
    unsigned char _clientDirection;	// 64 = 0x40
    unsigned long long _networkClockID;	// 72 = 0x48
    VCStreamInputAudio *_streamInput;	// 80 = 0x50
    VCAudioIOControllerClient *_runningClient;	// 88 = 0x58
    struct PacketThread_s *_packetThread;	// 96 = 0x60
    struct opaqueVCAudioBufferList *_inputSamples;	// 104 = 0x68
    struct __CFAllocator *_audioSampleBufferAllocator;	// 112 = 0x70
    VCStreamOutput *_streamOutput;	// 120 = 0x78
    struct os_unfair_lock_s _streamOutputLock;	// 128 = 0x80
    struct _VCAudioIOControllerClientIO *_sourceIO;	// 136 = 0x88
    struct __CFAllocator *_backingBufferAllocator;	// 144 = 0x90
    _Bool _timestampInitialized;	// 152 = 0x98
    unsigned int _nextExpectedSampleTime;	// 156 = 0x9c
    CDStruct_1b6d18a9 _lastHostTime;	// 160 = 0xa0
    long long _lastSampleCount;	// 184 = 0xb8
}

@property(retain) VCAudioIOControllerClient *runningClient; // @synthesize runningClient=_runningClient;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x00000000000bfe3a
@property(retain) VCStreamOutput *streamOutput;
@property(nonatomic) id <VCStreamSychronizationDelegate> synchronizationDelegate;
@property(readonly, nonatomic) NSDictionary *reportingStats;
- (void)invalidate;	// IMP=0x00000000000bfcf3
- (_Bool)canSetDirection:(unsigned char)arg1;	// IMP=0x00000000000bfcad
- (void)updateClient:(id)arg1 direction:(unsigned char)arg2;	// IMP=0x00000000000bf6d0
- (void)dispatchedStopClient;	// IMP=0x00000000000bf604
- (_Bool)dispatchedStartClient:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bf294
- (void)stopClient:(id)arg1;	// IMP=0x00000000000bece6
- (void)cleanupStreamOutput;	// IMP=0x00000000000becb9
- (void)cleanupOutputThread;	// IMP=0x00000000000bec74
- (_Bool)setupAndStartOutputClientThread;	// IMP=0x00000000000be3da
- (_Bool)startOutputForClient:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000be13c
- (_Bool)startInputForClient:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bd4de
- (void)startClient:(id)arg1;	// IMP=0x00000000000bd10a
- (void)_packetThreadStop;	// IMP=0x00000000000bd0cb
- (_Bool)_packetThreadStartWithClientFormat:(const struct tagVCAudioFrameFormat *)arg1;	// IMP=0x00000000000bcad0
- (void)dealloc;	// IMP=0x00000000000bc862
- (id)initWithStreamInputID:(long long)arg1 streamToken:(long long)arg2 networkClockID:(unsigned long long)arg3;	// IMP=0x00000000000bc012

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

