//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABHandleStringsContactPredicate
{
}

+ (id)peopleForPredicate:(id)arg1 sortOrder:(unsigned int)arg2 addressBook:(void *)arg3;	// IMP=0x001000000006c0ef
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006c143
- (id)handlesPredicateWithMap:(id)arg1;	// IMP=0x000000000006bf8e
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x000000000006bd1d
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x000000000006bafb
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x000000000006baf3
- (_Bool)cn_supportsNativeSorting;	// IMP=0x000000000006baeb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

