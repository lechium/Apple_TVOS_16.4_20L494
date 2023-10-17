//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIToolbarButton.h"

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface UIToolbarTextButton : UIToolbarButton
{
    NSString *_title;	// 368 = 0x170
    NSString *_pressedTitle;	// 376 = 0x178
    NSSet *_possibleTitles;	// 384 = 0x180
}

- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001255c6
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000125359
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000012531b
- (void)layoutSubviews;	// IMP=0x0000000000125082
- (void)_setPressed:(_Bool)arg1;	// IMP=0x0000000000124fcc
- (void)dealloc;	// IMP=0x0000000000124f66
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000124e19
- (id)initWithTitle:(id)arg1 pressedTitle:(id)arg2 withFont:(id)arg3 withBarStyle:(long long)arg4 withStyle:(long long)arg5 withTitleWidth:(double)arg6 possibleTitles:(id)arg7 withToolbarTintColor:(id)arg8;	// IMP=0x0000000000124b5f

@end

