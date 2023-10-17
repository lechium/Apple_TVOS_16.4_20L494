//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteSynthesizedVariable, NSString;

@interface CPLPrequeliteIgnoredRecords
{
    CPLPrequeliteSynthesizedVariable *_isEmptyVar;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000006ab86
- (void)writeTransactionDidFail;	// IMP=0x001000000006ab3d
- (id)status;	// IMP=0x001000000006a931
- (id)recordsDesignation;	// IMP=0x001000000006a924
- (_Bool)popCloudScopedIdentifiersToCheck:(id *)arg1 otherScopeIndex:(long long)arg2 maxCount:(long long)arg3 deletedCount:(long long *)arg4 error:(id *)arg5;	// IMP=0x001000000006a2fc
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x001000000006a1d9
- (_Bool)scopeIdentifier:(id)arg1 hasIgnoredRecordsBeforeDate:(id)arg2;	// IMP=0x001000000006a0b8
- (_Bool)setIgnoredDate:(id)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000069ef0
- (id)ignoredRecordsBeforeDate:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x00100000000699ea
- (_Bool)removeRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006981b
- (_Bool)addIgnoredRecord:(id)arg1 ignoredDate:(id)arg2 otherScopeIndex:(long long)arg3 error:(id *)arg4;	// IMP=0x001000000006957e
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000069445
- (id)ignoredRecordWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000069178
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000000687d0
- (_Bool)initializeStorage;	// IMP=0x00100000000685eb
- (_Bool)_isEmpty;	// IMP=0x00100000000684b0
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000068400

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

