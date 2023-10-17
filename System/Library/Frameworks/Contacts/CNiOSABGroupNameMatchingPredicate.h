//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupNameMatchingPredicate : CNPredicate
{
    NSString *_name;	// 24 = 0x18
}

+ (id)groupNameTokenizingCharacterSet;	// IMP=0x00100000001033ea
+ (id)tokenizeString:(id)arg1;	// IMP=0x001000000010333f
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000102e5f
- (void).cxx_destruct;	// IMP=0x0000000000103562
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (_Bool)groupName:(id)arg1 matchesSearchTokens:(id)arg2;	// IMP=0x00000000001031ac
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000000102fb8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000102f3b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000102e67
- (id)initWithName:(id)arg1;	// IMP=0x0000000000102d67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

