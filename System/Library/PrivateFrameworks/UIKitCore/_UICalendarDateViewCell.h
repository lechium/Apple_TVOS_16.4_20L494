//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class NSArray, NSString, UICalendarView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface _UICalendarDateViewCell : UICollectionViewCell
{
    struct {
        unsigned int overhangMonth:1;
        unsigned int outOfRange:1;
        unsigned int isToday:1;
        unsigned int highlightsToday:1;
        unsigned int wantsRoundedSquare:1;
    } _flags;	// 8 = 0x8
    NSString *_fontDesign;	// 16 = 0x10
    NSArray *_decorations;	// 24 = 0x18
    UILabel *_dayLabel;	// 32 = 0x20
    UIView *_decorationContentView;	// 40 = 0x28
    UIView *_backgroundView;	// 48 = 0x30
    UIView *_labelContentView;	// 56 = 0x38
    UICalendarView *_calendarView;	// 64 = 0x40
}

+ (id)emphasizedFontForTraitCollection:(id)arg1 fontDesign:(id)arg2;	// IMP=0x000000000102995a
+ (id)fontForTraitCollection:(id)arg1 fontDesign:(id)arg2;	// IMP=0x0000000001029728
+ (id)reuseIdentifier;	// IMP=0x0000000001029716
- (void).cxx_destruct;	// IMP=0x000000000102af9c
@property(nonatomic) __weak UICalendarView *calendarView; // @synthesize calendarView=_calendarView;
- (void)_updateForPreferredContentSizeCategoryChange;	// IMP=0x000000000102aed0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000102adf0
- (void)_updateFontDesign;	// IMP=0x000000000102acf7
- (void)_updateBackgroundView;	// IMP=0x000000000102aba8
- (void)_updateLabelColor;	// IMP=0x000000000102aad5
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000102aa72
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000102aa02
- (void)configureWithDay:(id)arg1 formatter:(id)arg2 fontDesign:(id)arg3 decorations:(id)arg4 outOfRange:(_Bool)arg5 renderOverhangDays:(_Bool)arg6 highlightsToday:(_Bool)arg7;	// IMP=0x000000000102a4ba
- (void)layoutSubviews;	// IMP=0x0000000001029b4f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000102997f

@end

