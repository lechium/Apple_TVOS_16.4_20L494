//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CILineOverlay : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputNRNoiseLevel;	// 80 = 0x50
    NSNumber *inputNRSharpness;	// 88 = 0x58
    NSNumber *inputEdgeIntensity;	// 96 = 0x60
    NSNumber *inputThreshold;	// 104 = 0x68
    NSNumber *inputContrast;	// 112 = 0x70
}

+ (id)customAttributes;	// IMP=0x00600000000492da
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000497c7
- (id)_CIColorControls;	// IMP=0x00000000000492ba
- (id)_CIComicNoiseReduction;	// IMP=0x000000000004929a
- (id)_CISobelEdges;	// IMP=0x000000000004927a

@end
