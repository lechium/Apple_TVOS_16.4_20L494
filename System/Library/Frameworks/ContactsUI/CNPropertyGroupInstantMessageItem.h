//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNInstantMessageAddress;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupInstantMessageItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x0060000000084420
- (_Bool)isEquivalentToItem:(id)arg1;	// IMP=0x0000000000084a85
- (id)editingStringValue;	// IMP=0x0000000000084a35
- (id)valueForDisplayString:(id)arg1;	// IMP=0x00000000000849ad
- (id)displayStringForValue:(id)arg1;	// IMP=0x0000000000084998
- (id)displayLabel;	// IMP=0x00000000000847ad
- (id)defaultActionURL;	// IMP=0x00000000000844c4
@property(readonly, nonatomic) CNInstantMessageAddress *imAddress;

@end
