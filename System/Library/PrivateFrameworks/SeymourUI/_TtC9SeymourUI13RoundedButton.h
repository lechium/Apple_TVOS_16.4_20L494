//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class MISSING_TYPE, UIColor;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI13RoundedButton : UIButton
{
    MISSING_TYPE *currentState;	// 8 = 0x8
    MISSING_TYPE *layout;	// 56 = 0x38
    MISSING_TYPE *indefiniteSpinner;	// 88 = 0x58
    MISSING_TYPE *defaults;	// 96 = 0x60
    MISSING_TYPE *highlightTimer;	// 176 = 0xb0
    MISSING_TYPE *lastFont;	// 184 = 0xb8
    MISSING_TYPE *lastSymbolScale;	// 192 = 0xc0
    MISSING_TYPE *shouldShowHighlight;	// 201 = 0xc9
    MISSING_TYPE *undimmedBackgroundColor;	// 208 = 0xd0
    MISSING_TYPE *defaultContentInsets;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000044a240
- (void)handleTouchUp:(id)arg1;	// IMP=0x000000000044a1e0
- (void)handleTouchDown:(id)arg1;	// IMP=0x000000000044a120
- (void)handleTimer:(id)arg1;	// IMP=0x000000000044a0f0
- (void)textSizeChanged:(id)arg1;	// IMP=0x0000000000449ff0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000004496f0
- (void)tintColorDidChange;	// IMP=0x00000000004496c0
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000449480
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000004493e0
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000004493c0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004493a0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004491c0
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x0000000000448d00
@property(nonatomic, retain) UIColor *backgroundColor;

@end

