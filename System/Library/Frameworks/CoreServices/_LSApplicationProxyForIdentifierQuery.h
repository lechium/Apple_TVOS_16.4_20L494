//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationProxyForIdentifierQuery
{
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000006da08
+ (id)alwaysAllowedBundleIdentifiers;	// IMP=0x004000000006d362
+ (id)queryWithIdentifier:(id)arg1;	// IMP=0x004000000006d2c7
- (void).cxx_destruct;	// IMP=0x000000000006db9d
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006dac2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006da10
- (unsigned long long)hash;	// IMP=0x000000000006d97a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006d7c9
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x000000000006d6e5
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d3ce

@end

