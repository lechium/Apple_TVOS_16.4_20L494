//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CIRedEyeRepair : NSObject
{
    _Bool ownLF;	// 8 = 0x8
    CDStruct_79f2618e *lf;	// 16 = 0x10
    int imageSourceType;	// 24 = 0x18
    struct CGImageBlockSet *blockSet;	// 32 = 0x20
    void *releaseMe;	// 40 = 0x28
    struct __CFData *dataRef;	// 48 = 0x30
    NSArray *faces;	// 56 = 0x38
    int nRepairs;	// 64 = 0x40
    int nextRepairTag;	// 68 = 0x44
    CDStruct_8d997f87 repairs[32];	// 72 = 0x48
    int lastRepairTag;	// 12872 = 0x3248
    float lastRepairIOD;	// 12876 = 0x324c
    CDStruct_6ca1d5c6 standardTemplate;	// 12880 = 0x3250
    int iFaceIndex;	// 12896 = 0x3260
    _Bool iLeft;	// 12900 = 0x3264
    _Bool debugRedEye;	// 12901 = 0x3265
    _Bool logRepairs;	// 12902 = 0x3266
    int redEyeThresholdKind;	// 12904 = 0x3268
    _Bool renderAlpha;	// 12908 = 0x326c
    _Bool infillBackground;	// 12909 = 0x326d
    _Bool renderSpecularShine;	// 12910 = 0x326e
    float specularSize;	// 12912 = 0x3270
    float specularSoftness;	// 12916 = 0x3274
    _Bool pupilShadeAlignment;	// 12920 = 0x3278
    _Bool autoPupilTonality;	// 12921 = 0x3279
    _Bool forceLoValue;	// 12922 = 0x327a
    int loValue;	// 12924 = 0x327c
    CDStruct_c3faddef lastClickYBitmap;	// 12928 = 0x3280
    CDStruct_c3faddef lastClickCbCrBitmap;	// 12968 = 0x32a8
    int lastClickBitmapMinX;	// 13008 = 0x32d0
    int lastClickBitmapMaxX;	// 13012 = 0x32d4
    int lastClickBitmapMinY;	// 13016 = 0x32d8
    int lastClickBitmapMaxY;	// 13020 = 0x32dc
    CDStruct_c3faddef lastClickYBitmaps[3];	// 13024 = 0x32e0
    CDStruct_c3faddef lastClickCbCrBitmaps[3];	// 13144 = 0x3358
    CDStruct_5973fb4f lastClickBitmapRects[3];	// 13264 = 0x33d0
    CDStruct_c3faddef lastSearchYBitmap;	// 13312 = 0x3400
    CDStruct_c3faddef lastSearchCbCrBitmap;	// 13352 = 0x3428
    int lastSearchBitmapMinX;	// 13392 = 0x3450
    int lastSearchBitmapMaxX;	// 13396 = 0x3454
    int lastSearchBitmapMinY;	// 13400 = 0x3458
    int lastSearchBitmapMaxY;	// 13404 = 0x345c
    int nPolyPoints;	// 13408 = 0x3460
    _Bool polyClosed;	// 13412 = 0x3464
    struct CGPoint polyPoints[20];	// 13416 = 0x3468
    CDStruct_12b04d25 polyLines[20];	// 13736 = 0x35a8
    _Bool polyPointConcave[20];	// 13976 = 0x3698
    unsigned char CbCrDistanceTable[65536];	// 13996 = 0x36ac
    int nLinears;	// 79532 = 0x136ac
    int linearCoefficients[8][3];	// 79536 = 0x136b0
}

+ (struct CGRect)supportRectangleWithFaceArray:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00600000001eb32f
+ (struct CGRect)supportRectangleWithRepair:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00600000001eb1ee
+ (struct CGRect)supportRectangleWithPoint:(struct CGPoint)arg1 imageSize:(struct CGSize)arg2 IOD:(float)arg3;	// IMP=0x00600000001eb10f
+ (float)upperRepairDistance:(float)arg1;	// IMP=0x00600000001eb04f
+ (float)upperRepairDistanceFraction:(float)arg1;	// IMP=0x00600000001eafe1
- (void)setLeft:(_Bool)arg1;	// IMP=0x00000000001f2d9d
- (void)setFaceIndex:(int)arg1;	// IMP=0x00000000001f2d91
- (void)executeRepairArray:(id)arg1;	// IMP=0x00000000001f2d21
- (void)executeRepair:(id)arg1;	// IMP=0x00000000001f1f03
- (void)orientPointX:(float *)arg1 Y:(float *)arg2;	// IMP=0x00000000001f1ed8
- (void)orientRectangleMinX:(float *)arg1 maxX:(float *)arg2 minY:(float *)arg3 maxY:(float *)arg4;	// IMP=0x00000000001f1e96
- (_Bool)getBool:(_Bool *)arg1 d:(id)arg2 s:(id)arg3;	// IMP=0x00000000001f1e53
- (_Bool)getInt:(int *)arg1 d:(id)arg2 s:(id)arg3;	// IMP=0x00000000001f1e10
- (_Bool)getFloat:(float *)arg1 d:(id)arg2 s:(id)arg3;	// IMP=0x00000000001f1dca
- (id)repairArray;	// IMP=0x00000000001f13d4
- (void)autoRepairWithFaceArray:(id)arg1;	// IMP=0x00000000001f0880
- (int)redEyeRemovalWithData:(CDStruct_1c31e7e7)arg1;	// IMP=0x00000000001efed1
- (void)skinInit;	// IMP=0x00000000001efe76
- (void)prepareLineFunctions;	// IMP=0x00000000001efa17
- (int)distanceMaskFromPolyToCb:(int)arg1 Cr:(int)arg2;	// IMP=0x00000000001ef999
- (void)autoRepairExtractAndSearchLeft:(CDStruct_a734b2e2)arg1 right:(CDStruct_a734b2e2)arg2 data:(CDStruct_935079c3 *)arg3 repairSize:(float)arg4 autoPupilTonality:(_Bool)arg5 faceIndex:(int)arg6;	// IMP=0x00000000001ef3d1
- (int)applyEyeRepairWithEye:(CDStruct_3edab2bb *)arg1 left:(_Bool)arg2 IOD:(float)arg3 autoPupilTonality:(_Bool)arg4 match:(CDStruct_a734b2e2 *)arg5 faceIndex:(int)arg6 whiteHopper:(CDStruct_08ff8b76 *)arg7;	// IMP=0x00000000001ef172
- (CDStruct_3edab2bb)repairDecisionWithFaceRecord:(CDStruct_935079c3 *)arg1 left:(_Bool)arg2 redHopper:(CDStruct_08ff8b76 *)arg3 whiteHopper:(CDStruct_08ff8b76 *)arg4;	// IMP=0x00000000001ef0af
- (_Bool)extractAndGatherProminencesWithRect:(CDStruct_a734b2e2)arg1 face:(CDStruct_935079c3 *)arg2 faceIndex:(int)arg3 left:(_Bool)arg4 maxwindowsize:(float)arg5 repairsize:(float)arg6 returningRedHopper:(CDStruct_08ff8b76 *)arg7 whiteHopper:(CDStruct_08ff8b76 *)arg8 redChannel:(CDStruct_c3faddef *)arg9 redChannelMask:(CDStruct_c3faddef *)arg10;	// IMP=0x00000000001eed40
- (_Bool)gatherProminencesWithC:(CDStruct_c3faddef *)arg1 MC:(CDStruct_c3faddef *)arg2 altC:(CDStruct_c3faddef *)arg3 altMC:(CDStruct_c3faddef *)arg4 maxwindowsize:(int)arg5 repairsize:(int)arg6 IR:(CDStruct_a734b2e2)arg7 fr:(CDStruct_935079c3 *)arg8 intoHopper:(CDStruct_08ff8b76 *)arg9 faceIndex:(int)arg10 left:(_Bool)arg11;	// IMP=0x00000000001ee9de
- (_Bool)gatherProminencesWithC:(CDStruct_c3faddef *)arg1 MC:(CDStruct_c3faddef *)arg2 maxwindowsize:(int)arg3 repairsize:(int)arg4 IR:(CDStruct_a734b2e2)arg5 fr:(CDStruct_935079c3 *)arg6 intoHopper:(CDStruct_08ff8b76 *)arg7 faceIndex:(int)arg8 left:(_Bool)arg9 coss:(float [10])arg10 sins:(float [10])arg11 bitmapName:(char *)arg12;	// IMP=0x00000000001ee28e
- (void)insertIntoProminenceVettingHopper:(CDStruct_08ff8b76 *)arg1 max:(int)arg2 outside:(int)arg3 confidence:(float)arg4 distance:(float)arg5 row:(int)arg6 column:(int)arg7 IOD:(float)arg8;	// IMP=0x00000000001ee10d
- (float)confidenceWithIOD:(float)arg1 repair:(int)arg2 andProminenceDifference:(int)arg3;	// IMP=0x00000000001edf84
- (float)extractAverageFaceY:(CDStruct_935079c3 *)arg1 contrast:(float *)arg2 faceIndex:(int)arg3;	// IMP=0x00000000001edc70
- (void)redoLastRepair;	// IMP=0x00000000001edc3f
- (int)redoRepairWithTag:(int)arg1 IOD:(float)arg2;	// IMP=0x00000000001edb74
- (CDStruct_8d997f87 *)repairWithTag:(int)arg1;	// IMP=0x00000000001edb43
- (int)redEyeRemovalWithPoint:(struct CGPoint)arg1 alignPupilShades:(_Bool)arg2 matching:(CDStruct_a734b2e2)arg3 force:(int)arg4 IOD:(float)arg5 tap:(_Bool)arg6;	// IMP=0x00000000001ec4f9
- (_Bool)extractReusableAlignedBitmapsAroundPoint:(CDStruct_c3faddef *)arg1 YR:(CDStruct_a734b2e2)arg2 subYBitmap:(CDStruct_c3faddef *)arg3 subCbCrBitmap:(CDStruct_c3faddef *)arg4;	// IMP=0x00000000001ec1f3
- (_Bool)computeTrimmedBitmaps:(CDStruct_c3faddef *)arg1 newY:(CDStruct_c3faddef *)arg2 newCbCr:(CDStruct_c3faddef *)arg3 IR:(CDStruct_a734b2e2)arg4 newTrimY:(CDStruct_c3faddef *)arg5 newTrimCbCr:(CDStruct_c3faddef *)arg6 returningYR:(CDStruct_a734b2e2 *)arg7 andCbCrR:(CDStruct_a734b2e2 *)arg8;	// IMP=0x00000000001ebd91
- (float)lowerRepairSize:(float)arg1;	// IMP=0x00000000001eb0ea
- (float)upperRepairSize:(float)arg1;	// IMP=0x00000000001eb0c5
- (float)lowerRepairSizeFraction:(float)arg1;	// IMP=0x00000000001eaf9d
- (float)upperRepairSizeFraction:(float)arg1;	// IMP=0x00000000001eaf59
- (int)averageValueFromY:(CDStruct_c3faddef *)arg1 withinSkinMask:(CDStruct_c3faddef *)arg2 butOutsideAlpha:(CDStruct_c3faddef *)arg3;	// IMP=0x00000000001eae8c
- (void)undoRepair:(int)arg1;	// IMP=0x00000000001eadc6
- (int)format;	// IMP=0x00000000001eadb6
- (int)lastRepairTag;	// IMP=0x00000000001eadaa
- (int)nRepairs;	// IMP=0x00000000001eada1
- (CDStruct_8d997f87 *)repairs;	// IMP=0x00000000001ead97
- (id)faces;	// IMP=0x00000000001ead8d
- (CDStruct_a734b2e2)standardTemplate;	// IMP=0x00000000001ead79
- (void)setLoValue:(int)arg1;	// IMP=0x00000000001ead6d
- (int)loValue;	// IMP=0x00000000001ead61
- (void)setForceLoValue:(_Bool)arg1;	// IMP=0x00000000001ead55
- (_Bool)forceLoValue;	// IMP=0x00000000001ead49
- (void)setAutoPupilTonality:(_Bool)arg1;	// IMP=0x00000000001ead3d
- (_Bool)autoPupilTonality;	// IMP=0x00000000001ead31
- (void)setPupilShadeAlignment:(_Bool)arg1;	// IMP=0x00000000001ead25
- (_Bool)pupilShadeAlignment;	// IMP=0x00000000001ead19
- (void)setSpecularSoftness:(float)arg1;	// IMP=0x00000000001ead0b
- (float)specularSoftness;	// IMP=0x00000000001eacfd
- (void)setSpecularSize:(float)arg1;	// IMP=0x00000000001eacef
- (float)specularSize;	// IMP=0x00000000001eace1
- (void)setRenderSpecularShine:(_Bool)arg1;	// IMP=0x00000000001eacd5
- (_Bool)renderSpecularShine;	// IMP=0x00000000001eacc9
- (void)setInfillBackground:(_Bool)arg1;	// IMP=0x00000000001eacbd
- (_Bool)infillBackground;	// IMP=0x00000000001eacb1
- (void)setRenderAlpha:(_Bool)arg1;	// IMP=0x00000000001eaca5
- (_Bool)renderAlpha;	// IMP=0x00000000001eac99
- (void)setRedEyeThresholdKind:(int)arg1;	// IMP=0x00000000001eac8d
- (int)redEyeThresholdKind;	// IMP=0x00000000001eac81
- (void)setLogRepairs:(_Bool)arg1;	// IMP=0x00000000001eac75
- (_Bool)logRepairs;	// IMP=0x00000000001eac69
- (void)setDebug:(_Bool)arg1;	// IMP=0x00000000001eac5d
- (_Bool)debug;	// IMP=0x00000000001eac51
- (void)dealloc;	// IMP=0x00000000001eab39
- (id)initWithExternalBuffer:(char *)arg1 subRectangle:(struct CGRect)arg2 fullSize:(struct CGSize)arg3 rowBytes:(unsigned long long)arg4 cameraModel:(id)arg5;	// IMP=0x00000000001ea9d4
- (id)initWithExternalBuffer:(char *)arg1 size:(struct CGSize)arg2 rowBytes:(unsigned long long)arg3;	// IMP=0x00000000001ea8dd
- (id)initWithFrameExternalBuffer:(CDStruct_79f2618e *)arg1;	// IMP=0x00000000001ea890
- (id)initWithDeskView:(id)arg1 andFrame:(CDStruct_79f2618e *)arg2;	// IMP=0x00000000001ea84a
- (void)initializeNonDebugVariables;	// IMP=0x00000000001ea7be
- (void)repairExternalBuffer;	// IMP=0x00000000001ea767
- (struct CGImage *)createRepairedImage;	// IMP=0x00000000001ea5f0
- (id)initWithCGImage:(struct CGImage *)arg1 cameraModel:(id)arg2;	// IMP=0x00000000001ea3c0
- (void)setColorSpace:(struct CGColorSpace *)arg1;	// IMP=0x00000000001ea38b
- (_Bool)getDataProviderCopyWithImage:(struct CGImage *)arg1 into:(CDStruct_c3faddef *)arg2;	// IMP=0x00000000001ea2ec
- (_Bool)getDataProviderBytePtrWithImage:(struct CGImage *)arg1 into:(CDStruct_c3faddef *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;	// IMP=0x00000000001ea250
- (_Bool)getBlockSetWithImage:(struct CGImage *)arg1 into:(CDStruct_c3faddef *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;	// IMP=0x00000000001ea08c

@end
