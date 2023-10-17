//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class IKMediaContentElement, NSString, UICollectionReusableView, UIViewController, _TVPlayer, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface _TVInlinePlayerView : UIView
{
    IKMediaContentElement *_mediaContentElement;	// 8 = 0x8
    long long _playbackMode;	// 16 = 0x10
    long long _audioMode;	// 24 = 0x18
    _TVPlayer *_appPlayer;	// 32 = 0x20
    UICollectionReusableView *_containingCell;	// 40 = 0x28
    UIViewController *_hostViewController;	// 48 = 0x30
    UIViewController *_playerViewController;	// 56 = 0x38
    struct CGRect _hostedPlayerViewFrame;	// 64 = 0x40
    _Bool _playbackEnabled;	// 96 = 0x60
    int _playbackState;	// 100 = 0x64
    _UIFloatingContentView *_floatingView;	// 104 = 0x68
    UIView *_staticView;	// 112 = 0x70
    _Bool _usesFocusedState;	// 120 = 0x78
    _Bool _playerViewEnabled;	// 121 = 0x79
    UIView *_imageView;	// 128 = 0x80
    UIView *_playerView;	// 136 = 0x88
}

+ (id)_makePlayerViewControllerWithPlayer:(id)arg1;	// IMP=0x00100000001724c8
- (void).cxx_destruct;	// IMP=0x00000000000595bf
@property(nonatomic) _Bool playerViewEnabled; // @synthesize playerViewEnabled=_playerViewEnabled;
@property(nonatomic) _Bool usesFocusedState; // @synthesize usesFocusedState=_usesFocusedState;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) struct CGRect _playerViewFrame;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x00000000000593cb
- (void)layoutSubviews;	// IMP=0x0000000000059179
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000005910b
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000059056
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000058f9d
- (void)setFocusDirection:(struct CGPoint)arg1;	// IMP=0x0000000000058f89
- (struct CGPoint)focusDirection;	// IMP=0x0000000000058ed4
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000058e17
- (void)didMoveToWindow;	// IMP=0x000000000005874e
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000058677
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000000585bb
- (void)dealloc;	// IMP=0x000000000005857d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000583a7
- (void)_stop;	// IMP=0x0000000000173e3b
- (void)_play;	// IMP=0x0000000000173d47
- (void)_schedule;	// IMP=0x0000000000173c80
- (void)_playerWillGetPresented:(id)arg1;	// IMP=0x0000000000173a1a
- (void)_playbackError:(id)arg1;	// IMP=0x0000000000173644
- (void)_containingCellDidFocus:(_Bool)arg1;	// IMP=0x0000000000173234
- (void)_containingCellDidDisplay:(_Bool)arg1;	// IMP=0x0000000000172e70
- (void)_hostPlayer:(_Bool)arg1;	// IMP=0x0000000000172698
- (_Bool)_canHostPlayer;	// IMP=0x000000000017263a
- (_Bool)_isPlayerHosted;	// IMP=0x00000000001725ab
- (void)_controller_viewDidMoveToWindow;	// IMP=0x0000000000171ebf
- (void)_controller_viewWillMoveToWindow:(id)arg1 andSuperView:(id)arg2;	// IMP=0x00000000001719aa
- (void)_controller_dealloc;	// IMP=0x0000000000171863
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000001714ec
- (void)viewDidDisappearForPlaybackViewController:(id)arg1;	// IMP=0x00000000001711bd
- (void)viewWillDisappearForPlaybackViewController:(id)arg1;	// IMP=0x0000000000170f3d
- (void)viewDidAppearForPlaybackViewController:(id)arg1;	// IMP=0x0000000000170d10
- (void)viewWillAppearForPlaybackViewController:(id)arg1;	// IMP=0x0000000000170a42
- (id)playbackViewController:(id)arg1 customAnimatorForNavigationControllerOperation:(long long)arg2;	// IMP=0x00000000001708b4
@property(readonly, nonatomic) __weak UIViewController *hostViewController;
@property(readonly, nonatomic) long long audioMode;
@property(readonly, nonatomic) long long playbackMode;
- (void)updateWithViewElement:(id)arg1;	// IMP=0x00000000001705dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

