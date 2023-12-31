//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UINavigationBarVisualProvider.h"

@class NSArray, NSLayoutConstraint, NSString, UIColor, UIFocusContainerGuide, UIImageSymbolConfiguration, UIView, UIVisualEffectView, _CarTitleView, _UIBarButtonItemAppearanceStorage, _UIButtonBar, _UIButtonBarButton;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderModernCarPlay : _UINavigationBarVisualProvider
{
    _Bool _compactMetrics;	// 40 = 0x28
    _Bool _havePrepared;	// 41 = 0x29
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;	// 48 = 0x30
    UIView *_contentView;	// 56 = 0x38
    _CarTitleView *_titleView;	// 64 = 0x40
    _UIButtonBar *_leadingBar;	// 72 = 0x48
    _UIButtonBar *_trailingBar;	// 80 = 0x50
    _UIButtonBarButton *_backBarButton;	// 88 = 0x58
    NSLayoutConstraint *_leadingBarConstraint;	// 96 = 0x60
    NSLayoutConstraint *_leadingBarNoItemsConstraint;	// 104 = 0x68
    NSLayoutConstraint *_trailingBarConstraint;	// 112 = 0x70
    NSLayoutConstraint *_trailingBarNoItemsConstraint;	// 120 = 0x78
    NSArray *_backButtonConstraints;	// 128 = 0x80
    NSLayoutConstraint *_largeTitleLeadingConstraint;	// 136 = 0x88
    NSLayoutConstraint *_largeTitleTrailingConstraint;	// 144 = 0x90
    NSLayoutConstraint *_regularTitleConstraint;	// 152 = 0x98
    NSLayoutConstraint *_leadingBarWithTitleTrailingConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_leadingBarWithNoTitleTrailingConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_trailingBarWithTitleLeadingConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_trailingBarWithNoTitleLeadingConstraint;	// 184 = 0xb8
    UIVisualEffectView *_backgroundView;	// 192 = 0xc0
    UIFocusContainerGuide *_focusContainerGuide;	// 200 = 0xc8
    NSArray *_debugViews;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000677459
@property(retain, nonatomic) NSArray *debugViews; // @synthesize debugViews=_debugViews;
@property(retain, nonatomic) UIFocusContainerGuide *focusContainerGuide; // @synthesize focusContainerGuide=_focusContainerGuide;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSLayoutConstraint *trailingBarWithNoTitleLeadingConstraint; // @synthesize trailingBarWithNoTitleLeadingConstraint=_trailingBarWithNoTitleLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingBarWithTitleLeadingConstraint; // @synthesize trailingBarWithTitleLeadingConstraint=_trailingBarWithTitleLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBarWithNoTitleTrailingConstraint; // @synthesize leadingBarWithNoTitleTrailingConstraint=_leadingBarWithNoTitleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBarWithTitleTrailingConstraint; // @synthesize leadingBarWithTitleTrailingConstraint=_leadingBarWithTitleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *regularTitleConstraint; // @synthesize regularTitleConstraint=_regularTitleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *largeTitleTrailingConstraint; // @synthesize largeTitleTrailingConstraint=_largeTitleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *largeTitleLeadingConstraint; // @synthesize largeTitleLeadingConstraint=_largeTitleLeadingConstraint;
@property(retain, nonatomic) NSArray *backButtonConstraints; // @synthesize backButtonConstraints=_backButtonConstraints;
@property(retain, nonatomic) NSLayoutConstraint *trailingBarNoItemsConstraint; // @synthesize trailingBarNoItemsConstraint=_trailingBarNoItemsConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingBarConstraint; // @synthesize trailingBarConstraint=_trailingBarConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBarNoItemsConstraint; // @synthesize leadingBarNoItemsConstraint=_leadingBarNoItemsConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBarConstraint; // @synthesize leadingBarConstraint=_leadingBarConstraint;
@property(retain, nonatomic) _UIButtonBarButton *backBarButton; // @synthesize backBarButton=_backBarButton;
@property(retain, nonatomic) _UIButtonBar *trailingBar; // @synthesize trailingBar=_trailingBar;
@property(retain, nonatomic) _UIButtonBar *leadingBar; // @synthesize leadingBar=_leadingBar;
@property(retain, nonatomic) _CarTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool havePrepared; // @synthesize havePrepared=_havePrepared;
@property(readonly, nonatomic) _Bool compactMetrics; // @synthesize compactMetrics=_compactMetrics;
- (void)_installGradientLayerMaskForClippingView:(id)arg1;	// IMP=0x0000000000676da8
- (void)_configureBackground;	// IMP=0x0000000000676ad8
- (void)changeAppearance;	// IMP=0x0000000000676ac6
- (double)absorptionForItem:(id)arg1;	// IMP=0x0000000000676abd
@property(readonly, nonatomic) double backButtonMaximumWidth;
@property(readonly, nonatomic) double backButtonMargin;
- (id)backIndicatorMaskImage;	// IMP=0x0000000000676a9e
- (id)backIndicatorImage;	// IMP=0x0000000000676a96
- (id)defaultFontDescriptor;	// IMP=0x00000000006769fc
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;	// IMP=0x00000000006769f1
@property(readonly, nonatomic) double defaultTextPadding;
@property(readonly, nonatomic) double defaultEdgeSpacing;
@property(readonly, nonatomic) _Bool centerTextButtons;
@property(readonly, nonatomic) UIColor *tintColor;
- (long long)barMetrics;	// IMP=0x00000000006769b6
@property(readonly, nonatomic) long long barType;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage; // @synthesize appearanceStorage=_appearanceStorage;
@property(readonly, nonatomic) _Bool isRTL;
- (void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg1;	// IMP=0x0000000000676946
- (void)navigationItemUpdatedLargeTitleContent:(id)arg1;	// IMP=0x0000000000676940
- (void)navigationItem:(id)arg1 appearance:(id)arg2 categoriesChanged:(long long)arg3;	// IMP=0x000000000067693a
- (void)navigationItemUpdatedScrollEdgeProgress:(id)arg1;	// IMP=0x0000000000676934
- (void)navigationItemUpdatedSearchController:(id)arg1 oldSearchController:(id)arg2;	// IMP=0x000000000067692e
- (void)navigationItemUpdatedPromptContent:(id)arg1;	// IMP=0x0000000000676928
- (void)navigationItemUpdatedCanvasView:(id)arg1;	// IMP=0x0000000000676922
- (void)navigationItemUpdatedBottomPalette:(id)arg1 oldPalette:(id)arg2;	// IMP=0x000000000067691c
- (void)navigationItemUpdatedBackgroundAppearance:(id)arg1;	// IMP=0x0000000000676916
- (void)navigationItemSearchControllerReadyForDeferredAutomaticShowsScopeBar:(id)arg1;	// IMP=0x0000000000676910
- (void)navigationItemUpdatedRightBarButtonItems:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000067685b
- (void)navigationItemUpdatedLeftBarButtonItems:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000006767a6
- (void)navigationItemUpdatedBackButtonContent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000006766f1
- (void)navigationItemUpdatedContentLayout:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000067663c
- (void)navigationItemUpdatedTitleContent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000676587
- (_Bool)navigationItemIsBackItem:(id)arg1;	// IMP=0x0000000000676528
- (_Bool)navigationItemIsTopItem:(id)arg1;	// IMP=0x00000000006764c9
- (void)_updateContentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 direction:(unsigned long long)arg3;	// IMP=0x00000000006763c1
- (void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 animated:(_Bool)arg3 direction:(unsigned long long)arg4;	// IMP=0x0000000000673540
- (void)__backButtonAction;	// IMP=0x00000000006734cc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000067348b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000067340e
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000006733f8
- (void)animateForSearchPresentation:(_Bool)arg1;	// IMP=0x00000000006733f2
- (void)dismissHostedSearchWithTransitionCoordinator:(id)arg1;	// IMP=0x00000000006733ec
- (void)presentHostedSearchWithTransitionCoordinator:(id)arg1;	// IMP=0x00000000006733e6
- (void)navigationBarInvalidatedResolvedLayoutMargins;	// IMP=0x00000000006732c9
- (void)popAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006732b1
- (void)prepareForPop;	// IMP=0x00000000006732ab
- (void)pushAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000673293
- (void)updateTopNavigationItemAnimated:(_Bool)arg1;	// IMP=0x0000000000673217
- (void)setupTopNavigationItem;	// IMP=0x000000000067319b
- (void)prepareForPush;	// IMP=0x0000000000673195
- (void)stackDidChangeFrom:(id)arg1;	// IMP=0x0000000000673159
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;	// IMP=0x0000000000673027
- (void)teardown;	// IMP=0x0000000000672d29
- (void)prepare;	// IMP=0x00000000006708da

// Remaining properties
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property(readonly) Class superclass;

@end

