//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, NSString, UIInterfaceAction, UILabel;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionLabelsPropertyView : UIView
{
    NSLayoutConstraint *_leadingLabelLeadingConstraint;	// 8 = 0x8
    NSLayoutConstraint *_leadingLabelVerticalPositionConstraint;	// 16 = 0x10
    NSLayoutConstraint *_trailingLabelTrailingConstraint;	// 24 = 0x18
    NSLayoutConstraint *_trailingLabelVerticalPositionConstraint;	// 32 = 0x20
    NSLayoutConstraint *_interLabelSpacingConstraint;	// 40 = 0x28
    UILabel *_classificationLabel;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    NSArray *_labelConstraints;	// 64 = 0x40
    UIInterfaceAction *_action;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000040e83
@property(readonly, nonatomic) UIInterfaceAction *action; // @synthesize action=_action;
- (id)_newLabel;	// IMP=0x0000000000040d99
- (id)_classificationLabelIfVisible;	// IMP=0x0000000000040d5d
- (void)_reloadContentClassificationLabelDisplayProperties;	// IMP=0x0000000000040c42
- (void)_reloadContentForTitleDisplayProperties;	// IMP=0x0000000000040b2e
- (id)_interfaceActionViewState;	// IMP=0x0000000000040ac8
- (void)_applyVisualStyleToLabels;	// IMP=0x0000000000040a06
- (void)_applyVisualStyle;	// IMP=0x00000000000409c2
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x00000000000409b0
- (id)viewForLastBaselineLayout;	// IMP=0x000000000004099b
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000040986
- (void)tintColorDidChange;	// IMP=0x0000000000040974
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000040962
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;	// IMP=0x0000000000040950
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;	// IMP=0x00000000000402bd
- (id)_visualStyle;	// IMP=0x00000000000402a0
- (void)dealloc;	// IMP=0x0000000000040254
- (id)initWithAction:(id)arg1;	// IMP=0x0000000000040110

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

