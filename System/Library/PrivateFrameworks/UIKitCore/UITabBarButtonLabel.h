//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

@class UIColor, UITabBarButton, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UITabBarButtonLabel : UILabel
{
    double _boundsWidth;	// 144 = 0x90
    _UITabBarItemAppearanceStorage *_appearanceStorage;	// 152 = 0x98
    _Bool _isSelected;	// 160 = 0xa0
    _Bool _isHighlighted;	// 161 = 0xa1
    _Bool _hasSeenIdiom;	// 162 = 0xa2
    Class _appearanceGuideClass;	// 168 = 0xa8
    UIColor *_unselectedTintColor;	// 176 = 0xb0
    UITabBarButton *_tabBarButton;	// 184 = 0xb8
}

+ (double)_fontPointSizeForIdiom:(long long)arg1;	// IMP=0x006000000020490c
- (void).cxx_destruct;	// IMP=0x00000000002050df
@property(nonatomic) __weak UITabBarButton *tabBarButton; // @synthesize tabBarButton=_tabBarButton;
@property(retain, nonatomic) UIColor *unselectedTintColor; // @synthesize unselectedTintColor=_unselectedTintColor;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000204f3f
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x0000000000204e9e
- (long long)_idiomForFontGivenIdiom:(long long)arg1;	// IMP=0x0000000000204e1d
- (id)_fontForIdiom:(long long)arg1 forTabBarDisplayStyle:(long long)arg2;	// IMP=0x0000000000204961
- (id)_fontForIdiom:(long long)arg1;	// IMP=0x000000000020494d
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x0000000000204842
- (id)_titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x0000000000204810
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002047fe
- (void)_updateLabelsVibrancy;	// IMP=0x0000000000204707
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000020440e
- (void)_updateForFontChangeWithIdiom:(long long)arg1;	// IMP=0x0000000000204366
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000204360
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000020435a
- (void)_setBadgeColor:(id)arg1;	// IMP=0x0000000000204354
- (void)_UIAppearance_setBadgeColor:(id)arg1;	// IMP=0x000000000020434e
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x0000000000204348
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x0000000000204342
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000002042bd
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000002041eb
- (void)_legacyApperance_updateTextColorsForState;	// IMP=0x0000000000203a58
- (void)updateTextColorsForState;	// IMP=0x000000000020371f
- (void)tintColorDidChange;	// IMP=0x00000000002036de
- (void)resizeToFitWidth:(double)arg1;	// IMP=0x000000000020333a
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x00000000002032c8
- (id)initWithTabBarDisplayStyle:(long long)arg1;	// IMP=0x000000000020320c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000203145
- (_Bool)_shouldCeilSizeToViewScale;	// IMP=0x000000000020313d

@end

