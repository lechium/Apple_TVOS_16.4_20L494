//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePassSampleBufferAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLComputePassSampleBufferAttachmentDescriptorInternal : MTLComputePassSampleBufferAttachmentDescriptor
{
    struct MTLComputePassSampleBufferAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x000000000007e000
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007df85
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007df3a
- (unsigned long long)endOfEncoderSampleIndex;	// IMP=0x000000000007df28
- (void)setEndOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000007df16
- (unsigned long long)startOfEncoderSampleIndex;	// IMP=0x000000000007df04
- (void)setStartOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x000000000007def2
- (id)sampleBuffer;	// IMP=0x000000000007dee1
- (void)setSampleBuffer:(id)arg1;	// IMP=0x000000000007dea3
- (const struct MTLComputePassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000007de93
- (void)dealloc;	// IMP=0x000000000007de51
- (id)init;	// IMP=0x000000000007de11

@end

