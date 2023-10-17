//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_CarPlay : NSObject
{
}

+ (id)sharedConstants;	// IMP=0x0010000000e40130
- (_Bool)shouldAnimatePropertyInContentViewWithKey:(id)arg1;	// IMP=0x0000000000e41a1b
- (unsigned long long)contentClipCornersForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e41a10
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5;	// IMP=0x0000000000e41a08
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5 inheritedTintColor:(id)arg6;	// IMP=0x0000000000e418bb
- (id)defaultImageTintColorForState:(id)arg1;	// IMP=0x0000000000e418b3
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;	// IMP=0x0000000000e418ab
- (double)defaultMaskGradientHeightForTableView:(id)arg1;	// IMP=0x0000000000e418a2
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;	// IMP=0x0000000000e41899
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;	// IMP=0x0000000000e41890
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e41882
- (_Bool)reorderingCellWantsShadows;	// IMP=0x0000000000e4187a
- (double)defaultAlphaForReorderingCell;	// IMP=0x0000000000e4186c
- (id)defaultReorderControlImageForTraitCollection:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000e416ce
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000e41637
- (double)defaultEditAndUpdateAnimationDuration;	// IMP=0x0000000000e41629
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 checkmarkColor:(id)arg3 backgroundColor:(id)arg4;	// IMP=0x0000000000e41523
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 accessoryBaseColor:(id)arg3;	// IMP=0x0000000000e413e8
- (id)defaultInsertImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000000e413cf
- (id)defaultInsertImageForCell:(id)arg1;	// IMP=0x0000000000e413b9
- (id)defaultDeleteImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000000e413a0
- (id)defaultDeleteImageForCell:(id)arg1;	// IMP=0x0000000000e4138a
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e4136c
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e41363
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e41355
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e412fb
- (id)defaultFocusedCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e412e0
- (id)defaultCheckmarkImageForCell:(id)arg1;	// IMP=0x0000000000e412c5
- (id)defaultFocusedDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e4125c
- (id)defaultDisclosureImageForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000e41243
- (id)_imageWithName:(id)arg1 accessoryBaseColor:(id)arg2;	// IMP=0x0000000000e4115b
- (id)_defaultAccessoryColorFocused:(_Bool)arg1;	// IMP=0x0000000000e41122
- (id)defaultFocusedAccessoryColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e41109
- (id)defaultAccessoryColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e410f0
- (struct _UITableConstantsBackgroundProperties)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 cellConfigurationState:(id)arg2 traitCollection:(id)arg3 floating:(_Bool)arg4;	// IMP=0x0000000000e41089
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)arg1;	// IMP=0x0000000000e41081
- (_Bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;	// IMP=0x0000000000e41079
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000000e4103f
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000000e41005
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e40fd4
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e40f33
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000000e40f01
- (id)defaultDetailTextFontForCellStyle:(long long)arg1;	// IMP=0x0000000000e40ede
- (id)defaultFocusedDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e40ec5
- (id)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 state:(id)arg3;	// IMP=0x0000000000e40eac
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000000e40e7f
- (id)defaultTextLabelFontForCellStyle:(long long)arg1;	// IMP=0x0000000000e40e5c
- (id)defaultFocusedTextColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e40e43
- (id)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 state:(id)arg4;	// IMP=0x0000000000e40e2a
- (double)defaultLabelMinimumScaleFactorForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e40e21
- (_Bool)defaultLabelAllowsTighteningForTruncationForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e40e19
- (long long)defaultLabelNumberOfLinesForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e40e11
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;	// IMP=0x0000000000e40df5
- (double)defaultGroupedFooterHeightForTableView:(id)arg1;	// IMP=0x0000000000e40de7
- (double)defaultGroupedHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000000e40dd9
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000000e40da5
- (_Bool)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(_Bool)arg2;	// IMP=0x0000000000e40d96
- (double)_defaultPlainHeaderFooterHeightForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e40d3e
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000e40d30
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000e40d1e
- (double)defaultMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000e40c9f
- (struct UIEdgeInsets)_defaultLayoutMargins;	// IMP=0x0000000000e40c76
- (_Bool)shouldUseDefaultTableLayoutMarginsAsContentInsets;	// IMP=0x0000000000e40c6e
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;	// IMP=0x0000000000e40c5b
- (struct UIEdgeInsets)defaultLayoutMarginsInsideSectionForSize:(struct CGSize)arg1 tableStyle:(long long)arg2;	// IMP=0x0000000000e40c37
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;	// IMP=0x0000000000e40c18
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;	// IMP=0x0000000000e40bf9
- (double)defaultPaddingBetweenHeaderAndRows;	// IMP=0x0000000000e40bf0
- (double)defaultPaddingBetweenRows;	// IMP=0x0000000000e40be2
- (double)defaultPaddingBetweenRowsForTableStyle:(long long)arg1;	// IMP=0x0000000000e40bd0
- (double)defaultSidebarPaddingAboveSectionHeadersWithFallbackTableStyle:(long long)arg1;	// IMP=0x0000000000e40bbe
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)arg1;	// IMP=0x0000000000e40bb5
- (double)defaultIndentationWidthForSidebarStyle:(_Bool)arg1;	// IMP=0x0000000000e40ba7
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 trailingAccessoryGroup:(_Bool)arg4;	// IMP=0x0000000000e40a51
- (double)defaultCellCornerRadius;	// IMP=0x0000000000e40a48
- (double)defaultDisclosureLayoutWidthForView:(id)arg1;	// IMP=0x0000000000e40a3f
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg1;	// IMP=0x0000000000e40a36
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e40a2d
- (double)defaultInterAccessoryPaddingForCell:(id)arg1 trailingAccessoryGroup:(_Bool)arg2;	// IMP=0x0000000000e40a1b
- (double)defaultCellContentTrailingPadding;	// IMP=0x0000000000e40a09
- (double)defaultCellContentLeadingPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000000e409f7
- (double)defaultContentAccessoryPadding;	// IMP=0x0000000000e409e9
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e409db
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e409cd
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e409c5
- (struct UIEdgeInsets)headerFooterOffsetFromContentInsetForTableView:(id)arg1;	// IMP=0x0000000000e409ab
- (struct UIEdgeInsets)defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)arg1 isHeader:(_Bool)arg2 isFirstSection:(_Bool)arg3;	// IMP=0x0000000000e4097e
- (struct UIEdgeInsets)defaultCellLayoutMarginsForStyle:(long long)arg1 textLabelFont:(id)arg2 rawLayoutMargins:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000e40934
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e407e8
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e406f6
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;	// IMP=0x0000000000e406e8
- (double)defaultImageToTextPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000000e406da
- (double)defaultSectionFooterHeightForTableView:(id)arg1;	// IMP=0x0000000000e40620
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000000e4056a
- (double)defaultPaddingAboveFirstSectionWithoutHeaderTableStyle:(long long)arg1;	// IMP=0x0000000000e4055c
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000000e4054e
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000000e40540
- (_Bool)defaultRowHeightDependsOnCellStyle;	// IMP=0x0000000000e40538
- (double)defaultRowHeightForTableView:(id)arg1;	// IMP=0x0000000000e40524
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x0000000000e40516
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e4050e
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e40506
- (struct _UITableConstantsBackgroundProperties)defaultSidebarHeaderBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e40410
- (struct _UITableConstantsBackgroundProperties)defaultSidebarCellBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(_Bool)arg3;	// IMP=0x0000000000e4031a
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2;	// IMP=0x0000000000e4020a
- (id)defaultSidebarPlainMultiSelectSeparatorColor;	// IMP=0x0000000000e401e1
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e401c8
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e401c0
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e40186
- (_Bool)supportsUserInterfaceStyles;	// IMP=0x0000000000e4017e
- (id)variantForActive:(_Bool)arg1;	// IMP=0x0000000000e40175
- (id)sidebarVariant;	// IMP=0x0000000000e4016c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

