//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_MTLFunction.h"

@class MTLFunctionConstantValuesInternal, NSObject, NSString;
@protocol OS_dispatch_data, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MTLFunctionInternal : _MTLFunction
{
    struct MTLFunctionData _functionData;	// 200 = 0xc8
    unsigned char _publicMetadataInitialized;	// 312 = 0x138
    unsigned char _privateMetadataInitialized;	// 313 = 0x139
    unsigned char _sourceArchiveMetadataInitialized;	// 314 = 0x13a
    unsigned char _stitchableFunctionMetadataInitialized;	// 315 = 0x13b
    void *_programObject;	// 320 = 0x140
    NSString *_filePath;	// 328 = 0x148
    long long _lineNumber;	// 336 = 0x150
    NSObject<OS_dispatch_queue> *_functionQueue;	// 344 = 0x158
    NSObject<OS_dispatch_data> *_specializationAirScript;	// 352 = 0x160
    NSString *_baseLibraryFilePath;	// 360 = 0x168
    CDStruct_41a22ec7 _baseLibraryUUID;	// 368 = 0x170
    MTLFunctionConstantValuesInternal *_baseFunctionConstantValues;	// 400 = 0x190
}

- (id).cxx_construct;	// IMP=0x00000000000c6745
- (id)relocations;	// IMP=0x00000000000c6734
- (void)setRelocations:(id)arg1;	// IMP=0x00000000000c66ef
- (id)functionInputs;	// IMP=0x00000000000c66dd
- (unsigned long long)renderTargetArrayIndexType;	// IMP=0x00000000000c66cb
- (long long)lineNumber;	// IMP=0x00000000000c6685
- (void)setLineNumber:(long long)arg1;	// IMP=0x00000000000c6674
- (id)unpackedFilePath;	// IMP=0x00000000000c662e
- (void)setUnpackedFilePath:(id)arg1;	// IMP=0x00000000000c65e9
- (void)initializeSourceArchive;	// IMP=0x00000000000c64f9
- (id)filePath;	// IMP=0x00000000000c64b3
- (void)setFilePath:(id)arg1;	// IMP=0x00000000000c646e
- (void)initializePrivateMetadata;	// IMP=0x00000000000c63cc
- (id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;	// IMP=0x00000000000c625f
- (id)newSpecializedFunctionWithDescriptor:(id)arg1 destinationArchive:(id)arg2 functionCache:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000c5d9c
- (void)newSpecializedFunctionWithDescriptor:(id)arg1 destinationArchive:(id)arg2 functionCache:(id)arg3 sync:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c513c
- (_Bool)specializedFunctionHash:(CDStruct_41a22ec7 *)arg1 requestData:(id *)arg2 constants:(id)arg3 specializedName:(id)arg4 privateFunctions:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000c4fc0
- (void)setOptions:(unsigned long long)arg1;	// IMP=0x00000000000c4faf
- (void)setSourceArchiveOffset:(unsigned long long)arg1;	// IMP=0x00000000000c4f9d
- (unsigned long long)sourceArchiveOffset;	// IMP=0x00000000000c4f8b
- (id)functionConstantsDictionary;	// IMP=0x00000000000c4dba
- (unsigned long long)bitCodeFileSize;	// IMP=0x00000000000c4da8
- (void)setFunctionConstantSpecializationHash:(const CDStruct_41a22ec7 *)arg1;	// IMP=0x00000000000c4d86
- (const CDStruct_41a22ec7 *)bitCodeHash;	// IMP=0x00000000000c4d72
- (void)setFunctionConstants:(id)arg1;	// IMP=0x00000000000c4d34
- (id)functionConstants;	// IMP=0x00000000000c4cfc
- (_Bool)needsFunctionConstantValues;	// IMP=0x00000000000c4ccd
- (void)setStageInputAttributes:(id)arg1;	// IMP=0x00000000000c4c8f
- (id)stageInputAttributes;	// IMP=0x00000000000c4c42
- (id)precompiledOutput;	// IMP=0x00000000000c4c31
- (void)setPrecompiledOutput:(id)arg1;	// IMP=0x00000000000c4be6
- (id)arguments;	// IMP=0x00000000000c4b82
- (void)setArguments:(id)arg1;	// IMP=0x00000000000c4b44
- (id)returnType;	// IMP=0x00000000000c4ae0
- (void)setReturnType:(id)arg1;	// IMP=0x00000000000c4aa2
- (void)setVertexAttributes:(id)arg1;	// IMP=0x00000000000c4a64
- (id)vertexAttributes;	// IMP=0x00000000000c4a1a
- (void)initializeStitchableFunctionMetadata;	// IMP=0x00000000000c484e
- (void)initializePublicMetadata;	// IMP=0x00000000000c47a9
- (long long)patchControlPointCount;	// IMP=0x00000000000c477f
- (unsigned long long)patchType;	// IMP=0x00000000000c476a
- (void)setPluginData:(id)arg1;	// IMP=0x00000000000c4761
- (id)pluginData;	// IMP=0x00000000000c474f
- (void)setBitcodeType:(unsigned char)arg1;	// IMP=0x00000000000c4746
- (unsigned char)bitcodeType;	// IMP=0x00000000000c4734
- (unsigned long long)bitCodeOffset;	// IMP=0x00000000000c4723
- (id)importedLibraries;	// IMP=0x00000000000c4704
- (id)importedSymbols;	// IMP=0x00000000000c46e5
- (const struct MTLFunctionData *)functionData;	// IMP=0x00000000000c46d5
- (void *)programObject;	// IMP=0x00000000000c462a
- (void)dealloc;	// IMP=0x00000000000c44fb
- (id)baseFunctionConstantValues;	// IMP=0x00000000000c44ea
- (CDStruct_41a22ec7)baseLibraryUUID;	// IMP=0x00000000000c44ca
- (id)baseLibraryFilePath;	// IMP=0x00000000000c44b9
- (id)specializationAirScript;	// IMP=0x00000000000c44a8
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData *)arg3 functionData:(struct MTLFunctionData *)arg4 device:(id)arg5;	// IMP=0x00000000000c43bc

@end
