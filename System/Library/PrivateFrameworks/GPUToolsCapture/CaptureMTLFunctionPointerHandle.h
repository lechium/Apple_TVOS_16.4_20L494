//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLFunctionPointerHandleSPI;

@interface CaptureMTLFunctionPointerHandle : NSObject
{
    id <MTLFunctionPointerHandleSPI> _baseObject;	// 8 = 0x8
    struct GTTraceContext *_traceContext;	// 16 = 0x10
    struct GTTraceStream *_traceStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000544ae
- (void)dealloc;	// IMP=0x00000000000543c0
@property(readonly, nonatomic) unsigned long long resourceIndex;
@property(readonly, nonatomic) unsigned long long gpuAddress;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000005437e
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000005436d
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000542ac
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000005424c
- (id)originalObject;	// IMP=0x000000000005423e
@property(readonly) id <MTLFunctionPointerHandleSPI> baseObject;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;	// IMP=0x000000000005418c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

