//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNDetectRectanglesRequestConfiguration
{
    float _minimumAspectRatio;	// 8 = 0x8
    float _maximumAspectRatio;	// 12 = 0xc
    float _quadratureTolerance;	// 16 = 0x10
    float _minimumSize;	// 20 = 0x14
    float _minimumConfidence;	// 24 = 0x18
    unsigned long long _requiredVersion;	// 32 = 0x20
    unsigned long long _maximumObservations;	// 40 = 0x28
}

@property(nonatomic) unsigned long long maximumObservations; // @synthesize maximumObservations=_maximumObservations;
@property(nonatomic) float minimumConfidence; // @synthesize minimumConfidence=_minimumConfidence;
@property(nonatomic) float minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) float quadratureTolerance; // @synthesize quadratureTolerance=_quadratureTolerance;
@property(nonatomic) float maximumAspectRatio; // @synthesize maximumAspectRatio=_maximumAspectRatio;
@property(nonatomic) float minimumAspectRatio; // @synthesize minimumAspectRatio=_minimumAspectRatio;
@property(nonatomic) unsigned long long requiredVersion; // @synthesize requiredVersion=_requiredVersion;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000226a4c
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x00000000002269b4

@end

