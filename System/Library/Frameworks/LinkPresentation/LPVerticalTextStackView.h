//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPVerticalTextStackViewStyle, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPVerticalTextStackView
{
    NSMutableArray *_items;	// 8 = 0x8
    _Bool _hasEverBuilt;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
    LPVerticalTextStackViewStyle *_style;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000032cd5
- (struct CGSize)_layoutTextStackForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;	// IMP=0x000000000003214d
- (long long)computedNumberOfLines;	// IMP=0x0000000000032012
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000031f77
- (void)layoutComponentView;	// IMP=0x0000000000031f03
- (void)addArrangedSubview:(id)arg1;	// IMP=0x0000000000031e73
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000031e29
- (id)initWithHost:(id)arg1 style:(id)arg2;	// IMP=0x0000000000031c9f
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000031c91

@end

