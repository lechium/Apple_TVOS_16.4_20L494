//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNPhoneNumber;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupPhoneItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x00600000000878ce
- (id)valueForDisplayString:(id)arg1;	// IMP=0x0000000000087bba
- (id)displayStringForValue:(id)arg1;	// IMP=0x0000000000087b40
- (id)bestLabel:(id)arg1;	// IMP=0x0000000000087994
- (id)defaultActionURL;	// IMP=0x000000000008798e
- (id)normalizedValue;	// IMP=0x000000000008793e
@property(readonly, nonatomic) CNPhoneNumber *phoneNumber;

@end

