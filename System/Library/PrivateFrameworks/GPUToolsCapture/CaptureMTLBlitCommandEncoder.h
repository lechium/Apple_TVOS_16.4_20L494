//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSMutableSet, NSString;
@protocol MTLBlitCommandEncoder, MTLBlitCommandEncoderSPI, MTLDevice;

@interface CaptureMTLBlitCommandEncoder : NSObject
{
    id <MTLBlitCommandEncoderSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    CaptureMTLCommandBuffer *_captureCommandBuffer;	// 24 = 0x18
    struct GTTraceContext *_traceContext;	// 32 = 0x20
    struct GTTraceStream *_traceStream;	// 40 = 0x28
    NSMutableSet *_retainedObjects;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000a2759
- (void)waitForFence:(id)arg1;	// IMP=0x00000000000a25e8
- (void)updateFence:(id)arg1;	// IMP=0x00000000000a2477
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x00000000000a22da
- (void)resetTextureAccessCounters:(id)arg1 region:(CDStruct_4c83c94d)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;	// IMP=0x00000000000a2123
- (void)resetCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000a1f91
- (void)pushDebugGroup:(id)arg1;	// IMP=0x00000000000a1e19
- (void)popDebugGroup;	// IMP=0x00000000000a1d45
- (void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000a1bb3
- (void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x00000000000a1a21
- (void)optimizeContentsForGPUAccess:(id)arg1;	// IMP=0x00000000000a18b0
- (void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x00000000000a171e
- (void)optimizeContentsForCPUAccess:(id)arg1;	// IMP=0x00000000000a15ad
- (void)invalidateCompressedTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;	// IMP=0x00000000000a141b
- (void)invalidateCompressedTexture:(id)arg1;	// IMP=0x00000000000a12aa
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x00000000000a1132
- (void)getTextureAccessCounters:(id)arg1 region:(CDStruct_4c83c94d)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4 resetCounters:(_Bool)arg5 countersBuffer:(id)arg6 countersBufferOffset:(unsigned long long)arg7;	// IMP=0x00000000000a0e8c
- (void)generateMipmapsForTexture:(id)arg1;	// IMP=0x00000000000a0d1b
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 bytes:(const void *)arg5 length:(unsigned long long)arg6;	// IMP=0x00000000000a0af1
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 value:(unsigned char)arg3;	// IMP=0x00000000000a0941
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 pattern4:(unsigned int)arg3;	// IMP=0x00000000000a0794
- (void)endEncoding;	// IMP=0x00000000000a06c0
- (void)dealloc;	// IMP=0x00000000000a05d2
- (void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(struct _NSRange)arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4;	// IMP=0x00000000000a039c
- (void)copyFromTexture:(id)arg1 toTexture:(id)arg2;	// IMP=0x00000000000a0192
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;	// IMP=0x000000000009ff4b
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;	// IMP=0x000000000009fc63
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;	// IMP=0x000000000009f996
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;	// IMP=0x000000000009f6d2
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;	// IMP=0x000000000009f422
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;	// IMP=0x000000000009f1ec
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;	// IMP=0x000000000009ef28
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;	// IMP=0x000000000009ec79
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000009eac7
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000009eab6
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000009e9f5
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000009e995
- (id)originalObject;	// IMP=0x000000000009e987
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 color:(CDStruct_d2b197d1)arg5 pixelFormat:(unsigned long long)arg6;	// IMP=0x000000000009e78f
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 color:(CDStruct_d2b197d1)arg5;	// IMP=0x000000000009e5aa
- (void)resolveCounters:(id)arg1 inRange:(struct _NSRange)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4;	// IMP=0x000000000009e1b6
@property(readonly) id <MTLBlitCommandEncoder> baseObject;
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x000000000009e039

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

