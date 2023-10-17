//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPipelineColorAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor
{
    struct MTLRenderPipelineAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (const struct MTLRenderPipelineAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000ec82c
- (void)setPixelFormat:(unsigned long long)arg1;	// IMP=0x00000000000ec806
- (unsigned long long)pixelFormat;	// IMP=0x00000000000ec7f1
- (void)setWriteMask:(unsigned long long)arg1;	// IMP=0x00000000000ec7cb
- (unsigned long long)writeMask;	// IMP=0x00000000000ec7b5
- (void)setAlphaBlendOperation:(unsigned long long)arg1;	// IMP=0x00000000000ec793
- (unsigned long long)alphaBlendOperation;	// IMP=0x00000000000ec77d
- (void)setDestinationAlphaBlendFactor:(unsigned long long)arg1;	// IMP=0x00000000000ec757
- (unsigned long long)destinationAlphaBlendFactor;	// IMP=0x00000000000ec741
- (void)setSourceAlphaBlendFactor:(unsigned long long)arg1;	// IMP=0x00000000000ec71b
- (unsigned long long)sourceAlphaBlendFactor;	// IMP=0x00000000000ec705
- (void)setRgbBlendOperation:(unsigned long long)arg1;	// IMP=0x00000000000ec6e5
- (unsigned long long)rgbBlendOperation;	// IMP=0x00000000000ec6d0
- (void)setDestinationRGBBlendFactor:(unsigned long long)arg1;	// IMP=0x00000000000ec6aa
- (unsigned long long)destinationRGBBlendFactor;	// IMP=0x00000000000ec694
- (void)setSourceRGBBlendFactor:(unsigned long long)arg1;	// IMP=0x00000000000ec66e
- (unsigned long long)sourceRGBBlendFactor;	// IMP=0x00000000000ec658
- (void)setBlendingEnabled:(_Bool)arg1;	// IMP=0x00000000000ec63a
- (_Bool)isBlendingEnabled;	// IMP=0x00000000000ec628
- (id)description;	// IMP=0x00000000000ec614
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000ec59f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ec547
- (unsigned long long)hash;	// IMP=0x00000000000ec52e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ec4df
- (void)dealloc;	// IMP=0x00000000000ec4b0
- (id)init;	// IMP=0x00000000000ec46d

@end

