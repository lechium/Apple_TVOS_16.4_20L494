//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, NSString, UIAlertAction, UIAlertController, UIAlertControllerVisualStyle, UIImageView, UILabel, _UIAlertControllerActionViewMetrics;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerActionView : UIView
{
    _Bool _highlighted;	// 144 = 0x90
    UIView *_labelContainerView;	// 152 = 0x98
    UILabel *_label;	// 160 = 0xa0
    NSLayoutConstraint *_axLabelContainerWidthConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_labelContainerLeadingConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_labelContainerTrailingConstraint;	// 184 = 0xb8
    NSLayoutConstraint *_labelContainerCenterXConstraint;	// 192 = 0xc0
    NSLayoutConstraint *_labelContainerLeadingPinConstraint;	// 200 = 0xc8
    NSLayoutConstraint *_labelContainerTrailingPinConstraint;	// 208 = 0xd0
    NSLayoutConstraint *_labelWidthConstraint;	// 216 = 0xd8
    NSLayoutConstraint *_labelCenterLeadingConstraint;	// 224 = 0xe0
    UIView *_contentViewControllerContainerView;	// 232 = 0xe8
    NSArray *_contentViewControllerConstraints;	// 240 = 0xf0
    UILabel *_descriptiveLabel;	// 248 = 0xf8
    NSArray *_havingDescriptiveLabelConstraints;	// 256 = 0x100
    NSArray *_notHavingDescriptiveLabelConstraints;	// 264 = 0x108
    NSLayoutConstraint *_descriptiveLabelWidthConstraint;	// 272 = 0x110
    NSLayoutConstraint *_descriptiveLabelTrailingToLabelLeadingLabelConstraint;	// 280 = 0x118
    NSLayoutConstraint *_descriptiveLabelTrailingToContainerCenterConstraint;	// 288 = 0x120
    UIImageView *_checkView;	// 296 = 0x128
    NSLayoutConstraint *_checkToMarginConstraint;	// 304 = 0x130
    UIImageView *_imageView;	// 312 = 0x138
    NSLayoutConstraint *_marginToImageConstraint;	// 320 = 0x140
    NSLayoutConstraint *_imageViewBaselineOrCenterYConstraint;	// 328 = 0x148
    NSLayoutConstraint *_imageViewTopConstraint;	// 336 = 0x150
    NSLayoutConstraint *_imageViewBottomConstraint;	// 344 = 0x158
    NSLayoutConstraint *_minimumHeightConstraint;	// 352 = 0x160
    UIAlertAction *_action;	// 360 = 0x168
    UIAlertControllerVisualStyle *_visualStyle;	// 368 = 0x170
    _UIAlertControllerActionViewMetrics *_metrics;	// 376 = 0x178
    _Bool _hasDescriptiveText;	// 384 = 0x180
    double _axEnforcedWidth;	// 392 = 0x188
    UIAlertController *_alertController;	// 400 = 0x190
}

- (void).cxx_destruct;	// IMP=0x0000000000085f7a
@property(nonatomic) __weak UIAlertControllerVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain) NSLayoutConstraint *labelContainerTrailingPinConstraint; // @synthesize labelContainerTrailingPinConstraint=_labelContainerTrailingPinConstraint;
@property(retain) NSLayoutConstraint *labelContainerLeadingPinConstraint; // @synthesize labelContainerLeadingPinConstraint=_labelContainerLeadingPinConstraint;
@property(retain) NSLayoutConstraint *labelContainerCenterXConstraint; // @synthesize labelContainerCenterXConstraint=_labelContainerCenterXConstraint;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;	// IMP=0x0000000000085ead
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;	// IMP=0x0000000000085e8d
- (void)_action:(id)arg1 changedToBePreferred:(_Bool)arg2;	// IMP=0x0000000000085e7b
- (void)_action:(id)arg1 changedToChecked:(_Bool)arg2;	// IMP=0x0000000000085e69
- (void)_action:(id)arg1 changedToEnabled:(_Bool)arg2;	// IMP=0x0000000000085e0a
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;	// IMP=0x0000000000085d9d
- (void)_action:(id)arg1 changedToTitle:(id)arg2;	// IMP=0x0000000000085d7d
- (_Bool)hasActiveMinimumSizeConstraintsWithSize:(struct CGSize)arg1;	// IMP=0x0000000000085d0d
- (_Bool)hasLayoutHeightConstraintsIdenticalToInterfaceActionCustomView:(id)arg1;	// IMP=0x0000000000085c1c
- (id)_interfaceActionViewState;	// IMP=0x0000000000085c00
- (void)_contentSizeChanged;	// IMP=0x0000000000085bee
- (void)tintColorDidChange;	// IMP=0x0000000000085bdc
@property(copy, nonatomic) UIAlertAction *action;
- (void)_updateStyle;	// IMP=0x0000000000085b30
- (void)underlyingInterfaceActionRepresentationDidChange;	// IMP=0x0000000000085b1e
- (void)_updateContentViewControllerContainerViewConstraints;	// IMP=0x000000000008572a
- (void)_updateHavingDescriptiveLabelConstraints;	// IMP=0x0000000000085655
- (long long)_effectiveTitleTextAlignment;	// IMP=0x000000000008562d
- (void)_updateLabelContainerConstraints;	// IMP=0x00000000000852a6
- (void)_updateTextAlignmentForHavingDescriptiveText:(_Bool)arg1 titleTextAlignment:(long long)arg2;	// IMP=0x0000000000085199
- (void)_updateImageMargins;	// IMP=0x00000000000850c8
- (void)_updateMinimumHeight;	// IMP=0x0000000000084e52
- (void)updateHeightUsingAXEnforcedWidth:(double)arg1;	// IMP=0x0000000000084e25
- (void)_removeContentViewControllerContainerViewSubviews;	// IMP=0x0000000000084db7
- (void)_loadContentViewControllerContainerViewIfNecessary;	// IMP=0x0000000000084c3a
- (void)_loadContentViewControllerView;	// IMP=0x000000000008492f
- (void)_buildContentViewControllerContainerConstraints;	// IMP=0x00000000000846ac
- (void)_updateCheckImageView;	// IMP=0x000000000008461c
- (void)_loadCheckView;	// IMP=0x00000000000844cc
- (void)_buildCheckViewConstraints;	// IMP=0x0000000000084347
- (void)_updateImageView;	// IMP=0x00000000000842b9
- (void)_loadImageView;	// IMP=0x000000000008422a
- (void)_prepareConstraintsForImage:(id)arg1;	// IMP=0x000000000008405e
- (void)_buildImageViewConstraints;	// IMP=0x0000000000083d19
- (void)_updateDescriptiveText;	// IMP=0x0000000000083c4f
- (void)_loadDescriptiveLabel;	// IMP=0x0000000000083b36
- (void)_updateLabelAttributes;	// IMP=0x0000000000083a46
- (void)_updateImageViewAttributes;	// IMP=0x0000000000083970
- (void)_recomputeColors;	// IMP=0x000000000008388e
@property(readonly) double currentLabelTextWidth;
@property(readonly) double currentDescriptiveLabelTextWidth;
- (void)applyMetrics:(id)arg1;	// IMP=0x00000000000837bb
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)_prepareConstraintsForHavingDescriptiveText:(_Bool)arg1;	// IMP=0x000000000008366a
- (void)_buildHavingDescriptiveLabelConstraints;	// IMP=0x000000000008308c
- (void)_buildNotHavingDescriptiveLabelConstraints;	// IMP=0x0000000000082f96
- (void)_buildConstraints;	// IMP=0x0000000000082666
- (void)dealloc;	// IMP=0x0000000000082599
- (long long)_focusItemDeferralMode;	// IMP=0x0000000000082551
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008227f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000082254

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

