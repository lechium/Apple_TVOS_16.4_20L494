//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PXBarAppearance, PXExtendedTraitCollection, PXImageModulationManager, PXOneUpPresentation, PXProgrammaticNavigationDestination, UIToolbar;

@interface UIViewController (CPL)
+ (id)px_viewControllerWithContinuousOutputProducer:(CDUnknownBlockType)arg1;	// IMP=0x001000000023065b
+ (id)px_viewControllerWithAsynchronousOutputProducer:(CDUnknownBlockType)arg1;	// IMP=0x00100000002305bb
+ (id)px_viewControllerWithOutput:(CDUnknownBlockType)arg1;	// IMP=0x001000000023051b
+ (id)px_viewControllerWithSettings:(id)arg1;	// IMP=0x00100000002304a0
+ (void)_px_prepareClassForBarAppearance;	// IMP=0x0010000000486104
+ (void)_px_prepareClassForExtendedTraitCollection;	// IMP=0x001000000049146b
+ (void)px_preloadExtendedTraitCollection;	// IMP=0x00100000004913e6
+ (void)_px_prepareClassForOneUpPresentation;	// IMP=0x00100000006612a4
@property(readonly, nonatomic) UIToolbar *px_footerToolbar;
- (id)_px_offersTableView;	// IMP=0x001000000008dc7f
- (void)px_removeFooterToolbar;	// IMP=0x001000000008dbac
- (void)px_insertFooterToolbarWithItems:(id)arg1;	// IMP=0x001000000008d927
- (id)px_sharedAlbumFeedViewControllerWithTraitCollection:(id)arg1;	// IMP=0x0010000000121f14
- (id)px_gridPresentation;	// IMP=0x001000000012daaf
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0010000000318fd0
- (void)_px_dismiss:(id)arg1;	// IMP=0x00100000003d4a8e
- (void)px_presentViewControllerInNavigationController:(id)arg1 animated:(_Bool)arg2 dimissButtonLocation:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000003d495e
- (long long)_pxswizzled_barAppearance_preferredStatusBarUpdateAnimation;	// IMP=0x00100000004860a1
- (long long)_pxswizzled_barAppearance_preferredStatusBarStyle;	// IMP=0x001000000048603e
- (_Bool)_pxswizzled_barAppearance_prefersStatusBarHidden;	// IMP=0x0010000000485fdd
- (void)_pxswizzled_barAppearance_viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000485f81
- (void)_pxswizzled_barAppearance_viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000485f25
@property(readonly, nonatomic) PXBarAppearance *px_barAppearance;
- (void)px_didTransitionBars;	// IMP=0x0010000000485eb4
- (void)px_willTransitionBars;	// IMP=0x0010000000485eae
- (void)px_enableBarAppearance;	// IMP=0x0010000000485e54
- (void)_pxswizzled_viewControllerTraitCollection_didMoveToParentViewController:(id)arg1;	// IMP=0x0010000000490aa2
- (void)_pxswizzled_viewControllerTraitCollection_viewLayoutMarginsDidChange;	// IMP=0x0010000000490a4a
- (void)_pxswizzled_viewControllerTraitCollection_viewSafeAreaInsetsDidChange;	// IMP=0x00100000004909e7
- (void)_pxswizzled_viewControllerTraitCollection_traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000490968
- (void)_pxswizzled_viewControllerTraitCollection_viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000490846
- (void)_pxswizzled_viewControllerTraitCollection_viewWillLayoutSubviews;	// IMP=0x00100000004907ee
- (void)_pxswizzled_viewControllerTraitCollection_viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000490791
- (void)_pxswizzled_viewControllerTraitCollection_viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000490734
- (void)_pxswizzled_viewControllerTraitCollection_viewDidLoad;	// IMP=0x00100000004906dc
@property(readonly, nonatomic) PXExtendedTraitCollection *px_extendedTraitCollection;
- (void)px_enableExtendedTraitCollection;	// IMP=0x0010000000490617
- (id)debugURLsForDiagnostics;	// IMP=0x00100000004af10f
@property(readonly, nonatomic) _Bool px_determinesPreferredStatusBarHidden;
@property(readonly, nonatomic) _Bool px_determinesPreferredStatusBarStyle;
@property(readonly, nonatomic) UIViewController *px_nextViewControllerInNavigationController;
@property(readonly, nonatomic) UIViewController *px_previousViewControllerInNavigationController;
@property(retain, nonatomic, setter=px_setPreviewActionMenus:) NSArray *px_previewActionMenus;
@property(copy, nonatomic, setter=px_setSubtitle:) NSString *px_subtitle;
- (void)px_enumerateDescendantViewControllersWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000004aedc7
- (_Bool)px_isDescendantOfViewController:(id)arg1;	// IMP=0x00100000004aed25
- (_Bool)px_canPresentViewControllerAnimated:(_Bool)arg1;	// IMP=0x00100000004aec62
- (void)px_addOrReplaceChildViewController:(id)arg1 activateConstraints:(_Bool)arg2;	// IMP=0x00100000004ae728
- (void)px_presentOverTopmostPresentedViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004ae67f
@property(readonly, nonatomic) UIViewController *px_topmostPresentedViewController;
@property(readonly, nonatomic) struct UIEdgeInsets px_layoutMargins;
@property(readonly, nonatomic) struct UIEdgeInsets px_safeAreaInsets;
@property(readonly, nonatomic) _Bool px_isVisible;
- (void)px_setNeedsImageModulationIntensityUpdate;	// IMP=0x00100000004b5db8
@property(readonly, nonatomic) double px_imageModulationIntensity;
- (void)px_setNeedsHDRFocusUpdate;	// IMP=0x00100000004b5da9
@property(readonly, nonatomic) double px_HDRFocus;
@property(readonly, nonatomic) PXImageModulationManager *px_imageModulationManager;
- (void)px_enableImageModulation;	// IMP=0x00100000004b5d81
@property(readonly, nonatomic) struct CGSize px_windowReferenceSize;
@property(readonly, nonatomic) struct CGSize px_referenceSize;
- (void)_pxswizzled_oneUpPresentation_viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000661248
- (void)_pxswizzled_oneUpPresentation_viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000006611ec
- (void)_pxswizzled_oneUpPresentation_viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000661190
- (void)_pxswizzled_oneUpPresentation_viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000661130
@property(readonly, nonatomic) PXOneUpPresentation *px_oneUpPresentation;
- (void)px_enableOneUpPresentationFromViewController:(id)arg1;	// IMP=0x0010000000660eaa
- (void)px_enableOneUpPresentation;	// IMP=0x0010000000660e43
@property(readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000706c23
- (void)provideViewControllersForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000706c07
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000007069b3
- (id)_nextExistingViewControllerOnRouteToDestination:(id)arg1;	// IMP=0x0010000000706919
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x00100000007067aa
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x00100000007067a2
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000070641c
@property(readonly, nonatomic) _Bool px_allowsTabSwitching;
- (id)px_splitViewController;	// IMP=0x00100000008d10b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=px_isVisible) _Bool px_visible;
@property(readonly) Class superclass;
@end

