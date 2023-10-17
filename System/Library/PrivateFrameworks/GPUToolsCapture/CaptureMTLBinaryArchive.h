//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSArray, NSString;
@protocol MTLBinaryArchive, MTLBinaryArchiveSPI, MTLDevice;

@interface CaptureMTLBinaryArchive : NSObject
{
    id <MTLBinaryArchiveSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000049af8
- (_Bool)storeTileRenderPipelineDescriptor:(id)arg1;	// IMP=0x0000000000049a7f
- (_Bool)storeRenderPipelineDescriptor:(id)arg1;	// IMP=0x0000000000049a06
- (_Bool)storeMeshRenderPipelineDescriptor:(id)arg1;	// IMP=0x000000000004998d
- (_Bool)storeComputePipelineDescriptor:(id)arg1;	// IMP=0x0000000000049914
- (_Bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000498ae
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049898
- (struct MTLPipelineCollection *)pipelineCollection;	// IMP=0x0000000000049865
- (id)getBinaryDataForKey:(id)arg1;	// IMP=0x0000000000049814
- (id)getArchiveIDWithError:(id *)arg1;	// IMP=0x00000000000497fe
- (id)getArchiveDataForKey:(const CDStruct_5af0f983 *)arg1;	// IMP=0x00000000000497c6
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000497b0
- (_Bool)enumerateArchivesFromPipelineCollection:(CDUnknownBlockType)arg1;	// IMP=0x000000000004975f
- (_Bool)enumerateArchivesFromBackingFile:(CDUnknownBlockType)arg1;	// IMP=0x000000000004970e
- (void)dealloc;	// IMP=0x0000000000049620
- (_Bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000049591
- (_Bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004940c
- (_Bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000004937d
- (_Bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000491f8
- (_Bool)addMeshRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000049169
- (_Bool)addMeshRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000490e3
- (_Bool)addLibraryWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000048f5e
- (_Bool)addFunctionWithDescriptor:(id)arg1 library:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000048e97
- (_Bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000048e08
- (_Bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000048c83
- (void)addBinaryEntry:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000048c14
- (void)addArchiveEntry:(id)arg1 forKey:(const CDStruct_5af0f983 *)arg2;	// IMP=0x0000000000048bbb
@property(readonly) unsigned long long options;
@property(copy) NSString *label;
@property(readonly) NSArray *keys;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000489dd
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000489cc
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000004890b
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x00000000000488ab
- (id)originalObject;	// IMP=0x000000000004889d
@property(readonly) id <MTLBinaryArchive> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x00000000000487b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
