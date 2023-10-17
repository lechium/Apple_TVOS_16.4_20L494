//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@class NSString, UILabel, UIView;

@interface PBSceneLayoutDebugWindow : UIWindow
{
    int _keyboardFocusedNotifyToken;	// 8 = 0x8
    UIView *_focusedFrameView;	// 16 = 0x10
    UIView *_overlayInsetsView;	// 24 = 0x18
    UILabel *_keyboardVisibilityLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000008658c
@property(readonly, nonatomic) UILabel *keyboardVisibilityLabel; // @synthesize keyboardVisibilityLabel=_keyboardVisibilityLabel;
@property(readonly, nonatomic) int keyboardFocusedNotifyToken; // @synthesize keyboardFocusedNotifyToken=_keyboardFocusedNotifyToken;
@property(readonly, nonatomic) UIView *overlayInsetsView; // @synthesize overlayInsetsView=_overlayInsetsView;
@property(readonly, nonatomic) UIView *focusedFrameView; // @synthesize focusedFrameView=_focusedFrameView;
- (void)sceneManager:(id)arg1 didUpdateFocusedFrame:(struct CGRect)arg2 forFocusedScene:(id)arg3;	// IMP=0x00100000000864a2
- (void)sceneManager:(id)arg1 didUpdateOverlayInsets:(struct UIEdgeInsets)arg2 forFocusedScene:(id)arg3;	// IMP=0x00100000000863fb
- (void)_checkKeyboardState;	// IMP=0x001000000008633d
- (void)_setFrame:(struct CGRect)arg1 onView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000086200
- (void)_updateFocusedFrame:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000861c7
- (void)_updateOverlayInsets:(struct UIEdgeInsets)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000086133
- (_Bool);	// IMP=0x001000000008612b
- (_Bool)_canBecomeKeyWindow;	// IMP=0x0010000000086123
- (void)dealloc;	// IMP=0x0010000000086091
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000858de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

