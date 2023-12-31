//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class UILabel, UIView, _UIFocusFastScrollingIndexBarEntry;

__attribute__((visibility("hidden")))
@interface _UIHorizontalIndexTitleBarCell : UICollectionViewCell
{
    _UIFocusFastScrollingIndexBarEntry *_entry;	// 304 = 0x130
    UILabel *_titleLabel;	// 312 = 0x138
    UIView *_roundedCornersBackground;	// 320 = 0x140
}

+ (id)cellFont;	// IMP=0x0060000000655646
- (void).cxx_destruct;	// IMP=0x0000000000656409
@property(retain, nonatomic) UIView *roundedCornersBackground; // @synthesize roundedCornersBackground=_roundedCornersBackground;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *entry; // @synthesize entry=_entry;
- (void)_updateColors;	// IMP=0x000000000065615a
- (_Bool)_isAnotherIndexTitleCellFocused;	// IMP=0x000000000065607e
- (double)_maxCellWidth;	// IMP=0x0000000000655f1e
- (void)updateForEntry:(id)arg1;	// IMP=0x0000000000655e7e
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000655e3d
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000655da9
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000655d00
- (void)prepareForReuse;	// IMP=0x0000000000655c49
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x0000000000655b6f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006556be

@end

