//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICircleGenerator : CIFilter
{
    CIColor *inputColor;	// 72 = 0x48
    CIVector *inputCenter;	// 80 = 0x50
    NSNumber *inputRadius;	// 88 = 0x58
    NSNumber *inputEdgeBlur;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x006000000003d5e1
- (id)outputImage;	// IMP=0x000000000003d403
- (id)_CICircle;	// IMP=0x000000000003d3e3

@end

