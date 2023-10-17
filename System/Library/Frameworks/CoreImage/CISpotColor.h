//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISpotColor : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIColor *inputCenterColor1;	// 80 = 0x50
    CIColor *inputReplacementColor1;	// 88 = 0x58
    NSNumber *inputCloseness1;	// 96 = 0x60
    NSNumber *inputContrast1;	// 104 = 0x68
    CIColor *inputCenterColor2;	// 112 = 0x70
    CIColor *inputReplacementColor2;	// 120 = 0x78
    NSNumber *inputCloseness2;	// 128 = 0x80
    NSNumber *inputContrast2;	// 136 = 0x88
    CIColor *inputCenterColor3;	// 144 = 0x90
    CIColor *inputReplacementColor3;	// 152 = 0x98
    NSNumber *inputCloseness3;	// 160 = 0xa0
    NSNumber *inputContrast3;	// 168 = 0xa8
}

+ (id)customAttributes;	// IMP=0x0060000000049c24
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000004a3ca
- (id)_CISpotColor;	// IMP=0x0000000000049c04

@end

