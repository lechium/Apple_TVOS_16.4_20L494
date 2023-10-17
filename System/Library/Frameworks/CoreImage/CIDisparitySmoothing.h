//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparitySmoothing : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputNumIterations;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x006000000006ece5
@property(copy) NSNumber *inputNumIterations; // @synthesize inputNumIterations;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000006f05c
- (id)outputImageMetal;	// IMP=0x000000000006ef01
- (id)_customBoxBlur5Kernel;	// IMP=0x000000000006eea4

@end

