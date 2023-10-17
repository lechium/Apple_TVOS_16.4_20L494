//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKSQLiteDatabaseTable.h"

@interface CKSQLiteKeyValueStore : CKSQLiteDatabaseTable
{
}

+ (Class)entryClass;	// IMP=0x00800000000a2340
+ (id)dbProperties;	// IMP=0x00800000000a2333
- (void)setObjectValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x00000000000a425d
- (id)objectValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3;	// IMP=0x00000000000a406e
- (void)setUUIDValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x00000000000a3db7
- (id)UUIDValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3;	// IMP=0x00000000000a3bc8
- (void)setDateValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x00000000000a3911
- (id)dateValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3;	// IMP=0x00000000000a3722
- (void)setDataValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x00000000000a346b
- (id)dataValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3;	// IMP=0x00000000000a327c
- (void)setStringValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x00000000000a2fc5
- (id)stringValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3;	// IMP=0x00000000000a2dd6
- (void)setNumberValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x00000000000a2b1f
- (id)numberValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3;	// IMP=0x00000000000a2930
- (id)finishInitializing:(_Bool)arg1;	// IMP=0x00000000000a28c8
- (void)purgeOrphanedKeys;	// IMP=0x00000000000a2830
- (void)purgeOrphanedTableKeys;	// IMP=0x00000000000a261e
- (void)purgeOrphanedTableGroupKeys;	// IMP=0x00000000000a2351

@end

