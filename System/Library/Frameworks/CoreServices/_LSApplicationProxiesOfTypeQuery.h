//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSApplicationProxiesOfTypeQuery
{
    unsigned long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000006cd4a
+ (id)queryWithType:(unsigned long long)arg1;	// IMP=0x006000000006c7fe
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006cddd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006cd52
- (unsigned long long)hash;	// IMP=0x000000000006ccfe
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006cbf8
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x000000000006cbf0
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c83a

@end

