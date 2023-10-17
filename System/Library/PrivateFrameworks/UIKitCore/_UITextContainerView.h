//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSDictionary, NSLayoutManager, NSString, NSTextContainer, UIColor, UIScrollView, UITextView, _UITextLayoutControllerBase;
@protocol _UITextCanvas, _UITextContainerViewDelegate, _UITextLayoutController;

__attribute__((visibility("hidden")))
@interface _UITextContainerView : UIView
{
    struct UIEdgeInsets _textContainerInset;	// 144 = 0x90
    struct CGPoint _textContainerOrigin;	// 176 = 0xb0
    struct CGSize _minSize;	// 192 = 0xc0
    struct CGSize _maxSize;	// 208 = 0xd0
    NSTextContainer *_textContainer;	// 224 = 0xe0
    NSDictionary *_linkTextAttributes;	// 232 = 0xe8
    unsigned long long _invalidationSeqNo;	// 240 = 0xf0
    long long _invalidationSeqClipsToBounds;	// 248 = 0xf8
    struct {
        unsigned int textContainerOriginInvalid:1;
        unsigned int verticalLayout:2;
        unsigned int horizontallyResizable:1;
        unsigned int verticallyResizable:1;
        unsigned int freezeTextContainerSize:1;
        unsigned int usesStandardTextScaling:1;
    } _tcvFlags;	// 256 = 0x100
    UITextView *_textView;	// 264 = 0x108
    _UITextLayoutControllerBase<_UITextLayoutController> *_textLayoutController;	// 272 = 0x110
    id <_UITextContainerViewDelegate> _delegate;	// 280 = 0x118
    UIView<_UITextCanvas> *_canvasView;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x0000000000ff224b
@property(readonly, nonatomic) UIView<_UITextCanvas> *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) __weak id <_UITextContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(readonly, nonatomic) _UITextLayoutControllerBase<_UITextLayoutController> *textLayoutController; // @synthesize textLayoutController=_textLayoutController;
- (struct CGRect)visibleRect;	// IMP=0x0000000000ff209d
@property(readonly, copy) NSString *description;
- (id)attributedSubstringForMarkedRange;	// IMP=0x0000000000ff1f15
@property(readonly, nonatomic) NSDictionary *markedTextStyle;
@property(nonatomic) struct _NSRange markedRange;
- (void)setLayoutOrientation:(long long)arg1;	// IMP=0x0000000000ff1c61
@property(readonly, nonatomic) long long layoutOrientation;
- (id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2;	// IMP=0x0000000000ff1bd9
- (void)_ensureLayoutCompleteForRect:(struct CGRect)arg1;	// IMP=0x0000000000ff19ce
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange)arg1;	// IMP=0x0000000000ff18db
- (void)layoutSubviews;	// IMP=0x0000000000ff168e
- (_Bool)drawTextInRectIfNeeded:(struct CGRect)arg1;	// IMP=0x0000000000ff1686
- (void)didRemoveTextAttachmentViews:(id)arg1;	// IMP=0x0000000000ff1680
- (void)didLayoutTextAttachmentView:(id)arg1 inFragmentRect:(struct CGRect)arg2;	// IMP=0x0000000000ff167a
- (void)didAddTextAttachmentViews:(id)arg1;	// IMP=0x0000000000ff1674
- (void)textContainerUsageDidChangeToSize:(struct CGSize)arg1;	// IMP=0x0000000000ff163c
@property(readonly, nonatomic) struct CGRect _clipRectForFadedEdges;
@property(readonly, nonatomic) struct CGPoint drawingScale;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
@property(readonly, nonatomic) UIScrollView *enclosingScrollView;
@property(readonly, nonatomic) UIColor *textColor;
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000000ff14a1
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;	// IMP=0x0000000000ff1386
- (void)updateInsertionPointStateAndRestartTimer:(_Bool)arg1;	// IMP=0x0000000000ff122f
@property(nonatomic) _Bool usesStandardTextScaling;
- (_Bool)_ensureLayoutForCappedSize;	// IMP=0x0000000000ff0f6c
- (_Bool)_shouldCapSizeToFitLayoutRange:(out struct _NSRange *)arg1;	// IMP=0x0000000000ff0bce
- (void)sizeToFit;	// IMP=0x0000000000ff0aef
- (void)_sizeToConstrainedContainerUsedRect;	// IMP=0x0000000000ff09e3
@property(nonatomic, getter=isVerticallyResizable) _Bool verticallyResizable;
@property(nonatomic, getter=isHorizontallyResizable) _Bool horizontallyResizable;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;	// IMP=0x0000000000ff076e
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000ff067d
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000ff058f
- (void)_setNeedsContentsFormatUpdate;	// IMP=0x0000000000ff0572
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x0000000000ff04f2
- (void)setNeedsDisplay;	// IMP=0x0000000000ff04d5
- (void)_setFrameOrBounds:(struct CGRect)arg1 oldRect:(struct CGRect)arg2 isFrameRect:(_Bool)arg3 settingAction:(CDUnknownBlockType)arg4;	// IMP=0x0000000000feffd7
- (void)_ensureMinAndMaxSizesConsistentWithBounds;	// IMP=0x0000000000feff67
- (void)invalidateTextContainerOrigin;	// IMP=0x0000000000feff56
- (_Bool)reconfigureWithLayoutManager:(id)arg1 triggeredBySelector:(SEL)arg2;	// IMP=0x0000000000fefeea
@property(readonly, nonatomic) struct CGPoint textContainerOrigin;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
@property(nonatomic, getter=_freezeTextContainerSize, setter=_setFreezeTextContainerSize:) _Bool freezeTextContainerSize;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000fef94f
- (void)tintColorDidChange;	// IMP=0x0000000000fef8ee
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000fef875
- (id)linkTextAttributes;	// IMP=0x0000000000fef826
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000fef75b
- (id)initWithFrame:(struct CGRect)arg1 textLayoutController:(id)arg2 textContainer:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000fef42a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

