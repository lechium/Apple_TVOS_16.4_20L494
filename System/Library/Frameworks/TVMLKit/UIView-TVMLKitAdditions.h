//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (TVMLKitAdditions)
+ (void)tv_performByPreventingAdditiveAnimations:(CDUnknownBlockType)arg1;	// IMP=0x0060000000060a2b
- (void)_transferAttributesFromElement:(id)arg1;	// IMP=0x0010000000061cea
- (_Bool)tv_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0010000000061c91
- (id)tv_layout;	// IMP=0x0010000000061c80
- (void)tv_setLayout:(id)arg1;	// IMP=0x0010000000061c6a
- (id)tv_AccessibilityText;	// IMP=0x0010000000061c59
- (void)tv_setAccessibilityText:(id)arg1;	// IMP=0x0010000000061c43
- (void)tv_setSiriData:(id)arg1;	// IMP=0x0010000000061c2d
- (id)tv_siriData;	// IMP=0x0010000000061c1c
- (_Bool)tv_marqueeOnHighlight;	// IMP=0x0010000000061ba0
- (_Bool)tv_showOnHighlight;	// IMP=0x0010000000061aa5
- (_Bool)tv_isPrototypeView;	// IMP=0x0010000000061a3b
- (id)tv_elementName;	// IMP=0x0010000000061a22
- (unsigned long long)tv_elementType;	// IMP=0x00100000000619b8
- (id)tv_highlightColor;	// IMP=0x001000000006199c
- (id)tv_backgroundColor;	// IMP=0x0010000000061980
- (double)tv_lineSpacing;	// IMP=0x0010000000061922
- (double)tv_interitemSpacing;	// IMP=0x00100000000618c4
- (double)tv_minWidth;	// IMP=0x0010000000061866
- (double)tv_minHeight;	// IMP=0x0010000000061808
- (double)tv_maxWidth;	// IMP=0x00100000000617aa
- (double)tv_maxHeight;	// IMP=0x001000000006174c
- (double)tv_itemHeight;	// IMP=0x00100000000616ee
- (double)tv_itemWidth;	// IMP=0x0010000000061690
- (long long)tv_position;	// IMP=0x0010000000061604
- (long long)tv_contentAlignment;	// IMP=0x00100000000615b6
- (long long)tv_alignment;	// IMP=0x001000000006152a
- (struct UIEdgeInsets)tv_padding;	// IMP=0x0010000000061492
- (struct UIEdgeInsets)tv_focusMargin;	// IMP=0x00100000000613fa
- (struct UIEdgeInsets)tv_nonDirectionalMargin;	// IMP=0x00100000000613af
- (struct UIEdgeInsets)tv_margin;	// IMP=0x0010000000061317
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;	// IMP=0x00100000000612f9
- (_Bool)tv_shouldReuseCachedSizeThatFits:(struct CGSize)arg1 previousTargetSize:(struct CGSize)arg2 newTargetSize:(struct CGSize)arg3;	// IMP=0x0010000000061273
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1 withSizeCalculation:(CDUnknownBlockType)arg2;	// IMP=0x0010000000061053
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000060f9a
- (void)transferLayoutStylesFromElement:(id)arg1;	// IMP=0x0010000000060ecc
- (_Bool)tv_isAnimationDisabledForProperty:(id)arg1;	// IMP=0x0010000000060e63
- (void)tv_disableAnimation:(_Bool)arg1 forProperty:(id)arg2;	// IMP=0x0010000000060cdf
- (id)tv_valueForTVViewTag:(id)arg1;	// IMP=0x0010000000060c5c
- (void)tv_setValue:(id)arg1 forTVViewTag:(id)arg2;	// IMP=0x0010000000060bd6
- (id)valueForTVViewStyle:(id)arg1;	// IMP=0x0010000000060b36
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;	// IMP=0x0010000000060a8e
- (void)tv_setShowcaseFactor:(double)arg1;	// IMP=0x0010000000060a88
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000060a82
- (void)didSelect;	// IMP=0x0010000000060a7c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0010000000060a76
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000060a70
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000060a5e
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000060a58
- (id)tv_impressionableElementsForDocument:(id)arg1 parentViewController:(id)arg2;	// IMP=0x0010000000191aa2
- (id)tv_impressionableElementsForDocument:(id)arg1;	// IMP=0x0010000000191a8e
@end

