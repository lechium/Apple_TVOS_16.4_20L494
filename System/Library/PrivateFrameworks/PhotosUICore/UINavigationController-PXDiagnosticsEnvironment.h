//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@interface UINavigationController (PXDiagnosticsEnvironment)
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00900000003192b2
- (id)px_navigationDestination;	// IMP=0x0090000000707f06
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0090000000707cbc
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0090000000707bb7
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x0090000000707b10
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x0090000000707a73
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000007079d1
- (_Bool)px_allowsTabSwitching;	// IMP=0x009000000070795e
- (void)px_pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00900000007bdee8
- (id)px_popToViewControllerPrecedingViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00900000007bde0e
- (_Bool)px_preparePopToViewController:(id)arg1 forced:(_Bool)arg2;	// IMP=0x00900000007bdbc1
- (void)_ppt_setTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00900000007bdb5a
- (CDUnknownBlockType)_ppt_transitionAnimationCompletionHandler;	// IMP=0x00900000007bdb1c
- (void)ppt_notifyTransitionAnimationDidComplete;	// IMP=0x00900000007bdad0
- (void)ppt_installTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00900000007bd9dd
@end

