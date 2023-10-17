//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface RedPupilLocalizer : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputIterations;	// 80 = 0x50
    NSNumber *inputScale;	// 88 = 0x58
    NSNumber *inputDecay;	// 96 = 0x60
    NSNumber *inputGamma;	// 104 = 0x68
    NSNumber *inputClip;	// 112 = 0x70
    NSNumber *inputLocalizationRadius;	// 120 = 0x78
    CIVector *inputExtent;	// 128 = 0x80
    NSNumber *inputDebug;	// 136 = 0x88
    CIVector *inputAxisLong;	// 144 = 0x90
    CIVector *inputAxisShort;	// 152 = 0x98
    CIVector *inputPupilCenter;	// 160 = 0xa0
    NSNumber *inputSearchAxisLong;	// 168 = 0xa8
    NSNumber *inputSearchAxisShort;	// 176 = 0xb0
}

@property(retain, nonatomic) NSNumber *inputSearchAxisShort; // @synthesize inputSearchAxisShort;
@property(retain, nonatomic) NSNumber *inputSearchAxisLong; // @synthesize inputSearchAxisLong;
@property(retain, nonatomic) CIVector *inputPupilCenter; // @synthesize inputPupilCenter;
@property(retain, nonatomic) CIVector *inputAxisShort; // @synthesize inputAxisShort;
@property(retain, nonatomic) CIVector *inputAxisLong; // @synthesize inputAxisLong;
@property(retain, nonatomic) NSNumber *inputDebug; // @synthesize inputDebug;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) NSNumber *inputLocalizationRadius; // @synthesize inputLocalizationRadius;
@property(retain, nonatomic) NSNumber *inputClip; // @synthesize inputClip;
@property(retain, nonatomic) NSNumber *inputGamma; // @synthesize inputGamma;
@property(retain, nonatomic) NSNumber *inputDecay; // @synthesize inputDecay;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputIterations; // @synthesize inputIterations;
- (id)outputImage;	// IMP=0x000000000007bc9c

@end

