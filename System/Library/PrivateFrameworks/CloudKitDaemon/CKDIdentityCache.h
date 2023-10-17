//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteTableGroup.h>

@interface CKDIdentityCache : CKSQLiteTableGroup
{
}

+ (id)cacheWithDeviceContext:(id)arg1;	// IMP=0x0080000000060659
+ (unsigned long long)ttlDays;	// IMP=0x00800000000605c4
- (void)cacheUserIdentity:(id)arg1 forLookupInfo:(id)arg2 container:(id)arg3;	// IMP=0x00000000000608b9
- (void)removeCachedValueForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000060833
- (id)cachedIdentityForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000006079c
- (id)cache;	// IMP=0x0000000000060783
- (id)createTables;	// IMP=0x00000000000606c5

@end
