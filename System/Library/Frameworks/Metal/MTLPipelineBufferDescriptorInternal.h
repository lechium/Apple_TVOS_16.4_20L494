//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLPipelineBufferDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLPipelineBufferDescriptorInternal : MTLPipelineBufferDescriptor
{
    struct MTLPipelineBufferDescriptorPrivate _private;	// 8 = 0x8
}

- (const struct MTLPipelineBufferDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000006eb78
- (void)setMutability:(unsigned long long)arg1;	// IMP=0x000000000006eb2a
- (unsigned long long)mutability;	// IMP=0x000000000006eb16
- (id)description;	// IMP=0x000000000006eb02
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000006ea8d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006ea35
- (unsigned long long)hash;	// IMP=0x000000000006ea1c
- (_Bool)isDefault;	// IMP=0x000000000006ea07
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006e9b8
- (void)dealloc;	// IMP=0x000000000006e989
- (id)init;	// IMP=0x000000000006e946

@end
