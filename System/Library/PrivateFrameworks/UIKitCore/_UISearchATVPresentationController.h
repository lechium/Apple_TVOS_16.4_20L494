//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UISearchATVPresentationController
{
    UIVisualEffectView *_blurView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cc71fb
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000000cc71d0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000cc707c
- (unsigned long long)edgeForHidingNavigationBar;	// IMP=0x0000000000cc7074
- (_Bool)forceObeyNavigationBarInsets;	// IMP=0x0000000000cc706c
- (_Bool)animatorShouldLayoutPresentationViews;	// IMP=0x0000000000cc7064
- (void)setContentVisible:(_Bool)arg1;	// IMP=0x0000000000cc7016
- (struct CGRect)finalFrameForContainerView;	// IMP=0x0000000000cc6ff8
- (id)adaptivePresentationController;	// IMP=0x0000000000cc6ff0
- (double)resultsControllerContentOffset;	// IMP=0x0000000000cc6fe7
- (_Bool)searchBarToBecomeTopAttached;	// IMP=0x0000000000cc6fdf
- (double)statusBarAdjustment;	// IMP=0x0000000000cc6fd6
- (_Bool)searchBarShouldClipToBounds;	// IMP=0x0000000000cc6fce
- (_Bool)searchBarCanContainScopeBar;	// IMP=0x0000000000cc6fc6
- (_Bool)resultsUnderlapsSearchBar;	// IMP=0x0000000000cc6fbe
- (_Bool)shouldAccountForStatusBar;	// IMP=0x0000000000cc6fb6
- (id)_presentationControllerForTraitCollection:(id)arg1;	// IMP=0x0000000000cc6fad
- (id)_presentedViewControllerForSizeClassPair:(CDStruct_627e0f85)arg1;	// IMP=0x0000000000cc6f9b
- (long long)adaptivePresentationStyle;	// IMP=0x0000000000cc6f90
- (void)hideBackgroundObscuringView;	// IMP=0x0000000000cc6f70
- (void)showBackgroundObscuringView;	// IMP=0x0000000000cc6f4b
- (id)backgroundObscuringView;	// IMP=0x0000000000cc6da3

@end
