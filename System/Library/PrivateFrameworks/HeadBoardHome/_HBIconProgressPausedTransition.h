//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _HBIconProgressPausedTransition
{
    double _totalElapsedTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    CAMediaTimingFunction *_timingFunction;	// 24 = 0x18
    _Bool _toPaused;	// 32 = 0x20
    double _fraction;	// 40 = 0x28
}

+ (id)newTransitionToPaused:(_Bool)arg1;	// IMP=0x006000000000b308
- (void).cxx_destruct;	// IMP=0x000000000000b728
- (void)_updateElapsedTimeFromFraction;	// IMP=0x000000000000b632
- (void)_updateTimingFunction;	// IMP=0x000000000000b5d2
- (void)_updateView:(id)arg1;	// IMP=0x000000000000b4ed
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x000000000000b4ca
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x000000000000b4a3
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x000000000000b3fb
- (void)updateToPaused:(_Bool)arg1;	// IMP=0x000000000000b3a0
- (id)_initToPaused:(_Bool)arg1;	// IMP=0x000000000000b32d

@end

