//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, NSString;
@protocol ARUIRingGroupAnimationDelegate;

__attribute__((visibility("hidden")))
@interface ARUIUIntAnimation : NSObject
{
    double _percent;	// 8 = 0x8
    CDUnknownBlockType _applier;	// 16 = 0x10
    _Bool _completed;	// 24 = 0x18
    id <ARUIRingGroupAnimationDelegate> _delegate;	// 32 = 0x20
    double _duration;	// 40 = 0x28
    unsigned long long _startValue;	// 48 = 0x30
    unsigned long long _currentValue;	// 56 = 0x38
    unsigned long long _endValue;	// 64 = 0x40
    CAMediaTimingFunction *_timingFunction;	// 72 = 0x48
}

+ (id)animationWithDuration:(double)arg1 startValue:(unsigned long long)arg2 endValue:(unsigned long long)arg3 timingFunction:(id)arg4 applier:(CDUnknownBlockType)arg5;	// IMP=0x001000000001be07
- (void).cxx_destruct;	// IMP=0x000000000001c1b3
@property(readonly, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(readonly, nonatomic) unsigned long long endValue; // @synthesize endValue=_endValue;
@property(readonly, nonatomic) unsigned long long currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, nonatomic) unsigned long long startValue; // @synthesize startValue=_startValue;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <ARUIRingGroupAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)completeAnimation;	// IMP=0x000000000001c0e4
- (_Bool)isAnimating;	// IMP=0x000000000001c0d3
- (void)update:(double)arg1;	// IMP=0x000000000001bfd0
- (void)dealloc;	// IMP=0x000000000001bf72
- (id)initWithDuration:(double)arg1 startValue:(unsigned long long)arg2 endValue:(unsigned long long)arg3 timingFunction:(id)arg4 applier:(CDUnknownBlockType)arg5;	// IMP=0x000000000001be9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

