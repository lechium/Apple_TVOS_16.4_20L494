//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, PBPIPContainerViewController, PGPictureInPictureApplication, UILayoutGuide;
@protocol OS_dispatch_source, PBPIPContainerViewControllerLayoutDelegate;

@interface PBPIPContainerViewControllerLayout : NSObject
{
    _Bool _isKeyboardFocused;	// 8 = 0x8
    int _keyboardFocusedNotifyToken;	// 12 = 0xc
    PBPIPContainerViewController *_containerViewController;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    id <PBPIPContainerViewControllerLayoutDelegate> _delegate;	// 32 = 0x20
    NSArray *_constraintsFillingParentView;	// 40 = 0x28
    NSArray *_constraintsFittingParentView;	// 48 = 0x30
    NSLayoutConstraint *_heightConstraint;	// 56 = 0x38
    NSLayoutConstraint *_widthConstraint;	// 64 = 0x40
    NSLayoutConstraint *_topConstraint;	// 72 = 0x48
    NSLayoutConstraint *_bottomConstraint;	// 80 = 0x50
    NSLayoutConstraint *_leftConstraint;	// 88 = 0x58
    NSLayoutConstraint *_rightConstraint;	// 96 = 0x60
    UILayoutGuide *_preferredPositionLayoutGuide;	// 104 = 0x68
    NSLayoutConstraint *_preferredHeightConstraint;	// 112 = 0x70
    NSLayoutConstraint *_preferredWidthConstraint;	// 120 = 0x78
    NSLayoutConstraint *_preferredTopConstraint;	// 128 = 0x80
    NSLayoutConstraint *_preferredBottomConstraint;	// 136 = 0x88
    NSLayoutConstraint *_preferredLeftConstraint;	// 144 = 0x90
    NSLayoutConstraint *_preferredRightConstraint;	// 152 = 0x98
    long long _quadrant;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_focusDodgingTimer;	// 168 = 0xa8
    struct CGRect _lastFocusedFrame;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00200000001d0134
@property(readonly, nonatomic) int keyboardFocusedNotifyToken; // @synthesize keyboardFocusedNotifyToken=_keyboardFocusedNotifyToken;
@property(nonatomic) _Bool isKeyboardFocused; // @synthesize isKeyboardFocused=_isKeyboardFocused;
@property(readonly, nonatomic) struct CGRect lastFocusedFrame; // @synthesize lastFocusedFrame=_lastFocusedFrame;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *focusDodgingTimer; // @synthesize focusDodgingTimer=_focusDodgingTimer;
@property(readonly, nonatomic) long long quadrant; // @synthesize quadrant=_quadrant;
@property(readonly, nonatomic) NSLayoutConstraint *preferredRightConstraint; // @synthesize preferredRightConstraint=_preferredRightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredLeftConstraint; // @synthesize preferredLeftConstraint=_preferredLeftConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredBottomConstraint; // @synthesize preferredBottomConstraint=_preferredBottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredTopConstraint; // @synthesize preferredTopConstraint=_preferredTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredWidthConstraint; // @synthesize preferredWidthConstraint=_preferredWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *preferredHeightConstraint; // @synthesize preferredHeightConstraint=_preferredHeightConstraint;
@property(readonly, nonatomic) UILayoutGuide *preferredPositionLayoutGuide; // @synthesize preferredPositionLayoutGuide=_preferredPositionLayoutGuide;
@property(readonly, nonatomic) NSLayoutConstraint *rightConstraint; // @synthesize rightConstraint=_rightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *leftConstraint; // @synthesize leftConstraint=_leftConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(readonly, nonatomic) NSArray *constraintsFittingParentView; // @synthesize constraintsFittingParentView=_constraintsFittingParentView;
@property(readonly, nonatomic) NSArray *constraintsFillingParentView; // @synthesize constraintsFillingParentView=_constraintsFillingParentView;
@property(nonatomic) __weak id <PBPIPContainerViewControllerLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) PBPIPContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void)_handleKeyboardNotification;	// IMP=0x00100000001cffa5
- (void)_unregisterFromKeyboardNotifications;	// IMP=0x00100000001cff81
- (void)_registerForKeyboardNotifications;	// IMP=0x00100000001cfe72
- (void)_notifyDelegateDidUpdateConstraints;	// IMP=0x00100000001cfe3b
- (id)_allConstraints;	// IMP=0x00100000001cfd0a
- (id)_pipLayoutGuide;	// IMP=0x00100000001cfbf6
- (id)_parentView;	// IMP=0x00100000001cfb7b
- (void)updateConstraintsForPreferredPictureInPictureSize;	// IMP=0x00100000001cfaf7
- (_Bool)_shouldDodgeFocusedFrame:(struct CGRect)arg1;	// IMP=0x00100000001cf89c
- (void)_updateConstraintsForFocusedFrame:(struct CGRect)arg1 shouldDodge:(_Bool)arg2;	// IMP=0x00100000001cf509
- (void)_cancelUpdateForDodgingFocusedFrame;	// IMP=0x00100000001cf4d0
- (void)_stageUpdateForDodgingFocusedFrame;	// IMP=0x00100000001cf326
- (void)updateConstraintsForFocusedFrame:(struct CGRect)arg1;	// IMP=0x00100000001cf288
- (void)updateConstraintsFittingParentView;	// IMP=0x00100000001cf20e
- (void)updateConstraintsFillingParentView;	// IMP=0x00100000001cf194
- (void)updateConstraintsForPictureInPictureQuadrant:(long long)arg1;	// IMP=0x00100000001cef58
- (struct CGRect)preferredPictureInPictureFrameForQuadrant:(long long)arg1 pipInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00100000001cec61
- (struct CGSize)preferredLandscapeBoundingSize;	// IMP=0x00100000001cec1a
- (struct CGRect)preferredIntrinsicFrame;	// IMP=0x00100000001ceb4c
- (struct CGSize)preferredIntrinsicSize;	// IMP=0x00100000001ceb1c
- (struct CGSize)preferredFullscreenSize;	// IMP=0x00100000001cea8f
- (struct CGSize)preferredPictureInPictureInstrisicContentSize;	// IMP=0x00100000001cea77
- (struct CGSize)_preferredPictureInPictureSizeAllowingPortrait:(_Bool)arg1;	// IMP=0x00100000001cea07
- (struct CGSize)preferredPictureInPictureSize;	// IMP=0x00100000001ce9f2
- (double)contentAspectRatio;	// IMP=0x00100000001ce994
@property(readonly, nonatomic) PGPictureInPictureApplication *application;
- (void)_setUpConstraints;	// IMP=0x00100000001cdf72
- (void)dealloc;	// IMP=0x00100000001cdf34
- (id)initWithContainerViewController:(id)arg1;	// IMP=0x00100000001cde88

@end

