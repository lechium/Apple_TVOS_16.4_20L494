//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinement : CIFilter
{
    CIImage *inputDisparityImage;	// 72 = 0x48
    CIImage *inputImage;	// 80 = 0x50
    NSNumber *inputPropagateKernel;	// 88 = 0x58
    NSNumber *inputSmoothSigma;	// 96 = 0x60
    NSNumber *inputPropagateMinWeightSum;	// 104 = 0x68
    NSNumber *inputPropagateSigmaLuma;	// 112 = 0x70
    NSNumber *inputPropagateSigmaChma;	// 120 = 0x78
    NSNumber *inputScale;	// 128 = 0x80
    CIVector *inputOriginalSize;	// 136 = 0x88
}

+ (id)customAttributes;	// IMP=0x006000000006c32e
@property(copy) CIVector *inputOriginalSize; // @synthesize inputOriginalSize;
@property(copy) NSNumber *inputScale; // @synthesize inputScale;
@property(copy) NSNumber *inputPropagateSigmaChma; // @synthesize inputPropagateSigmaChma;
@property(copy) NSNumber *inputPropagateSigmaLuma; // @synthesize inputPropagateSigmaLuma;
@property(copy) NSNumber *inputPropagateMinWeightSum; // @synthesize inputPropagateMinWeightSum;
@property(copy) NSNumber *inputSmoothSigma; // @synthesize inputSmoothSigma;
@property(copy) NSNumber *inputPropagateKernel; // @synthesize inputPropagateKernel;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
@property(retain) CIImage *inputDisparityImage; // @synthesize inputDisparityImage;
- (id)outputImage;	// IMP=0x000000000006e91a
- (id)outputImageUsingMetal:(_Bool)arg1;	// IMP=0x000000000006e50c
- (id)propagateDisparity:(id)arg1 pyramids:(id *)arg2 useMetal:(_Bool)arg3 computedPyramidLevels:(int)arg4;	// IMP=0x000000000006dc42
- (id)_combineImages;	// IMP=0x000000000006dbe5
- (id)smoothDisparityImage:(id)arg1 useMetal:(_Bool)arg2;	// IMP=0x000000000006d4f4
- (id)generatePyramidLevel:(id)arg1 useMetal:(_Bool)arg2;	// IMP=0x000000000006d2eb
- (id)shiftmapLevelZeroWithSize:(struct CGSize)arg1 useMetal:(_Bool)arg2;	// IMP=0x000000000006cffb
- (id)initialConversionForSize:(struct CGSize)arg1 useMetal:(_Bool)arg2;	// IMP=0x000000000006ca35
- (id)_smoothDisparity;	// IMP=0x000000000006c9d8
- (id)_propagateDisparityCombined;	// IMP=0x000000000006c97b
- (id)_propagateDisparityR1Combined;	// IMP=0x000000000006c91e
- (id)_propagateDisparityR1;	// IMP=0x000000000006c8c1
- (id)_propagateDisparity;	// IMP=0x000000000006c864
- (id)_pyramidGenerateLevel;	// IMP=0x000000000006c807
- (id)_initialConversionRGB;	// IMP=0x000000000006c7aa

@end

