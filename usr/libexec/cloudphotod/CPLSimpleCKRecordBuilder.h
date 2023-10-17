//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordID, CPLRecordTargetMapping, NSString;
@protocol CPLCloudKitScopeProvider;

@interface CPLSimpleCKRecordBuilder : NSObject
{
    CKRecord *_ckRecord;	// 8 = 0x8
    id <CPLCloudKitScopeProvider> _scopeProvider;	// 16 = 0x10
    CKRecordID *_currentUserRecordID;	// 24 = 0x18
    CPLRecordTargetMapping *_targetMapping;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000bc205
@property(readonly, nonatomic) CPLRecordTargetMapping *targetMapping; // @synthesize targetMapping=_targetMapping;
@property(readonly, nonatomic) CKRecordID *currentUserRecordID; // @synthesize currentUserRecordID=_currentUserRecordID;
@property(readonly, nonatomic) id <CPLCloudKitScopeProvider> scopeProvider; // @synthesize scopeProvider=_scopeProvider;
@property(readonly, nonatomic) CKRecord *ckRecord; // @synthesize ckRecord=_ckRecord;
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000bc1c7
- (void)setNonNilEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000bc1b1
- (void)setEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000bc19b
- (void)setCKReferenceWithScopedIdentifier:(id)arg1 forKey:(id)arg2 referenceAction:(unsigned long long)arg3;	// IMP=0x00100000000bc022
- (void)setCKAsset:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000bc010
- (id)recordIDForResourcesOfRecordWithScopedIdentifier:(id)arg1 databaseScope:(long long *)arg2 error:(id *)arg3;	// IMP=0x00100000000bbf2e
- (id)_recordIDFromScopedIdentifier:(id)arg1 databaseScope:(long long *)arg2 error:(id *)arg3;	// IMP=0x00100000000bbdc9
- (id)initWithBaseCKRecord:(id)arg1 scopeProvider:(id)arg2 currentUserRecordID:(id)arg3 targetMapping:(id)arg4;	// IMP=0x00100000000bbce7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
