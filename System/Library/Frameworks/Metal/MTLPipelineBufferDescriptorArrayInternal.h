//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLPipelineBufferDescriptorArray.h"

@class MTLPipelineBufferDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLPipelineBufferDescriptorArrayInternal : MTLPipelineBufferDescriptorArray
{
    MTLPipelineBufferDescriptorInternal *_descriptors[31];	// 8 = 0x8
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006ee83
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;	// IMP=0x000000000006edc0
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000006ed45
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006ec6b
- (void)dealloc;	// IMP=0x000000000006ec0b

@end
