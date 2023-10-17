//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITabBarController.h>

@interface UITabBarController (PhotosUICore)
- (void)_px_selectTabForKeyCommand:(id)arg1;	// IMP=0x0030000000117811
- (id)px_defaultKeyCommandsWithDelegate:(id)arg1;	// IMP=0x00300000001176c9
- (struct CGRect)px_frameForTabItem:(unsigned long long)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00300000001176ab
- (void)px_performAddToTabAnimation:(unsigned long long)arg1 withSnapshotView:(id)arg2;	// IMP=0x0030000000116b90
@property(readonly, nonatomic) _Bool px_hidesTabBarForCurrentHorizontalSizeClass;
@property(readonly, nonatomic) _Bool px_hidesTabBarForRegularHorizontalSizeClass;
- (_Bool)px_canPerformAddToTabAnimationForTab:(unsigned long long)arg1;	// IMP=0x0030000000116a74
@property(readonly, nonatomic, getter=px_isTabBarHidden) _Bool px_tabBarHidden;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0030000000319203
- (void)_switchToBarBarItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00300000005f59bb
- (void)ppt_runTabSwitchingTestWithName:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00300000005f50e7
- (id)px_navigationDestination;	// IMP=0x0030000000707584
- (void)px_switchToTabAndNavigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00300000007073d0
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0030000000707231
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0030000000707133
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x00300000007070b3
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x0030000000706fe8
@end
