//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CNRepeatingGradientSeparatorView, NSArray, NSDictionary, UIImageView, UITextField;

__attribute__((visibility("hidden")))
@interface CNAddressComponentTextFieldCell : UITableViewCell
{
    NSArray *_splitFieldConstraints;	// 8 = 0x8
    NSArray *_oneFieldConstraints;	// 16 = 0x10
    _Bool _usesSplitTextFields;	// 24 = 0x18
    UITextField *_textFieldForChevron;	// 32 = 0x20
    UITextField *_textFieldLeft;	// 40 = 0x28
    UITextField *_textFieldRight;	// 48 = 0x30
    CNRepeatingGradientSeparatorView *_separator;	// 56 = 0x38
    UIImageView *_chevron;	// 64 = 0x40
    NSArray *_componentConstraints;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000a99a6
@property(retain, nonatomic) NSArray *componentConstraints; // @synthesize componentConstraints=_componentConstraints;
@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(retain, nonatomic) CNRepeatingGradientSeparatorView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UITextField *textFieldRight; // @synthesize textFieldRight=_textFieldRight;
@property(retain, nonatomic) UITextField *textFieldLeft; // @synthesize textFieldLeft=_textFieldLeft;
@property(retain, nonatomic) UITextField *textFieldForChevron; // @synthesize textFieldForChevron=_textFieldForChevron;
@property(nonatomic) _Bool usesSplitTextFields; // @synthesize usesSplitTextFields=_usesSplitTextFields;
@property(copy, nonatomic) NSDictionary *textAttributes;
@property(readonly, nonatomic) NSArray *textFields;
- (void)updateConstraints;	// IMP=0x00000000000a8cee
- (id)_addTextField;	// IMP=0x00000000000a8c41
- (void)dealloc;	// IMP=0x00000000000a8a94
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000a8a05

@end

