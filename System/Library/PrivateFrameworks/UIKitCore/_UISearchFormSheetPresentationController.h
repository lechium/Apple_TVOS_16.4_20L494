//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPresentationController.h"

@class NSString, UIView, _UISearchPresentationAssistant;
@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchFormSheetPresentationController : UIPresentationController
{
    _UISearchPresentationAssistant *_assistant;	// 8 = 0x8
    UIView *_wrapperView;	// 16 = 0x10
    struct CGRect finalFrameForContainerView;	// 24 = 0x18
}

@property(readonly, nonatomic) struct CGRect finalFrameForContainerView; // @synthesize finalFrameForContainerView;
@property(readonly, nonatomic) unsigned long long edgeForHidingNavigationBar;
@property(readonly, nonatomic) _Bool forceObeyNavigationBarInsets;
@property(readonly, nonatomic) _Bool animatorShouldLayoutPresentationViews;
@property(readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property(readonly, nonatomic) double resultsControllerContentOffset;
@property(readonly, nonatomic) _Bool searchBarToBecomeTopAttached;
- (void)setContentVisible:(_Bool)arg1;	// IMP=0x0000000000cc8b39
@property(readonly, nonatomic) double statusBarAdjustment;
@property(readonly, nonatomic) _Bool searchBarShouldClipToBounds;
@property(readonly, nonatomic) _Bool searchBarCanContainScopeBar;
@property(readonly, nonatomic) _Bool resultsUnderlapsSearchBar;
@property(readonly, nonatomic) _Bool shouldAccountForStatusBar;
@property(readonly, retain, nonatomic) UIView *searchBarContainerView;
- (id)_presentationControllerForTraitCollection:(id)arg1;	// IMP=0x0000000000cc8a23
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000cc8a11
- (long long)adaptivePresentationStyle;	// IMP=0x0000000000cc8a06
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000cc88c2
- (void)_transitionFromDidEnd;	// IMP=0x0000000000cc88ab
- (void)_transitionFromWillBegin;	// IMP=0x0000000000cc8899
- (void)_transitionToDidEnd;	// IMP=0x0000000000cc8882
- (void)_transitionToWillBegin;	// IMP=0x0000000000cc8847
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000cc8793
- (void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(_Bool)arg2;	// IMP=0x0000000000cc872b
- (_Bool)_shouldKeepCurrentFirstResponder;	// IMP=0x0000000000cc8723
- (_Bool)_shouldSubscribeToKeyboardNotifications;	// IMP=0x0000000000cc871b
- (_Bool)_shouldRespectDefinesPresentationContext;	// IMP=0x0000000000cc8713
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;	// IMP=0x0000000000cc86d5
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000000cc8625
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000000cc8589
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x0000000000cc7ff5
- (id)presentedView;	// IMP=0x0000000000cc7fe4
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000cc7e7a
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000000cc7c9b
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000cc7c09
- (void)presentationTransitionWillBegin;	// IMP=0x0000000000cc7781
- (void)dealloc;	// IMP=0x0000000000cc7733
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0000000000cc7649

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

