//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_TV : NSObject
{
}

+ (id)sharedConstants;	// IMP=0x0010000000e47523
- (_Bool)shouldAnimatePropertyInContentViewWithKey:(id)arg1;	// IMP=0x0000000000e4a269
- (_Bool)shouldUseRoundedGroupsForTableViewStyle:(long long)arg1 backgroundInsets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000e4a261
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5;	// IMP=0x0000000000e4a259
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5 inheritedTintColor:(id)arg6;	// IMP=0x0000000000e4a103
- (id)defaultImageTintColorForState:(id)arg1;	// IMP=0x0000000000e4a0c2
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;	// IMP=0x0000000000e4a017
- (double)defaultMaskGradientHeightForTableView:(id)arg1;	// IMP=0x0000000000e4a009
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;	// IMP=0x0000000000e49ffb
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;	// IMP=0x0000000000e49fed
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e49fdf
- (_Bool)reorderingCellWantsShadows;	// IMP=0x0000000000e49fd7
- (double)defaultAlphaForReorderingCell;	// IMP=0x0000000000e49fc9
- (id)defaultFocusedReorderControlImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e49fb2
- (id)defaultReorderControlImageForTraitCollection:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000e49edb
- (id)_defaultReorderControlImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000e49dd5
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000e49dbf
- (double)defaultEditAndUpdateAnimationDuration;	// IMP=0x0000000000e49db1
- (id)defaultFocusedMultiSelectSelectedImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e49d9a
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 checkmarkColor:(id)arg3 backgroundColor:(id)arg4;	// IMP=0x0000000000e49d66
- (id)_defaultMultiSelectSelectedImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000e49c26
- (id)defaultFocusedMultiSelectNotSelectedImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e49c0f
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 accessoryBaseColor:(id)arg3;	// IMP=0x0000000000e49ae9
- (id)_defaultMultiSelectNotSelectedImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000e499cc
- (id)defaultFocusedInsertImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e499b5
- (id)defaultInsertImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000000e49884
- (id)defaultInsertImageForCell:(id)arg1;	// IMP=0x0000000000e49815
- (id)_defaultInsertImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000e496f8
- (id)defaultFocusedDeleteImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e496e1
- (id)defaultDeleteImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000000e495b0
- (id)defaultDeleteImageForCell:(id)arg1;	// IMP=0x0000000000e49541
- (id)defaultDeleteImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000e49360
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e49342
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e49334
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e4932b
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e49315
- (id)defaultFocusedCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e492fe
- (id)defaultCheckmarkImageForCell:(id)arg1;	// IMP=0x0000000000e4928a
- (id)_defaultCheckmarkImageForCell:(id)arg1 forUserInterfaceStyle:(long long)arg2;	// IMP=0x0000000000e4908d
- (id)defaultFocusedDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e49007
- (id)defaultDisclosureImageForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000e48ee4
- (id)_defaultDisclosureImageForCell:(id)arg1;	// IMP=0x0000000000e48e17
- (id)_symbolImageNamed:(id)arg1 font:(id)arg2 cell:(id)arg3;	// IMP=0x0000000000e48d83
- (id)_kitImageNamed:(id)arg1 withTint:(id)arg2 flippedForRightToLeftLayoutDirection:(_Bool)arg3;	// IMP=0x0000000000e48c3b
- (struct _UITableConstantsBackgroundProperties)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 cellConfigurationState:(id)arg2 traitCollection:(id)arg3 floating:(_Bool)arg4;	// IMP=0x0000000000e48c10
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)arg1;	// IMP=0x0000000000e48c08
- (_Bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;	// IMP=0x0000000000e48c00
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000000e48bee
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000000e48bb5
- (id)fallbackHeaderTextColorForTableViewStyle:(long long)arg1 userInterfaceStyle:(long long)arg2;	// IMP=0x0000000000e48b9c
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e48b79
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e48b56
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000000e48b24
- (id)defaultDetailTextFontForCellStyle:(long long)arg1;	// IMP=0x0000000000e48adb
- (id)defaultFocusedDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e48a1e
- (id)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 state:(id)arg3;	// IMP=0x0000000000e489a0
- (id)defaultDetailTextColorForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000e4895a
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000000e4892d
- (id)defaultTextLabelFontForCellStyle:(long long)arg1;	// IMP=0x0000000000e488e8
- (id)defaultFocusedTextColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e48805
- (id)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 state:(id)arg4;	// IMP=0x0000000000e48787
- (id)defaultTextColorForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000e48741
- (double)defaultLabelMinimumScaleFactorForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e48738
- (_Bool)defaultLabelAllowsTighteningForTruncationForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e48730
- (long long)defaultLabelNumberOfLinesForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e48728
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;	// IMP=0x0000000000e4867a
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000000e4866c
- (_Bool)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(_Bool)arg2;	// IMP=0x0000000000e48664
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000e48656
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000e485ba
- (double)defaultMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000e48515
- (struct UIEdgeInsets)_defaultLayoutMargins;	// IMP=0x0000000000e484ec
- (_Bool)shouldUseDefaultTableLayoutMarginsAsContentInsets;	// IMP=0x0000000000e484e4
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;	// IMP=0x0000000000e484d1
- (struct UIEdgeInsets)defaultLayoutMarginsInsideSectionForSize:(struct CGSize)arg1 tableStyle:(long long)arg2;	// IMP=0x0000000000e484ad
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;	// IMP=0x0000000000e4843d
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;	// IMP=0x0000000000e4841e
- (double)defaultPaddingBetweenHeaderAndRows;	// IMP=0x0000000000e48415
- (double)defaultPaddingBetweenRows;	// IMP=0x0000000000e48407
- (double)defaultPaddingBetweenRowsForTableStyle:(long long)arg1;	// IMP=0x0000000000e483f5
- (double)defaultSidebarPaddingAboveSectionHeadersWithFallbackTableStyle:(long long)arg1;	// IMP=0x0000000000e483e3
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)arg1;	// IMP=0x0000000000e483da
- (double)defaultIndentationWidthForSidebarStyle:(_Bool)arg1;	// IMP=0x0000000000e483cc
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 trailingAccessoryGroup:(_Bool)arg4;	// IMP=0x0000000000e481e3
- (double)defaultCellCornerRadius;	// IMP=0x0000000000e481d5
- (double)defaultDisclosureLayoutWidthForView:(id)arg1;	// IMP=0x0000000000e481cc
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg1;	// IMP=0x0000000000e481ba
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e481a5
- (double)_symbolImageLayoutSizeForTraitCollection:(id)arg1;	// IMP=0x0000000000e4811e
- (double)defaultInterAccessoryPaddingForCell:(id)arg1 trailingAccessoryGroup:(_Bool)arg2;	// IMP=0x0000000000e4810c
- (double)defaultCellContentTrailingPadding;	// IMP=0x0000000000e480fa
- (double)defaultCellContentLeadingPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000000e480e8
- (double)defaultContentAccessoryPadding;	// IMP=0x0000000000e480da
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e480d1
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e480c8
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e480c0
- (struct UIEdgeInsets)defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)arg1 isHeader:(_Bool)arg2 isFirstSection:(_Bool)arg3;	// IMP=0x0000000000e48056
- (struct UIEdgeInsets)defaultCellLayoutMarginsForStyle:(long long)arg1 textLabelFont:(id)arg2 rawLayoutMargins:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000e48006
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e47dc9
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e47db4
- (double)_defaultNeighborPadding;	// IMP=0x0000000000e47da6
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;	// IMP=0x0000000000e47d98
- (double)defaultImageToTextPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000000e47d86
- (double)defaultSectionFooterHeightForTableView:(id)arg1;	// IMP=0x0000000000e47ccc
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000000e47c12
- (double)defaultPaddingAboveFirstSectionWithoutHeaderTableStyle:(long long)arg1;	// IMP=0x0000000000e47c04
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000000e47b0a
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000000e47a68
- (_Bool)defaultRowHeightDependsOnCellStyle;	// IMP=0x0000000000e47a60
- (double)defaultRowHeightForTableView:(id)arg1;	// IMP=0x0000000000e47a4c
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x0000000000e47a31
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e47a29
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e47a21
- (struct _UITableConstantsBackgroundProperties)defaultSidebarHeaderBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e4792b
- (struct _UITableConstantsBackgroundProperties)defaultSidebarCellBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(_Bool)arg3;	// IMP=0x0000000000e47835
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2;	// IMP=0x0000000000e475d4
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e4759a
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e47592
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e47579
- (_Bool)supportsUserInterfaceStyles;	// IMP=0x0000000000e47571
- (id)variantForActive:(_Bool)arg1;	// IMP=0x0000000000e47568
- (id)sidebarVariant;	// IMP=0x0000000000e4755f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
