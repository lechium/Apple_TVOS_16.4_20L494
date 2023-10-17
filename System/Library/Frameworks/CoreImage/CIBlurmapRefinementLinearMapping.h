//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapRefinementLinearMapping : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputSecondaryImage;	// 80 = 0x50
    NSNumber *inputScalingFactor;	// 88 = 0x58
}

@property(retain) NSNumber *inputScalingFactor; // @synthesize inputScalingFactor;
@property(retain) CIImage *inputSecondaryImage; // @synthesize inputSecondaryImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000024f2df
- (id)kernel;	// IMP=0x000000000024f2bf
- (id)kernelNoSecondaryImage;	// IMP=0x000000000024f29f

@end

