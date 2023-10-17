//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CNContactFormatterSmartFetcher
{
    _Bool _ignoresNickname;	// 8 = 0x8
    _Bool _ignoresOrganization;	// 9 = 0x9
    NSSet *_mandatoryNameProperties;	// 16 = 0x10
    NSDictionary *_fallBackNamePropertyByNameKey;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000caa8a
- (void).cxx_destruct;	// IMP=0x00000000000cbdf9
@property(nonatomic) _Bool ignoresOrganization; // @synthesize ignoresOrganization=_ignoresOrganization;
@property(nonatomic) _Bool ignoresNickname; // @synthesize ignoresNickname=_ignoresNickname;
- (id)_cn_ignorableKeys;	// IMP=0x00000000000cbda0
- (id)_cn_optionalKeys;	// IMP=0x00000000000cba61
- (id)_cn_requiredKeys;	// IMP=0x00000000000cb929
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cb46f
- (unsigned long long)hash;	// IMP=0x00000000000cb01b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cae82
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cadb2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cacd4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000caa92
- (id)init;	// IMP=0x00000000000ca7d3

@end
