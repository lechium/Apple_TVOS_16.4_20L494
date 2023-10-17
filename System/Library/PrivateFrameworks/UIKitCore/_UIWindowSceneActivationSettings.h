//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class _UISpringAnimationPrototypeSettings;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneActivationSettings : PTSettings
{
    double _pinchActivationScaleThreshold;	// 8 = 0x8
    double _pinchEndingProjectionDuration;	// 16 = 0x10
    double _pinchPlatterMaxShadowIntensity;	// 24 = 0x18
    double _pinchEndPlatterVelocityMultiplier;	// 32 = 0x20
    _UISpringAnimationPrototypeSettings *_pinchInteractiveScale;	// 40 = 0x28
    _UISpringAnimationPrototypeSettings *_pinchSettle;	// 48 = 0x30
    _UISpringAnimationPrototypeSettings *_pinchShadow;	// 56 = 0x38
    _UISpringAnimationPrototypeSettings *_morph;	// 64 = 0x40
    _UISpringAnimationPrototypeSettings *_morphMenuDismissal;	// 72 = 0x48
}

+ (id)settingsControllerModule;	// IMP=0x0060000000b9ae98
- (void).cxx_destruct;	// IMP=0x0000000000b9b4d4
@property(retain, nonatomic) _UISpringAnimationPrototypeSettings *morphMenuDismissal; // @synthesize morphMenuDismissal=_morphMenuDismissal;
@property(retain, nonatomic) _UISpringAnimationPrototypeSettings *morph; // @synthesize morph=_morph;
@property(retain, nonatomic) _UISpringAnimationPrototypeSettings *pinchShadow; // @synthesize pinchShadow=_pinchShadow;
@property(retain, nonatomic) _UISpringAnimationPrototypeSettings *pinchSettle; // @synthesize pinchSettle=_pinchSettle;
@property(retain, nonatomic) _UISpringAnimationPrototypeSettings *pinchInteractiveScale; // @synthesize pinchInteractiveScale=_pinchInteractiveScale;
@property(nonatomic) double pinchEndPlatterVelocityMultiplier; // @synthesize pinchEndPlatterVelocityMultiplier=_pinchEndPlatterVelocityMultiplier;
@property(nonatomic) double pinchPlatterMaxShadowIntensity; // @synthesize pinchPlatterMaxShadowIntensity=_pinchPlatterMaxShadowIntensity;
@property(nonatomic) double pinchEndingProjectionDuration; // @synthesize pinchEndingProjectionDuration=_pinchEndingProjectionDuration;
@property(nonatomic) double pinchActivationScaleThreshold; // @synthesize pinchActivationScaleThreshold=_pinchActivationScaleThreshold;
- (void)setDefaultValues;	// IMP=0x0000000000b9abf9

@end
