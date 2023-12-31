//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLDrawable;

@interface CaptureMTLDrawable : NSObject
{
    id <MTLDrawable> _baseObject;	// 8 = 0x8
    struct GTTraceContext *_traceContext;	// 16 = 0x10
    struct GTTraceStream *_traceStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000087c0f
- (void)presentAtTime:(double)arg1;	// IMP=0x0000000000087b0e
- (void)present;	// IMP=0x0000000000087a23
- (void)trackPresent:(const struct GTTraceEncoder *)arg1;	// IMP=0x0000000000087954
- (id)texture;	// IMP=0x0000000000087849
- (id)layer;	// IMP=0x0000000000087833
- (void)dealloc;	// IMP=0x0000000000087745
@property(readonly, copy) NSString *description;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000087719
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000087708
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000087657
- (unsigned long long)deviceRef;	// IMP=0x00000000000875df
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000008757f
@property(readonly) id <MTLDrawable> baseObject;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;	// IMP=0x0000000000087491

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

