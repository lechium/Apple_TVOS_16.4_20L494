//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNCardGroupItem.h"

@class CNContact;

__attribute__((visibility("hidden")))
@interface CNCardLinkedCardsGroupItem : CNCardGroupItem
{
    CNContact *_contact;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000db34
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)initWithContact:(id)arg1;	// IMP=0x000000000000daa1

@end

