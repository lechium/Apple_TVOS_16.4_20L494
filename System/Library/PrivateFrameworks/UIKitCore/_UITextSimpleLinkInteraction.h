//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILongPressGestureRecognizer, UITapGestureRecognizer, _UITextInteractableItem;

__attribute__((visibility("hidden")))
@interface _UITextSimpleLinkInteraction
{
    UITapGestureRecognizer *_linkTap;	// 8 = 0x8
    UILongPressGestureRecognizer *_highlighter;	// 16 = 0x10
    _UITextInteractableItem *_highlightedItem;	// 24 = 0x18
    _Bool _presentingFromSimpleTap;	// 32 = 0x20
    _Bool _shouldProxyContextMenuDelegate;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x0000000000f1ea0f
@property(readonly, nonatomic) _Bool shouldProxyContextMenuDelegate; // @synthesize shouldProxyContextMenuDelegate=_shouldProxyContextMenuDelegate;
- (_Bool)_allowItemInteractions;	// IMP=0x0000000000f1e83a
- (_Bool)_beginInteractionSessionForLinkAtPoint:(struct CGPoint)arg1 asTap:(_Bool)arg2 precision:(unsigned long long)arg3;	// IMP=0x0000000000f1e6f6
- (_Bool)_canBeginInteractionSessionForLinkAtPoint:(struct CGPoint)arg1 asTap:(_Bool)arg2 precision:(unsigned long long)arg3;	// IMP=0x0000000000f1e60c
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000000f1e549
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000f1e431
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000f1e33d
- (void)highlight:(id)arg1;	// IMP=0x0000000000f1ded5
- (void)linkTapped:(id)arg1;	// IMP=0x0000000000f1ddac
- (id)textLinkInteractableView;	// IMP=0x0000000000f1dd4b
- (id)itemInteractableView;	// IMP=0x0000000000f1dcea
- (id)gesturesForFailureRequirements;	// IMP=0x0000000000f1dc7f
- (id)initWithShouldProxyContextMenuDelegate:(_Bool)arg1;	// IMP=0x0000000000f1db82

@end
