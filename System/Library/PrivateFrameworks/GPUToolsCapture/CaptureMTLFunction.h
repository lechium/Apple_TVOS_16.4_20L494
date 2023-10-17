//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, CaptureMTLLibrary, MTLDebugInstrumentationData, MTLType, NSArray, NSDictionary, NSString;
@protocol MTLDevice, MTLFunction, MTLFunctionHandle, MTLFunctionSPI;

@interface CaptureMTLFunction : NSObject
{
    id <MTLFunctionSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    CaptureMTLLibrary *_captureLibrary;	// 24 = 0x18
    struct GTTraceContext *_traceContext;	// 32 = 0x20
    struct GTTraceStream *_traceStream;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000165ab
- (id)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id)arg2;	// IMP=0x0000000000016543
- (id)reflectionWithOptions:(unsigned long long)arg1;	// IMP=0x000000000001652d
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;	// IMP=0x00000000000162fb
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;	// IMP=0x000000000001612e
- (id)bitcodeData;	// IMP=0x0000000000016118
- (const CDStruct_5af0f983 *)bitCodeHash;	// IMP=0x0000000000016102
@property(readonly) NSArray *vertexAttributes;
@property(readonly, copy) NSString *unpackedFilePath;
@property(readonly) NSArray *stageInputAttributes;
@property(readonly) MTLType *returnType;
@property(readonly) unsigned long long renderTargetArrayIndexType;
@property(copy, nonatomic) NSArray *relocations;
@property(readonly) unsigned long long patchType;
@property(readonly) long long patchControlPointCount;
@property(readonly) unsigned long long options;
@property(readonly) NSString *name;
@property(readonly) long long lineNumber;
@property(copy) NSString *label;
@property(readonly) NSArray *importedSymbols;
@property(readonly) NSArray *importedLibraries;
@property(readonly) unsigned long long functionType;
@property(readonly, nonatomic) id <MTLFunctionHandle> functionHandle;
@property(readonly) NSDictionary *functionConstantsDictionary;
@property(readonly, copy) NSString *filePath;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSArray *arguments;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000015d7a
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000015d69
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000015ca8
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000015c48
- (id)originalObject;	// IMP=0x0000000000015c3a
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2 binaryArchives:(id)arg3;	// IMP=0x0000000000015b40
- (id)reflectionWithOptions:(unsigned long long)arg1 binaryArchives:(id)arg2;	// IMP=0x0000000000015aac
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2 pipelineLibrary:(id)arg3;	// IMP=0x0000000000015853
- (id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;	// IMP=0x0000000000015691
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;	// IMP=0x00000000000154e5
@property(readonly) id <MTLFunction> baseObject;
- (void)dealloc;	// IMP=0x00000000000153e9
- (void)swapObject:(id)arg1;	// IMP=0x0000000000015311
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x0000000000015233
- (id)initWithBaseObject:(id)arg1 captureLibrary:(id)arg2;	// IMP=0x000000000001512a

// Remaining properties
@property(readonly) NSArray *bindings;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

