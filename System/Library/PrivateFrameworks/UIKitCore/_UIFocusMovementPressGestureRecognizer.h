//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class NSMutableSet, NSString, _UIRepeatingGestureClock;

__attribute__((visibility("hidden")))
@interface _UIFocusMovementPressGestureRecognizer : UIGestureRecognizer
{
    _Bool _shouldRepeat;	// 8 = 0x8
    _Bool _isRepeat;	// 9 = 0x9
    unsigned long long _focusHeading;	// 16 = 0x10
    long long _repeatCount;	// 24 = 0x18
    _UIRepeatingGestureClock *_repeatingClock;	// 32 = 0x20
    NSMutableSet *_trackedPresses;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000b9abc8
@property(retain, nonatomic, getter=_trackedPresses, setter=_setTrackedPresses:) NSMutableSet *trackedPresses; // @synthesize trackedPresses=_trackedPresses;
@property(retain, nonatomic) _UIRepeatingGestureClock *repeatingClock; // @synthesize repeatingClock=_repeatingClock;
@property(nonatomic) _Bool isRepeat; // @synthesize isRepeat=_isRepeat;
@property(nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) unsigned long long focusHeading; // @synthesize focusHeading=_focusHeading;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b9ab15
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b9aafe
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b9aae7
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b9aad3
- (void)_updateForPresses:(id)arg1 action:(unsigned long long)arg2;	// IMP=0x0000000000b9a9c3
- (void)_verifyTrackingPresses:(id)arg1;	// IMP=0x0000000000b9a7ed
- (void)_stopTrackingPresses:(id)arg1;	// IMP=0x0000000000b9a77b
- (void)_startTrackingPresses:(id)arg1;	// IMP=0x0000000000b9a709
- (unsigned long long)focusHeadingForPresses:(id)arg1;	// IMP=0x0000000000b9a701
- (void)repeatingGestureClockDidTick:(id)arg1;	// IMP=0x0000000000b9a416
- (void)reset;	// IMP=0x0000000000b9a14c
- (void)setState:(long long)arg1;	// IMP=0x0000000000b9a138
- (void)setState:(long long)arg1 isRepeat:(_Bool)arg2;	// IMP=0x0000000000b9a08f
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x0000000000b99e7a
- (void)setAllowedTouchTypes:(id)arg1;	// IMP=0x0000000000b99dab
@property(readonly, nonatomic, getter=_isRecognizing) _Bool isRecognizing;
- (void)configureDefaults;	// IMP=0x0000000000b99d47
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000b99c99
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b99beb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

