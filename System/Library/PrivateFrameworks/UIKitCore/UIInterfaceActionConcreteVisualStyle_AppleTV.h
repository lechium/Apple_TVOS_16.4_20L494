//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle_AppleTV
{
}

- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;	// IMP=0x00000000000271d4
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x00000000000271ce
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x00000000000271c8
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;	// IMP=0x000000000002712b
- (id)actionPropertiesAffectingActionRepresentationViewStyling;	// IMP=0x00000000000270c4
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x000000000002705e
- (id)actionPropertiesAffectingLabelStyling;	// IMP=0x0000000000026ff7
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x0000000000026fe6
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x0000000000026ed2
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;	// IMP=0x0000000000026e3d
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x0000000000026d34
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x0000000000026d11
- (_Bool)selectByPressGestureRequired;	// IMP=0x0000000000026d09
- (struct CGSize)minimumActionContentSize;	// IMP=0x0000000000026cf8
- (struct UIEdgeInsets)actionSequenceEdgeInsets;	// IMP=0x0000000000026caa
- (double)actionSectionSpacing;	// IMP=0x0000000000026c9c
- (double)verticalImageContentSpacing;	// IMP=0x0000000000026c8e
- (double)horizontalImageContentSpacing;	// IMP=0x0000000000026c80
- (struct UIEdgeInsets)contentMargin;	// IMP=0x0000000000026c36
- (double)contentCornerRadius;	// IMP=0x0000000000026c2d
- (id)defaultScreen;	// IMP=0x0000000000026c14
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;	// IMP=0x0000000000026bc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

