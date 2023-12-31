//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class UIButton, UIWindow;

__attribute__((visibility("hidden")))
@interface UIZoomViewController : UIViewController
{
    UIWindow *_window;	// 424 = 0x1a8
    UIButton *_zoomButton;	// 432 = 0x1b0
}

- (void).cxx_destruct;	// IMP=0x0000000001028e44
- (id)_window;	// IMP=0x0000000001028e33
- (id)screen;	// IMP=0x0000000001028df1
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1 forWindow:(id)arg2;	// IMP=0x0000000001028ddb
- (void)_suspendAnimationStarted:(id)arg1;	// IMP=0x0000000001028cfe
- (void)_applicationDidFinishLaunching:(id)arg1;	// IMP=0x0000000001028c1c
- (void)_zoomOrientationAnimationFinished;	// IMP=0x0000000001028ae0
- (void)_zoomOrientationChange:(id)arg1;	// IMP=0x0000000001028923
- (void)loadView;	// IMP=0x0000000001028796
- (void)_setupPositioningAndRotationForInterfaceOrientation:(long long)arg1 offscreen:(_Bool)arg2;	// IMP=0x00000000010284df
- (void)_updateZoomButton;	// IMP=0x0000000001028373
- (void)_changeZoom:(id)arg1;	// IMP=0x00000000010282ba
- (_Bool)isClassicControlWindow:(id)arg1;	// IMP=0x00000000010282a6
- (void)dealloc;	// IMP=0x000000000102821a
- (id)init;	// IMP=0x0000000001028105

@end

