//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PBPIPControlButton, UIStackView;
@protocol PBPIPControlsDelegate;

@interface PBPIPControlsViewController : UIViewController
{
    id <PBPIPControlsDelegate> _delegate;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    PBPIPControlButton *_stopPictureInPictureButton;	// 24 = 0x18
    PBPIPControlButton *_movePictureInPictureButton;	// 32 = 0x20
    PBPIPControlButton *_cancelPictureInPictureButton;	// 40 = 0x28
    long long _currentQuadrant;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000016239a
@property(nonatomic) long long currentQuadrant; // @synthesize currentQuadrant=_currentQuadrant;
@property(retain, nonatomic) PBPIPControlButton *cancelPictureInPictureButton; // @synthesize cancelPictureInPictureButton=_cancelPictureInPictureButton;
@property(retain, nonatomic) PBPIPControlButton *movePictureInPictureButton; // @synthesize movePictureInPictureButton=_movePictureInPictureButton;
@property(retain, nonatomic) PBPIPControlButton *stopPictureInPictureButton; // @synthesize stopPictureInPictureButton=_stopPictureInPictureButton;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak id <PBPIPControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playPausePressed:(id)arg1;	// IMP=0x0010000000162285
- (void)menuPressed:(id)arg1;	// IMP=0x0010000000162248
- (void)cancelPictureInPictureButtonPressed:(id)arg1;	// IMP=0x001000000016220b
- (void)movePictureInPictureButtonPressed:(id)arg1;	// IMP=0x00100000001621af
- (void)expandPictureInPictureButtonPressed:(id)arg1;	// IMP=0x0010000000162172
- (void)hideControlsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000161c6a
- (void)showControlsAnimated:(_Bool)arg1;	// IMP=0x00100000001617fc
- (id)preferredFocusEnvironments;	// IMP=0x0010000000161716
- (void)viewDidLoad;	// IMP=0x0010000000160f94
- (id)initWithQuadrant:(long long)arg1;	// IMP=0x0010000000160e0d

@end

