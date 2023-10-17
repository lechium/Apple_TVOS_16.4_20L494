//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_MTLObjectWithLabel.h"

@class NSArray, NSString;
@protocol MTLDevice, MTLPipelineCache;

__attribute__((visibility("hidden")))
@interface _MTLPipelineLibrary : _MTLObjectWithLabel
{
    void *_pipelineLibraryData;	// 24 = 0x18
    id <MTLDevice> _device;	// 32 = 0x20
    NSArray *_pipelineNames;	// 40 = 0x28
    _Bool _disableRunTimeCompilation;	// 48 = 0x30
}

@property _Bool disableRunTimeCompilation; // @synthesize disableRunTimeCompilation=_disableRunTimeCompilation;
@property(readonly) NSArray *pipelineNames; // @synthesize pipelineNames=_pipelineNames;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000088e45
- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000088e0a
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000088d5e
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000088cb2
@property(readonly, nonatomic) id <MTLPipelineCache> functionCache; // @dynamic functionCache;
@property(readonly, nonatomic) id <MTLPipelineCache> pipelineCache; // @dynamic pipelineCache;
- (void)dealloc;	// IMP=0x0000000000088bbf
- (id)initWithDevice:(id)arg1 pipelineLibraryData:(void *)arg2;	// IMP=0x0000000000088b4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label; // @dynamic label;
@property(readonly) Class superclass;

@end

