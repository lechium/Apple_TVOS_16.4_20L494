//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSMutableSet, NSString;
@protocol MTLDebugCommandEncoder, MTLDevice;

@interface CaptureMTLDebugCommandEncoder : NSObject
{
    id <MTLDebugCommandEncoder> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    NSMutableSet *_retainedObjects;	// 40 = 0x28
    CaptureMTLCommandBuffer *_captureCommandBuffer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003682a
- (void)dumpTexture:(id)arg1;	// IMP=0x00000000000367da
- (void)dumpTexture:(id)arg1 name:(const char *)arg2;	// IMP=0x0000000000036785
- (void)dumpTexture:(id)arg1 name:(const char *)arg2 glMode:(_Bool)arg3;	// IMP=0x0000000000036721
- (void)dumpBuffer:(id)arg1;	// IMP=0x00000000000366d1
- (void)dumpBuffer:(id)arg1 name:(const char *)arg2;	// IMP=0x000000000003667c
@property(readonly) id <MTLDebugCommandEncoder> baseObject;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000003664a
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000036639
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000036578
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000036518
- (id)originalObject;	// IMP=0x000000000003650a
- (void)dealloc;	// IMP=0x00000000000364ac
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x000000000003638b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

