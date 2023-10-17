//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewTitledCell
{
    UILabel *_titleLabel;	// 160 = 0xa0
    _Bool _isAttributed;	// 168 = 0xa8
    UIColor *_textColor;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000c20a2f
@property(readonly, nonatomic) _Bool _isAttributed; // @synthesize _isAttributed;
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel;
- (void)prepareForReuse;	// IMP=0x0000000000c209ad
@property(retain, nonatomic) NSAttributedString *attributedTitle;
@property(retain, nonatomic) NSString *title;
- (_Bool)_canBeReusedInPickerView;	// IMP=0x0000000000c2091b
- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;	// IMP=0x0000000000c2087d
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 textColor:(id)arg3 forceTextAlignmentCentered:(_Bool)arg4;	// IMP=0x0000000000c20684

@end
