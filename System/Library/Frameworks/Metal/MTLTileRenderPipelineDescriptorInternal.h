//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLTileRenderPipelineDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor
{
    struct MTLTileRenderPipelineDescriptorPrivate _private;	// 32 = 0x20
    struct FlatBufferBuilder _builder;	// 176 = 0xb0
}

- (id).cxx_construct;	// IMP=0x0000000000007fc7
- (void).cxx_destruct;	// IMP=0x0000000000007fb6
- (id)gpuCompilerSPIOptions;	// IMP=0x0000000000007fa1
- (void)setGpuCompilerSPIOptions:(id)arg1;	// IMP=0x0000000000007f54
- (const void *)getPipelineScript;	// IMP=0x0000000000007eba
- (id)newSerializedTileDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000000744a
- (void)validateWithDevice:(id)arg1;	// IMP=0x0000000000007414
- (_Bool)validateWithDevice:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006e9e
- (id)colorAttachments;	// IMP=0x0000000000006e8d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006c27
- (unsigned long long)hash;	// IMP=0x0000000000006a43
- (void)setMaxCallStackDepth:(unsigned long long)arg1;	// IMP=0x0000000000006a31
- (unsigned long long)maxCallStackDepth;	// IMP=0x0000000000006a1f
- (void)setSupportAddingBinaryFunctions:(_Bool)arg1;	// IMP=0x0000000000006a0e
- (_Bool)supportAddingBinaryFunctions;	// IMP=0x00000000000069fd
- (void)setInsertLibraries:(id)arg1;	// IMP=0x00000000000069df
- (id)insertLibraries;	// IMP=0x00000000000069cd
- (void)setPreloadedLibraries:(id)arg1;	// IMP=0x0000000000006986
- (id)preloadedLibraries;	// IMP=0x0000000000006974
- (void)setLinkedFunctions:(id)arg1;	// IMP=0x00000000000068e2
- (id)linkedFunctions;	// IMP=0x0000000000006893
- (id)binaryArchives;	// IMP=0x0000000000006881
- (void)setBinaryArchives:(id)arg1;	// IMP=0x000000000000683a
- (long long)textureWriteRoundingMode;	// IMP=0x0000000000006827
- (void)setTextureWriteRoundingMode:(long long)arg1;	// IMP=0x0000000000006815
- (unsigned long long)maxTotalThreadsPerThreadgroup;	// IMP=0x0000000000006803
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;	// IMP=0x00000000000067b7
- (const struct MTLTileRenderPipelineDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000067a7
- (_Bool)threadgroupSizeMatchesTileSize;	// IMP=0x0000000000006796
- (void)setThreadgroupSizeMatchesTileSize:(_Bool)arg1;	// IMP=0x0000000000006785
- (id)tileFunction;	// IMP=0x0000000000006773
- (void)setTileFunction:(id)arg1;	// IMP=0x00000000000066e9
- (void)setLabel:(id)arg1;	// IMP=0x000000000000664a
- (id)label;	// IMP=0x0000000000006638
- (void)reset;	// IMP=0x0000000000006522
- (void)setProfileControl:(id)arg1;	// IMP=0x00000000000064d5
- (id)profileControl;	// IMP=0x00000000000064c0
- (id)tileBuffers;	// IMP=0x00000000000064ae
- (void)setColorSampleCount:(unsigned long long)arg1;	// IMP=0x000000000000649c
- (unsigned long long)colorSampleCount;	// IMP=0x000000000000648a
- (void)setPluginData:(id)arg1;	// IMP=0x000000000000644a
- (id)pluginData;	// IMP=0x0000000000006438
- (void)setRasterSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000006426
- (unsigned long long)rasterSampleCount;	// IMP=0x0000000000006414
- (void)setSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000006402
- (unsigned long long)sampleCount;	// IMP=0x00000000000063f0
- (id)description;	// IMP=0x00000000000063dc
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000005d32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005b5a
- (void)dealloc;	// IMP=0x0000000000005abe
- (id)init;	// IMP=0x0000000000005a01

@end

