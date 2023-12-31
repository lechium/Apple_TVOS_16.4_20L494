//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFocalPlaneNative : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputMatteImage;	// 80 = 0x50
    CIImage *inputLensModelCalculatorImage;	// 88 = 0x58
    NSNumber *inputAlphaThreshold;	// 96 = 0x60
    NSNumber *inputAmplitude;	// 104 = 0x68
    NSNumber *inputExponent;	// 112 = 0x70
    NSNumber *inputGamma;	// 120 = 0x78
    NSNumber *inputMinFactor;	// 128 = 0x80
    NSNumber *inputMaxFactor;	// 136 = 0x88
}

+ (id)customAttributes;	// IMP=0x00600000000a54c3
- (id)outputImage;	// IMP=0x00000000000a5acd
- (id)_focalPlanePreProcessorKernelPow2;	// IMP=0x00000000000a5a4f
- (id)_focalPlanePreProcessorKernel;	// IMP=0x00000000000a59d1

@end

