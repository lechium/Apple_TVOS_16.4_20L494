//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSMutableArray, NSString, UILabel, UIResponder, UITextView, UIView;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIDictationPopoverController
{
    UIResponder<UITextInput> *_inputDelegate;	// 424 = 0x1a8
    NSMutableArray *_scrollViews;	// 432 = 0x1b0
    struct CGRect _initCaretRectInView;	// 440 = 0x1b8
    struct CGRect _sourceRect;	// 472 = 0x1d8
    struct CGRect _editMenuFrame;	// 504 = 0x1f8
    struct CGRect _clipBounds;	// 536 = 0x218
    UIView *_inputAccessoryView;	// 568 = 0x238
    UIView *_dictationView;	// 576 = 0x240
    NSLayoutConstraint *_dictationViewTopConstraint;	// 584 = 0x248
    NSLayoutConstraint *_dictationViewBottomConstraint;	// 592 = 0x250
    UILabel *_title;	// 600 = 0x258
    UITextView *_textView;	// 608 = 0x260
    UIView *_bottomEdgeView;	// 616 = 0x268
    _Bool _isVerticalText;	// 624 = 0x270
    _Bool _needsRestoreArrowDirction;	// 625 = 0x271
    struct CGRect _popoverFrame;	// 632 = 0x278
    double _bottomMargin;	// 664 = 0x298
    unsigned long long _arrowDirection;	// 672 = 0x2a0
}

- (void).cxx_destruct;	// IMP=0x0000000000007191
- (void)dismissTip;	// IMP=0x00000000000070ea
- (void)presentTip:(id)arg1 tipDescription:(id)arg2;	// IMP=0x0000000000005cb5
- (_Bool)canPresentTip;	// IMP=0x0000000000005a00
- (struct CGRect)sourceRect;	// IMP=0x00000000000059e0
- (struct CGRect)rectInWindow:(struct CGRect)arg1;	// IMP=0x0000000000005776
- (void)movePopoverViewForEditMenuFrame:(struct CGRect)arg1;	// IMP=0x0000000000005225
- (void)movePopoverViewToCurrentCareLocation;	// IMP=0x00000000000050dd
- (void)movePopoverView:(struct CGRect)arg1 editMenuFrame:(id)arg2;	// IMP=0x0000000000004e95
- (void)movePopoverView:(struct CGRect)arg1;	// IMP=0x0000000000004e81
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x00000000000049c2
- (void)_geometryChanged:(const CDStruct_f46536fb *)arg1 forAncestor:(id)arg2;	// IMP=0x0000000000004725
- (void)keyboardDidChange:(id)arg1;	// IMP=0x00000000000045c8
- (void)textDidChange:(id)arg1;	// IMP=0x0000000000004272
- (long long)overrideUserInterfaceStyle;	// IMP=0x000000000000419a
- (struct CGRect)clipBounds;	// IMP=0x0000000000003f35
- (void)setRemoteDictationPopover:(id)arg1;	// IMP=0x0000000000003dc7
- (void)forwardRemoteDictationPopover:(_Bool)arg1;	// IMP=0x0000000000003a87
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000003a44
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000000397b
- (void)viewDidLoad;	// IMP=0x0000000000003520
- (void)dealloc;	// IMP=0x0000000000003325
- (id)initWithContentView:(id)arg1 contentSize:(struct CGSize)arg2 inputDelegate:(id)arg3;	// IMP=0x0000000000002d3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
