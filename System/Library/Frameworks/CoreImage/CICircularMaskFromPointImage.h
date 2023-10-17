//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICircularMaskFromPointImage : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputCoordinate;	// 80 = 0x50
    NSNumber *inputInnerRadius;	// 88 = 0x58
    NSNumber *inputOuterRadius;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00600000001469f7
@property(copy, nonatomic) NSNumber *inputOuterRadius; // @synthesize inputOuterRadius;
@property(copy, nonatomic) NSNumber *inputInnerRadius; // @synthesize inputInnerRadius;
@property(retain, nonatomic) CIImage *inputCoordinate; // @synthesize inputCoordinate;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000146afc
- (id)_kernelDraw;	// IMP=0x0000000000146adc

@end

