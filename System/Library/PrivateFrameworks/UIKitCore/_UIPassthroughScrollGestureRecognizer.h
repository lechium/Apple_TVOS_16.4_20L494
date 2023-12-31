//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@protocol _UIPassthroughGestureDelegate;

__attribute__((visibility("hidden")))
@interface _UIPassthroughScrollGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startPoint;	// 16 = 0x10
    double _startTime;	// 32 = 0x20
    struct CGVector _accumulatedScrollEventDelta;	// 40 = 0x28
    struct {
        unsigned int commandHeldThroughAllTouchPhases:1;
    } _flags;	// 56 = 0x38
    _Bool _endForPrimaryButtonDown;	// 60 = 0x3c
    _Bool _endForSecondaryButtonDown;	// 61 = 0x3d
    unsigned long long _endReason;	// 64 = 0x40
}

+ (_Bool)canHandleEventForPassthrough:(id)arg1;	// IMP=0x00600000000b3165
+ (_Bool)_supportsTouchContinuation;	// IMP=0x00600000000b2b91
@property(nonatomic) _Bool endForSecondaryButtonDown; // @synthesize endForSecondaryButtonDown=_endForSecondaryButtonDown;
@property(nonatomic) _Bool endForPrimaryButtonDown; // @synthesize endForPrimaryButtonDown=_endForPrimaryButtonDown;
@property(readonly, nonatomic) unsigned long long endReason; // @synthesize endReason=_endReason;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000000b321d
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x00000000000b3181
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000b30a7
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000b3090
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000b2f67
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000b2ded
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000b2d59
- (void)_endWithReason:(unsigned long long)arg1;	// IMP=0x00000000000b2d37
- (void)_beginAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000000b2ce1
- (void)reset;	// IMP=0x00000000000b2c9e
- (id)_window;	// IMP=0x00000000000b2c8c
- (void)setView:(id)arg1;	// IMP=0x00000000000b2b99
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000b2b29

// Remaining properties
@property(nonatomic) __weak id <_UIPassthroughGestureDelegate> delegate; // @dynamic delegate;

@end

