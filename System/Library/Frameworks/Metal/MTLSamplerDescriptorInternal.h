//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLSamplerDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor
{
    struct MTLSamplerDescriptorPrivate _private;	// 16 = 0x10
}

- (const struct MTLSamplerDescriptorPrivate *)descriptorPrivate;	// IMP=0x00000000000a65c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a64b3
- (unsigned long long)hash;	// IMP=0x00000000000a642d
- (void)setLabel:(id)arg1;	// IMP=0x00000000000a638e
- (id)label;	// IMP=0x00000000000a637c
- (void)setResourceIndex:(unsigned long long)arg1;	// IMP=0x00000000000a636a
- (unsigned long long)resourceIndex;	// IMP=0x00000000000a6358
- (void)setForceResourceIndex:(_Bool)arg1;	// IMP=0x00000000000a633b
- (_Bool)forceResourceIndex;	// IMP=0x00000000000a6327
- (void)setSupportArgumentBuffers:(_Bool)arg1;	// IMP=0x00000000000a630a
- (_Bool)supportArgumentBuffers;	// IMP=0x00000000000a62f4
- (void)setCompareFunction:(unsigned long long)arg1;	// IMP=0x00000000000a62d4
- (unsigned long long)compareFunction;	// IMP=0x00000000000a62be
- (unsigned long long)pixelFormat;	// IMP=0x00000000000a62ac
- (void)setPixelFormat:(unsigned long long)arg1;	// IMP=0x00000000000a6286
- (void)setLodAverage:(_Bool)arg1;	// IMP=0x00000000000a6269
- (_Bool)lodAverage;	// IMP=0x00000000000a6253
- (void)setLodBias:(float)arg1;	// IMP=0x00000000000a6240
- (float)lodBias;	// IMP=0x00000000000a622d
- (void)setLodMaxClamp:(float)arg1;	// IMP=0x00000000000a621a
- (float)lodMaxClamp;	// IMP=0x00000000000a6207
- (void)setLodMinClamp:(float)arg1;	// IMP=0x00000000000a61f4
- (float)lodMinClamp;	// IMP=0x00000000000a61e1
- (void)setNormalizedCoordinates:(_Bool)arg1;	// IMP=0x00000000000a61c4
- (_Bool)normalizedCoordinates;	// IMP=0x00000000000a61b0
@property(nonatomic) _Bool forceSeamsOnCubemapFiltering;
@property(nonatomic) unsigned int customBorderColorValue_3;
@property(nonatomic) unsigned int customBorderColorValue_2;
@property(nonatomic) unsigned int customBorderColorValue_1;
@property(nonatomic) unsigned int customBorderColorValue_0;
@property(nonatomic) unsigned long long borderColorSPI;
- (void)setBorderColor:(unsigned long long)arg1;	// IMP=0x00000000000a60a3
- (unsigned long long)borderColor;	// IMP=0x00000000000a608e
- (void)setRAddressMode:(unsigned long long)arg1;	// IMP=0x00000000000a606e
- (unsigned long long)rAddressMode;	// IMP=0x00000000000a6058
- (void)setTAddressMode:(unsigned long long)arg1;	// IMP=0x00000000000a6038
- (unsigned long long)tAddressMode;	// IMP=0x00000000000a6022
- (void)setSAddressMode:(unsigned long long)arg1;	// IMP=0x00000000000a6002
- (unsigned long long)sAddressMode;	// IMP=0x00000000000a5fec
- (void)setMaxAnisotropy:(unsigned long long)arg1;	// IMP=0x00000000000a5fda
- (unsigned long long)maxAnisotropy;	// IMP=0x00000000000a5fc8
- (void)setMipFilter:(unsigned long long)arg1;	// IMP=0x00000000000a5faa
- (unsigned long long)mipFilter;	// IMP=0x00000000000a5f94
- (void)setMagFilter:(unsigned long long)arg1;	// IMP=0x00000000000a5f78
- (unsigned long long)magFilter;	// IMP=0x00000000000a5f62
- (void)setMinFilter:(unsigned long long)arg1;	// IMP=0x00000000000a5f47
- (unsigned long long)minFilter;	// IMP=0x00000000000a5f34
- (id)description;	// IMP=0x00000000000a5f20
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000a5912
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a5735
- (void)dealloc;	// IMP=0x00000000000a56f2
- (id)init;	// IMP=0x00000000000a5670

@end
