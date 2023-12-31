//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIColor, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadge : UIView
{
    _Bool _selected;	// 144 = 0x90
    UILabel *_badgeTextLabel;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000e3af72
@property(retain, nonatomic) UILabel *badgeTextLabel; // @synthesize badgeTextLabel=_badgeTextLabel;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (_Bool)isHighlighted;	// IMP=0x0000000000e3aee9
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000e3ae9d
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *color;
@property(retain, nonatomic) UIFont *font;
- (void)layoutSubviews;	// IMP=0x0000000000e3aaff
- (void)_sizeToFit;	// IMP=0x0000000000e3aa11
- (double)minHeight;	// IMP=0x0000000000e3aa03
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000e3a995
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000e3a8e0

@end

