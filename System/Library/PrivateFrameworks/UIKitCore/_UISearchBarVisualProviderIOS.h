//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UIBarButtonItem, UIButton, UIColor, UIDictationSearchButton, UIImageView, UILabel, UINavigationButton, UINavigationItem, UISearchBarBackground, UISearchBarTextField, UISegmentedControl, UIView, UIVisualEffectView, _UIBackdropView, _UINavigationBarTitleViewOverlayRects, _UISearchBarAppearanceStorage, _UISearchBarLayout, _UISearchBarPromptContainerView, _UISearchBarScopeBarBackground, _UISearchBarScopeContainerView, _UISearchBarSearchContainerView, _UISearchBarTransitionerBase;
@protocol _UINavigationBarTitleViewDataSource;

__attribute__((visibility("hidden")))
@interface _UISearchBarVisualProviderIOS
{
    UIDictationSearchButton *_dictationButton;	// 8 = 0x8
    _UISearchBarSearchContainerView *_searchFieldContainerView;	// 16 = 0x10
    _UISearchBarPromptContainerView *_promptContainerView;	// 24 = 0x18
    _UISearchBarScopeContainerView *_scopeBarContainerView;	// 32 = 0x20
    UIImageView *_floatingSearchIconView;	// 40 = 0x28
    struct UIEdgeInsets _effectiveContentInset;	// 48 = 0x30
    unsigned long long _overriddenContentInsetEdges;	// 80 = 0x50
    _UISearchBarAppearanceStorage *_appearanceStorage;	// 88 = 0x58
    UIBarButtonItem *_animatedAppearanceBarButtonItem;	// 96 = 0x60
    UINavigationItem *_searchNavigationItem;	// 104 = 0x68
    NSArray *_inlineWidthConstraints;	// 112 = 0x70
    struct {
        unsigned int barStyle:3;
        unsigned int searchBarStyle:3;
        unsigned int barTranslucence:3;
        unsigned int searchFieldLeftViewMode:2;
        unsigned int centerPlaceholder:1;
        unsigned int disabled:1;
        unsigned int reliesOnNavigationBarBackdrop:1;
        unsigned int hideBackground:1;
        unsigned int backgroundLayoutNeedsUpdate:1;
        unsigned int isFrozenForDismissalCrossfade:1;
        unsigned int usesEmbeddedAppearance:1;
        unsigned int showsCancelButton:1;
        unsigned int autoDisableCancelButton:1;
        unsigned int cancelButtonWantsLetterpress:1;
        unsigned int showsDeleteButton:1;
        unsigned int showsSearchResultsButton:1;
        unsigned int searchResultsButtonSelected:1;
        unsigned int showsBookmarkButton:1;
        unsigned int isPlacedInNavigationBar:1;
        unsigned int isPlacedInToolbar:1;
        unsigned int isHostedByNavigationBar:1;
        unsigned int isHostedInlineByNavigationBar:1;
        unsigned int isTextFieldManagedInNSToolbar:1;
        unsigned int providesRestingMeasurementValues:1;
        unsigned int showsScopeBar:1;
        unsigned int activeSearchDeferringScopeBar:1;
        unsigned int showDictationButton:1;
        unsigned int allowedToShowDictationButton:1;
        unsigned int dictationButtonSetupComplete:1;
        unsigned int hasSearchFieldContainerLayoutCustomizationDelegate:1;
        unsigned int floatingSearchIconViewHasBeenSetUp:1;
        unsigned int requiresSearchTextField:1;
    } _searchBarVisualProviderFlags;	// 120 = 0x78
    UISearchBarTextField *_searchField;	// 128 = 0x80
    UISearchBarBackground *_searchBarBackground;	// 136 = 0x88
    _UIBackdropView *_backdrop;	// 144 = 0x90
    UIVisualEffectView *_backdropVisualEffectView;	// 152 = 0x98
    UIView *_searchBarClippingView;	// 160 = 0xa0
    UIButton *_cancelButton;	// 168 = 0xa8
    UIBarButtonItem *_cancelBarButtonItem;	// 176 = 0xb0
    NSString *_cancelButtonText;	// 184 = 0xb8
    UINavigationButton *_leftButton;	// 192 = 0xc0
    UILabel *_promptLabel;	// 200 = 0xc8
    UIImageView *_separator;	// 208 = 0xd0
    UISegmentedControl *_scopeBar;	// 216 = 0xd8
    _UISearchBarScopeBarBackground *_scopeBarBackgroundView;	// 224 = 0xe0
    NSArray *_scopeTitles;	// 232 = 0xe8
    long long _selectedScope;	// 240 = 0xf0
    unsigned long long _backdropStyle;	// 248 = 0xf8
    UIColor *_barTintColor;	// 256 = 0x100
    long long _barPosition;	// 264 = 0x108
    unsigned long long _scopeBarPosition;	// 272 = 0x110
    double _tableViewIndexWidth;	// 280 = 0x118
    long long _navBarTitleViewLocation;	// 288 = 0x120
    _UINavigationBarTitleViewOverlayRects *_navBarTitleViewOverlayRects;	// 296 = 0x128
    id <_UINavigationBarTitleViewDataSource> _navBarTitleViewDataSource;	// 304 = 0x130
    long long _layoutState;	// 312 = 0x138
    UIBarButtonItem *_searchIconBarButtonItem;	// 320 = 0x140
    double _leftInsetForInlineSearch;	// 328 = 0x148
    double _rightInsetForInlineSearch;	// 336 = 0x150
    long long _previousLayoutState;	// 344 = 0x158
    double _backgroundExtension;	// 352 = 0x160
    _UISearchBarLayout *_currentLayout;	// 360 = 0x168
    _UISearchBarLayout *_prospectiveLayout;	// 368 = 0x170
    _UISearchBarTransitionerBase *_transitioner;	// 376 = 0x178
    struct UIEdgeInsets _contentInsetPrivateMinOrOverride;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x00000000001dad9f
@property(retain, nonatomic) _UISearchBarTransitionerBase *transitioner; // @synthesize transitioner=_transitioner;
@property(retain, nonatomic) _UISearchBarLayout *prospectiveLayout; // @synthesize prospectiveLayout=_prospectiveLayout;
@property(retain, nonatomic) _UISearchBarLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) double backgroundExtension; // @synthesize backgroundExtension=_backgroundExtension;
@property(readonly, nonatomic) long long previousLayoutState; // @synthesize previousLayoutState=_previousLayoutState;
- (double)rightInsetForInlineSearch;	// IMP=0x00000000001dacfb
- (double)leftInsetForInlineSearch;	// IMP=0x00000000001dace9
- (long long)layoutState;	// IMP=0x00000000001dacd8
- (id)animatedAppearanceBarButtonItem;	// IMP=0x00000000001dacc7
- (void)setNavBarTitleViewDataSource:(id)arg1;	// IMP=0x00000000001dacb3
- (id)navBarTitleViewDataSource;	// IMP=0x00000000001dac9a
- (void)setNavBarTitleViewOverlayRects:(id)arg1;	// IMP=0x00000000001dac86
- (id)navBarTitleViewOverlayRects;	// IMP=0x00000000001dac75
- (void)setNavBarTitleViewLocation:(long long)arg1;	// IMP=0x00000000001dac64
- (long long)navBarTitleViewLocation;	// IMP=0x00000000001dac53
- (void)setTableViewIndexWidth:(double)arg1;	// IMP=0x00000000001dac41
- (double)tableViewIndexWidth;	// IMP=0x00000000001dac2f
- (struct UIEdgeInsets)minimumContentInset;	// IMP=0x00000000001dac0f
- (struct UIEdgeInsets)effectiveContentInset;	// IMP=0x00000000001dabef
- (void)setScopeBarPosition:(unsigned long long)arg1;	// IMP=0x00000000001dabde
- (unsigned long long)scopeBarPosition;	// IMP=0x00000000001dabcd
- (void)setBarTintColor:(id)arg1;	// IMP=0x00000000001dabb9
- (id)barTintColor;	// IMP=0x00000000001daba8
- (unsigned long long)backdropStyle;	// IMP=0x00000000001dab97
- (void)setSelectedScope:(long long)arg1;	// IMP=0x00000000001dab86
- (long long)selectedScope;	// IMP=0x00000000001dab75
- (id)scopeTitles;	// IMP=0x00000000001dab64
- (void)setScopeBarBackgroundView:(id)arg1;	// IMP=0x00000000001dab50
- (id)scopeBarBackgroundView;	// IMP=0x00000000001dab3f
- (id)scopeBarContainerView;	// IMP=0x00000000001dab2e
- (void)setScopeBar:(id)arg1;	// IMP=0x00000000001dab1a
- (id)scopeBar;	// IMP=0x00000000001dab09
- (void)setSeparator:(id)arg1;	// IMP=0x00000000001daaf5
- (id)separator;	// IMP=0x00000000001daae4
- (void)setPromptLabel:(id)arg1;	// IMP=0x00000000001daad0
- (id)promptLabel;	// IMP=0x00000000001daabf
- (void)setCancelButtonText:(id)arg1;	// IMP=0x00000000001daaae
- (id)cancelButtonText;	// IMP=0x00000000001daa9d
- (id)cancelButton;	// IMP=0x00000000001daa8c
- (id)searchBarClippingView;	// IMP=0x00000000001daa7b
- (void)setBackdropVisualEffectView:(id)arg1;	// IMP=0x00000000001daa67
- (id)backdropVisualEffectView;	// IMP=0x00000000001daa56
- (void)setBackdrop:(id)arg1;	// IMP=0x00000000001daa42
- (id)backdrop;	// IMP=0x00000000001daa31
- (void)setSearchBarBackground:(id)arg1;	// IMP=0x00000000001daa1d
- (id)searchBarBackground;	// IMP=0x00000000001daa0c
- (void)setSearchField:(id)arg1;	// IMP=0x00000000001da9f8
- (void)setHelperPlaceholderHidden:(_Bool)arg1;	// IMP=0x00000000001da9f2
- (void)setHelperPlaceholderOverride:(id)arg1;	// IMP=0x00000000001da9ec
- (void)setHelperPlaceholder:(id)arg1;	// IMP=0x00000000001da9e6
- (void)setUpSearchNavigationItem;	// IMP=0x00000000001da878
- (id)searchNavigationItem;	// IMP=0x00000000001da7b0
- (id)searchDisplayController;	// IMP=0x00000000001da7a8
- (void)setSearchDisplayController:(id)arg1;	// IMP=0x00000000001da6d0
- (void)setSearchDisplayControllerShowsCancelButton:(_Bool)arg1;	// IMP=0x00000000001da5f8
- (void)setShadowVisibleIfNecessary:(_Bool)arg1;	// IMP=0x00000000001da520
- (id)makeShadowView;	// IMP=0x00000000001da446
- (id)shadowView;	// IMP=0x00000000001da36c
- (void)setBackgroundLayoutNeedsUpdate;	// IMP=0x00000000001da27c
- (void)updateBackgroundToBackdropStyle:(long long)arg1;	// IMP=0x00000000001da1a4
@property(nonatomic) double additionalPaddingForSearchFieldAtLeadingEdge;
@property(nonatomic) double additionalPaddingForCancelButtonAtLeadingEdge;
- (void)setLayoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d9fb7
- (void)setDelegateSearchFieldFrameManipulationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d9f4a
- (id)description;	// IMP=0x00000000001d9aae
- (void)layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(_Bool)arg1;	// IMP=0x00000000001d98da
- (_Bool)isAtTop;	// IMP=0x00000000001d9646
- (void)layoutSubviewsInBounds:(struct CGRect)arg1;	// IMP=0x00000000001d926c
- (struct CGRect)boundsForSearchBarAndUpdateIfNecessaryFromSuggestedBounds:(struct CGRect)arg1;	// IMP=0x00000000001d8f62
- (void)layoutSubviews;	// IMP=0x00000000001d8ee9
- (void)configureLayout:(id)arg1 forState:(long long)arg2;	// IMP=0x00000000001d8526
- (void)setRightInsetForInlineSearch:(double)arg1;	// IMP=0x00000000001d84a6
- (void)setLeftInsetForInlineSearch:(double)arg1;	// IMP=0x00000000001d8426
- (double)effectiveBackgroundExtension;	// IMP=0x00000000001d7f57
- (void)configureLayout:(id)arg1;	// IMP=0x00000000001d7f3a
- (void)invalidateLayout;	// IMP=0x00000000001d7f1d
- (double)idealInlineWidthForLayoutState:(long long)arg1;	// IMP=0x00000000001d7e26
- (_Bool)requiresSearchTextField;	// IMP=0x00000000001d7df1
- (void)setRequiresSearchTextField:(_Bool)arg1;	// IMP=0x00000000001d7d26
- (id)existingSearchIconBarButtonItem;	// IMP=0x00000000001d7d11
- (id)searchIconBarButtonItem;	// IMP=0x00000000001d7c25
- (id)viewStackedInNavigationBar;	// IMP=0x00000000001d7bb5
- (_Bool)isFrozenForDismissalCrossfade;	// IMP=0x00000000001d7ba2
- (_Bool)wouldCombineLandscapeBarsForSize:(struct CGSize)arg1;	// IMP=0x00000000001d7b9a
- (_Bool)shouldCombineLandscapeBarsForOrientation:(long long)arg1;	// IMP=0x00000000001d7b92
- (double)availableBoundsWidthForSize:(struct CGSize)arg1;	// IMP=0x00000000001d79d1
- (double)availableBoundsWidth;	// IMP=0x00000000001d794f
- (void)displayNavBarCancelButton:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001d77da
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001d763b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001d73b4
- (void)updateNavigationBarLayoutInsertDataForSearchBar:(id)arg1 collapsibleScopeBar:(id)arg2 forLayoutState:(long long)arg3;	// IMP=0x00000000001d71d5
- (double)navigationBarContentHeight;	// IMP=0x00000000001d719f
- (double)defaultHeightForOrientation:(long long)arg1;	// IMP=0x00000000001d6fec
- (long long)barMetricsForOrientation:(long long)arg1;	// IMP=0x00000000001d6e9d
- (double)barHeightForBarMetrics:(long long)arg1;	// IMP=0x00000000001d6e69
- (double)barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2;	// IMP=0x00000000001d6dbb
- (double)searchFieldHeight;	// IMP=0x00000000001d6d78
- (double)barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000001d6c11
- (_Bool)scopeBarIsVisible;	// IMP=0x00000000001d6bce
- (_Bool)containsScopeBar;	// IMP=0x00000000001d6b73
- (double)scopeBarHeight;	// IMP=0x00000000001d6b30
- (struct UIEdgeInsets)scopeBarInsets;	// IMP=0x00000000001d6ad1
- (struct UIEdgeInsets)recalculatedEffectiveContentInsetForLayoutState:(long long)arg1 forcingInlineCalculation:(_Bool)arg2;	// IMP=0x00000000001d66d5
- (struct UIEdgeInsets)recalculatedEffectiveContentInsetForLayoutState:(long long)arg1;	// IMP=0x00000000001d66b3
- (void)getOverrideContentInsets:(struct UIEdgeInsets *)arg1 overriddenEdges:(unsigned long long *)arg2;	// IMP=0x00000000001d6669
- (void)setOverrideContentInsets:(struct UIEdgeInsets)arg1 forRectEdges:(unsigned long long)arg2;	// IMP=0x00000000001d642e
- (void)updateEffectiveContentInset;	// IMP=0x00000000001d62c7
- (_Bool)alwaysUsesLayoutMarginsForHorizontalContentInset;	// IMP=0x00000000001d62b3
- (void)getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 layoutState:(long long)arg5 forcingInlineCalculation:(_Bool)arg6;	// IMP=0x00000000001d5fc2
- (void)getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 layoutState:(long long)arg5;	// IMP=0x00000000001d5fa6
- (void)getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4;	// IMP=0x00000000001d5ee1
- (_Bool)_getNavigationTitleLeadingInset:(double *)arg1 trailingInset:(double *)arg2 isRTL:(_Bool)arg3;	// IMP=0x00000000001d597d
- (void)navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;	// IMP=0x00000000001d58af
- (void)navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;	// IMP=0x00000000001d5746
- (_Bool)isInBarButNotHosted;	// IMP=0x00000000001d56f8
- (void)setClippingViewBounds:(struct CGRect)arg1;	// IMP=0x00000000001d55d9
- (void)setClippingViewActive:(_Bool)arg1;	// IMP=0x00000000001d5539
- (void)setShowsDeleteButton:(_Bool)arg1;	// IMP=0x00000000001d52f1
- (void)setShowsSeparator:(_Bool)arg1;	// IMP=0x00000000001d51e9
- (void)navigationBarSlideTransitionDidEnd;	// IMP=0x00000000001d51ca
- (void)navigationBarSlideTransitionWillBegin;	// IMP=0x00000000001d50ad
- (void)shrinkToButtonIfNecessary;	// IMP=0x00000000001d501e
- (void)growToSearchFieldIfNecessary;	// IMP=0x00000000001d4f8e
- (void)cancelTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x00000000001d4e9f
- (void)completeTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x00000000001d4d0e
- (void)animateTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x00000000001d4a7e
- (void)freezeForAnimatedTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x00000000001d4815
- (void)prepareForTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x00000000001d4139
- (void)driveTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x00000000001d3f88
- (void)resetLayoutState;	// IMP=0x00000000001d3f3f
- (void)setUpFloatingSearchIconView;	// IMP=0x00000000001d3e51
- (id)floatingSearchIconViewSuitableForMeasuring;	// IMP=0x00000000001d3da5
- (void)setUpSearchField;	// IMP=0x00000000001d38fd
- (void)setUpSearchBarSearchContainerIfNecessary;	// IMP=0x00000000001d3812
- (void)setUpScopeBar;	// IMP=0x00000000001d34d8
- (void)setUpPromptLabel;	// IMP=0x00000000001d2fe1
- (void)setUpLeftButton;	// IMP=0x00000000001d2e8d
- (void)setUpCancelButtonWithAppearance:(id)arg1;	// IMP=0x00000000001d2be2
- (void)setUpCancelButton;	// IMP=0x00000000001d2bce
- (void)setShowDictationButton:(_Bool)arg1 shouldUpdateView:(_Bool)arg2;	// IMP=0x00000000001d2b68
- (_Bool)wantsDictationButton;	// IMP=0x00000000001d2b53
- (void)updateForAllowedToShowDictationChange;	// IMP=0x00000000001d2a1d
- (void)updateDictationButtonActiveState;	// IMP=0x00000000001d298b
- (_Bool)canShowDictationButton;	// IMP=0x00000000001d2929
- (void)setDisableDictationButton:(_Bool)arg1;	// IMP=0x00000000001d290c
- (void)cleanUpDictationMicsWithSearchField:(id)arg1;	// IMP=0x00000000001d283e
- (void)setUpDictationMicWithSearchField:(id)arg1;	// IMP=0x00000000001d26e2
- (void)dictationButtonPressed:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001d24eb
- (void)dictationControllerDidFinish:(id)arg1;	// IMP=0x00000000001d242d
- (void)dictationAvailabilityDidChange:(id)arg1;	// IMP=0x00000000001d23a3
- (void)updateSearchFieldArt;	// IMP=0x00000000001d20b8
- (void)updateSearchBarOpacity;	// IMP=0x00000000001d2055
- (void)updateScopeBarForSelectedScope;	// IMP=0x00000000001d202a
- (void)updateScopeBarBackground;	// IMP=0x00000000001d1dff
- (void)updateRightView;	// IMP=0x00000000001d17a0
- (void)updatePlaceholderColor;	// IMP=0x00000000001d1656
- (void)updateNeedForBackdrop;	// IMP=0x00000000001d1532
- (_Bool)usesBackdrop;	// IMP=0x00000000001d14d2
- (void)removeBackdropVisualEffectView;	// IMP=0x00000000001d149a
- (void)removeLegacyBackdropView;	// IMP=0x00000000001d1462
- (void)updateDictationButton;	// IMP=0x00000000001d1450
- (void)updateMagnifyingGlassView;	// IMP=0x00000000001d1395
- (void)updateIfNecessaryForOldSize:(struct CGSize)arg1;	// IMP=0x00000000001d124e
- (void)updateForDrawsBackgroundInPalette;	// IMP=0x00000000001d1176
- (void)updateForSemanticContext;	// IMP=0x00000000001d1164
- (void)updateForDynamicType;	// IMP=0x00000000001d10e8
- (void)updateDictationButtonForDynamicTypeWithSearchField:(id)arg1;	// IMP=0x00000000001d0ea5
- (void)updateSearchFieldControlSize;	// IMP=0x00000000001d0e08
- (void)updateSearchFieldForDynamicType;	// IMP=0x00000000001d0d2e
- (_Bool)supportsDynamicType;	// IMP=0x00000000001d0cea
- (void)applySearchBarStyle;	// IMP=0x00000000001d0a29
- (id)effectiveBarTintColor;	// IMP=0x00000000001d0a14
- (void)effectiveBarTintColorDidChange:(_Bool)arg1;	// IMP=0x00000000001d0889
- (void)setBarTintColor:(id)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x00000000001d083d
- (void)_setBarTintColor:(id)arg1;	// IMP=0x00000000001d07b6
- (id)textColor;	// IMP=0x00000000001d0677
- (id)colorForComponent:(unsigned long long)arg1 disabled:(_Bool)arg2;	// IMP=0x00000000001d047b
- (_Bool)hasDarkUIAppearance;	// IMP=0x00000000001d03c5
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;	// IMP=0x00000000001d03a8
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;	// IMP=0x00000000001d036f
- (struct UIOffset)searchFieldBackgroundPositionAdjustment;	// IMP=0x00000000001d0302
- (void)setSearchFieldBackgroundPositionAdjustment:(struct UIOffset)arg1;	// IMP=0x00000000001d019f
- (id)scopeBarBackgroundImage;	// IMP=0x00000000001d0182
- (void)setScopeBarBackgroundImage:(id)arg1;	// IMP=0x00000000001d00cc
- (id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;	// IMP=0x00000000001d00a2
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;	// IMP=0x00000000001cff09
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(_Bool *)arg3;	// IMP=0x00000000001cfe16
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;	// IMP=0x00000000001cfe01
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;	// IMP=0x00000000001cfdd6
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001cfd0e
- (void)setSeparatorImage:(id)arg1;	// IMP=0x00000000001cfc26
- (id)separatorImage;	// IMP=0x00000000001cfc09
- (id)currentSeparatorImage;	// IMP=0x00000000001cfb02
- (void)destroyPromptLabel;	// IMP=0x00000000001cfa90
- (void)destroyCancelButton;	// IMP=0x00000000001cfa1c
- (void)revertViewHierarchyIfNecessary;	// IMP=0x00000000001cf831
- (void)teardown;	// IMP=0x00000000001cf676
- (id)runtimeOnlyViews;	// IMP=0x00000000001cf540
- (void)prepare;	// IMP=0x00000000001cf228
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000001cf18b
- (id)cancelBarButtonItemIfExists;	// IMP=0x00000000001cf176
- (id)cancelBarButtonItem;	// IMP=0x00000000001cf089
- (id)leftButtonIfExists;	// IMP=0x00000000001cf074
- (id)leftButton;	// IMP=0x00000000001cf048
- (id)floatingSearchIconViewIfExists;	// IMP=0x00000000001cf033
- (id)floatingSearchIconView;	// IMP=0x00000000001cefee
- (id)searchFieldIfExists;	// IMP=0x00000000001cefd9
- (id)searchField;	// IMP=0x00000000001cefa2
- (id)prompt;	// IMP=0x00000000001cef08
- (void)setPrompt:(id)arg1;	// IMP=0x00000000001ced73
- (long long)barPosition;	// IMP=0x00000000001ced41
- (void)setBarPosition:(long long)arg1;	// IMP=0x00000000001cec18
- (void)setBackdropStyle:(unsigned long long)arg1;	// IMP=0x00000000001ce9fb
- (void)setMinimumContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001ce9a3
- (void)setScopeTitles:(id)arg1;	// IMP=0x00000000001ce73a
- (void)setCancelButton:(id)arg1;	// IMP=0x00000000001ce6e0
- (_Bool)isInNavigationPalette;	// IMP=0x00000000001ce6d8
- (void)setInNavigationPalette:(_Bool)arg1;	// IMP=0x00000000001ce5ee
- (_Bool)backgroundLayoutNeedsUpdate;	// IMP=0x00000000001ce5da
- (_Bool)allowsInlineScopeBar;	// IMP=0x00000000001ce5d2
- (void)setAllowsInlineScopeBar:(_Bool)arg1;	// IMP=0x00000000001ce5cc
- (_Bool)showsScopeBar;	// IMP=0x00000000001ce501
- (void)setDeferredAutomaticShowsScopeBarInNavigationBar:(id)arg1;	// IMP=0x00000000001ce2b8
- (void)_setShowsScopeBar:(_Bool)arg1;	// IMP=0x00000000001ce290
- (void)setShowsScopeBar:(_Bool)arg1;	// IMP=0x00000000001ce27c
- (void)setShowsScopeBar:(_Bool)arg1 animateOpacity:(_Bool)arg2;	// IMP=0x00000000001ce0a2
- (void)setShowsBookmarkButton:(_Bool)arg1;	// IMP=0x00000000001cdba0
- (void)setSearchResultsButtonSelected:(_Bool)arg1;	// IMP=0x00000000001cdb61
- (void)setShowsSearchResultsButton:(_Bool)arg1;	// IMP=0x00000000001cdb22
- (_Bool)cancelButtonWantsLetterpress;	// IMP=0x00000000001cdb0c
- (void)setCancelButtonWantsLetterpress:(_Bool)arg1;	// IMP=0x00000000001cda84
- (void)setAutoDisableCancelButton:(_Bool)arg1;	// IMP=0x00000000001cda3d
- (_Bool)showsCancelButton;	// IMP=0x00000000001cd9a6
- (void)_setShowsCancelButton:(_Bool)arg1;	// IMP=0x00000000001cd981
- (void)setShowsCancelButton:(_Bool)arg1;	// IMP=0x00000000001cd96d
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001cd42a
- (void)allowCursorToAppear:(_Bool)arg1;	// IMP=0x00000000001cd35d
- (_Bool)usesEmbeddedAppearance;	// IMP=0x00000000001cd348
- (void)setUsesEmbeddedAppearance:(_Bool)arg1;	// IMP=0x00000000001cd28b
- (_Bool)drawsBackground;	// IMP=0x00000000001cd276
- (void)_setHideBackground:(_Bool)arg1;	// IMP=0x00000000001cd251
- (void)setDrawsBackground:(_Bool)arg1;	// IMP=0x00000000001cd1fe
- (_Bool)drawsBackgroundInPalette;	// IMP=0x00000000001cd1f6
- (void)setDrawsBackgroundInPalette:(_Bool)arg1;	// IMP=0x00000000001cd10c
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001cccc3
- (_Bool)isEnabled;	// IMP=0x00000000001cccae
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000001ccc9a
- (_Bool)centerPlaceholder;	// IMP=0x00000000001ccc84
- (void)setCenterPlaceholder:(_Bool)arg1;	// IMP=0x00000000001ccbdd
- (long long)searchFieldLeftViewMode;	// IMP=0x00000000001ccba6
- (void)setSearchFieldLeftViewMode:(long long)arg1;	// IMP=0x00000000001ccb5d
- (long long)barTranslucence;	// IMP=0x00000000001ccb47
- (void)_setBarTranslucence:(long long)arg1;	// IMP=0x00000000001ccb21
- (void)setBarTranslucence:(long long)arg1;	// IMP=0x00000000001ccaa9
- (_Bool)isTranslucent;	// IMP=0x00000000001cca8e
- (unsigned long long)searchBarStyle;	// IMP=0x00000000001cca78
- (void)setSearchBarStyle:(unsigned long long)arg1;	// IMP=0x00000000001cc9fb
- (long long)barStyle;	// IMP=0x00000000001cc9e7
- (void)_setBarStyle:(long long)arg1;	// IMP=0x00000000001cc9c8
- (void)setBarStyle:(long long)arg1;	// IMP=0x00000000001cc742
- (_Bool)isActiveSearchDeferringScopeBar;	// IMP=0x00000000001cc72f
- (void)setActiveSearchDeferringScopeBar:(_Bool)arg1;	// IMP=0x00000000001cc709
- (_Bool)reliesOnNavigationBarBackdrop;	// IMP=0x00000000001cc6f3
- (void)setReliesOnNavigationBarBackdrop:(_Bool)arg1;	// IMP=0x00000000001cc6ce
- (_Bool)autoDisableCancelButton;	// IMP=0x00000000001cc6b8
- (void)_setAutoDisableCancelButton:(_Bool)arg1;	// IMP=0x00000000001cc693
- (_Bool)showsSearchResultsButton;	// IMP=0x00000000001cc67d
- (void)_setShowsSearchResultsButton:(_Bool)arg1;	// IMP=0x00000000001cc658
- (_Bool)showsBookmarkButton;	// IMP=0x00000000001cc645
- (void)_setShowsBookmarkButton:(_Bool)arg1;	// IMP=0x00000000001cc620
- (_Bool)isSearchResultsButtonSelected;	// IMP=0x00000000001cc60c
- (void)_setSearchResultsButtonSelected:(_Bool)arg1;	// IMP=0x00000000001cc5e7
- (_Bool)isPlacedInToolbar;	// IMP=0x00000000001cc5d1
- (void)setPlacedInToolbar:(_Bool)arg1;	// IMP=0x00000000001cc5ac
- (_Bool)isPlacedInNavigationBar;	// IMP=0x00000000001cc597
- (void)setPlacedInNavigationBar:(_Bool)arg1;	// IMP=0x00000000001cc572
- (_Bool)providesRestingMeasurementValues;	// IMP=0x00000000001cc55c
- (void)setProvidesRestingMeasurementValues:(_Bool)arg1;	// IMP=0x00000000001cc537
- (_Bool)isTextFieldManagedInNSToolbar;	// IMP=0x00000000001cc521
- (void)setTextFieldManagedInNSToolbar:(_Bool)arg1;	// IMP=0x00000000001cc4be
- (_Bool)isHostedInlineByNavigationBar;	// IMP=0x00000000001cc4a8
- (void)setHostedInlineByNavigationBar:(_Bool)arg1;	// IMP=0x00000000001cc378
- (_Bool)isHostedByNavigationBar;	// IMP=0x00000000001cc2bb
- (void)setHostedByNavigationBar:(_Bool)arg1;	// IMP=0x00000000001cc296

@end

