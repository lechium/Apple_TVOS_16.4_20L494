//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray, NSString, UIAccessibilityHUDGestureManager, UIStatusBar, UIStatusBarComposedData, UIStatusBarForegroundStyleAttributes, UIStatusBarLayoutManager;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundView : UIView
{
    _Bool _usesVerticalLayout;	// 144 = 0x90
    _Bool _itemIsEnabled[51];	// 145 = 0x91
    UIStatusBarLayoutManager *_layoutManagers[3];	// 200 = 0xc8
    int _ignoreDataLevel;	// 224 = 0xe0
    NSMutableArray *_actionAnimationStack;	// 232 = 0xe8
    UIStatusBarComposedData *_currentData;	// 240 = 0xf0
    UIStatusBarComposedData *_pendedData;	// 248 = 0xf8
    int _pendedActions;	// 256 = 0x100
    UIAccessibilityHUDGestureManager *_accessibilityHUDGestureManager;	// 264 = 0x108
    long long _idiom;	// 272 = 0x110
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x0000000000dd5442
@property(readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
- (_Bool)rectIntersectsBatteryItem:(struct CGRect)arg1;	// IMP=0x0000000000dd53bd
- (_Bool)rectIntersectsTimeItem:(struct CGRect)arg1;	// IMP=0x0000000000dd5324
- (struct CGRect)frameForAllItemsInRegion:(int)arg1;	// IMP=0x0000000000dd50d0
- (struct CGRect)frameForItemOfType:(int)arg1;	// IMP=0x0000000000dd4ffd
- (void)jiggleLockIcon;	// IMP=0x0000000000dd4f2a
- (void)animateUnlock;	// IMP=0x0000000000dd4e4a
- (void)_animateUnlockCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000dd4cf9
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000dd4af7
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000dd4a3a
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000dd497d
- (void)setPersistentAnimationsEnabled:(_Bool)arg1;	// IMP=0x0000000000dd492c
- (double)rightEdgePadding;	// IMP=0x0000000000dd48dc
- (double)leftEdgePadding;	// IMP=0x0000000000dd488c
- (_Bool)isShowingBreadcrumb;	// IMP=0x0000000000dd487b
- (_Bool)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(double *)arg4 allowSwap:(_Bool)arg5 swappedItem:(id *)arg6;	// IMP=0x0000000000dd46b5
- (id)_computeVisibleItemsPreservingHistory:(_Bool)arg1;	// IMP=0x0000000000dd2f21
- (void)didMoveToWindow;	// IMP=0x0000000000dd2ede
- (void)_reflowItemViewsWithDuration:(double)arg1 preserveHistory:(_Bool)arg2;	// IMP=0x0000000000dd2da6
- (void)_cleanUpAfterDataChange;	// IMP=0x0000000000dd2d0e
- (void)_cleanUpAfterSimpleReflow;	// IMP=0x0000000000dd2ccd
- (_Bool)ignoringData;	// IMP=0x0000000000dd2cb9
- (void)stopIgnoringData:(_Bool)arg1;	// IMP=0x0000000000dd2b16
- (void)startIgnoringData;	// IMP=0x0000000000dd2b06
- (void)reflowItemViewsForgettingEitherSideItemHistory;	// IMP=0x0000000000dd2ad3
- (void)reflowItemViews:(_Bool)arg1;	// IMP=0x0000000000dd29b3
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)arg1 timeWasEnabled:(_Bool)arg2;	// IMP=0x0000000000dd25b5
- (void)reflowItemViewsCrossfadingCenter:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000dd22ab
- (void)setStatusBarData:(id)arg1 actions:(int)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000dd1bcb
- (void)_setStatusBarData:(id)arg1 actions:(int)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000dd156a
- (_Bool)willChangeNavigationItemDisplayWithSystemNavigationAction:(id)arg1;	// IMP=0x0000000000dd1505
@property(readonly, nonatomic) UIStatusBar *statusBar;
- (void)_dismissAccessibilityHUDForGestureManager:(id)arg1;	// IMP=0x0000000000dd144e
- (void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;	// IMP=0x0000000000dd139e
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000dd1396
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000dd1390
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;	// IMP=0x0000000000dd1340
- (id)_statusBarWindowForAccessibilityHUD;	// IMP=0x0000000000dd1249
- (id)_statusBarItemViewAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000dd11af
- (void)dealloc;	// IMP=0x0000000000dd1124
- (id)initWithFrame:(struct CGRect)arg1 foregroundStyle:(id)arg2 usesVerticalLayout:(_Bool)arg3;	// IMP=0x0000000000dd0fdf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

