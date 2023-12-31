//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInputSwitcherSegmentControl;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSegmentedTableCell
{
    UIInputSwitcherSegmentControl *_segmentControl;	// 64 = 0x40
}

+ (struct CGSize)preferredSizeWithSegmentCount:(unsigned long long)arg1;	// IMP=0x0060000000865b3a
- (void).cxx_destruct;	// IMP=0x0000000000865d5f
@property(readonly, nonatomic) UIInputSwitcherSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
- (void)setUsesDarkTheme:(_Bool)arg1;	// IMP=0x0000000000865cd7
- (void)layoutSubviews;	// IMP=0x0000000000865c33
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000865bc3
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000865b92
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000865a62

@end

