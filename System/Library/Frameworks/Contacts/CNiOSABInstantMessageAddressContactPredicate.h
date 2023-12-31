//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class CNInstantMessageAddress, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABInstantMessageAddressContactPredicate : CNPredicate
{
    CNInstantMessageAddress *_imAddress;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000029c1
- (void).cxx_destruct;	// IMP=0x0000000000003131
@property(copy, nonatomic) CNInstantMessageAddress *imAddress; // @synthesize imAddress=_imAddress;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002eed
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002e14
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x0000000000002bc2
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x0000000000002b32
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x0000000000002b2a
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x0000000000002b22
- (_Bool)cn_supportsNativeSorting;	// IMP=0x0000000000002b1a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002a9d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000029c9
- (id)initWithInstantMessageAddress:(id)arg1;	// IMP=0x0000000000002930

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

