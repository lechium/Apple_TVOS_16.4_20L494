//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteCacheTable.h>

@interface CKDIdentityCacheTable : CKSQLiteCacheTable
{
}

+ (Class)entryClass;	// IMP=0x0080000000060075
+ (id)dbProperties;	// IMP=0x0080000000060068
- (id)cachedIdentityForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000060468
- (id)insertUserIdentity:(id)arg1 forLookupInfo:(id)arg2 container:(id)arg3;	// IMP=0x00000000000602a1
- (void)deleteUserIdentityForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000060201
- (id)predicateForMatchingLookupInfoInContainer;	// IMP=0x00000000000601df
- (id)valuesDictionaryForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000060086

@end

