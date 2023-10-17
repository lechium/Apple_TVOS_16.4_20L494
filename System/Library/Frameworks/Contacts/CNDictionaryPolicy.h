//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPermissivePolicy.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CNDictionaryPolicy : CNPermissivePolicy
{
    NSDictionary *_policyDictionary;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000114a6c
- (void).cxx_destruct;	// IMP=0x0000000000114be0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000114bb6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000114a74
- (_Bool)isContactPropertySupported:(id)arg1;	// IMP=0x00000000001149c4
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;	// IMP=0x000000000011486b
- (id)supportedLabelsForContactProperty:(id)arg1;	// IMP=0x00000000001147b9
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;	// IMP=0x00000000001146db
- (id)unsupportedAttributesForLabeledContactProperty:(id)arg1;	// IMP=0x0000000000114662
- (id)contactRestrictionsForLabeledProperty:(id)arg1;	// IMP=0x00000000001145b3
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000114522

@end

