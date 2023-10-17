//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CNContact, CNContactFormatter, CNContactMatchInfo;
@protocol ABStyleProvider;

__attribute__((visibility("hidden")))
@interface CNContactListTableViewCell : UITableViewCell
{
    _Bool _isMeCard;	// 8 = 0x8
    id <ABStyleProvider> _styleProvider;	// 16 = 0x10
    CNContactFormatter *_contactFormatter;	// 24 = 0x18
    CNContact *_contact;	// 32 = 0x20
    CNContactMatchInfo *_contactMatchInfo;	// 40 = 0x28
}

+ (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x006000000004e795
+ (void)initialize;	// IMP=0x006000000004e691
- (void).cxx_destruct;	// IMP=0x000000000004ef6d
@property(nonatomic) _Bool isMeCard; // @synthesize isMeCard=_isMeCard;
@property(retain, nonatomic) CNContactMatchInfo *contactMatchInfo; // @synthesize contactMatchInfo=_contactMatchInfo;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(readonly, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
- (void)setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x000000000004ec8e
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000004e79b
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000004e714

@end

