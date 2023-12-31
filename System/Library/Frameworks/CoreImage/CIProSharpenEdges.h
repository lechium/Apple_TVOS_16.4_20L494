//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIProSharpenEdges : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputFalloff;	// 80 = 0x50
    NSNumber *inputSharpness;	// 88 = 0x58
    NSNumber *inputEdgeScale;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x006000000015c673
- (id)outputImage;	// IMP=0x000000000015be97
- (id)_CISharpenCombineEdges;	// IMP=0x000000000015be77
- (id)_CIFindEdges;	// IMP=0x000000000015be57
- (id)_CIEdgesPrep;	// IMP=0x000000000015be37
- (id)_CIBlur4;	// IMP=0x000000000015be17
- (id)_CIBlur2;	// IMP=0x000000000015bdf7
- (id)_CIBlur1;	// IMP=0x000000000015bdd7
- (id)_CIConvertRGBtoY;	// IMP=0x000000000015bdb7

@end

