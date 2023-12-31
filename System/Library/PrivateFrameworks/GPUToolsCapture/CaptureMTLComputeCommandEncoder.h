//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSMutableSet, NSString;
@protocol MTLComputeCommandEncoder, MTLComputeCommandEncoderSPI, MTLDevice;

@interface CaptureMTLComputeCommandEncoder : NSObject
{
    id <MTLComputeCommandEncoderSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    NSMutableSet *_retainedObjects;	// 40 = 0x28
    CaptureMTLCommandBuffer *_captureCommandBuffer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000072921
- (void)waitForFence:(id)arg1;	// IMP=0x00000000000727b0
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x00000000000725fa
- (void)useResourceGroup:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x0000000000072540
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x00000000000723b9
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000072205
- (void)useHeap:(id)arg1;	// IMP=0x0000000000072094
- (void)updateFence:(id)arg1;	// IMP=0x0000000000071f23
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000071d6d
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000071be6
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000071ae9
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000071933
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000717ac
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x0000000000071625
- (void)setStageInRegion:(CDStruct_4c83c94d)arg1;	// IMP=0x000000000007150a
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000071354
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000071128
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000070f7a
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000070df3
- (void)setIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000070c3d
- (void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000070ab6
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x00000000000709b9
- (void)setComputePipelineState:(id)arg1;	// IMP=0x0000000000070848
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000070711
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000007052a
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007042d
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000007029b
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x00000000000700fe
- (void)pushDebugGroup:(id)arg1;	// IMP=0x000000000006ff86
- (void)popDebugGroup;	// IMP=0x000000000006feb2
- (id)newKernelDebugInfo;	// IMP=0x000000000006fe9c
- (void)memoryBarrierWithScope:(unsigned long long)arg1;	// IMP=0x000000000006fdb8
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000006fc04
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x000000000006fa8c
- (void)endEncoding;	// IMP=0x000000000006f9b8
- (void)encodeStartWhile:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;	// IMP=0x000000000006f8eb
- (void)encodeStartIf:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;	// IMP=0x000000000006f81e
- (void)encodeStartElse;	// IMP=0x000000000006f7eb
- (void)encodeStartDoWhile;	// IMP=0x000000000006f7b8
- (_Bool)encodeEndWhile;	// IMP=0x000000000006f785
- (_Bool)encodeEndIf;	// IMP=0x000000000006f752
- (_Bool)encodeEndDoWhile:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;	// IMP=0x000000000006f680
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x000000000006f4f9
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x000000000006f3cc
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x000000000006f21a
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x000000000006f0ed
- (void)dealloc;	// IMP=0x000000000006efff
@property(copy) NSString *label;
@property(readonly) unsigned long long dispatchType;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000006ee37
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000006ee26
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000006ed65
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000006ed05
- (id)originalObject;	// IMP=0x000000000006ecf7
- (void)enableNullBufferBinds:(_Bool)arg1;	// IMP=0x000000000006ec06
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000006e87d
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000006e22c
@property(readonly) id <MTLComputeCommandEncoder> baseObject;
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x000000000006e0af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

