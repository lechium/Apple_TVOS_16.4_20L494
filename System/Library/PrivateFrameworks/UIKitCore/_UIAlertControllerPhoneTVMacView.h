//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIAlertControllerView.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIAlertAction, UIAlertController, UIAlertControllerVisualStyle, UILabel, UIView, UIVisualEffectView, _UIAlertControllerActionViewMetrics, _UIAlertControllerInterfaceActionGroupView, _UIFlexibleConstantConstraintSet, _UIKeyboardLayoutAlignmentView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerPhoneTVMacView : _UIAlertControllerView
{
    UIAlertController *_alertController;	// 144 = 0x90
    UIAlertControllerVisualStyle *_visualStyle;	// 152 = 0x98
    struct {
        unsigned int hasAppliedTitleAndMessageLabelVibrantContainerViewConstraints:1;
        unsigned int hasAppliedTitleConstraints:1;
        unsigned int hasAppliedMessageConstraints:1;
        unsigned int hasAppliedDetailConstraints:1;
        unsigned int presentedAsPopover:1;
        unsigned int hasDimmingView:1;
        unsigned int cancelActionIsDiscrete:1;
        unsigned int shouldHaveBackdropView:1;
        unsigned int alignsToKeyboard:1;
        unsigned int hasCachedLargestActionDimension:1;
        unsigned int needsActionsChangedHandling:1;
        unsigned int needsUpdateForPropertyChange:1;
    } _alertControllerViewFlags;	// 160 = 0xa0
    UIView *_contentView;	// 168 = 0xa8
    UIView *_contentViewTopItemsView;	// 176 = 0xb0
    _UIAlertControllerInterfaceActionGroupView *_mainInterfaceActionsGroupView;	// 184 = 0xb8
    _UIAlertControllerInterfaceActionGroupView *_discreteCancelActionGroupView;	// 192 = 0xc0
    UIVisualEffectView *_titleAndMessageLabelVibrantContainerView;	// 200 = 0xc8
    UILabel *_titleLabel;	// 208 = 0xd0
    UILabel *_messageLabel;	// 216 = 0xd8
    UILabel *_detailMessageLabel;	// 224 = 0xe0
    UIView *_separatedHeaderContentViewControllerContainerView;	// 232 = 0xe8
    UIView *_headerContentViewControllerContainerView;	// 240 = 0xf0
    UIView *_contentViewControllerContainerView;	// 248 = 0xf8
    UIView *_textFieldViewControllerContainerView;	// 256 = 0x100
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;	// 264 = 0x108
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;	// 272 = 0x110
    UIView *_dimmingView;	// 280 = 0x118
    NSMutableArray *_actionViews;	// 288 = 0x120
    struct CGPoint _actionSelectionInitialLocation;	// 296 = 0x128
    long long _layoutRequiresPositionUpdateCount;	// 312 = 0x138
    NSArray *_dimmingViewConstraints;	// 320 = 0x140
    NSArray *_dimmingViewForegroundViewTopConstraints;	// 328 = 0x148
    NSArray *_dimmingViewForegroundViewBottomConstraints;	// 336 = 0x150
    NSArray *_dimmingViewConstraintsForAlertStyle;	// 344 = 0x158
    NSArray *_dimmingViewConstraintsForActionSheetStyle;	// 352 = 0x160
    NSArray *_noDimmingViewConstraints;	// 360 = 0x168
    NSLayoutConstraint *_headerContentViewControllerPreferredWidthConstraint;	// 368 = 0x170
    NSLayoutConstraint *_headerContentViewControllerPreferredHeightConstraint;	// 376 = 0x178
    struct CGSize _largestActionDimension;	// 384 = 0x180
    UIAlertAction *_effectivePreferredAction;	// 400 = 0x190
    long long _batchActionChangesInProgressCount;	// 408 = 0x198
    _Bool _actionsReversed;	// 416 = 0x1a0
    _Bool _actionScrubbingEnabled;	// 417 = 0x1a1
    _Bool _presentationContextPrefersCancelActionShown;	// 418 = 0x1a2
    _UIAlertControllerActionViewMetrics *_actionViewMetrics;	// 424 = 0x1a8
    double _offset;	// 432 = 0x1b0
    NSLayoutConstraint *_foregroundViewWidthConstraint;	// 440 = 0x1b8
    NSLayoutConstraint *_contentViewTopConstraint;	// 448 = 0x1c0
    NSLayoutConstraint *_contentViewBottomConstraint;	// 456 = 0x1c8
    NSLayoutConstraint *_contentViewMaxHeightConstraint;	// 464 = 0x1d0
    NSLayoutConstraint *_headerContentViewControllerContainerViewTopAlignmentConstraint;	// 472 = 0x1d8
    NSArray *_titleAndMessageLabelVibrantContainerViewVerticalConstraints;	// 480 = 0x1e0
    _UIFlexibleConstantConstraintSet *_titleLabelTopAlignmentConstraints;	// 488 = 0x1e8
    _UIFlexibleConstantConstraintSet *_messageLabelTopAlignmentConstraints;	// 496 = 0x1f0
    NSLayoutConstraint *_detailMessageLabelTopAlignmentConstraint;	// 504 = 0x1f8
    NSLayoutConstraint *_contentViewControllerViewLeftConstraint;	// 512 = 0x200
    NSLayoutConstraint *_contentViewControllerViewRightConstraint;	// 520 = 0x208
    NSLayoutConstraint *_contentViewControllerViewTopConstraint;	// 528 = 0x210
    NSLayoutConstraint *_contentViewControllerViewBottomConstraint;	// 536 = 0x218
    NSLayoutConstraint *_textFieldViewControllerViewLeftConstraint;	// 544 = 0x220
    NSLayoutConstraint *_textFieldViewControllerViewRightConstraint;	// 552 = 0x228
    NSLayoutConstraint *_textFieldViewControllerViewTopConstraint;	// 560 = 0x230
    NSLayoutConstraint *_textFieldViewControllerViewBottomConstraint;	// 568 = 0x238
    NSLayoutConstraint *_contentScrollViewBottomConstraint;	// 576 = 0x240
    NSLayoutConstraint *_contentScrollViewMaximumWidthConstraint;	// 584 = 0x248
    NSLayoutConstraint *_contentViewControllerContainerViewTopAlignmentConstraint;	// 592 = 0x250
    NSLayoutConstraint *_contentViewControllerContainerViewWidthConstraint;	// 600 = 0x258
    NSLayoutConstraint *_contentViewControllerContainerViewHeightConstraint;	// 608 = 0x260
    NSLayoutConstraint *_separatedHeaderContentViewControllerContainerViewBottomConstraint;	// 616 = 0x268
    NSLayoutConstraint *_separatedHeaderContentViewControllerContainerViewWidthConstraint;	// 624 = 0x270
    _UIFlexibleConstantConstraintSet *_textFieldViewControllerContainerViewTopAlignmentConstraints;	// 632 = 0x278
    NSLayoutConstraint *_textFieldViewControllerContainerViewWidthConstraint;	// 640 = 0x280
    NSLayoutConstraint *_textFieldViewControllerContainerViewHeightConstraint;	// 648 = 0x288
    NSLayoutConstraint *_centerXConstraint;	// 656 = 0x290
    NSLayoutConstraint *_centerYConstraint;	// 664 = 0x298
    NSLayoutConstraint *_widthConstraint;	// 672 = 0x2a0
    NSLayoutConstraint *_heightConstraint;	// 680 = 0x2a8
    NSLayoutConstraint *_mainActionButtonSequenceViewWidthConstraint;	// 688 = 0x2b0
    NSLayoutConstraint *_mainActionButtonSequenceViewHeightConstraint;	// 696 = 0x2b8
    NSLayoutConstraint *_mainActionButtonSequenceViewHorizontalAlignmentConstraint;	// 704 = 0x2c0
    NSLayoutConstraint *_discreteActionGroupViewHorizontalLayoutTrailingConstraint;	// 712 = 0x2c8
    NSLayoutConstraint *_actionGroupEqualsContentViewWidthConstraint;	// 720 = 0x2d0
    NSLayoutConstraint *_discreteCancelActionViewTopConstraint;	// 728 = 0x2d8
    NSLayoutConstraint *_discreteCancelActionViewLeadingConstraint;	// 736 = 0x2e0
    NSLayoutConstraint *_discreteCancelActionViewWidthConstraint;	// 744 = 0x2e8
    NSLayoutConstraint *_discreteCancelActionViewHeightConstraint;	// 752 = 0x2f0
    struct CGSize _layoutSize;	// 760 = 0x2f8
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00100000005d5f9b
+ (void)initialize;	// IMP=0x00100000005c837b
- (void).cxx_destruct;	// IMP=0x00000000005d6af0
@property(retain) NSLayoutConstraint *discreteCancelActionViewHeightConstraint; // @synthesize discreteCancelActionViewHeightConstraint=_discreteCancelActionViewHeightConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewWidthConstraint; // @synthesize discreteCancelActionViewWidthConstraint=_discreteCancelActionViewWidthConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewLeadingConstraint; // @synthesize discreteCancelActionViewLeadingConstraint=_discreteCancelActionViewLeadingConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewTopConstraint; // @synthesize discreteCancelActionViewTopConstraint=_discreteCancelActionViewTopConstraint;
@property(retain) NSLayoutConstraint *actionGroupEqualsContentViewWidthConstraint; // @synthesize actionGroupEqualsContentViewWidthConstraint=_actionGroupEqualsContentViewWidthConstraint;
@property(retain) NSLayoutConstraint *discreteActionGroupViewHorizontalLayoutTrailingConstraint; // @synthesize discreteActionGroupViewHorizontalLayoutTrailingConstraint=_discreteActionGroupViewHorizontalLayoutTrailingConstraint;
@property(retain) NSLayoutConstraint *mainActionButtonSequenceViewHorizontalAlignmentConstraint; // @synthesize mainActionButtonSequenceViewHorizontalAlignmentConstraint=_mainActionButtonSequenceViewHorizontalAlignmentConstraint;
@property(retain) NSLayoutConstraint *mainActionButtonSequenceViewHeightConstraint; // @synthesize mainActionButtonSequenceViewHeightConstraint=_mainActionButtonSequenceViewHeightConstraint;
@property(retain) NSLayoutConstraint *mainActionButtonSequenceViewWidthConstraint; // @synthesize mainActionButtonSequenceViewWidthConstraint=_mainActionButtonSequenceViewWidthConstraint;
@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain) NSLayoutConstraint *centerYConstraint; // @synthesize centerYConstraint=_centerYConstraint;
@property(retain) NSLayoutConstraint *centerXConstraint; // @synthesize centerXConstraint=_centerXConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerContainerViewHeightConstraint; // @synthesize textFieldViewControllerContainerViewHeightConstraint=_textFieldViewControllerContainerViewHeightConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerContainerViewWidthConstraint; // @synthesize textFieldViewControllerContainerViewWidthConstraint=_textFieldViewControllerContainerViewWidthConstraint;
@property(retain) _UIFlexibleConstantConstraintSet *textFieldViewControllerContainerViewTopAlignmentConstraints; // @synthesize textFieldViewControllerContainerViewTopAlignmentConstraints=_textFieldViewControllerContainerViewTopAlignmentConstraints;
@property(retain) NSLayoutConstraint *separatedHeaderContentViewControllerContainerViewWidthConstraint; // @synthesize separatedHeaderContentViewControllerContainerViewWidthConstraint=_separatedHeaderContentViewControllerContainerViewWidthConstraint;
@property(retain) NSLayoutConstraint *separatedHeaderContentViewControllerContainerViewBottomConstraint; // @synthesize separatedHeaderContentViewControllerContainerViewBottomConstraint=_separatedHeaderContentViewControllerContainerViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewHeightConstraint; // @synthesize contentViewControllerContainerViewHeightConstraint=_contentViewControllerContainerViewHeightConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewWidthConstraint; // @synthesize contentViewControllerContainerViewWidthConstraint=_contentViewControllerContainerViewWidthConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewTopAlignmentConstraint; // @synthesize contentViewControllerContainerViewTopAlignmentConstraint=_contentViewControllerContainerViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentScrollViewMaximumWidthConstraint; // @synthesize contentScrollViewMaximumWidthConstraint=_contentScrollViewMaximumWidthConstraint;
@property(retain) NSLayoutConstraint *contentScrollViewBottomConstraint; // @synthesize contentScrollViewBottomConstraint=_contentScrollViewBottomConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewBottomConstraint; // @synthesize textFieldViewControllerViewBottomConstraint=_textFieldViewControllerViewBottomConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewTopConstraint; // @synthesize textFieldViewControllerViewTopConstraint=_textFieldViewControllerViewTopConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewRightConstraint; // @synthesize textFieldViewControllerViewRightConstraint=_textFieldViewControllerViewRightConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewLeftConstraint; // @synthesize textFieldViewControllerViewLeftConstraint=_textFieldViewControllerViewLeftConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewBottomConstraint; // @synthesize contentViewControllerViewBottomConstraint=_contentViewControllerViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewTopConstraint; // @synthesize contentViewControllerViewTopConstraint=_contentViewControllerViewTopConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewRightConstraint; // @synthesize contentViewControllerViewRightConstraint=_contentViewControllerViewRightConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewLeftConstraint; // @synthesize contentViewControllerViewLeftConstraint=_contentViewControllerViewLeftConstraint;
@property(retain) NSLayoutConstraint *detailMessageLabelTopAlignmentConstraint; // @synthesize detailMessageLabelTopAlignmentConstraint=_detailMessageLabelTopAlignmentConstraint;
@property(retain) _UIFlexibleConstantConstraintSet *messageLabelTopAlignmentConstraints; // @synthesize messageLabelTopAlignmentConstraints=_messageLabelTopAlignmentConstraints;
@property(retain) _UIFlexibleConstantConstraintSet *titleLabelTopAlignmentConstraints; // @synthesize titleLabelTopAlignmentConstraints=_titleLabelTopAlignmentConstraints;
@property(retain) NSArray *titleAndMessageLabelVibrantContainerViewVerticalConstraints; // @synthesize titleAndMessageLabelVibrantContainerViewVerticalConstraints=_titleAndMessageLabelVibrantContainerViewVerticalConstraints;
@property(retain) NSLayoutConstraint *headerContentViewControllerContainerViewTopAlignmentConstraint; // @synthesize headerContentViewControllerContainerViewTopAlignmentConstraint=_headerContentViewControllerContainerViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentViewMaxHeightConstraint; // @synthesize contentViewMaxHeightConstraint=_contentViewMaxHeightConstraint;
@property(retain) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewTopConstraint; // @synthesize contentViewTopConstraint=_contentViewTopConstraint;
@property(retain) NSLayoutConstraint *foregroundViewWidthConstraint; // @synthesize foregroundViewWidthConstraint=_foregroundViewWidthConstraint;
@property(nonatomic) _Bool presentationContextPrefersCancelActionShown; // @synthesize presentationContextPrefersCancelActionShown=_presentationContextPrefersCancelActionShown;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool actionScrubbingEnabled; // @synthesize actionScrubbingEnabled=_actionScrubbingEnabled;
@property(retain, nonatomic) _UIAlertControllerActionViewMetrics *actionViewMetrics; // @synthesize actionViewMetrics=_actionViewMetrics;
@property(nonatomic, getter=_layoutSize, setter=_setLayoutSize:) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
- (_Bool)_actionsReversed;	// IMP=0x00000000005d6441
- (_Bool)_forceLayoutEngineSolutionInRationalEdges;	// IMP=0x00000000005d642f
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000005d63d9
- (id)preferredFocusedView;	// IMP=0x00000000005d627f
- (long long)tintAdjustmentMode;	// IMP=0x00000000005d6274
- (void)setTintAdjustmentMode:(long long)arg1;	// IMP=0x00000000005d626e
- (void)configureForDismissAlongsideTransitionCoordinator:(id)arg1;	// IMP=0x00000000005d6211
- (void)configureForPresentAlongsideTransitionCoordinator:(id)arg1;	// IMP=0x00000000005d614b
- (void)_disableAllowGroupOpacitiyIfNecessaryAlongsideTransitionCoordinator:(id)arg1;	// IMP=0x00000000005d5fdd
- (double)effectAlpha;	// IMP=0x00000000005d5fc0
- (void)setEffectAlpha:(double)arg1;	// IMP=0x00000000005d5fa3
- (void)_prepareForWindowHostingSceneRemoval;	// IMP=0x00000000005d5f0c
- (void)_prepareForWindowDealloc;	// IMP=0x00000000005d5e7d
- (void)didMoveToWindow;	// IMP=0x00000000005d5e16
- (void)_willMoveToWindow:(id)arg1;	// IMP=0x00000000005d5d38
- (void)didMoveToSuperview;	// IMP=0x00000000005d5cdb
- (void)_reevaluateSuperviewSizingConstraints;	// IMP=0x00000000005d58a5
- (void)_ensureActionViewRepresentationsHaveMetrics;	// IMP=0x00000000005d5726
- (void)_recomputeActionMetrics;	// IMP=0x00000000005d52ad
- (void)_sizeOfTextFieldViewControllerChanged;	// IMP=0x00000000005d524c
- (void)_applyISEngineLayoutValuesToBoundsOnly:(_Bool)arg1;	// IMP=0x00000000005d5209
- (void)_layoutAndPositionInParentIfNeeded;	// IMP=0x00000000005d51de
- (void)_sizeOfContentViewControllerChanged;	// IMP=0x00000000005d4c99
- (void)_sizeOfHeaderContentViewControllerChanged;	// IMP=0x00000000005d49ce
- (void)_removeSeparatedHeaderContentViewControllerFromHierarchy;	// IMP=0x00000000005d493b
- (void)_removeContentViewControllerViewFromHierarchy;	// IMP=0x00000000005d488a
- (void)_removeHeaderContentViewControllerViewFromHierarchy;	// IMP=0x00000000005d4820
- (void)_addSeparatedHeaderContentViewControllerToViewHierarchyIfNecessary;	// IMP=0x00000000005d4507
- (void)_addContentViewControllerToViewHierarchyIfNecessary;	// IMP=0x00000000005d3e76
- (void)_addHeaderContentViewControllerToViewHierarchyIfNecessary;	// IMP=0x00000000005d3b41
- (_Bool)alignsToKeyboard;	// IMP=0x00000000005d3b2e
- (void)setAlignsToKeyboard:(_Bool)arg1;	// IMP=0x00000000005d3a5b
- (_Bool)shouldHaveBackdropView;	// IMP=0x00000000005d3a48
- (void)setShouldHaveBackdropView:(_Bool)arg1;	// IMP=0x00000000005d3a00
@property _Bool cancelActionIsDiscrete;
- (void)_updateCancelActionBeingDiscrete;	// IMP=0x00000000005d37c6
- (id)__cancelActionView;	// IMP=0x00000000005d370f
- (_Bool)showsCancelAction;	// IMP=0x00000000005d3654
- (_Bool)hasDimmingView;	// IMP=0x00000000005d35e3
- (void)setHasDimmingView:(_Bool)arg1;	// IMP=0x00000000005d341a
- (_Bool)presentedAsPopover;	// IMP=0x00000000005d3405
- (void)setPresentedAsPopover:(_Bool)arg1;	// IMP=0x00000000005d334d
- (id)textFields;	// IMP=0x00000000005d32fd
- (double)_spaceRequiredForActionSectionsSpacing;	// IMP=0x00000000005d3222
- (id)_indexesOfActionSectionSeparators;	// IMP=0x00000000005d31d2
- (id)_preferredActionView;	// IMP=0x00000000005d311a
- (id)_focusedAction;	// IMP=0x00000000005d308d
- (id)cancelAction;	// IMP=0x00000000005d303d
- (id)actions;	// IMP=0x00000000005d2fe9
- (id)separatedHeaderContentViewController;	// IMP=0x00000000005d2f99
- (id)contentViewController;	// IMP=0x00000000005d2f49
- (id)headerContentViewController;	// IMP=0x00000000005d2ef9
- (id)_textFieldViewController;	// IMP=0x00000000005d2ea9
- (_Bool)_hasTextFields;	// IMP=0x00000000005d2e61
- (_Bool)_hasDetailMessage;	// IMP=0x00000000005d2e1d
- (_Bool)_hasAttributedMessage;	// IMP=0x00000000005d2dd9
- (_Bool)_hasMessage;	// IMP=0x00000000005d2d95
- (_Bool)_hasAttributedTitle;	// IMP=0x00000000005d2d51
- (_Bool)_hasTitle;	// IMP=0x00000000005d2d0d
- (_Bool)_titleAndMessageLabelUseVibrancy;	// IMP=0x00000000005d2cda
- (id)_vibrancyEffectForTitleAndMessageLabel;	// IMP=0x00000000005d2b5a
- (id)_attributedDetailMessage;	// IMP=0x00000000005d2b0a
- (id)_attributedMessage;	// IMP=0x00000000005d2aba
- (id)_attributedTitle;	// IMP=0x00000000005d2a6a
- (id)message;	// IMP=0x00000000005d2a1a
- (id)title;	// IMP=0x00000000005d29ca
- (void)_setAttributedDetailMessage:(id)arg1;	// IMP=0x00000000005d28d2
- (void)_setAttributedMessage:(id)arg1;	// IMP=0x00000000005d27da
- (void)_setAttributedTitle:(id)arg1;	// IMP=0x00000000005d26e2
- (void)_setMessage:(id)arg1;	// IMP=0x00000000005d25ea
- (void)_setTitle:(id)arg1;	// IMP=0x00000000005d24f2
- (void)_accessibilityColorsChanged;	// IMP=0x00000000005d24e0
- (void)_contentSizeChanged;	// IMP=0x00000000005d24b0
- (void)deselectAllActions;	// IMP=0x00000000005d241c
- (void)_setActionsReversed:(_Bool)arg1;	// IMP=0x00000000005d23f9
- (void)_updateTintColor;	// IMP=0x00000000005d2357
- (void)_updateConstraintConstants;	// IMP=0x00000000005d1d38
- (void)_updateActionViewHeight;	// IMP=0x00000000005d1c01
- (void)_updateActionViewVisualStyle:(id)arg1;	// IMP=0x00000000005d1b4a
- (void)_updateContentView;	// IMP=0x00000000005d17d4
- (void)_updateInsets;	// IMP=0x00000000005d157b
- (void)safeAreaInsetsDidChange;	// IMP=0x00000000005d1569
- (void)_updateLabelProperties;	// IMP=0x00000000005d140b
- (void)_updateLabelTextColor;	// IMP=0x00000000005d12ec
- (void)_updateLabelFontSizes;	// IMP=0x00000000005d12b1
- (void)_updateMessageLabelFontSize;	// IMP=0x00000000005d121a
- (void)_updateDetailLabelFontSize;	// IMP=0x00000000005d11a3
- (void)_updateTitleLabelFontSize;	// IMP=0x00000000005d110c
- (void)_updateMessageLabelContents;	// IMP=0x00000000005d1079
- (void)_updateDetailLabelContents;	// IMP=0x00000000005d1003
- (void)_updateTitleLabelContents;	// IMP=0x00000000005d0f70
- (void)_updateStyleForIdiomChange:(_Bool)arg1;	// IMP=0x00000000005d0e7f
- (id)_visualStyle;	// IMP=0x00000000005d0e6a
- (void)_setVisualStyle:(id)arg1;	// IMP=0x00000000005d0cc3
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005d0c3c
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005d0bb5
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005d0b2e
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005d0aa7
- (_Bool)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1;	// IMP=0x00000000005d09d7
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;	// IMP=0x00000000005d092d
- (struct CGSize)_minimumSizeForAllActions;	// IMP=0x00000000005d05a4
- (double)_labelHorizontalInsets;	// IMP=0x00000000005d0596
- (struct CGSize)_contentViewControllerSize;	// IMP=0x00000000005d053c
- (double)_marginBetweenInterfaceActionGroups;	// IMP=0x00000000005d04ec
- (_Bool)hasDiscreteHorizontalCancelAction;	// IMP=0x00000000005d049d
- (_Bool)_actionLayoutIsVertical;	// IMP=0x00000000005d0478
- (void)_updatePreferredAction;	// IMP=0x00000000005d0165
- (id)_effectivePreferredAction;	// IMP=0x00000000005d0150
- (long long)_numberOfActionsForMainActionButtonSequenceView;	// IMP=0x00000000005d00c4
- (id)_presentableAlertActions;	// IMP=0x00000000005d0003
- (id)_unlocalizedOrderedPresentableAlertActions;	// IMP=0x00000000005cfe6f
- (id)_unlocalizedOrderedPresentableAlertActionViewRepresentations;	// IMP=0x00000000005cfce8
- (_Bool)_shouldHaveCancelActionInMainActionButtonSequenceView;	// IMP=0x00000000005cfc84
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005cfaec
- (void)_scrollInitialActionToVisibleForPresentation;	// IMP=0x00000000005cf9df
- (void)_reloadInterfaceActionsGroupViewPreferredAction;	// IMP=0x00000000005cf8b0
- (void)_reloadInterfaceActionViewRepresentations;	// IMP=0x00000000005cf3cf
- (id)_interfaceActionForAlertAction:(id)arg1 inActionGroupView:(id)arg2;	// IMP=0x00000000005cf1d6
- (id)_interfaceActionRepresentationForAlertAlertAction:(id)arg1;	// IMP=0x00000000005cf1c1
- (void)_textFieldsChanged;	// IMP=0x00000000005ced25
- (void)_associateActionsWithActionViews;	// IMP=0x00000000005ce344
- (void)_actionsChanged;	// IMP=0x00000000005ce250
- (void)_performBatchActionChangesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000005ce159
- (void)_updateForPropertyChangeIfNeeded;	// IMP=0x00000000005ccf6a
- (void)_propertiesChanged;	// IMP=0x00000000005ccf4c
- (void)_updateMainScrollableHeaderViewHasRealContent;	// IMP=0x00000000005ccf11
- (void)_actionLayoutDirectionChanged;	// IMP=0x00000000005cc424
- (void)_configureActionGroupViewToAllowHorizontalLayout:(_Bool)arg1;	// IMP=0x00000000005cc3f0
- (void)_recomputeAlertControllerWidth;	// IMP=0x00000000005cc259
- (void)_updateConstraintSpacingForExternalOffset;	// IMP=0x00000000005cc0b7
- (_Bool)_hasDiscreteCancelAction;	// IMP=0x00000000005cc038
- (id)_discreteCancelActionView;	// IMP=0x00000000005cbff4
- (_Bool)_canLayOutActionsHorizontally;	// IMP=0x00000000005cbf51
- (struct CGSize)_mainActionButtonSequenceViewSizeForHorizontalLayout:(_Bool)arg1 itemSize:(struct CGSize)arg2;	// IMP=0x00000000005cbe50
- (struct CGSize)_itemSizeForHorizontalLayout:(_Bool)arg1;	// IMP=0x00000000005cbe3c
- (struct CGSize)_itemSizeForHorizontalLayout:(_Bool)arg1 visualStyleRequiresActionRepresentationToFitItemSize:(_Bool *)arg2;	// IMP=0x00000000005cbce6
- (double)_idealLayoutWidth;	// IMP=0x00000000005cbc84
- (double)_layoutWidthForHorizontalLayout:(_Bool)arg1;	// IMP=0x00000000005cbbf1
- (struct UIEdgeInsets)_contentInsets;	// IMP=0x00000000005cbb64
- (double)_availableWidthForHorizontalLayout:(_Bool)arg1;	// IMP=0x00000000005cba8b
- (_Bool)_horizontalLayoutCanUseFullWidth;	// IMP=0x00000000005cba02
- (double)_verticalLayoutWidth;	// IMP=0x00000000005cb95c
- (struct CGSize)_sizeForLayoutWidthDetermination;	// IMP=0x00000000005cb81c
- (_Bool)_buttonsAreTopMost;	// IMP=0x00000000005cb7ba
- (void)_applyTextFieldViewControllerContainerViewConstraints;	// IMP=0x00000000005cb5b2
- (void)_applyContentViewControllerContainerViewConstraints;	// IMP=0x00000000005cb3f8
- (void)_applyDetailMessageConstraints;	// IMP=0x00000000005cb261
- (void)_applyMessageConstraints;	// IMP=0x00000000005cb208
- (void)_applyTitleConstraints;	// IMP=0x00000000005cb1af
- (void)_applyTitleAndMessageLabelVibrantContainerViewConstraints;	// IMP=0x00000000005cb13b
- (void)_setupHorizontalConstraintsForLabelView:(id)arg1;	// IMP=0x00000000005cafd6
- (void)_applyHeaderContentViewControllerContainerViewConstraints;	// IMP=0x00000000005cae00
- (void)_applySeparatedContentViewControllerContainerViewContraints;	// IMP=0x00000000005caccf
- (void)_applyKeyboardAlignmentViewsConstraints;	// IMP=0x00000000005ca915
- (void)_prepareDimmingViewConstraints;	// IMP=0x00000000005c9fc7
- (void)_applyViewConstraints;	// IMP=0x00000000005c9c81
- (void)_prepareKeyboardLayoutAlignmentViews;	// IMP=0x00000000005c9bd4
- (void)_prepareDimmingView;	// IMP=0x00000000005c9ad5
- (void)_updateActionsGroupPresentationStyles;	// IMP=0x00000000005c9a45
- (id)_newStyledBackgroundView;	// IMP=0x00000000005c9a28
- (void)_prepareDiscreteCancelActionGroupView;	// IMP=0x00000000005c9682
- (void)_prepareMainInterfaceActionsGroupView;	// IMP=0x00000000005c9526
- (void)_prepareTextFieldViewControllerContainerView;	// IMP=0x00000000005c9497
- (void)_prepareContentViewControllerContainerView;	// IMP=0x00000000005c9408
- (void)_prepareDetailMessageLabel;	// IMP=0x00000000005c92f1
- (void)_prepareMesssageLabel;	// IMP=0x00000000005c90ff
- (void)_prepareTitleLabel;	// IMP=0x00000000005c8f0d
- (void)_prepareTitleAndMessageLabelVibrantContainer;	// IMP=0x00000000005c8df9
- (void)_prepareSeparateContentViewControllerContainerView;	// IMP=0x00000000005c8c53
- (void)_prepareHeaderContentViewControllerContainerView;	// IMP=0x00000000005c8b63
- (void)_prepareContentViewTopItemsView;	// IMP=0x00000000005c8b04
- (void)_prepareContentView;	// IMP=0x00000000005c8aa5
- (void)updateConstraints;	// IMP=0x00000000005c8a1b
- (void)_prepareViewsAndAddConstraints;	// IMP=0x00000000005c8903
- (id)alertController;	// IMP=0x00000000005c88ea
- (void)setAlertController:(id)arg1;	// IMP=0x00000000005c8869
- (void)updateObservations:(id)arg1;	// IMP=0x00000000005c8793
- (void)dealloc;	// IMP=0x00000000005c82f7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005c81f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

