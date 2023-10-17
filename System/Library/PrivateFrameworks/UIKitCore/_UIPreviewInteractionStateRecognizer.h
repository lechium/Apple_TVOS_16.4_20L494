//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionStateRecognizer : NSObject
{
    unsigned long long _deepPressCount;	// 8 = 0x8
    double _smoothedForce;	// 16 = 0x10
    double _maximumForce;	// 24 = 0x18
    double _previousEffectiveTouchForce;	// 32 = 0x20
    double _timeMark;	// 40 = 0x28
    double _currentTime;	// 48 = 0x30
    double _previousTime;	// 56 = 0x38
    double _popOffsetInitial;	// 64 = 0x40
    double _popOffsetLongterm;	// 72 = 0x48
    double _popOffsetDecayAlpha;	// 80 = 0x50
    double _lowpassForceAlpha;	// 88 = 0x58
    double _popDecayingOffset;	// 96 = 0x60
    double _popReductionForce;	// 104 = 0x68
    double _progressToStrongThreshold;	// 112 = 0x70
    _Bool _allowsPopOffsetDecay;	// 120 = 0x78
    double _popForceReductionThreshold;	// 128 = 0x80
    double _popAlwaysThreshold;	// 136 = 0x88
    double _highPopThreshold;	// 144 = 0x90
    double _previousPopThreshold;	// 152 = 0x98
    double _saturationForce;	// 160 = 0xa0
    double _revealThreshold;	// 168 = 0xa8
    double _standardThreshold;	// 176 = 0xb0
    double _strongThreshold;	// 184 = 0xb8
    double _hintAndPeekInterval;	// 192 = 0xc0
    double _hintReductionForce;	// 200 = 0xc8
    double _actualHintForce;	// 208 = 0xd0
    double _actualPeekForce;	// 216 = 0xd8
    double _actualPopForce;	// 224 = 0xe0
    double _actualHintTime;	// 232 = 0xe8
    double _actualPeekTime;	// 240 = 0xf0
    double _actualPopTime;	// 248 = 0xf8
    _Bool _shouldDelayReveal;	// 256 = 0x100
    long long _currentState;	// 264 = 0x108
    double _minimumPreviewDuration;	// 272 = 0x110
    double _currentTouchForce;	// 280 = 0x118
}

@property(nonatomic) double currentTouchForce; // @synthesize currentTouchForce=_currentTouchForce;
@property(nonatomic) _Bool shouldDelayReveal; // @synthesize shouldDelayReveal=_shouldDelayReveal;
@property(nonatomic) double minimumPreviewDuration; // @synthesize minimumPreviewDuration=_minimumPreviewDuration;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (double)_currentTouchForceMultiplier;	// IMP=0x0000000000be1384
- (double)_normalizedTouchForceValue:(double)arg1;	// IMP=0x0000000000be1357
- (double)_denormalizedTouchForceValue:(double)arg1;	// IMP=0x0000000000be1326
- (double)_thresholdForForceLevel:(long long)arg1;	// IMP=0x0000000000be12bd
- (void)_accessibilityForceSensitivityChanged:(id)arg1;	// IMP=0x0000000000be12ab
- (void)reset;	// IMP=0x0000000000be10bf
- (void)evaluateWithTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;	// IMP=0x0000000000be0cff
@property(readonly, nonatomic) double velocity; // @dynamic velocity;
- (double)currentProgressToState:(long long)arg1;	// IMP=0x0000000000be0bd5
- (id)description;	// IMP=0x0000000000be0b02
- (void)dealloc;	// IMP=0x0000000000be0a80
- (id)init;	// IMP=0x0000000000be096e

@end

