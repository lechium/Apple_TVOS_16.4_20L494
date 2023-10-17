//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class UITextGestureTuning, UITextModernLoupeSession, UITextSelectionGrabberSuppressionAssertion, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextSelectionInteraction : UITextInteraction
{
    double _lastTapTimestamp;	// 8 = 0x8
    struct CGPoint _lastTapLocation;	// 16 = 0x10
    UITextGestureTuning *_gestureTuning;	// 32 = 0x20
    _Bool _indirectSelectionType;	// 40 = 0x28
    _Bool _viewConformsToTextInput;	// 41 = 0x29
    struct CGRect _originalCaretRect;	// 48 = 0x30
    _Bool _wasOriginallyFirstResponder;	// 80 = 0x50
    long long _granularityToHandOff;	// 88 = 0x58
    _UIKeyboardTextSelectionController *_activeSelectionController;	// 96 = 0x60
    UITextSelectionGrabberSuppressionAssertion *_grabberSuppressionAssertion;	// 104 = 0x68
    UITextModernLoupeSession *_activeLoupeSession;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000f26972
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000f26833
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000000f2682b
- (_Bool)shouldHandleOneFingerTapInUneditable:(id)arg1;	// IMP=0x0000000000f26617
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000f26439
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000f262a7
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f2619b
- (void)twoFingerRangedSelectGesture:(id)arg1;	// IMP=0x0000000000f25e92
- (void)tapAndAHalf:(id)arg1;	// IMP=0x0000000000f25452
- (void)_createGestureTuningIfNecessary;	// IMP=0x0000000000f2532a
- (void)confirmMarkedText:(id)arg1;	// IMP=0x0000000000f252c9
- (void)_updateTapGestureHistoryWithLocation:(struct CGPoint)arg1;	// IMP=0x0000000000f25240
- (void)didUpdateSelectionWithGesture:(id)arg1;	// IMP=0x0000000000f24cf6
- (void)willUpdateSelectionWithGesture:(id)arg1;	// IMP=0x0000000000f24c98
- (void)_handleMultiTapGesture:(id)arg1;	// IMP=0x0000000000f24aba
- (void)oneFingerTapSelectsAll:(id)arg1;	// IMP=0x0000000000f2491d
- (void)tappedToSelectTextWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000f2483c
- (void)tappedToPositionCursorWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000f245a8
- (_Bool)_hasTextAlternativesAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000000f24493
- (void)tappedToUpdateSelectionWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000f243e6
- (void)_checkForRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint *)arg2;	// IMP=0x0000000000f23ea1
- (long long)_textGranularityForNumberOfTaps:(unsigned long long)arg1;	// IMP=0x0000000000f23e5d
- (long long)handOffGranularity;	// IMP=0x0000000000f23e44
- (_Bool)_isRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint *)arg2;	// IMP=0x0000000000f23d00
- (_Bool)_isWithinRepeatedTapTimeForTouch:(id)arg1;	// IMP=0x0000000000f23c72
- (_Bool)_isNowWithinRepeatedTapTime;	// IMP=0x0000000000f23c5e
- (_Bool)_isShiftKeyBeingHeldForGesture:(id)arg1;	// IMP=0x0000000000f23c13
- (_Bool)_usesPencilSelectionBehaviorForGesture:(id)arg1;	// IMP=0x0000000000f23ad5
- (_Bool)_usesIndirectSelectionBehavior;	// IMP=0x0000000000f23ac5
- (void)_showSelectionCommandsIfApplicableAfterDelay:(double)arg1;	// IMP=0x0000000000f23a0a
- (void)toggleSelectionCommands;	// IMP=0x0000000000f23937
- (void)_applyTransientState:(id)arg1;	// IMP=0x0000000000f23859
- (id)_transientState;	// IMP=0x0000000000f2374e
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000f236b2
- (void)finishSetup;	// IMP=0x0000000000f23374
- (_Bool)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x0000000000f2336c
- (id)initWithMode:(long long)arg1 indirect:(_Bool)arg2;	// IMP=0x0000000000f23108
- (id)initWithMode:(long long)arg1;	// IMP=0x0000000000f230f4

@end
