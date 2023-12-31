//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class NSMapTable, NSString, NSTimer, _UIKeyboardTextSelectionGestureController, _UIPanOrFlickGestureRecognizer, _UITouchesObservingGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionInteraction : UITextInteraction
{
    _UIKeyboardTextSelectionGestureController *_owner;	// 8 = 0x8
    NSMapTable *_weakMap;	// 16 = 0x10
    id _deallocToken;	// 24 = 0x18
    _UITouchesObservingGestureRecognizer *_addedTouchRecognizer;	// 32 = 0x20
    NSTimer *_touchPadTimer;	// 40 = 0x28
    CDUnknownBlockType _touchPadTimerCompletion;	// 48 = 0x30
    _UIPanOrFlickGestureRecognizer *_activePress;	// 56 = 0x38
}

+ (void)attachToExistingRecogniser:(id)arg1 owner:(id)arg2 forType:(long long)arg3;	// IMP=0x0010000000b29c5a
- (void).cxx_destruct;	// IMP=0x0000000000b31a38
- (void)removeTemporaryGesture;	// IMP=0x0000000000b31960
- (void)oneFingerForcePress:(id)arg1;	// IMP=0x0000000000b30f28
- (void)_clearTouchPadCallback;	// IMP=0x0000000000b30f07
- (void)_cancelTouchPadTimer;	// IMP=0x0000000000b30ecf
- (void)_startTouchPadTimerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b30d8f
- (void)panningGesture:(id)arg1;	// IMP=0x0000000000b2fa58
- (void)panningGestureAddedTouch:(id)arg1;	// IMP=0x0000000000b2f921
- (void)twoFingerTap:(id)arg1;	// IMP=0x0000000000b2f517
- (void)oneFingerForcePan:(id)arg1;	// IMP=0x0000000000b2ec36
- (void)_logTapCounts:(id)arg1;	// IMP=0x0000000000b2eb0e
- (void)_longForcePressDetected:(id)arg1;	// IMP=0x0000000000b2ea7b
- (void)_beginLongForcePressTimerForGesture:(id)arg1;	// IMP=0x0000000000b2e97e
- (void)indirectPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 withFlickDirection:(unsigned long long)arg3 isShiftKeyBeingHeld:(_Bool)arg4;	// IMP=0x0000000000b2e5da
- (void)handleRemoteIndirectGestureWithState:(id)arg1;	// IMP=0x0000000000b2e2c7
- (void)forwardIndirectGestureWithType:(long long)arg1 state:(long long)arg2 translation:(struct CGPoint)arg3 flickDirection:(unsigned long long)arg4 touchCount:(unsigned long long)arg5;	// IMP=0x0000000000b2e126
- (void)cancelLongPressWithExecutionContext:(id)arg1;	// IMP=0x0000000000b2e114
- (void)endLongPressWithExecutionContext:(id)arg1;	// IMP=0x0000000000b2e102
- (void)finishLongPressWithExecutionContext:(id)arg1;	// IMP=0x0000000000b2e05b
- (void)updateLongPressWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000b2df7c
- (void)beginLongPressWithTranslation:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2 executionContext:(id)arg3;	// IMP=0x0000000000b2dd7a
- (void)longPressGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3;	// IMP=0x0000000000b2db92
- (void)disableEnclosingScrollViewScrolling;	// IMP=0x0000000000b2da3b
- (void)_granularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(_Bool)arg3;	// IMP=0x0000000000b2d45c
- (void)clearKeyboardTouchesForGesture:(id)arg1;	// IMP=0x0000000000b2d24c
- (void)_cancelLongForcePressTimer;	// IMP=0x0000000000b2d1d4
- (struct CGPoint)cursorLocationForTranslation:(struct CGPoint)arg1;	// IMP=0x0000000000b2d166
- (void)beginCursorManipulationFromRect:(struct CGRect)arg1;	// IMP=0x0000000000b2d073
- (long long)layoutDirectionFromFlickDirection:(unsigned long long)arg1;	// IMP=0x0000000000b2d04a
- (void)cancelTwoFingerPanWithExecutionContext:(id)arg1;	// IMP=0x0000000000b2d038
- (void)handleTwoFingerFlickInDirection:(long long)arg1 executionContext:(id)arg2;	// IMP=0x0000000000b2cdee
- (void)endTwoFingerPanWithExecutionContext:(id)arg1;	// IMP=0x0000000000b2cd1a
- (void)updateTwoFingerPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000b2cbf8
- (void)beginTwoFingerPanWithTranslation:(struct CGPoint)arg1 isShiftKeyBeingHeld:(_Bool)arg2 executionContext:(id)arg3;	// IMP=0x0000000000b2c713
- (void)beginTwoFingerCursorPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000b2c540
- (void)endIndirectBlockPanWithExecutionContext:(id)arg1;	// IMP=0x0000000000b2c499
- (void)updateIndirectBlockPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000b2c306
- (void)beginIndirectBlockPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000b2c0bc
- (void)indirectBlockPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2;	// IMP=0x0000000000b2bea0
- (void)indirectCursorPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 withFlickDirection:(unsigned long long)arg3;	// IMP=0x0000000000b2bbd0
- (_Bool)isPlacedCarefully;	// IMP=0x0000000000b2bb62
- (void)_tidyUpGesture;	// IMP=0x0000000000b2bb5c
- (void)_prepareForGesture;	// IMP=0x0000000000b2bb56
- (void)_willBeginIndirectSelectionGesture:(id)arg1;	// IMP=0x0000000000b2ba1e
- (struct CGPoint)boundedTranslation:(struct CGPoint)arg1;	// IMP=0x0000000000b2b87c
- (_Bool)forceTouchGestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000b2b6a7
- (struct CGPoint)acceleratedTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 isActive:(_Bool)arg3;	// IMP=0x0000000000b2b559
- (void)_didEndIndirectSelectionGesture:(id)arg1;	// IMP=0x0000000000b2b479
- (id)selectionController;	// IMP=0x0000000000b2b429
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000000b2b172
- (double)additionalPressDurationForTypingCadence:(id)arg1;	// IMP=0x0000000000b2b044
- (void)gestureRecognizerShouldBeginResponse:(id)arg1;	// IMP=0x0000000000b2aff7
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000b2ae0f
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000b2a8aa
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000b2a600
- (id)owner;	// IMP=0x0000000000b2a5eb
- (void)_configureLongPressRecognizer:(id)arg1;	// IMP=0x0000000000b2a504
- (void)_configureLongPressAddedTouchRecognizer:(id)arg1;	// IMP=0x0000000000b2a4ba
- (void)_configureTwoFingerTapGestureRecognizer:(id)arg1;	// IMP=0x0000000000b2a400
- (void)_configureTwoFingerPanGestureRecognizer:(id)arg1;	// IMP=0x0000000000b2a2d4
- (void)_configureOneFingerForcePressRecognizer:(id)arg1;	// IMP=0x0000000000b2a1e4
- (id)initWithView:(id)arg1 owner:(id)arg2 forTypes:(long long)arg3;	// IMP=0x0000000000b29d69
- (id)gestures;	// IMP=0x0000000000b29b99
- (void)registerOwner:(id)arg1;	// IMP=0x0000000000b29ab9
- (void)dealloc;	// IMP=0x0000000000b29a66
- (void)detach;	// IMP=0x0000000000b29a07
- (void)_clearHiding;	// IMP=0x0000000000b299cf
- (void)hideInsideRecogniser:(id)arg1;	// IMP=0x0000000000b29796
- (void)hideRecogniser:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000b29694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

