//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSMutableArray, NSMutableSet, NSString;
@protocol MTLAccelerationStructureCommandEncoder, MTLAccelerationStructureCommandEncoderSPI, MTLDevice;

@interface CaptureMTLAccelerationStructureCommandEncoder : NSObject
{
    id <MTLAccelerationStructureCommandEncoderSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    CaptureMTLCommandBuffer *_captureCommandBuffer;	// 24 = 0x18
    struct GTTraceContext *_traceContext;	// 32 = 0x20
    struct GTTraceStream *_traceStream;	// 40 = 0x28
    NSMutableSet *_retainedObjects;	// 48 = 0x30
    NSMutableArray *_blitOperations;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000008c380
- (void)writeSerializedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000008c16b
- (_Bool)writeGenericBVHStructureSizesOfAccelerationStructure:(id)arg1 into:(id)arg2;	// IMP=0x000000000008c0ab
- (_Bool)writeGenericBVHStructureOfAccelerationStructure:(id)arg1 into:(id)arg2;	// IMP=0x000000000008bfeb
- (void)writeDeserializedPrimitiveAccelerationStructureSizes:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizesBufferOffset:(unsigned long long)arg4;	// IMP=0x000000000008bdc6
- (void)writeDeserializedAccelerationStructureSize:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizeBufferOffset:(unsigned long long)arg4;	// IMP=0x000000000008bba1
- (void)writeCompactedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3 sizeDataType:(unsigned long long)arg4;	// IMP=0x000000000008b97c
- (void)writeCompactedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3;	// IMP=0x000000000008b767
- (void)writeAccelerationStructureSerializationData:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3;	// IMP=0x000000000008b552
- (void)waitForFence:(id)arg1;	// IMP=0x000000000008b3e1
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x000000000008b22b
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x000000000008b0a4
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000008aef0
- (void)useHeap:(id)arg1;	// IMP=0x000000000008ad7f
- (void)updateFence:(id)arg1;	// IMP=0x000000000008ac0e
- (void)serializePrimitiveAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000008a9f9
- (void)pushDebugGroup:(id)arg1;	// IMP=0x000000000008a881
- (void)popDebugGroup;	// IMP=0x000000000008a7ad
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x000000000008a635
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3 withDescriptor:(id)arg4;	// IMP=0x000000000008a3a7
- (void)dealloc;	// IMP=0x000000000008a2b9
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000008a107
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000008a0f6
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000008a035
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000089fd5
- (id)originalObject;	// IMP=0x0000000000089fc7
- (void)endEncoding;	// IMP=0x0000000000089b3f
- (void)deserializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4 withDescriptor:(id)arg5;	// IMP=0x00000000000897e8
- (void)serializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 toBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;	// IMP=0x000000000008956d
- (void)deserializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;	// IMP=0x000000000008927e
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000089021
- (void)buildAccelerationStructure:(id)arg1 descriptor:(id)arg2 scratchBuffer:(id)arg3 scratchBufferOffset:(unsigned long long)arg4;	// IMP=0x0000000000088adb
- (void)refitAccelerationStructure:(id)arg1 descriptor:(id)arg2 destination:(id)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(unsigned long long)arg5 options:(unsigned long long)arg6;	// IMP=0x00000000000886ba
- (void)refitAccelerationStructure:(id)arg1 descriptor:(id)arg2 destination:(id)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(unsigned long long)arg5;	// IMP=0x00000000000882a3
- (void)copyAndCompactAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;	// IMP=0x0000000000088031
- (void)copyAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;	// IMP=0x0000000000087dbf
@property(readonly) id <MTLAccelerationStructureCommandEncoder> baseObject;
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x0000000000087c1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

