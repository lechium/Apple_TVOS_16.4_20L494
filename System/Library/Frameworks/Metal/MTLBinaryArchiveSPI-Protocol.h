//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/MTLBinaryArchive-Protocol.h>

@class MTLBinaryEntry, MTLBinaryKey, MTLComputePipelineDescriptor, MTLMeshRenderPipelineDescriptor, MTLRenderPipelineDescriptor, MTLStitchedLibraryDescriptor, MTLTileRenderPipelineDescriptor, NSArray, NSMutableArray, NSObject, NSString, NSURL;
@protocol MTLBinaryArchive, NSObject, OS_dispatch_data;

@protocol MTLBinaryArchiveSPI <MTLBinaryArchive>
@property(readonly) NSArray *keys;
@property(readonly) unsigned long long options;
- (_Bool)enumerateArchivesFromPipelineCollection:(_Bool (^)(struct *, NSObject<OS_dispatch_data> *))arg1;
- (_Bool)enumerateArchivesFromBackingFile:(_Bool (^)(struct *, NSObject<OS_dispatch_data> *))arg1;
- (void *)pipelineCollection;
- (_Bool)storeMeshRenderPipelineDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1;
- (_Bool)storeTileRenderPipelineDescriptor:(MTLTileRenderPipelineDescriptor *)arg1;
- (_Bool)storeRenderPipelineDescriptor:(MTLRenderPipelineDescriptor *)arg1;
- (_Bool)storeComputePipelineDescriptor:(MTLComputePipelineDescriptor *)arg1;
- (_Bool)addLibraryWithDescriptor:(MTLStitchedLibraryDescriptor *)arg1 error:(id *)arg2;
- (NSObject<OS_dispatch_data> *)getArchiveDataForKey:(const CDStruct_41a22ec7 *)arg1;
- (void)addArchiveEntry:(NSObject<OS_dispatch_data> *)arg1 forKey:(const CDStruct_41a22ec7 *)arg2;
- (_Bool)addMeshRenderPipelineFunctionsWithDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addMeshRenderPipelineFunctionsWithDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (_Bool)addTileRenderPipelineFunctionsWithDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addRenderPipelineFunctionsWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addComputePipelineFunctionsWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (NSString *)formattedDescription:(unsigned long long)arg1;
- (_Bool)serializeToURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (NSMutableArray *)archiveFunctionIds;
- (void)initMetalScriptWithArchive:(id <MTLBinaryArchive>)arg1;
- (id <NSObject>)newPipelineDescriptorAtIndex:(unsigned long long)arg1 pipelineType:(unsigned int *)arg2 error:(id *)arg3;
- (unsigned long long)recompilablePipelineCount;
- (NSString *)getArchiveIDWithError:(id *)arg1;
- (MTLBinaryEntry *)getBinaryDataForKey:(MTLBinaryKey *)arg1;
- (void)addBinaryEntry:(MTLBinaryEntry *)arg1 forKey:(MTLBinaryKey *)arg2;
@end

