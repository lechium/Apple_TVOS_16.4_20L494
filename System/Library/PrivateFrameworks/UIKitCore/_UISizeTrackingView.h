//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, _UIRemoteViewController;

__attribute__((visibility("hidden")))
@interface _UISizeTrackingView : UIView
{
    _UIRemoteViewController *_remoteViewController;	// 144 = 0x90
    id _viewControllerOperatorProxy;	// 152 = 0x98
    id _textEffectsOperatorProxy;	// 160 = 0xa0
    struct CGSize _intrinsicContentSize;	// 168 = 0xa8
    struct CGRect _formerTextEffectsContentFrame;	// 184 = 0xb8
    _Bool _observingTextEffectsWindowRotation;	// 216 = 0xd8
    long long _interfaceOrientation;	// 224 = 0xe0
    UIView *_viewForRemoteTextEffectsWindowMatchAnimation;	// 232 = 0xe8
    struct {
        unsigned int hasIntrinsicContentSize:1;
        unsigned int observingBoundingPathChanges:1;
        unsigned int needsRemoteViewServiceBoundingPathUpdate:1;
        unsigned int remoteViewServiceBoundingPathUpdateScheduled:1;
    } _sizeTrackingViewFlags;	// 240 = 0xf0
}

+ (_Bool)_supportsInvalidatingFocusCache;	// IMP=0x0010000001054433
+ (id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3;	// IMP=0x00100000010517ca
- (void).cxx_destruct;	// IMP=0x0000000001054448
- (id)focusItemsInRect:(struct CGRect)arg1;	// IMP=0x000000000105443b
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000105442b
- (_Bool)canBecomeFocused;	// IMP=0x0000000001054423
@property(readonly, nonatomic) _UIRemoteViewController *remoteViewController;
- (void)_prepareForWindowDealloc;	// IMP=0x00000000010543a8
- (void)_prepareForWindowHostingSceneRemoval;	// IMP=0x0000000001054346
- (void)_viewDidMoveFromScreen:(id)arg1 toScreen:(id)arg2;	// IMP=0x000000000105423b
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x0000000001053e45
- (void)_updateSceneGeometries:(id)arg1;	// IMP=0x0000000001053d3e
- (void)_willMoveToWindow:(id)arg1;	// IMP=0x0000000001053b70
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000001053a9d
- (_Bool)isScrollEnabled;	// IMP=0x0000000001053a95
- (void)_clearNeedsRemoteViewServiceBoundingPathUpdate;	// IMP=0x0000000001053a84
- (void)_setNeedsRemoteViewServiceBoundingPathUpdate;	// IMP=0x0000000001053986
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000010538d1
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000105381c
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(_Bool)arg2;	// IMP=0x000000000105380a
- (id)_boundingPathForRemoteViewService;	// IMP=0x0000000001053743
- (_Bool)_canSendViewServiceActualBoundingPath;	// IMP=0x0000000001053631
- (void)_geometryChanged:(const CDStruct_f46536fb *)arg1 forAncestor:(id)arg2;	// IMP=0x0000000001053134
- (_Bool)_fencingEffectsAreVisible;	// IMP=0x00000000010530e4
- (long long)_interfaceOrientationForScene:(id)arg1;	// IMP=0x000000000105302f
- (void)_updateSceneGeometries:(id)arg1 forOrientation:(long long)arg2;	// IMP=0x0000000001052d2e
- (void)_updateTextEffectsGeometries:(struct CGRect)arg1 textEffectsWindow:(id)arg2;	// IMP=0x00000000010522a9
- (void)_updateTextEffectsGeometries:(struct CGRect)arg1;	// IMP=0x0000000001052295
- (void)_textEffectsWindowDidRotate:(id)arg1;	// IMP=0x0000000001052172
- (void)_updateTextEffectsGeometriesImmediately;	// IMP=0x0000000001052123
- (void)_updateTextEffectsWindowSafeAreaInsets;	// IMP=0x0000000001051dc6
- (void)_updateTextEffectsWindowHostedViewSize;	// IMP=0x0000000001051d57
- (_Bool)_needsTextEffectsUpdateToFrame:(struct CGRect)arg1;	// IMP=0x0000000001051b12
- (void)updateIntrinsicContentSize:(struct CGSize)arg1;	// IMP=0x0000000001051ac5
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000001051a93
- (void)dealloc;	// IMP=0x0000000001051a11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

