//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITextGestureTuning;

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedTextSelectionInteraction
{
    UITextGestureTuning *_gestureTuning;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000b35ad9
@property(readonly, nonatomic) UITextGestureTuning *gestureTuning; // @synthesize gestureTuning=_gestureTuning;
- (void)oneFingerForcePress:(id)arg1;	// IMP=0x0000000000b34ea3
- (void)oneFingerForcePan:(id)arg1;	// IMP=0x0000000000b33a3a
- (void)endOneFingerSelectWithExecutionContext:(id)arg1;	// IMP=0x0000000000b339be
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000b33935
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000b3377d
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint)arg1 viaDrag:(_Bool)arg2;	// IMP=0x0000000000b33167
- (_Bool)enclosingScrollViewIsScrolling;	// IMP=0x0000000000b33058
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000b3303e
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000b32fa4
- (id)owner;	// IMP=0x0000000000b32f5d
- (void)_processGestureForCustomHighlighter:(id)arg1;	// IMP=0x0000000000b32a1a
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000b329a4
- (void)_createGestureTuningIfNecessary;	// IMP=0x0000000000b32869
- (void)dealloc;	// IMP=0x0000000000b3281f

@end
