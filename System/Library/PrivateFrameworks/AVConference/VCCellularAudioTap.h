//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, VCServerDelegate;

__attribute__((visibility("hidden")))
@interface VCCellularAudioTap : NSObject
{
    NSMutableDictionary *_audioTapIOMap;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_stateQueue;	// 16 = 0x10
    int _processId;	// 24 = 0x18
    long long _audioSessionId;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
    id <VCServerDelegate> _delegate;	// 48 = 0x30
}

+ (unsigned int)audioIOTypeFromTapType:(unsigned int)arg1;	// IMP=0x0010000000284785
@property(nonatomic) id <VCServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (struct _VCAudioIOInitConfiguration)audioIOConfigWithAudioType:(unsigned int)arg1 realtimeContext:(void *)arg2;	// IMP=0x0000000000284c28
- (void)unregisterAudioTapForStreamToken:(long long)arg1;	// IMP=0x0000000000284b61
- (int)registerAudioTapForStreamToken:(long long)arg1 tapType:(unsigned int)arg2;	// IMP=0x00000000002847a2
- (void)audioPowerSpectrumSinkDidUnregister;	// IMP=0x000000000028477f
- (void)audioPowerSpectrumSinkDidRegister;	// IMP=0x0000000000284779
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x000000000028475f
- (void)didServerDie;	// IMP=0x00000000002846d7
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x00000000002846d1
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x00000000002846cb
- (void)didResume;	// IMP=0x00000000002846c5
- (void)didSuspend;	// IMP=0x00000000002846bf
- (void)controllerFormatChanged:(const struct tagVCAudioFrameFormat *)arg1;	// IMP=0x00000000002846b9
- (void)didStop:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000002846b3
- (void)didStart:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000002846ad
- (_Bool)removeAudioTapForStreamToken:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000284056
- (_Bool)addAudioTapForStreamToken:(long long)arg1 tapType:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000002837bb
- (void)dealloc;	// IMP=0x000000000028360c
- (id)initWithProcessId:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x0000000000283164

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

