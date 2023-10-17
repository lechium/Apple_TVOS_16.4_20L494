//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICubicPolyTangent : NSObject
{
    double _initialLinearGain;	// 8 = 0x8
    double _parabolicGain;	// 16 = 0x10
    double _cubicGain;	// 24 = 0x18
    double _quarticGain;	// 32 = 0x20
    double _tangentLineSpeed;	// 40 = 0x28
    double _tangentSqrtSpeed;	// 48 = 0x30
    double _tangentCbrtSpeed;	// 56 = 0x38
    double _tangentHyperCbrtSpeed;	// 64 = 0x40
}

+ (id)keyboardTrackpadCurve;	// IMP=0x001000000103e6cb
@property(nonatomic) double tangentHyperCbrtSpeed; // @synthesize tangentHyperCbrtSpeed=_tangentHyperCbrtSpeed;
@property(nonatomic) double tangentCbrtSpeed; // @synthesize tangentCbrtSpeed=_tangentCbrtSpeed;
@property(nonatomic) double tangentSqrtSpeed; // @synthesize tangentSqrtSpeed=_tangentSqrtSpeed;
@property(nonatomic) double tangentLineSpeed; // @synthesize tangentLineSpeed=_tangentLineSpeed;
@property(nonatomic) double quarticGain; // @synthesize quarticGain=_quarticGain;
@property(nonatomic) double cubicGain; // @synthesize cubicGain=_cubicGain;
@property(nonatomic) double parabolicGain; // @synthesize parabolicGain=_parabolicGain;
@property(nonatomic) double initialLinearGain; // @synthesize initialLinearGain=_initialLinearGain;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x000000000103e5df
- (double)piecewiseCubicAcceleratedSpeed:(double)arg1;	// IMP=0x000000000103e54f
- (double)quarticTangentFunction:(double)arg1 powerOfEarliestTangent:(int)arg2;	// IMP=0x000000000103e38f
- (double)quarticFunction:(double)arg1;	// IMP=0x000000000103e33d
- (double)quarticDerivative:(double)arg1;	// IMP=0x000000000103e2d7
- (int)RootPowerOfEarliestTangent:(int)arg1;	// IMP=0x000000000103e23d
- (double)gainForPower:(int)arg1;	// IMP=0x000000000103e214
- (double)tangentSpeedForPower:(int)arg1;	// IMP=0x000000000103e1eb
- (void)clipGainsForIOFixedMathWithTangency;	// IMP=0x000000000103e052
- (double)clipForIOFixedMath:(double)arg1 polynomialPower:(int)arg2 tangencyStartingAt:(double)arg3;	// IMP=0x000000000103dffb
@property(readonly, nonatomic) _Bool isEmpty;
- (id)init;	// IMP=0x000000000103df66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

