//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHighlightShadowAdjust : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputRadius;	// 80 = 0x50
    NSNumber *inputShadowAmount;	// 88 = 0x58
    NSNumber *inputHighlightAmount;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00100000000b67c7
@property(retain, nonatomic) NSNumber *inputHighlightAmount; // @synthesize inputHighlightAmount;
@property(retain, nonatomic) NSNumber *inputShadowAmount; // @synthesize inputShadowAmount;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;	// IMP=0x00000000000b7621
- (id)_outputProperties;	// IMP=0x00000000000b7464
- (id)outputImage;	// IMP=0x00000000000b6d3d
- (id)_kernelSnoB_v0;	// IMP=0x00000000000b6d1d
- (id)_kernelSHnoB_v0;	// IMP=0x00000000000b6cfd
- (id)_kernelSH_v0;	// IMP=0x00000000000b6cdd
- (id)_kernelSHnoB_v1;	// IMP=0x00000000000b6cbd
- (id)_kernelSH_v1;	// IMP=0x00000000000b6c9d
- (id)_kernelSHnoB_v2;	// IMP=0x00000000000b6c7d
- (id)_kernelSH_v2;	// IMP=0x00000000000b6c5d
- (_Bool)_isIdentity;	// IMP=0x00000000000b6bc6
- (void)setDefaults;	// IMP=0x00000000000b6b49
- (int)_defaultVersion;	// IMP=0x00000000000b6b3e
- (int)_maxVersion;	// IMP=0x00000000000b6b33

@end
