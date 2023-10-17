//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SCNMTLComputePipeline, SCNMTLResourceManager;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLMorph : NSObject
{
    SCNMTLResourceManager *_resourceManager;	// 8 = 0x8
    CDStruct_798fd7c0 _baseBuffer;	// 16 = 0x10
    unsigned int _baseVertexCount;	// 40 = 0x28
    short _baseBufferTypes[3];	// 44 = 0x2c
    unsigned int _baseBufferTypesCount;	// 52 = 0x34
    unsigned int _baseBufferStride;	// 56 = 0x38
    short _targetBufferTypes[3];	// 60 = 0x3c
    unsigned int _targetBufferTypesCount;	// 68 = 0x44
    unsigned int _targetBufferStride;	// 72 = 0x48
    unsigned int _dstSemanticUsageMask;	// 76 = 0x4c
    unsigned int _srcSemanticUsageMask;	// 80 = 0x50
    void *_bufferPool;	// 88 = 0x58
    _Bool _unifyPostMorphNormals;	// 96 = 0x60
    _Bool _shouldMorphNormals;	// 97 = 0x61
    unsigned int _lastMorpherIncrementalPassState;	// 100 = 0x64
    unsigned char _dataKindForMorphing;	// 104 = 0x68
    id <MTLBuffer> _splatProvokingVertices;	// 112 = 0x70
    struct {
        id <MTLBuffer> perVertexTrianglesOffsets;
        id <MTLBuffer> perVertexTrianglesIndices;
        _Bool sharedTriangleIs16Bits;
    } _postUnifyInfo;	// 120 = 0x78
    struct Target *_targets;	// 144 = 0x90
    unsigned long long _targetCount;	// 152 = 0x98
    NSArray *_originalTargets;	// 160 = 0xa0
    SCNMTLComputePipeline *_copyCPS;	// 168 = 0xa8
    SCNMTLComputePipeline *_blendCPS;	// 176 = 0xb0
    SCNMTLComputePipeline *_blendSparseCPS;	// 184 = 0xb8
    SCNMTLComputePipeline *_splatCPS;	// 192 = 0xc0
}

- (void)morphSparseMorpher:(struct __C3DMorpher *)arg1 renderContext:(id)arg2 positionBuffer:(id)arg3 normalBuffer:(id)arg4;	// IMP=0x000000000004d0fb
- (void)_createPipelineStates:(id)arg1;	// IMP=0x000000000004cc90
- (void)unifyMeshWithRenderContext:(id)arg1 positionBuffer:(id)arg2 normalBuffer:(id)arg3;	// IMP=0x000000000004c9df
- (void)morphIncrementallyForMorpher:(struct __C3DMorpher *)arg1 renderContext:(id)arg2 positionBuffer:(id)arg3 normalBuffer:(id)arg4;	// IMP=0x000000000004c216
- (_Bool)isCompatibleWithMorph:(struct __C3DMorph *)arg1;	// IMP=0x000000000004c1ce
- (unsigned int)sparseIndexSize;	// IMP=0x000000000004c1c3
- (void)dealloc;	// IMP=0x000000000004c103
- (void)setNextMorphRequiresReset;	// IMP=0x000000000004c0f6
- (CDStruct_798fd7c0)newBufferWithLength:(unsigned long long)arg1;	// IMP=0x000000000004c0d7
- (id)initWithMorph:(struct __C3DMorph *)arg1 baseGeometry:(struct __C3DGeometry *)arg2 resourceManager:(id)arg3;	// IMP=0x000000000004abe4
- (void)_prepareTargetDataForIndex:(long long)arg1 morph:(struct __C3DMorph *)arg2 baseMesh:(struct __C3DMesh *)arg3;	// IMP=0x000000000004a990
- (void)_writeSources:(const struct __C3DMeshSource **)arg1 dstTypes:(short *)arg2 sourcesCount:(unsigned int)arg3 inBuffer:(void *)arg4 stride:(unsigned int)arg5 length:(unsigned long long)arg6 sparse:(_Bool)arg7 positionScale:(float)arg8;	// IMP=0x000000000004a566

@end

