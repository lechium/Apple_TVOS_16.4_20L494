//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBarsSwipeTransition : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputTargetImage;	// 80 = 0x50
    NSNumber *inputAngle;	// 88 = 0x58
    NSNumber *inputWidth;	// 96 = 0x60
    NSNumber *inputBarOffset;	// 104 = 0x68
    NSNumber *inputTime;	// 112 = 0x70
}

+ (id)customAttributes;	// IMP=0x0060000000013921
@property(retain, nonatomic) NSNumber *inputTime; // @synthesize inputTime;
@property(retain, nonatomic) NSNumber *inputBarOffset; // @synthesize inputBarOffset;
@property(retain, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000013ccf
- (id)_kernel;	// IMP=0x0000000000013caf

@end

