//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, UIImageView;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI13MarketingView : UIView
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *isLoading;	// 24 = 0x18
    MISSING_TYPE *onElementAppearance;	// 32 = 0x20
    MISSING_TYPE *onElementDisappearance;	// 48 = 0x30
    MISSING_TYPE *onVisibleBoundsChange;	// 64 = 0x40
    MISSING_TYPE *onImpressionableBoundsChange;	// 80 = 0x50
    MISSING_TYPE *backgroundImageView;	// 96 = 0x60
    MISSING_TYPE *layout;	// 104 = 0x68
    MISSING_TYPE *logoImageView;	// 224 = 0xe0
    MISSING_TYPE *stackView;	// 232 = 0xe8
    MISSING_TYPE *titleLabel;	// 240 = 0xf0
    MISSING_TYPE *subtitleLabel;	// 248 = 0xf8
    MISSING_TYPE *supportingTextLabel;	// 256 = 0x100
    MISSING_TYPE *actionItemSubtitles;	// 264 = 0x108
    MISSING_TYPE *actionItemTitles;	// 272 = 0x110
    MISSING_TYPE *actionItemButtons;	// 280 = 0x118
    MISSING_TYPE *actionItemViews;	// 288 = 0x120
    MISSING_TYPE *offer;	// 296 = 0x128
    MISSING_TYPE *pendingOffer;	// 376 = 0x178
    MISSING_TYPE *lastTappedActionItemButton;	// 456 = 0x1c8
}

- (void).cxx_destruct;	// IMP=0x0000000000497e30
- (void)dismissButtonTapped:(id)arg1;	// IMP=0x0000000000496c40
- (void)actionItemButtonTapped:(id)arg1;	// IMP=0x0000000000496bf0
- (void)layoutSubviews;	// IMP=0x00000000004952b0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000494780
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004943e0
@property(nonatomic, readonly) UIImageView *logoImageView; // @synthesize logoImageView;

@end

