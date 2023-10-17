//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIAssistantBarRoundedButtonViewButton : UIButton
{
    UIColor *_normalBackgroundColor;	// 152 = 0x98
    UIColor *_highlightedBackgroundColor;	// 160 = 0xa0
    UIColor *_normalTitleColor;	// 168 = 0xa8
    UIColor *_highlightedTitleColor;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000aceb31
@property(retain, nonatomic) UIColor *highlightedTitleColor; // @synthesize highlightedTitleColor=_highlightedTitleColor;
@property(retain, nonatomic) UIColor *normalTitleColor; // @synthesize normalTitleColor=_normalTitleColor;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
- (void)_updateBackgroundAndTitleColor;	// IMP=0x0000000000ace913
- (id)_titleColorForState:(unsigned long long)arg1;	// IMP=0x0000000000ace901
- (id)_currentTitleColor;	// IMP=0x0000000000ace8b5
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000ace874

@end

