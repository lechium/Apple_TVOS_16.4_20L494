//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIModifyBlurmap : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputPersonAlpha;	// 80 = 0x50
    CIImage *inputHairAlpha;	// 88 = 0x58
    CIImage *inputFaceMaskDeltaImage;	// 96 = 0x60
    NSNumber *inputScale;	// 104 = 0x68
    NSNumber *inputDistanceAdd;	// 112 = 0x70
    NSNumber *inputSmoothstepMin;	// 120 = 0x78
    NSNumber *inputSmoothstepMax;	// 128 = 0x80
    NSNumber *inputMaxBlur;	// 136 = 0x88
    NSNumber *inputApertureScaling;	// 144 = 0x90
    NSNumber *inputRelativeApertureScalingStrength;	// 152 = 0x98
    NSNumber *inputPersonDistance;	// 160 = 0xa0
    NSNumber *inputPersonThreshold;	// 168 = 0xa8
    CIVector *inputPersonAdditive;	// 176 = 0xb0
    CIVector *inputPersonSubtractive;	// 184 = 0xb8
    NSNumber *inputPersonMaxBlur;	// 192 = 0xc0
    NSNumber *inputHairDistance;	// 200 = 0xc8
    NSNumber *inputHairThreshold;	// 208 = 0xd0
    CIVector *inputHairAdditive;	// 216 = 0xd8
    CIVector *inputHairSubtractive;	// 224 = 0xe0
    NSNumber *inputHairMaxBlur;	// 232 = 0xe8
    NSNumber *inputProtectBodyStrength;	// 240 = 0xf0
    CIVector *inputLeftEyeX;	// 248 = 0xf8
    CIVector *inputLeftEyeY;	// 256 = 0x100
    CIVector *inputRightEyeX;	// 264 = 0x108
    CIVector *inputRightEyeY;	// 272 = 0x110
    CIVector *inputFaceMidPointX;	// 280 = 0x118
    CIVector *inputFaceMidPointY;	// 288 = 0x120
    NSNumber *inputEyeProtectionMaxFaces;	// 296 = 0x128
    NSNumber *inputEyeProtectionFaceWeightsSmoothStepMin;	// 304 = 0x130
    NSNumber *inputEyeProtectionFaceWeightsSmoothStepMax;	// 312 = 0x138
    NSNumber *inputEyeProtectionOvalDimsDistanceScale;	// 320 = 0x140
    NSNumber *inputEyeProtectionOvalDimsDistanceOffset;	// 328 = 0x148
    NSNumber *inputEyeProtectionOvalDimsRadiusHorizontal;	// 336 = 0x150
    NSNumber *inputEyeProtectionOvalDimsRadiusVertical;	// 344 = 0x158
    NSNumber *inputEyeProtectionOvalFallOffSmoothStepMin;	// 352 = 0x160
    NSNumber *inputEyeProtectionOvalFallOffSmoothStepMax;	// 360 = 0x168
    NSNumber *inputEyeProtectionPersonMaskSmoothStepMin;	// 368 = 0x170
    NSNumber *inputEyeProtectionPersonMaskSmoothStepMax;	// 376 = 0x178
    NSNumber *inputEyeProtectionPreventStrength;	// 384 = 0x180
    NSNumber *inputEyeProtectionSubtractiveMaxBlur;	// 392 = 0x188
    NSNumber *inputEyeProtectionSubtractiveApertureScaling;	// 400 = 0x190
}

+ (id)customAttributes;	// IMP=0x00600000000aa2fb
@property(retain) NSNumber *inputEyeProtectionSubtractiveApertureScaling; // @synthesize inputEyeProtectionSubtractiveApertureScaling;
@property(retain) NSNumber *inputEyeProtectionSubtractiveMaxBlur; // @synthesize inputEyeProtectionSubtractiveMaxBlur;
@property(retain) NSNumber *inputEyeProtectionPreventStrength; // @synthesize inputEyeProtectionPreventStrength;
@property(retain) NSNumber *inputEyeProtectionPersonMaskSmoothStepMax; // @synthesize inputEyeProtectionPersonMaskSmoothStepMax;
@property(retain) NSNumber *inputEyeProtectionPersonMaskSmoothStepMin; // @synthesize inputEyeProtectionPersonMaskSmoothStepMin;
@property(retain) NSNumber *inputEyeProtectionOvalFallOffSmoothStepMax; // @synthesize inputEyeProtectionOvalFallOffSmoothStepMax;
@property(retain) NSNumber *inputEyeProtectionOvalFallOffSmoothStepMin; // @synthesize inputEyeProtectionOvalFallOffSmoothStepMin;
@property(retain) NSNumber *inputEyeProtectionOvalDimsRadiusVertical; // @synthesize inputEyeProtectionOvalDimsRadiusVertical;
@property(retain) NSNumber *inputEyeProtectionOvalDimsRadiusHorizontal; // @synthesize inputEyeProtectionOvalDimsRadiusHorizontal;
@property(retain) NSNumber *inputEyeProtectionOvalDimsDistanceOffset; // @synthesize inputEyeProtectionOvalDimsDistanceOffset;
@property(retain) NSNumber *inputEyeProtectionOvalDimsDistanceScale; // @synthesize inputEyeProtectionOvalDimsDistanceScale;
@property(retain) NSNumber *inputEyeProtectionFaceWeightsSmoothStepMax; // @synthesize inputEyeProtectionFaceWeightsSmoothStepMax;
@property(retain) NSNumber *inputEyeProtectionFaceWeightsSmoothStepMin; // @synthesize inputEyeProtectionFaceWeightsSmoothStepMin;
@property(retain) NSNumber *inputEyeProtectionMaxFaces; // @synthesize inputEyeProtectionMaxFaces;
@property(retain) CIVector *inputFaceMidPointY; // @synthesize inputFaceMidPointY;
@property(retain) CIVector *inputFaceMidPointX; // @synthesize inputFaceMidPointX;
@property(retain) CIVector *inputRightEyeY; // @synthesize inputRightEyeY;
@property(retain) CIVector *inputRightEyeX; // @synthesize inputRightEyeX;
@property(retain) CIVector *inputLeftEyeY; // @synthesize inputLeftEyeY;
@property(retain) CIVector *inputLeftEyeX; // @synthesize inputLeftEyeX;
@property(retain) NSNumber *inputProtectBodyStrength; // @synthesize inputProtectBodyStrength;
@property(retain) NSNumber *inputHairMaxBlur; // @synthesize inputHairMaxBlur;
@property(retain) CIVector *inputHairSubtractive; // @synthesize inputHairSubtractive;
@property(retain) CIVector *inputHairAdditive; // @synthesize inputHairAdditive;
@property(retain) NSNumber *inputHairThreshold; // @synthesize inputHairThreshold;
@property(retain) NSNumber *inputHairDistance; // @synthesize inputHairDistance;
@property(retain) NSNumber *inputPersonMaxBlur; // @synthesize inputPersonMaxBlur;
@property(retain) CIVector *inputPersonSubtractive; // @synthesize inputPersonSubtractive;
@property(retain) CIVector *inputPersonAdditive; // @synthesize inputPersonAdditive;
@property(retain) NSNumber *inputPersonThreshold; // @synthesize inputPersonThreshold;
@property(retain) NSNumber *inputPersonDistance; // @synthesize inputPersonDistance;
@property(retain) NSNumber *inputRelativeApertureScalingStrength; // @synthesize inputRelativeApertureScalingStrength;
@property(retain) NSNumber *inputApertureScaling; // @synthesize inputApertureScaling;
@property(retain) NSNumber *inputMaxBlur; // @synthesize inputMaxBlur;
@property(retain) NSNumber *inputSmoothstepMax; // @synthesize inputSmoothstepMax;
@property(retain) NSNumber *inputSmoothstepMin; // @synthesize inputSmoothstepMin;
@property(retain) NSNumber *inputDistanceAdd; // @synthesize inputDistanceAdd;
@property(retain) NSNumber *inputScale; // @synthesize inputScale;
@property(retain) CIImage *inputFaceMaskDeltaImage; // @synthesize inputFaceMaskDeltaImage;
@property(retain) CIImage *inputHairAlpha; // @synthesize inputHairAlpha;
@property(retain) CIImage *inputPersonAlpha; // @synthesize inputPersonAlpha;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000aa3ee

@end

