//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSDictionary, NSMutableDictionary, NSString, UIColor, UILabel, _UIBadgeVisualStyle;

__attribute__((visibility("hidden")))
@interface _UIBadgeView : UIView
{
    UILabel *_label;	// 144 = 0x90
    NSMutableDictionary *_mergedTextAttributes;	// 152 = 0x98
    NSString *_text;	// 160 = 0xa0
    NSDictionary *_textAttributes;	// 168 = 0xa8
    UIColor *_badgeColor;	// 176 = 0xb0
    _UIBadgeVisualStyle *_style;	// 184 = 0xb8
    struct UIOffset _textOffset;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000223f41
@property(retain, nonatomic) _UIBadgeVisualStyle *style; // @synthesize style=_style;
@property(nonatomic) struct UIOffset textOffset; // @synthesize textOffset=_textOffset;
@property(copy, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)layoutSubviews;	// IMP=0x0000000000223d56
- (void)_applyTextToLabel;	// IMP=0x0000000000223874
- (void)_setUpLabelIfNecessary;	// IMP=0x000000000022376f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000022367b
- (id)initWithText:(id)arg1;	// IMP=0x00000000002235bb

@end

