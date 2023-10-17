//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_EXQuery.h"

@class NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface _EXValuesQuery : _EXQuery
{
    unsigned int _platform;	// 32 = 0x20
    NSString *_extensionPointIdentifier;	// 40 = 0x28
    NSPredicate *_predicate;	// 48 = 0x30
    CDStruct_4c969caf _hostAuditToken;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000001e0da
- (void).cxx_destruct;	// IMP=0x000000000001ef16
- (void)setHostAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x000000000001eef3
- (CDStruct_4c969caf)hostAuditToken;	// IMP=0x000000000001eec7
- (void)setPlatform:(unsigned int)arg1;	// IMP=0x000000000001eeb7
- (unsigned int)platform;	// IMP=0x000000000001eea7
- (void)setPredicate:(id)arg1;	// IMP=0x000000000001ee96
- (id)predicate;	// IMP=0x000000000001ee80
- (void)setExtensionPointIdentifier:(id)arg1;	// IMP=0x000000000001ee6f
- (id)extensionPointIdentifier;	// IMP=0x000000000001ee59
- (id)description;	// IMP=0x000000000001edda
- (_Bool)matchesRecord:(id)arg1;	// IMP=0x000000000001ec32
- (unsigned long long)hash;	// IMP=0x000000000001ebd1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001eb6e
- (_Bool)isEqualToQuery:(id)arg1;	// IMP=0x000000000001ea0a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e92a
- (id)extensionPointRecords;	// IMP=0x000000000001e5a6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e490
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e2ad
- (id)initWithExtensionPointIdentifier:(id)arg1 predicate:(id)arg2;	// IMP=0x000000000001e1d9
- (id)initWithExtensionPointIdentifier:(id)arg1;	// IMP=0x000000000001e14e
- (id)init;	// IMP=0x000000000001e0e2

@end
