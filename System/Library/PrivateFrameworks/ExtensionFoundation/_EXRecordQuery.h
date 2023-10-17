//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_EXQuery.h"

@class LSExtensionPointRecord, NSPredicate;

__attribute__((visibility("hidden")))
@interface _EXRecordQuery : _EXQuery
{
    NSPredicate *_predicate;	// 32 = 0x20
    LSExtensionPointRecord *_record;	// 40 = 0x28
    CDStruct_4c969caf _hostAuditToken;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000001dad7
- (void).cxx_destruct;	// IMP=0x000000000001e0a9
@property(retain) LSExtensionPointRecord *record; // @synthesize record=_record;
- (void)setHostAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x000000000001e05f
- (CDStruct_4c969caf)hostAuditToken;	// IMP=0x000000000001e033
- (void)setPredicate:(id)arg1;	// IMP=0x000000000001e022
- (id)predicate;	// IMP=0x000000000001e00c
- (id)extensionPointRecords;	// IMP=0x000000000001dfa1
- (unsigned int)platform;	// IMP=0x000000000001df84
- (id)extensionPointIdentifier;	// IMP=0x000000000001df67
- (_Bool)matchesRecord:(id)arg1;	// IMP=0x000000000001dd9a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001dcea
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001dbf0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001db4d
- (id)initWithExtensionPoint:(id)arg1;	// IMP=0x000000000001dadf

@end

