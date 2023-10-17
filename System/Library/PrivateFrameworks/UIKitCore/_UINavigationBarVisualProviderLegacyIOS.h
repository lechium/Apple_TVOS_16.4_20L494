//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UINavigationBarVisualProvider.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIFocusContainerGuide, UIImageView, UILayoutGuide, UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy, _UINavBarPrompt, _UINavigationBarGestureHandler, _UINavigationBarLegacyContentView;
@protocol UIViewControllerTransitionCoordinator;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderLegacyIOS : _UINavigationBarVisualProvider
{
    _UIBarBackground *_backgroundView;	// 40 = 0x28
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;	// 48 = 0x30
    UIView *_customBackgroundView;	// 56 = 0x38
    UIView *_titleView;	// 64 = 0x40
    NSArray *_leftViews;	// 72 = 0x48
    NSArray *_rightViews;	// 80 = 0x50
    UIImageView *_backIndicatorView;	// 88 = 0x58
    _UINavBarPrompt *_prompt;	// 96 = 0x60
    _UINavigationBarGestureHandler *_gestureHandler;	// 104 = 0x68
    NSMutableArray *_slideTransitionClippingViews;	// 112 = 0x70
    id <UIViewControllerTransitionCoordinator> _transitionCoordinator;	// 120 = 0x78
    _UINavigationBarLegacyContentView *_layoutView;	// 128 = 0x80
    UIView *_contentView;	// 136 = 0x88
    UILayoutGuide *_userContentGuide;	// 144 = 0x90
    NSLayoutConstraint *_userContentGuideLeading;	// 152 = 0x98
    NSLayoutConstraint *_userContentGuideTrailing;	// 160 = 0xa0
    UIFocusContainerGuide *_contentFocusContainerGuide;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000016dd97
- (_Bool)_shim_34415965;	// IMP=0x000000000016dd8f
- (void)_shim_30244716;	// IMP=0x000000000016dd69
- (void)_shim_updateBackgroundViewIgnoringFlag;	// IMP=0x000000000016dd17
- (_Bool)_shim_throwConstraintExceptions;	// IMP=0x000000000016dd01
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint)arg1;	// IMP=0x000000000016dcb3
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000016db26
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000016da78
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000016d8df
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000016d831
- (void)_popForTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000016d7c1
- (_Bool)_shouldPopForTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000016d435
- (void)_handleMouseUpAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000016d12d
- (void)_handleMouseDownAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000016ce86
- (id)backButtonViewAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000016cbda
- (id)_navigationItemAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000016c9e0
- (_Bool)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;	// IMP=0x000000000016c9d0
- (id)_shim_customHitTest:(struct CGPoint)arg1 forView:(id)arg2;	// IMP=0x000000000016bf29
- (void)_shim_pressBackIndicator:(_Bool)arg1 initialPress:(_Bool)arg2;	// IMP=0x000000000016be5b
- (id)_shim_backIndicatorView;	// IMP=0x000000000016be46
- (void)_shim_updateBackIndicator;	// IMP=0x000000000016be34
- (void)_shim_setPromptText:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000016b848
- (id)_shim_promptText;	// IMP=0x000000000016b82b
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;	// IMP=0x000000000016b6ba
- (id)_shim_userContentGuide;	// IMP=0x000000000016b32c
- (long long)_shim_backdropStyle;	// IMP=0x000000000016b281
- (double)_shim_backgroundHeight;	// IMP=0x000000000016b239
- (void)_shim_setDisableBlurTinting:(_Bool)arg1;	// IMP=0x000000000016b200
- (_Bool)_shim_disableBlurTinting;	// IMP=0x000000000016b1e3
- (void)_shim_setUseContentView:(_Bool)arg1;	// IMP=0x000000000016b0ec
- (void)_shim_setShadowAlpha:(double)arg1;	// IMP=0x000000000016b0cf
- (double)_shim_shadowAlpha;	// IMP=0x000000000016b0b2
- (id)_shim_compatibilityBackgroundView;	// IMP=0x000000000016b08a
- (void)_shim_setCustomBackgroundView:(id)arg1;	// IMP=0x000000000016b033
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(_Bool)arg1;	// IMP=0x000000000016ae98
- (id)_shim_layoutView;	// IMP=0x000000000016ae83
- (id)_shim_contentView;	// IMP=0x000000000016ae6e
- (void)_setUpContentFocusContainerGuide;	// IMP=0x000000000016ab80
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;	// IMP=0x000000000016a954
- (void)updateBackgroundGroupName;	// IMP=0x000000000016a901
- (void)_updateBackground;	// IMP=0x0000000000169f90
- (void)_completeTopItemTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 previousLeftViews:(id)arg3 previousRightViews:(id)arg4 enableUserInteraction:(id)arg5 transitionAssistant:(id)arg6;	// IMP=0x0000000000169b20
- (void)_setViewsAnimated:(_Bool)arg1 forTopNavigationItem:(id)arg2 backNavigationItem:(id)arg3 previousTopItem:(id)arg4;	// IMP=0x000000000016685d
- (void)_completeNavigationTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 transitionAssistant:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000165c4c
- (void)_startPopAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000163c88
- (void)_startPushAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000161bb9
- (_Bool)_supportsCanvasView;	// IMP=0x0000000000161b9b
- (struct CGRect)_contentViewFrameInBounds:(struct CGRect)arg1 style:(id)arg2;	// IMP=0x0000000000161af8
- (void)_updateBackIndicatorViewTintColor;	// IMP=0x00000000001618a0
- (void)_updateBackIndicatorImage;	// IMP=0x0000000000161577
- (id)_effectiveBackIndicatorTransitionMaskImage;	// IMP=0x0000000000161494
- (id)_effectiveBackIndicatorImage;	// IMP=0x00000000001613b1
- (_Bool)_suppressBackIndicator;	// IMP=0x000000000016132a
- (double)_backIndicatorClippingMargin;	// IMP=0x0000000000161305
- (double)_effectiveBackIndicatorLeftMargin;	// IMP=0x000000000016119e
- (void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(_Bool)arg5 rightMaskImage:(id)arg6;	// IMP=0x0000000000160a49
- (unsigned long long)_subviewIndexAboveBackground;	// IMP=0x0000000000160990
- (double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3;	// IMP=0x00000000001607fb
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5;	// IMP=0x00000000001603df
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5 returnedIdealWidthOfTextContent:(double *)arg6 availableLayoutWidthForTextContent:(double *)arg7 idealBackButtonWidth:(double *)arg8;	// IMP=0x000000000015bc2d
- (void)_getLeftMargin:(double *)arg1 rightMargin:(double *)arg2 forNavigationItem:(id)arg3 showingBackButton:(_Bool)arg4 visualStyle:(id)arg5;	// IMP=0x000000000015ba46
- (id)_defaultTitleFontForItem:(id)arg1 fittingHeight:(double)arg2 withScaleAdjustment:(double)arg3;	// IMP=0x000000000015b6ff
- (id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2;	// IMP=0x000000000015b664
- (_Bool)_shouldShowBackButtonForNavigationItem:(id)arg1;	// IMP=0x000000000015b65c
- (void)setBackButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000015b26e
- (void)setupTopNavigationItem;	// IMP=0x000000000015afca
- (void)updateTopNavigationItemTitleView;	// IMP=0x000000000015ae95
- (void)updateTopNavigationItemAnimated:(_Bool)arg1;	// IMP=0x000000000015adef
- (void)popAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000015a928
- (void)pushAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000015a5a0
- (void)prepareForPop;	// IMP=0x000000000015a51d
- (void)prepareForPush;	// IMP=0x000000000015a2fd
- (void)layoutSubviews;	// IMP=0x000000000015a1e2
- (void)_layoutInBounds:(struct CGRect)arg1 withVisualStyle:(id)arg2;	// IMP=0x000000000015924f
- (void)_layoutSubviewsFromContentView;	// IMP=0x00000000001590b4
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x0000000000159069
- (void)barSizeChanged;	// IMP=0x000000000015901e
- (_Bool)shouldUseHeightRangeFittingWidth;	// IMP=0x0000000000159016
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000158ee9
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000000158db1
- (struct CGSize)_preferredContentSizeForItem:(id)arg1;	// IMP=0x0000000000158c81
- (struct CGPoint)frameOriginForStatusBarLocatedAt:(struct CGPoint)arg1;	// IMP=0x0000000000158c54
- (_Bool)shouldGestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000158c42
- (void)gestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000158c30
- (_Bool)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(CDUnknownBlockType)arg2;	// IMP=0x0000000000158b5a
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000158a7e
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x00000000001589e4
- (id)preferredFocusedView;	// IMP=0x0000000000158967
- (_Bool)canHandleStatusBarTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000001588ce
- (long long)statusBarStyle;	// IMP=0x0000000000158855
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000000015856b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000015848d
- (void)updateArchivedSubviews:(id)arg1;	// IMP=0x00000000001581a4
- (void)changeAppearance;	// IMP=0x0000000000158134
- (void)teardown;	// IMP=0x0000000000158097
- (void)prepare;	// IMP=0x0000000000157f41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

