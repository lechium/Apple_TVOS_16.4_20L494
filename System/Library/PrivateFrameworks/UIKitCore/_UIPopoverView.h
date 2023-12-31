//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIActionSheet, UIColor, UIImageView, UIPopoverBackgroundView, UIPopoverController;

__attribute__((visibility("hidden")))
@interface _UIPopoverView : UIView
{
    UIView *_contentView;	// 144 = 0x90
    UIPopoverBackgroundView *_backgroundView;	// 152 = 0x98
    Class _backgroundViewClass;	// 160 = 0xa0
    UIImageView *_toolbarShine;	// 168 = 0xa8
    _Bool _showsBackgroundComponentHighlights;	// 176 = 0xb0
    _Bool _showsBackgroundViewHighlight;	// 177 = 0xb1
    _Bool _showsContentViewHighlight;	// 178 = 0xb2
    _Bool _contentExtendsOverArrow;	// 179 = 0xb3
    _Bool _chromeHidden;	// 180 = 0xb4
    _Bool _chromeHiddenForSizeTransition;	// 181 = 0xb5
    UIActionSheet *_presentedActionSheet;	// 184 = 0xb8
    UIPopoverController *_popoverController;	// 192 = 0xc0
}

+ (id)popoverViewContainingView:(id)arg1;	// IMP=0x00600000011e07ae
- (void).cxx_destruct;	// IMP=0x00000000011e2341
@property(nonatomic) _Bool chromeHiddenForSizeTransition; // @synthesize chromeHiddenForSizeTransition=_chromeHiddenForSizeTransition;
@property(nonatomic) _Bool chromeHidden; // @synthesize chromeHidden=_chromeHidden;
@property(readonly, nonatomic) _Bool contentExtendsOverArrow; // @synthesize contentExtendsOverArrow=_contentExtendsOverArrow;
@property(nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) UIActionSheet *presentedActionSheet; // @synthesize presentedActionSheet=_presentedActionSheet;
@property(nonatomic) _Bool showsContentViewHighlight; // @synthesize showsContentViewHighlight=_showsContentViewHighlight;
@property(nonatomic) _Bool showsBackgroundViewHighlight; // @synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight;
@property(nonatomic) _Bool showsBackgroundComponentHighlights; // @synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights;
- (void)_performBlockCheckingDefinesTintColor:(CDUnknownBlockType)arg1;	// IMP=0x00000000011e225f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000011e218a
- (void)_hideArrow;	// IMP=0x00000000011e2152
- (void)_showArrow;	// IMP=0x00000000011e211a
- (void)_setCornerRadius:(double)arg1;	// IMP=0x00000000011e20d9
- (void)_setFrame:(struct CGRect)arg1 arrowOffset:(double)arg2;	// IMP=0x00000000011e1cb3
- (void)setUseToolbarShine:(_Bool)arg1;	// IMP=0x00000000011e1be8
@property(copy, nonatomic) UIColor *arrowBackgroundColor;
@property(copy, nonatomic) UIColor *popoverBackgroundColor;
@property(nonatomic) long long backgroundStyle;
@property(nonatomic) unsigned long long arrowDirection;
@property(nonatomic) double arrowOffset;
- (void)_updateAlphaForChromeHidden;	// IMP=0x00000000011e15a1
- (_Bool)_allowsCustomizationOfContent;	// IMP=0x00000000011e1561
- (void)_setPopoverContentView:(id)arg1;	// IMP=0x00000000011e1338
- (struct CGRect)_snapshotBounds;	// IMP=0x00000000011e1244
- (id)toolbarShine;	// IMP=0x00000000011e122f
- (id)standardChromeView;	// IMP=0x00000000011e11d7
- (id)backgroundView;	// IMP=0x00000000011e11c2
- (id)contentView;	// IMP=0x00000000011e11ad
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011e11a7
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011e11a1
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011e119b
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011e1195
- (_Bool)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect)arg1;	// IMP=0x00000000011e118d
- (int)_style;	// IMP=0x00000000011e1182
- (void)layoutSubviews;	// IMP=0x00000000011e0f22
- (struct UIEdgeInsets)safeAreaInsetsForContentView;	// IMP=0x00000000011e0ec4
- (void)_layoutToolbarShine;	// IMP=0x00000000011e0d0e
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000011e0b72
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000011e0b5e
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(_Bool)arg3 contentExtendsOverArrow:(_Bool)arg4;	// IMP=0x00000000011e0846
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2;	// IMP=0x00000000011e082f

@end

