//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class UIColor, UIView;
@protocol UISwipeActionVisualStyle, _UISwipeActionButtonDelegate;

__attribute__((visibility("hidden")))
@interface UISwipeActionButton : UIButton
{
    _Bool _autosizes;	// 8 = 0x8
    UIColor *_defaultBackgroundColor;	// 16 = 0x10
    UIColor *_highlightedBackgroundColor;	// 24 = 0x18
    id <UISwipeActionVisualStyle> _visualStyle;	// 32 = 0x20
    id <_UISwipeActionButtonDelegate> _swipeActionButtonDelegate;	// 40 = 0x28
    UIView *_backgroundView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000dff968
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <_UISwipeActionButtonDelegate> swipeActionButtonDelegate; // @synthesize swipeActionButtonDelegate=_swipeActionButtonDelegate;
@property(nonatomic) _Bool autosizes; // @synthesize autosizes=_autosizes;
@property(retain, nonatomic) id <UISwipeActionVisualStyle> visualStyle; // @synthesize visualStyle=_visualStyle;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
- (double)_titleFontWeightForCurrentIdiom;	// IMP=0x0000000000dff84b
- (double)_horizontalPaddingForCurrentIdiom;	// IMP=0x0000000000dff7fb
- (double)_maxFontSizeForCurrentIdiom;	// IMP=0x0000000000dff7ab
- (double)_minFontSizeForCurrentIdiom;	// IMP=0x0000000000dff75b
- (double)_minScaleFactorForFont:(id)arg1;	// IMP=0x0000000000dff6e9
- (id)titleFont;	// IMP=0x0000000000dff568
- (id)titleFontOfSize:(double)arg1;	// IMP=0x0000000000dff52c
@property(readonly, nonatomic) double buttonWidth;
- (double)defaultButtonWidth;	// IMP=0x0000000000dff4ca
@property(readonly, nonatomic) UIView *sourceView;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000dff45d
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000dff35f
- (long long)_numberOfLinesForTitle:(id)arg1;	// IMP=0x0000000000dff1ac
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000dff071
- (unsigned long long)_defaultLayoutForHeight:(double)arg1;	// IMP=0x0000000000dff045
- (_Bool)_heightDemandsCompactLayout;	// IMP=0x0000000000dff000
- (struct CGRect)_allowableContentRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000dfee98
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000dfeced
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000dfea21

@end
