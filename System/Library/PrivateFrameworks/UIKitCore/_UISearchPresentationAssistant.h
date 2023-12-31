//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIDimmingView, UIPresentationController, UIView;
@protocol UIViewControllerTransitionCoordinator, _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPresentationAssistant : NSObject
{
    UIPresentationController *_searchPresentationController;	// 8 = 0x8
    UIView *_searchBarContainerView;	// 16 = 0x10
    UIDimmingView *_dimmingView;	// 24 = 0x18
    _Bool _isFormSheetPresentation;	// 32 = 0x20
    _Bool _presentationWasAnimated;	// 33 = 0x21
    UIPresentationController<_UISearchControllerPresenting> *_adaptivePresentationController;	// 40 = 0x28
    id <UIViewControllerTransitionCoordinator> _transitioningToSizeCoordinator;	// 48 = 0x30
}

@property(retain, nonatomic) id <UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator; // @synthesize transitioningToSizeCoordinator=_transitioningToSizeCoordinator;
@property(nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController; // @synthesize adaptivePresentationController=_adaptivePresentationController;
@property(nonatomic) _Bool presentationWasAnimated; // @synthesize presentationWasAnimated=_presentationWasAnimated;
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x0000000000ccadb9
- (_Bool)searchBarWillResizeForScopeBar;	// IMP=0x0000000000ccad2a
- (double)resultsControllerContentOffset;	// IMP=0x0000000000cca9ba
- (_Bool)searchBarToBecomeTopAttached;	// IMP=0x0000000000cca7bd
- (id)locateNavigationController;	// IMP=0x0000000000cca742
- (_Bool)shouldAccountForStatusBar;	// IMP=0x0000000000cca71e
- (double)statusBarAdjustment;	// IMP=0x0000000000cca5d2
- (_Bool)_statusBarPreferredHiddenForInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000cca4b6
- (_Bool)_statusBarPreferredHidden;	// IMP=0x0000000000cca45e
- (id)dimmingView;	// IMP=0x0000000000cca374
- (struct CGSize)updateSearchBarContainerFrame;	// IMP=0x0000000000cc9ecf
- (double)_statusBarHeightChangeDueToRotation;	// IMP=0x0000000000cc9dbd
- (_Bool)_currentTransitionIsRotating;	// IMP=0x0000000000cc9d6d
- (void)removeContainerViewFromSuperview;	// IMP=0x0000000000cc9d57
- (id)searchBarContainerView;	// IMP=0x0000000000cc9a9f
- (id)_searchBarContainerSuperview;	// IMP=0x0000000000cc9a5a
- (struct CGRect)_containerFrame;	// IMP=0x0000000000cc9694
- (void)ensureAppropriatelySizedSearchBar:(id)arg1;	// IMP=0x0000000000cc95aa
- (struct CGRect)optimalFrameForSearchBar:(id)arg1;	// IMP=0x0000000000cc9414
- (_Bool)presentationIsPopoverToOverFullScreenAdaptation;	// IMP=0x0000000000cc93b6
- (id)_searchControllerPresenting;	// IMP=0x0000000000cc9382
- (void)dealloc;	// IMP=0x0000000000cc9322
- (id)initWithSearchPresentationController:(id)arg1;	// IMP=0x0000000000cc92bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

