//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/MTLCaptureManager.h>

@class NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface CaptureMTLCaptureManager : MTLCaptureManager
{
    struct GTTraceContext *_traceContext;	// 8 = 0x8
    struct GTTraceStream *_traceStream;	// 16 = 0x10
    NSString *_gputracePath;	// 24 = 0x18
    _Bool _isToolManager;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_waitResponse;	// 40 = 0x28
}

+ (id)toolsCaptureManager;	// IMP=0x00100000000a8b87
- (void).cxx_destruct;	// IMP=0x00000000000a8739
- (id)newCaptureScopeWithCommandQueue:(id)arg1;	// IMP=0x00000000000a8535
- (id)newCaptureScopeWithDevice:(id)arg1;	// IMP=0x00000000000a8364
- (_Bool)isCapturing;	// IMP=0x00000000000a834f
- (void)stopCapture;	// IMP=0x00000000000a81d6
- (void)startCaptureWithScope:(id)arg1;	// IMP=0x00000000000a80ef
- (void)startCaptureWithCommandQueue:(id)arg1;	// IMP=0x00000000000a802c
- (void)startCaptureWithDevice:(id)arg1;	// IMP=0x00000000000a7f6c
- (_Bool)startCaptureWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a66c2
- (_Bool)supportsDestination:(long long)arg1;	// IMP=0x00000000000a668d
- (void)dealloc;	// IMP=0x00000000000a6641
- (id)initWithCaptureContext:(struct GTTraceContext *)arg1 andIsToolsManager:(_Bool)arg2;	// IMP=0x00000000000a6545
@property(readonly) struct GTTraceStream *traceStream;

// Remaining properties
@property(readonly) id baseObject;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceContext *traceContext;

@end

