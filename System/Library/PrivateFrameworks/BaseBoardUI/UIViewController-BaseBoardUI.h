//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UITraitCollection;

@interface UIViewController (BaseBoardUI)
+ (id)bs_nextViewControllerForView:(id)arg1;	// IMP=0x00100000000105bc
- (void)bs_traitCollectionDidChange:(id)arg1 forManagedTraitEnvironment:(id)arg2;	// IMP=0x0010000000011537
- (id)bs_topPresentedViewController;	// IMP=0x0010000000011499
- (id)bs_presentationContextDefiningViewController;	// IMP=0x00100000000113cf
- (id)bs_presentedViewControllerIncludingAncestors;	// IMP=0x001000000001134a
- (_Bool)bs_removeChildViewController:(id)arg1 animated:(_Bool)arg2 transitionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011095
- (_Bool)bs_removeChildViewController:(id)arg1;	// IMP=0x001000000001107e
- (_Bool)bs_addChildViewController:(id)arg1 withSuperview:(id)arg2 animated:(_Bool)arg3 transitionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010cb7
- (_Bool)bs_addChildViewController:(id)arg1 withSuperview:(id)arg2;	// IMP=0x0010000000010c9f
- (_Bool)bs_addChildViewController:(id)arg1 animated:(_Bool)arg2 transitionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010c85
- (_Bool)bs_addChildViewController:(id)arg1;	// IMP=0x0010000000010c6b
- (_Bool)bs_endAppearanceTransitionForChildViewController:(id)arg1 toVisible:(_Bool)arg2;	// IMP=0x0010000000010bf5
- (_Bool)bs_endAppearanceTransitionForChildViewController:(id)arg1;	// IMP=0x00100000000109cb
- (_Bool)bs_beginAppearanceTransitionForChildViewController:(id)arg1 toVisible:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x001000000001077c
- (_Bool)bs_endAppearanceTransition;	// IMP=0x0010000000010740
- (_Bool)bs_endAppearanceTransition:(_Bool)arg1;	// IMP=0x0010000000010710
- (_Bool)bs_beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000106b5
- (_Bool)bs_isDisappearingOrDisappeared;	// IMP=0x0010000000010695
- (_Bool)bs_isAppearingOrAppeared;	// IMP=0x001000000001067a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
@end

