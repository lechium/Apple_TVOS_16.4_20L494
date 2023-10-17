//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VNDetectFaceRectanglesRequestConfiguration
{
    _Bool _faceCoreEnhanceEyesAndMouthLocalization;	// 8 = 0x8
    _Bool _faceCoreExtractBlink;	// 9 = 0x9
    _Bool _faceCoreExtractSmile;	// 10 = 0xa
    float _precisionRecallThreshold;	// 12 = 0xc
    unsigned long long _faceCoreType;	// 16 = 0x10
    NSNumber *_faceCoreMinFaceSize;	// 24 = 0x18
    NSNumber *_faceCoreNumberOfDetectionAngles;	// 32 = 0x20
    NSNumber *_faceCoreInitialAngle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001dd123
@property(nonatomic) _Bool faceCoreExtractSmile; // @synthesize faceCoreExtractSmile=_faceCoreExtractSmile;
@property(nonatomic) _Bool faceCoreExtractBlink; // @synthesize faceCoreExtractBlink=_faceCoreExtractBlink;
@property(nonatomic) _Bool faceCoreEnhanceEyesAndMouthLocalization; // @synthesize faceCoreEnhanceEyesAndMouthLocalization=_faceCoreEnhanceEyesAndMouthLocalization;
@property(retain, nonatomic) NSNumber *faceCoreInitialAngle; // @synthesize faceCoreInitialAngle=_faceCoreInitialAngle;
@property(retain, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles; // @synthesize faceCoreNumberOfDetectionAngles=_faceCoreNumberOfDetectionAngles;
@property(retain, nonatomic) NSNumber *faceCoreMinFaceSize; // @synthesize faceCoreMinFaceSize=_faceCoreMinFaceSize;
@property(nonatomic) unsigned long long faceCoreType; // @synthesize faceCoreType=_faceCoreType;
@property(nonatomic) float precisionRecallThreshold; // @synthesize precisionRecallThreshold=_precisionRecallThreshold;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001dce7b
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x00000000001dcd7b

@end

