//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPassDepthAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLRenderPassDepthAttachmentDescriptorInternal : MTLRenderPassDepthAttachmentDescriptor
{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)attachmentDescriptor;	// IMP=0x00600000000de736
- (const struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000deffd
- (void)setDepthResolveFilter:(unsigned long long)arg1;	// IMP=0x00000000000defe8
- (unsigned long long)depthResolveFilter;	// IMP=0x00000000000defd3
- (void)setStoreActionOptions:(unsigned long long)arg1;	// IMP=0x00000000000defc1
- (unsigned long long)storeActionOptions;	// IMP=0x00000000000defaf
- (void)setStoreAction:(unsigned long long)arg1;	// IMP=0x00000000000def9d
- (unsigned long long)storeAction;	// IMP=0x00000000000def8b
- (void)setLoadAction:(unsigned long long)arg1;	// IMP=0x00000000000def79
- (unsigned long long)loadAction;	// IMP=0x00000000000def67
- (_Bool)yInvert;	// IMP=0x00000000000def53
- (void)setYInvert:(_Bool)arg1;	// IMP=0x00000000000def3f
- (unsigned long long)resolveDepthPlane;	// IMP=0x00000000000def2a
- (void)setResolveDepthPlane:(unsigned long long)arg1;	// IMP=0x00000000000def15
- (unsigned long long)resolveSlice;	// IMP=0x00000000000def00
- (void)setResolveSlice:(unsigned long long)arg1;	// IMP=0x00000000000deeeb
- (unsigned long long)resolveLevel;	// IMP=0x00000000000deed9
- (void)setResolveLevel:(unsigned long long)arg1;	// IMP=0x00000000000deec7
- (double)clearDepth;	// IMP=0x00000000000deeb4
- (void)setClearDepth:(double)arg1;	// IMP=0x00000000000deea1
- (unsigned long long)depthPlane;	// IMP=0x00000000000dee8f
- (void)setDepthPlane:(unsigned long long)arg1;	// IMP=0x00000000000dee7d
- (unsigned long long)slice;	// IMP=0x00000000000dee6b
- (void)setSlice:(unsigned long long)arg1;	// IMP=0x00000000000dee59
- (unsigned long long)level;	// IMP=0x00000000000dee47
- (void)setLevel:(unsigned long long)arg1;	// IMP=0x00000000000dee35
- (id)resolveTexture;	// IMP=0x00000000000dee23
- (void)setResolveTexture:(id)arg1;	// IMP=0x00000000000ded99
- (id)texture;	// IMP=0x00000000000ded88
- (void)setTexture:(id)arg1;	// IMP=0x00000000000ded00
- (id)description;	// IMP=0x00000000000decec
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000de8f9
- (unsigned long long)hash;	// IMP=0x00000000000de8e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000de881
- (void)dealloc;	// IMP=0x00000000000de82b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000de7cc
- (id)init;	// IMP=0x00000000000de748

@end

