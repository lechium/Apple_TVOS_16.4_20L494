//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class UIButton, UIColor, UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellDetailDisclosureView : UIControl
{
    UIButton *_accessoryButton;	// 144 = 0x90
    UIImageView *_disclosureView;	// 152 = 0x98
    UITableViewCell *_cell;	// 160 = 0xa0
    UIColor *_accessoryTintColor;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000e16e6e
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
@property(readonly, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000e16da0
- (void)_updateDisclosureChevronImage;	// IMP=0x0000000000e16d22
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;	// IMP=0x0000000000e16d05
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;	// IMP=0x0000000000e16ce8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000e16cb8
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000e16c62
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 cell:(id)arg3 buttonType:(long long)arg4 shouldReverseLayoutDirection:(_Bool)arg5;	// IMP=0x0000000000e16825

@end

