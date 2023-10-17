//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface RedEyeRecolor : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputSource;	// 80 = 0x50
    CIImage *inputMask;	// 88 = 0x58
    NSNumber *inputNoiseAmount;	// 96 = 0x60
    NSNumber *inputBrightness;	// 104 = 0x68
    NSNumber *inputRecovery;	// 112 = 0x70
    CIVector *inputExtent;	// 120 = 0x78
    NSNumber *inputWhiteCutoff;	// 128 = 0x80
    NSNumber *inputChroma;	// 136 = 0x88
}

@property(retain, nonatomic) NSNumber *inputChroma; // @synthesize inputChroma;
@property(retain, nonatomic) NSNumber *inputWhiteCutoff; // @synthesize inputWhiteCutoff;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) NSNumber *inputRecovery; // @synthesize inputRecovery;
@property(retain, nonatomic) NSNumber *inputBrightness; // @synthesize inputBrightness;
@property(retain, nonatomic) NSNumber *inputNoiseAmount; // @synthesize inputNoiseAmount;
@property(retain, nonatomic) CIImage *inputMask; // @synthesize inputMask;
@property(retain, nonatomic) CIImage *inputSource; // @synthesize inputSource;
- (id)outputImage;	// IMP=0x000000000007b741
- (id)kernelRecovery;	// IMP=0x000000000007b6ec
- (id)kernelRepair;	// IMP=0x000000000007b697

@end

