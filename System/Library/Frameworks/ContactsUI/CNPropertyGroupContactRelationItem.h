//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNContactRelation;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupContactRelationItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x006000000008b41f
- (id)valueForDisplayString:(id)arg1;	// IMP=0x000000000008b4f4
- (id)displayStringForValue:(id)arg1;	// IMP=0x000000000008b4df
- (id)normalizedValue;	// IMP=0x000000000008b48f
@property(readonly, nonatomic) CNContactRelation *contactRelation;

@end

