//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIFont, UIKBTutorialModalDisplayStyling, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UIKBTutorialModalDisplay : UIView
{
    long long _appearance;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    UIView *_mediaView;	// 24 = 0x18
    UIButton *_button;	// 32 = 0x20
    UIKBTutorialModalDisplayStyling *_styling;	// 40 = 0x28
    UIVisualEffectView *_backgroundBlurView;	// 48 = 0x30
    NSLayoutConstraint *_containerViewTopConstraits;	// 56 = 0x38
    NSArray *_adjustableConstraints;	// 64 = 0x40
    NSLayoutConstraint *_widthAdjustmentConstraint;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000006e8b05
@property(retain, nonatomic) NSLayoutConstraint *widthAdjustmentConstraint; // @synthesize widthAdjustmentConstraint=_widthAdjustmentConstraint;
@property(retain, nonatomic) NSArray *adjustableConstraints; // @synthesize adjustableConstraints=_adjustableConstraints;
@property(retain, nonatomic) NSLayoutConstraint *containerViewTopConstraits; // @synthesize containerViewTopConstraits=_containerViewTopConstraits;
@property(retain, nonatomic) UIVisualEffectView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIKBTutorialModalDisplayStyling *styling; // @synthesize styling=_styling;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property(readonly, nonatomic) long long textBodyMaxLines;
@property(readonly, nonatomic) double mediaLayoutWidthAdjustment;
@property(readonly, nonatomic) double pagingInterval;
@property(readonly, nonatomic) NSArray *mediaContents;
@property(readonly, nonatomic) _Bool presentsFullScreen;
@property(readonly, nonatomic) UIFont *largeTitleFont;
@property(readonly, nonatomic) NSString *largeTitle;
@property(readonly, nonatomic) UIFont *textBodyFont;
@property(readonly, nonatomic) NSArray *textBodyDescriptions;
@property(readonly, nonatomic) UIFont *textTitleFont;
@property(readonly, nonatomic) NSArray *textTitleDescriptions;
@property(readonly, nonatomic) NSString *buttonTitle;
- (void)extraButtonTapAction;	// IMP=0x00000000006e8788
- (void)restartPagingAnimation;	// IMP=0x00000000006e86ee
- (void)tapInsideButton:(id)arg1;	// IMP=0x00000000006e8693
- (id)constructMediaView;	// IMP=0x00000000006e800d
- (void)updateMediaViewTextAndPlacement;	// IMP=0x00000000006e77e6
- (struct CGSize)sizeForTutorialPageView;	// IMP=0x00000000006e77b5
- (void)containerForAlertPresentation;	// IMP=0x00000000006e6e32
- (void)containerForFullScreenView;	// IMP=0x00000000006e5c51
- (void)containerForKeyboardView;	// IMP=0x00000000006e5035
- (struct UIEdgeInsets)safeAreaInsets;	// IMP=0x00000000006e4fab
- (void)configContainerView;	// IMP=0x00000000006e4f6d
- (void)configBackgroundBlur;	// IMP=0x00000000006e471a
- (double)containerBottomPadding;	// IMP=0x00000000006e46d6
- (double)containerTopPadding;	// IMP=0x00000000006e449f
- (_Bool)isPortrait;	// IMP=0x00000000006e444b
- (void)layoutSubviews;	// IMP=0x00000000006e441d
- (id)initWithKeyboardAppearance:(long long)arg1;	// IMP=0x00000000006e40c6

@end

