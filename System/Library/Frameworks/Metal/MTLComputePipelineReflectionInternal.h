//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePipelineReflection.h"

@class NSArray, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection
{
    NSArray *_arguments;	// 8 = 0x8
    NSArray *_builtInArguments;	// 16 = 0x10
    NSDictionary *_performanceStatistics;	// 24 = 0x18
    CDStruct_596dc0d1 _flags;	// 32 = 0x20
    unsigned int _traceBufferIndex;	// 40 = 0x28
    NSData *_pluginReturnData;	// 48 = 0x30
    NSArray *_constantSamplerUniqueIdentifiers;	// 56 = 0x38
    NSArray *_constantSamplerDescriptors;	// 64 = 0x40
    NSArray *_bindings;	// 72 = 0x48
}

- (id)description;	// IMP=0x00000000000e3f68
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000e3bf6
- (id)builtInArguments;	// IMP=0x00000000000e3be5
- (id)bindings;	// IMP=0x00000000000e3bc8
- (id)arguments;	// IMP=0x00000000000e3bb7
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000e3b7a
- (void)setConstantSamplerUniqueIdentifiers:(id)arg1;	// IMP=0x00000000000e3b3c
- (id)constantSamplerDescriptors;	// IMP=0x00000000000e3b2b
- (id)constantSamplerUniqueIdentifiers;	// IMP=0x00000000000e3b1a
- (id)pluginReturnData;	// IMP=0x00000000000e3b09
- (unsigned int)traceBufferIndex;	// IMP=0x00000000000e3af9
- (CDStruct_596dc0d1)usageFlags;	// IMP=0x00000000000e3ae8
- (void)setPerformanceStatistics:(id)arg1;	// IMP=0x00000000000e3aaf
- (id)performanceStatistics;	// IMP=0x00000000000e3a9e
- (void)dealloc;	// IMP=0x00000000000e3a00
- (id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(CDStruct_596dc0d1)arg4;	// IMP=0x00000000000e39d6
- (id)initWithSerializedData:(id)arg1 serializedStageInputDescriptor:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(CDStruct_596dc0d1)arg5;	// IMP=0x00000000000e35a5

@end

