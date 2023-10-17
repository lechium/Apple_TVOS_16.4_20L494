//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class AVCameraCalibrationData, CIImage, CIVector, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIDepthBlurEffect : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputDisparityImage;	// 80 = 0x50
    CIImage *inputMatteImage;	// 88 = 0x58
    CIImage *inputHairImage;	// 96 = 0x60
    CIImage *inputGlassesImage;	// 104 = 0x68
    CIImage *inputGainMap;	// 112 = 0x70
    NSNumber *inputAperture;	// 120 = 0x78
    CIVector *inputLeftEyePositions;	// 128 = 0x80
    CIVector *inputRightEyePositions;	// 136 = 0x88
    CIVector *inputChinPositions;	// 144 = 0x90
    CIVector *inputNosePositions;	// 152 = 0x98
    CIVector *inputFocusRect;	// 160 = 0xa0
    NSNumber *inputLumaNoiseScale;	// 168 = 0xa8
    NSNumber *inputScaleFactor;	// 176 = 0xb0
    AVCameraCalibrationData *inputCalibrationData;	// 184 = 0xb8
    id inputAuxDataMetadata;	// 192 = 0xc0
    NSString *inputShape;	// 200 = 0xc8
}

+ (id)customAttributes;	// IMP=0x00600000001b9c03
+ (int)getDraftMode:(id)arg1;	// IMP=0x00600000001be52b
+ (struct CGImageMetadata *)augmentMetadataWithRenderingPropertiesForImage:(id)arg1;	// IMP=0x00600000001be454
+ (struct CGImageMetadata *)metadataFromDictionary:(id)arg1 metadata:(struct CGImageMetadata *)arg2;	// IMP=0x00600000001be38b
+ (id)tuningParametersFromMetadata:(struct CGImageMetadata *)arg1;	// IMP=0x00600000001be37e
+ (struct CGImageMetadata *)replaceRenderingParameters:(struct CGImageMetadata *)arg1 tuningParameters:(id)arg2;	// IMP=0x00600000001be376
@property(retain, nonatomic) NSString *inputShape; // @synthesize inputShape;
@property(retain, nonatomic) id inputAuxDataMetadata; // @synthesize inputAuxDataMetadata;
@property(retain, nonatomic) AVCameraCalibrationData *inputCalibrationData; // @synthesize inputCalibrationData;
@property(retain, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property(retain, nonatomic) CIVector *inputFocusRect; // @synthesize inputFocusRect;
@property(retain) CIVector *inputNosePositions; // @synthesize inputNosePositions;
@property(retain) CIVector *inputChinPositions; // @synthesize inputChinPositions;
@property(retain) CIVector *inputRightEyePositions; // @synthesize inputRightEyePositions;
@property(retain) CIVector *inputLeftEyePositions; // @synthesize inputLeftEyePositions;
@property(retain, nonatomic) NSNumber *inputLumaNoiseScale; // @synthesize inputLumaNoiseScale;
@property(retain, nonatomic) NSNumber *inputAperture; // @synthesize inputAperture;
@property(retain) CIImage *inputGainMap; // @synthesize inputGainMap;
@property(retain) CIImage *inputGlassesImage; // @synthesize inputGlassesImage;
@property(retain) CIImage *inputHairImage; // @synthesize inputHairImage;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputDisparityImage; // @synthesize inputDisparityImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001ba726
- (id)_getFocusRect:(id)arg1 focusRect:(id)arg2;	// IMP=0x00000000001ba449
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000001ba261
- (void)prewarm:(id)arg1;	// IMP=0x00000000001b9b8a

@end
