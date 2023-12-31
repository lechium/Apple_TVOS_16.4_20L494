//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIInnerGlowOrShadowFilter : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputOffset;	// 80 = 0x50
    NSNumber *inputRange;	// 88 = 0x58
    NSNumber *inputRadius;	// 96 = 0x60
    CIColor *inputColor;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x00000000001bf3b0
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) NSNumber *inputRange; // @synthesize inputRange;
@property(retain, nonatomic) CIVector *inputOffset; // @synthesize inputOffset;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001bf673
- (id)_kernel;	// IMP=0x00000000001bf390

@end

