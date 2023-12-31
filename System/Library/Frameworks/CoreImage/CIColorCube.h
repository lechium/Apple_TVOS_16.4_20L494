//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorCube : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputCubeDimension;	// 80 = 0x50
    NSData *inputCubeData;	// 88 = 0x58
    NSNumber *inputExtrapolate;	// 96 = 0x60
    CIImage *_cubeImage;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x0060000000040dd4
@property(copy, nonatomic) NSNumber *inputExtrapolate; // @synthesize inputExtrapolate;
@property(copy, nonatomic) NSData *inputCubeData; // @synthesize inputCubeData;
@property(retain, nonatomic) NSNumber *inputCubeDimension; // @synthesize inputCubeDimension;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000416bc
- (_Bool)_checkInputs;	// IMP=0x00000000000415d5
- (id)cubeImage;	// IMP=0x0000000000041159
- (id)_kernelOpaqueExtend;	// IMP=0x0000000000041116
- (id)_kernelOpaque;	// IMP=0x00000000000410d3
- (id)_kernel;	// IMP=0x00000000000410b3
- (void)dealloc;	// IMP=0x0000000000040d35

@end

