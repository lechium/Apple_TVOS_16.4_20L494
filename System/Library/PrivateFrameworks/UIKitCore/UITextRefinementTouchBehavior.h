//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITextModernLoupeSession, UITextRange, UITextSelectionGrabberSuppressionAssertion, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextRefinementTouchBehavior : NSObject
{
    _Bool _isShiftKeyBeingHeld;	// 8 = 0x8
    UITextRange *_originalTextRange;	// 16 = 0x10
    long long _activeSelectionMode;	// 24 = 0x18
    _UIKeyboardTextSelectionController *_activeSelectionController;	// 32 = 0x20
    UITextModernLoupeSession *_loupeSession;	// 40 = 0x28
    UITextSelectionGrabberSuppressionAssertion *_grabberHandleSuppressionAssertion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000005ddd9a
- (void)textLoupeInteraction:(id)arg1 gestureChangedWithState:(long long)arg2 location:(CDUnknownBlockType)arg3 translation:(CDUnknownBlockType)arg4 velocity:(CDUnknownBlockType)arg5 modifierFlags:(long long)arg6 shouldCancel:(_Bool *)arg7;	// IMP=0x00000000005dcdc6
- (struct CGPoint)velocityInView:(id)arg1 forLoupeGesture:(id)arg2;	// IMP=0x00000000005dcdb1
- (struct CGPoint)translationInView:(id)arg1 forLoupeGesture:(id)arg2;	// IMP=0x00000000005dcd9c
- (struct CGPoint)startPointForLoupeGesture:(id)arg1;	// IMP=0x00000000005dcd87
- (_Bool)triggeredByLongPressGesture:(id)arg1;	// IMP=0x00000000005dcbc0
- (_Bool)_allowsPaintSelectionForLoupeInteraction:(id)arg1;	// IMP=0x00000000005dcb7a
- (_Bool)usesTouchAlignment;	// IMP=0x00000000005dcb72
- (_Bool)loupeGestureRecognizerShouldBegin:(id)arg1 forTextLoupeInteraction:(id)arg2;	// IMP=0x00000000005dcac3
- (_Bool)shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x00000000005dcabb
- (void)configureLoupeGestureRecognizer:(id)arg1 forTextLoupeInteraction:(id)arg2;	// IMP=0x00000000005dca0c
- (void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg1;	// IMP=0x00000000005dc8e1
- (void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg1;	// IMP=0x00000000005dc81b
- (Class)gestureRecognizerClassForLoupeInteraction:(id)arg1;	// IMP=0x00000000005dc80a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

