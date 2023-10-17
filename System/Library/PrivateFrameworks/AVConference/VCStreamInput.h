//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue, VCStreamInputDelegate;

__attribute__((visibility("hidden")))
@interface VCStreamInput
{
    NSObject<OS_dispatch_queue> *_streamInputQueue;	// 24 = 0x18
    CDUnknownFunctionPointerType _sampleBufferHandler;	// 32 = 0x20
    NSNumber *_streamInputID;	// 40 = 0x28
    struct opaqueCMFormatDescription *_format;	// 48 = 0x30
    id <VCStreamInputDelegate> _strongDelegate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 64 = 0x40
    _Bool _isStarted;	// 72 = 0x48
    CDStruct_1b6d18a9 _lastBufferTime;	// 76 = 0x4c
    CDStruct_1b6d18a9 _lastAveragedTime;	// 100 = 0x64
    _Atomic unsigned int _sampleBufferCount;	// 124 = 0x7c
    double _estimatedJitter;	// 128 = 0x80
    double _lastTransitTime;	// 136 = 0x88
    struct opaqueVCRemoteImageQueue *_receiverQueue;	// 144 = 0x90
}

@property(readonly, nonatomic) NSNumber *streamInputID; // @synthesize streamInputID=_streamInputID;
- (void)didResumeStreamInputCaptureSource;	// IMP=0x0000000000269e78
- (void)didSuspendStreamInputCaptureSource;	// IMP=0x0000000000269d67
- (void)didStopStreamInputCaptureSource;	// IMP=0x0000000000269c47
- (void)didStartStreamInputCaptureSource;	// IMP=0x0000000000269b27
- (void)thermalLevelDidChange:(int)arg1;	// IMP=0x0000000000269b21
- (_Bool)createRemoteReceiveQueue:(id)arg1;	// IMP=0x0000000000269811
@property(readonly) NSDictionary *reportingStats;
- (_Bool)isEqualFormat:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x00000000002694b1
- (struct opaqueCMFormatDescription *)streamFormat;	// IMP=0x00000000002694a0
- (void)invalidate;	// IMP=0x00000000002692a1
@property(readonly, nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
- (void)dealloc;	// IMP=0x0000000000268fdc
- (id)initWithStreamInputID:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 remoteQueue:(id)arg5;	// IMP=0x00000000002686db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

