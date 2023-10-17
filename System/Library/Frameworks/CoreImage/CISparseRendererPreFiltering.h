//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CISparseRendererPreFiltering : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSDictionary *inputTuningParameters;	// 80 = 0x50
    NSNumber *inputApertureScaling;	// 88 = 0x58
    NSNumber *inputScale;	// 96 = 0x60
}

@property(retain) NSNumber *inputScale; // @synthesize inputScale;
@property(copy) NSNumber *inputApertureScaling; // @synthesize inputApertureScaling;
@property(retain) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000111a9c
- (void)dumpImage:(id)arg1 extent:(struct CGRect)arg2 prefixFilename:(id)arg3;	// IMP=0x0000000000111834
- (id)outputImage:(id)arg1 horizontal:(_Bool)arg2 width:(double)arg3;	// IMP=0x00000000001113c6
- (id)_kernel:(_Bool)arg1;	// IMP=0x00000000001112fd

@end

