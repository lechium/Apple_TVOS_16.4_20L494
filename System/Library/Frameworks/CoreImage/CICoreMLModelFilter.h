//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, MLModel, NSNumber;

__attribute__((visibility("hidden")))
@interface CICoreMLModelFilter : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    MLModel *inputModel;	// 80 = 0x50
    NSNumber *inputHeadIndex;	// 88 = 0x58
    NSNumber *inputSoftmaxNormalization;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x006000000005e433
@property(retain, nonatomic) NSNumber *inputSoftmaxNormalization; // @synthesize inputSoftmaxNormalization;
@property(retain, nonatomic) NSNumber *inputHeadIndex; // @synthesize inputHeadIndex;
@property(retain, nonatomic) MLModel *inputModel; // @synthesize inputModel;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000005e636

@end

