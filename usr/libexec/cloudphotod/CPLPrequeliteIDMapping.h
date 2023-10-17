//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet, NSString;

@interface CPLPrequeliteIDMapping
{
    NSMutableDictionary *_localToCloudScopedIdentifiersCache;	// 8 = 0x8
    NSMutableDictionary *_cloudToLocalScopedIdentifiersCache;	// 16 = 0x10
    NSMutableSet *_nonFinalLocalScopedIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000558b7
- (void)transactionDidFinish;	// IMP=0x0010000000055876
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0010000000055761
- (id)scopeIndexColumnName;	// IMP=0x0010000000055754
- (id)status;	// IMP=0x00100000000555fe
- (_Bool)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000055468
- (_Bool)removeMappingForLocalScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000551fc
- (_Bool)addAddEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000054f0f
- (_Bool)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000054d0c
- (_Bool)removeMappingForCloudScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000054a9f
- (_Bool)hasPendingIdentifiers;	// IMP=0x00100000000549cb
- (_Bool)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg1 asFinalWithError:(id *)arg2;	// IMP=0x001000000005482a
- (_Bool)setFinalCloudScopedIdentifier:(id)arg1 forPendingCloudScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000054579
- (_Bool)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0010000000053eff
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;	// IMP=0x0010000000053bfa
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;	// IMP=0x00100000000538f3
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000000536a8
- (_Bool)initializeStorage;	// IMP=0x00100000000535ce
- (void)_cacheLocalScopedIdentifier:(id)arg1 cloudScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3;	// IMP=0x0010000000053510
- (void)_clearScopedIdentifiersCache;	// IMP=0x00100000000534b6
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000053415

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

