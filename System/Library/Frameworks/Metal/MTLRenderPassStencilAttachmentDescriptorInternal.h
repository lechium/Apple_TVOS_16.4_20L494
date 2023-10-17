//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPassStencilAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLRenderPassStencilAttachmentDescriptorInternal : MTLRenderPassStencilAttachmentDescriptor
{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)attachmentDescriptor;	// IMP=0x00600000000df00d
- (const struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000df8d1
- (void)setStoreActionOptions:(unsigned long long)arg1;	// IMP=0x00000000000df8bf
- (unsigned long long)storeActionOptions;	// IMP=0x00000000000df8ad
- (void)setStoreAction:(unsigned long long)arg1;	// IMP=0x00000000000df89b
- (unsigned long long)storeAction;	// IMP=0x00000000000df889
- (void)setLoadAction:(unsigned long long)arg1;	// IMP=0x00000000000df877
- (unsigned long long)loadAction;	// IMP=0x00000000000df865
- (_Bool)yInvert;	// IMP=0x00000000000df851
- (void)setYInvert:(_Bool)arg1;	// IMP=0x00000000000df83d
- (unsigned long long)resolveDepthPlane;	// IMP=0x00000000000df828
- (void)setResolveDepthPlane:(unsigned long long)arg1;	// IMP=0x00000000000df813
- (unsigned long long)resolveSlice;	// IMP=0x00000000000df7fe
- (void)setResolveSlice:(unsigned long long)arg1;	// IMP=0x00000000000df7e9
- (unsigned long long)resolveLevel;	// IMP=0x00000000000df7d7
- (void)setResolveLevel:(unsigned long long)arg1;	// IMP=0x00000000000df7c5
- (void)setStencilResolveFilter:(unsigned long long)arg1;	// IMP=0x00000000000df7b3
- (unsigned long long)stencilResolveFilter;	// IMP=0x00000000000df7a1
- (unsigned int)clearStencil;	// IMP=0x00000000000df790
- (void)setClearStencil:(unsigned int)arg1;	// IMP=0x00000000000df77f
- (unsigned long long)depthPlane;	// IMP=0x00000000000df76d
- (void)setDepthPlane:(unsigned long long)arg1;	// IMP=0x00000000000df75b
- (unsigned long long)slice;	// IMP=0x00000000000df749
- (void)setSlice:(unsigned long long)arg1;	// IMP=0x00000000000df737
- (unsigned long long)level;	// IMP=0x00000000000df725
- (void)setLevel:(unsigned long long)arg1;	// IMP=0x00000000000df713
- (id)resolveTexture;	// IMP=0x00000000000df701
- (void)setResolveTexture:(id)arg1;	// IMP=0x00000000000df677
- (id)texture;	// IMP=0x00000000000df666
- (void)setTexture:(id)arg1;	// IMP=0x00000000000df5de
- (id)description;	// IMP=0x00000000000df5ca
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000df1d0
- (unsigned long long)hash;	// IMP=0x00000000000df1b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000df158
- (void)dealloc;	// IMP=0x00000000000df102
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000df0a3
- (id)init;	// IMP=0x00000000000df01f

@end

