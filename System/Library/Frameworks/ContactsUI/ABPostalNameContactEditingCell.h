//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactCell.h"

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface ABPostalNameContactEditingCell : CNContactCell
{
    UITextField *_editingTextField;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000076b81
- (void)textFieldDidChange:(id)arg1;	// IMP=0x0000000000076a90
- (void)setCardGroupItem:(id)arg1;	// IMP=0x00000000000769a7
- (id)firstResponderItem;	// IMP=0x0000000000076992
- (void)prepareForReuse;	// IMP=0x0000000000076947
- (void)layoutSubviews;	// IMP=0x00000000000767f8
- (void)dealloc;	// IMP=0x000000000007676e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000007667c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

