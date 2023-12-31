//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABPreferredChannelContactPredicate : CNPredicate
{
    _Bool _limitOne;	// 24 = 0x18
    NSString *_preferredChannel;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000df792
- (void).cxx_destruct;	// IMP=0x00000000000dfe92
@property(nonatomic) _Bool limitOne; // @synthesize limitOne=_limitOne;
@property(copy, nonatomic) NSString *preferredChannel; // @synthesize preferredChannel=_preferredChannel;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dfb21
- (id)shortDebugDescription;	// IMP=0x00000000000dfb14
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000df99d
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000df94d
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000df945
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000df93d
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000df935
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000df894
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000df79a
- (id)initWithPreferredChannel:(id)arg1 limitOne:(_Bool)arg2;	// IMP=0x00000000000df6f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

