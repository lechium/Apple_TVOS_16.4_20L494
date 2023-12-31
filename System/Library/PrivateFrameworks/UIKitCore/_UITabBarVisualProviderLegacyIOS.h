//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UITabBarVisualProvider.h"

@class NSString, UIView, _UIBarBackground, _UIBarBackgroundLayout;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderLegacyIOS : _UITabBarVisualProvider
{
    _UIBarBackground *_backgroundView;	// 24 = 0x18
    _UIBarBackgroundLayout *_backgroundViewLayout;	// 32 = 0x20
    UIView *_customBackgroundView;	// 40 = 0x28
    UIView *_accessoryView;	// 48 = 0x30
    double _minimumWidthForHorizontalLayout;	// 56 = 0x38
    _Bool _useModernAppearance;	// 64 = 0x40
    long long _style;	// 72 = 0x48
    double _backgroundTransitionProgress;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000201002
- (double)backgroundTransitionProgress;	// IMP=0x0000000000200ff0
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0000000000200c66
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;	// IMP=0x0000000000200c54
- (id)_focusedItemHighlightView;	// IMP=0x0000000000200c4c
- (double)_shim_heightForCustomizingItems;	// IMP=0x0000000000200c21
- (void)_shim_updateTabBarItemView:(id)arg1;	// IMP=0x0000000000200b08
- (void)_shim_layoutItemsOnly;	// IMP=0x0000000000200af6
- (void)_shim_setShadowHidden:(_Bool)arg1;	// IMP=0x0000000000200a84
- (_Bool)_shim_shadowHidden;	// IMP=0x0000000000200a67
- (void)_shim_setShadowAlpha:(double)arg1;	// IMP=0x00000000002009ee
- (double)_shim_shadowAlpha;	// IMP=0x00000000002009d1
- (id)_shim_accessoryView;	// IMP=0x00000000002009bc
- (void)_shim_setAccessoryView:(id)arg1;	// IMP=0x000000000020092c
- (id)_shim_compatibilityBackgroundView;	// IMP=0x0000000000200904
- (void)_shim_setCustomBackgroundView:(id)arg1;	// IMP=0x00000000002008ad
- (id)preferredFocusedView;	// IMP=0x000000000020082f
- (id)_preferredFocusedViewiOS;	// IMP=0x00000000002007b1
- (id)_preferredFocusedViewCarplay;	// IMP=0x00000000002005b0
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000002002e3
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;	// IMP=0x00000000002000fc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000020006b
- (void)setBackgroundTransitionProgress:(double)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x00000000001ffff9
- (void)setBackgroundTransitionProgress:(double)arg1;	// IMP=0x00000000001fffe5
- (void)layoutSubviews;	// IMP=0x00000000001fff61
- (void)updateBackgroundGroupName;	// IMP=0x00000000001fff0e
- (void)_updateBackground;	// IMP=0x00000000001ffbf1
- (void)_updateBackgroundModern;	// IMP=0x00000000001ffa6d
- (void)_updateBackgroundLegacy;	// IMP=0x00000000001ff712
- (void)_layoutTabBarItems;	// IMP=0x00000000001fe943
- (long long)_styleForTraitCollection:(id)arg1;	// IMP=0x00000000001fe74f
- (void)_configureItems:(id)arg1;	// IMP=0x00000000001fe47a
- (void)_updateAccessoryView;	// IMP=0x00000000001fe3a3
- (struct CGRect)_shadowFrameForBounds:(struct CGRect)arg1 height:(double)arg2;	// IMP=0x00000000001fe352
- (struct CGRect)_layoutRegion;	// IMP=0x00000000001fe272
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;	// IMP=0x00000000001fe19a
- (void)updateArchivedSubviews:(id)arg1;	// IMP=0x00000000001fdf70
- (id)createViewForTabBarItem:(id)arg1;	// IMP=0x00000000001fda9d
- (void)setMinimumWidthForHorizontalLayout:(double)arg1;	// IMP=0x00000000001fda6c
- (double)minimumWidthForHorizontalLayout;	// IMP=0x00000000001fda5a
- (id)appearanceObserver;	// IMP=0x00000000001fda51
- (void)setUseModernAppearance:(_Bool)arg1;	// IMP=0x00000000001fd977
- (_Bool)useModernAppearance;	// IMP=0x00000000001fd967
- (void)changeLayout;	// IMP=0x00000000001fd951
- (void)changeAppearance;	// IMP=0x00000000001fd93b
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;	// IMP=0x00000000001fd8a7
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;	// IMP=0x00000000001fd61e
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;	// IMP=0x00000000001fd55f
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(_Bool)arg5;	// IMP=0x00000000001fcb0e
- (void)_updateAppearanceForTransitionFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x00000000001fc3bb
- (void)teardown;	// IMP=0x00000000001fc2d9
- (void)prepare;	// IMP=0x00000000001fc09b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

