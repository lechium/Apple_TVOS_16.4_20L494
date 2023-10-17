//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPCollaborationFooterConfiguration, LPCollaborationFooterStyle, LPTextView, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPCollaborationFooterView
{
    LPTextView *_optionsView;	// 8 = 0x8
    LPTextView *_handleView;	// 16 = 0x10
    UIImageView *_indicatorView;	// 24 = 0x18
    UIView *_separatorView;	// 32 = 0x20
    LPCollaborationFooterConfiguration *_configuration;	// 40 = 0x28
    LPCollaborationFooterStyle *_style;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000029a26
- (void)_footerTapRecognized:(id)arg1;	// IMP=0x00000000000299ac
- (void)updateIndicator;	// IMP=0x000000000002979c
- (struct CGSize)_layoutFooterForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;	// IMP=0x0000000000029056
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000029042
- (void)layoutComponentView;	// IMP=0x0000000000028ff4
- (id)initWithHost:(id)arg1 configuration:(id)arg2 style:(id)arg3;	// IMP=0x00000000000289fa
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000289ec

@end

