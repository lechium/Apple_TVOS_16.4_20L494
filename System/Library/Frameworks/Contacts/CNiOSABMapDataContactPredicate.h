//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABMapDataContactPredicate : CNPredicate
{
    NSString *_mapString;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000104485
- (void).cxx_destruct;	// IMP=0x00000000001047e6
@property(readonly, copy, nonatomic) NSString *mapString; // @synthesize mapString=_mapString;
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001046fc
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000001045f6
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000001045ee
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000001045e6
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000001045de
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000104561
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010448d
- (id)initWithString:(id)arg1;	// IMP=0x000000000010440b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
