//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContactsInContainerPredicate : CNPredicate
{
    NSString *_parentContainerIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000026e82
- (void).cxx_destruct;	// IMP=0x0000000000027456
@property(readonly, copy, nonatomic) NSString *parentContainerIdentifier; // @synthesize parentContainerIdentifier=_parentContainerIdentifier;
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002728a
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x00000000000270d9
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x0000000000026ff3
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x0000000000026feb
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x0000000000026fe3
- (_Bool)cn_supportsNativeSorting;	// IMP=0x0000000000026fdb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026f5e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026e8a
- (id)initWithParentContainerIdentifier:(id)arg1;	// IMP=0x0000000000026db9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

