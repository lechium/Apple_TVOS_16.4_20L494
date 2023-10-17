//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIColorClamp : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputMinComponents;	// 80 = 0x50
    CIVector *inputMaxComponents;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000003fe30
@property(retain, nonatomic) CIVector *inputMaxComponents; // @synthesize inputMaxComponents;
@property(retain, nonatomic) CIVector *inputMinComponents; // @synthesize inputMinComponents;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000004001c
- (id)_kernelAlphaPreserving;	// IMP=0x000000000003fded
- (id)_kernel;	// IMP=0x000000000003fdcd

@end
