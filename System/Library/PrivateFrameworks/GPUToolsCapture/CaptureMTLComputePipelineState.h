//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, MTLComputePipelineDescriptor, MTLDebugInstrumentationData, NSMapTable, NSString;
@protocol MTLComputePipelineState, MTLComputePipelineStateSPI, MTLDevice, MTLFunction;

@interface CaptureMTLComputePipelineState : NSObject
{
    id <MTLComputePipelineStateSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    CaptureMTLComputePipelineState *_captureComputePipelineState;	// 24 = 0x18
    struct GTTraceContext *_traceContext;	// 32 = 0x20
    struct GTTraceStream *_traceStream;	// 40 = 0x28
    NSMapTable *_functionHandleMap;	// 48 = 0x30
    id <MTLFunction> _function;	// 56 = 0x38
    MTLComputePipelineDescriptor *_descriptor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000053cb1
@property(copy, nonatomic) MTLComputePipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(retain, nonatomic) id <MTLFunction> function; // @synthesize function=_function;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;	// IMP=0x0000000000053c67
- (void)dealloc;	// IMP=0x0000000000053b79
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly) unsigned long long threadExecutionWidth;
@property(readonly) long long textureWriteRoundingMode;
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly) unsigned long long staticThreadgroupMemoryLength;
@property(readonly, nonatomic) unsigned long long resourceIndex;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) NSString *label;
@property(readonly) struct MTLResourceID gpuResourceID;
@property(readonly) unsigned long long gpuHandle;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly) id <MTLDevice> device;
@property(readonly, nonatomic) unsigned long long allocatedSize;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000053a4d
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000053a3c
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000005397b
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000005391b
- (id)originalObject;	// IMP=0x000000000005390d
@property(readonly) id <MTLComputePipelineState> baseObject;
- (void)swapObject:(id)arg1;	// IMP=0x000000000005385e
- (_Bool)newFunctionHandle:(out id *)arg1 associatedWithBaseFunctionHandle:(id)arg2 captureFunction:(id)arg3;	// IMP=0x0000000000053737
- (id)functionHandleMap;	// IMP=0x00000000000536df
- (id)initWithBaseObject:(id)arg1 captureComputePipelineState:(id)arg2;	// IMP=0x00000000000535f4
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x0000000000053504

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
