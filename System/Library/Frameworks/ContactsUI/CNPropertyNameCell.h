//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactCell.h"

@class CNPropertyGroupItem, UIResponder, UITextField;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyNameCell : CNContactCell
{
    UITextField *_textField;	// 8 = 0x8
    UIResponder *_firstResponderItem;	// 16 = 0x10
    id <CNPropertyCellDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000093063
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIResponder *firstResponderItem; // @synthesize firstResponderItem=_firstResponderItem;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000092f43
@property(retain, nonatomic) CNPropertyGroupItem *propertyItem;
- (void)setCardGroupItem:(id)arg1;	// IMP=0x0000000000092b7a
- (id)constantConstraints;	// IMP=0x0000000000092855
- (void)textFieldChanged:(id)arg1;	// IMP=0x00000000000926c4
- (void)dealloc;	// IMP=0x000000000009264f
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000092391

@end

