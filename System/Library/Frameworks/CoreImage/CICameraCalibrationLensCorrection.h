//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class AVCameraCalibrationData, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICameraCalibrationLensCorrection : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    AVCameraCalibrationData *inputAVCameraCalibrationData;	// 80 = 0x50
    NSNumber *inputUseInverseLookUpTable;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000003ac85
@property(retain, nonatomic) NSNumber *inputUseInverseLookUpTable; // @synthesize inputUseInverseLookUpTable;
@property(retain, nonatomic) AVCameraCalibrationData *inputAVCameraCalibrationData; // @synthesize inputAVCameraCalibrationData;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000003b6b2
- (struct CGRect)regionOf:(int)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;	// IMP=0x000000000003aff3
- (struct CGPoint)ReferenceensDistortionPointForPoint:(struct CGPoint)arg1 lookupTable:(id)arg2 distortionOpticalCenter:(struct CGPoint)arg3 imageSize:(struct CGSize)arg4;	// IMP=0x000000000003aebf
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003adf2

@end

