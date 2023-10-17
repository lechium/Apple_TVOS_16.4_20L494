//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPopoverBackgroundView.h"

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView
{
    _Bool useShortMode;	// 144 = 0x90
    _Bool _debugMode;	// 145 = 0x91
    UIView *viewToMaskWhenContentExtendsOverArrow;	// 152 = 0x98
    unsigned long long _arrowDirection;	// 160 = 0xa0
    double _arrowOffset;	// 168 = 0xa8
    UIColor *_arrowBackgroundColor;	// 176 = 0xb0
    UIColor *_popoverBackgroundColor;	// 184 = 0xb8
    long long _backgroundStyle;	// 192 = 0xc0
    UIColor *_contentBlendingColor;	// 200 = 0xc8
}

+ (double)arrowHeight;	// IMP=0x00600000011dfdd7
+ (struct UIEdgeInsets)contentViewInsets;	// IMP=0x00600000011dfdc4
+ (Class)legacyChromeViewClass;	// IMP=0x00600000011dfdb3
+ (Class)standardChromeViewClass;	// IMP=0x00600000011dfd64
- (void).cxx_destruct;	// IMP=0x00000000011e02cc
@property(readonly, nonatomic) UIColor *contentBlendingColor; // @synthesize contentBlendingColor=_contentBlendingColor;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(copy, nonatomic) UIColor *popoverBackgroundColor; // @synthesize popoverBackgroundColor=_popoverBackgroundColor;
@property(copy, nonatomic) UIColor *arrowBackgroundColor; // @synthesize arrowBackgroundColor=_arrowBackgroundColor;
- (void)setArrowOffset:(double)arg1;	// IMP=0x00000000011e0243
- (double)arrowOffset;	// IMP=0x00000000011e0231
- (void)setArrowDirection:(unsigned long long)arg1;	// IMP=0x00000000011e0220
- (unsigned long long)arrowDirection;	// IMP=0x00000000011e020f
@property(nonatomic) __weak UIView *viewToMaskWhenContentExtendsOverArrow; // @synthesize viewToMaskWhenContentExtendsOverArrow;
@property(nonatomic, getter=isDebugModeEnabled) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugMode;
@property(nonatomic) _Bool useShortMode; // @synthesize useShortMode;
- (long long)_resolvedBackgroundStyle;	// IMP=0x00000000011e0197
- (struct CGRect)_contentViewFrame;	// IMP=0x00000000011e00ac
- (struct UIEdgeInsets)safeAreaInsetsForContentView;	// IMP=0x00000000011dff5b
- (_Bool)_shouldUseEqualContentInsetsOnAllSides;	// IMP=0x00000000011dff3a
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000011dff28
- (void)_updateArrowImages;	// IMP=0x00000000011dff22
- (_Bool)isRightArrowPinnedToBottom;	// IMP=0x00000000011dfee6
- (_Bool)isRightArrowPinnedToTop;	// IMP=0x00000000011dfeae
- (double)maxNonPinnedOffset;	// IMP=0x00000000011dfea5
- (double)minNonPinnedOffset;	// IMP=0x00000000011dfe9c
- (_Bool)wouldPinForOffset:(double)arg1;	// IMP=0x00000000011dfe52
- (_Bool)isPinned;	// IMP=0x00000000011dfe34
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000011dfde0

@end
