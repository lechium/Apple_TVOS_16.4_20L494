//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABOrganizationNameContactPredicate : CNPredicate
{
    NSString *_organizationName;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000e2dd7
- (void).cxx_destruct;	// IMP=0x00000000000e350d
@property(readonly, copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e330e
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e32ab
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x00000000000e30ff
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000e3019
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000e3011
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000e3009
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000e3001
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e2eb3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e2ddf
- (id)initWithOrganizationName:(id)arg1;	// IMP=0x00000000000e2d46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
