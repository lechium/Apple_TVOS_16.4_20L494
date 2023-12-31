//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton;

__attribute__((visibility("hidden")))
@interface CNContactActionSplitCell
{
    UIButton *_leftLabel;	// 8 = 0x8
    UIButton *_rightLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000165af
@property(readonly, nonatomic) UIButton *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(readonly, nonatomic) UIButton *leftLabel; // @synthesize leftLabel=_leftLabel;
- (void)_setupButton:(id)arg1 forAction:(id)arg2;	// IMP=0x000000000001643f
- (id)constantConstraints;	// IMP=0x00000000000161b4
- (void)setLabelTextAttributes:(id)arg1;	// IMP=0x000000000001613e
- (id)rightMostView;	// IMP=0x0000000000016129
- (id)labelView;	// IMP=0x00000000000160dc
- (double)minCellHeight;	// IMP=0x00000000000160ce
- (id)standardButton;	// IMP=0x0000000000015f51
- (void)setCardGroupItem:(id)arg1;	// IMP=0x0000000000015d31
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000015c38

@end

