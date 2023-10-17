//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView, _TVLabel;

__attribute__((visibility("hidden")))
@interface _TVVisualEffectLabel : UIView
{
    UIVisualEffectView *_visualEffectView;	// 8 = 0x8
    _TVLabel *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000018395c
@property(retain, nonatomic) _TVLabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
- (void)transferLayoutStylesFromElement:(id)arg1;	// IMP=0x00000000001838c8
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;	// IMP=0x000000000018388a
- (void)setLineBreakMode:(long long)arg1;	// IMP=0x000000000018386d
- (void)setMarqueeRunning:(_Bool)arg1;	// IMP=0x0000000000183867
- (void)setMarqueeEnabled:(_Bool)arg1;	// IMP=0x0000000000183861
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000183844
- (void)layoutSubviews;	// IMP=0x0000000000183779
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000018375c
- (id)initWithEffect:(id)arg1;	// IMP=0x0000000000183627

@end

