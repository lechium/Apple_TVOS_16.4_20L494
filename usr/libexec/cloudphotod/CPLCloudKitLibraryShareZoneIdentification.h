//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitScope;

@interface CPLCloudKitLibraryShareZoneIdentification
{
    CPLCloudKitScope *_stagingCloudKitScope;	// 40 = 0x28
}

+ (id)recordsToFetchToIdentifyZoneID:(id)arg1 proposedScopeType:(long long)arg2 currentUserID:(id)arg3;	// IMP=0x0040000000117255
+ (_Bool)isSupportedShareType:(id)arg1;	// IMP=0x0010000000117055
+ (id)shareType;	// IMP=0x0010000000117041
+ (id)shareRecordName;	// IMP=0x001000000011702d
+ (long long)_scopeTypeForCloudKitScope:(id)arg1;	// IMP=0x0010000000117010
+ (id)prefixForNewScopes;	// IMP=0x0010000000117006
+ (_Bool)isZoneIDForLibrary:(id)arg1;	// IMP=0x0010000000116fc8
- (void).cxx_destruct;	// IMP=0x00200000001186c1
@property(retain, nonatomic) CPLCloudKitScope *stagingCloudKitScope; // @synthesize stagingCloudKitScope=_stagingCloudKitScope;
- (id)proposedStagingZoneIdentificationWithCurrentUserID:(id)arg1;	// IMP=0x001000000011841f
- (void)validateCreateScopeTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011840f
- (void)validateAcceptSharedScopeTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001183ff
- (void)_checkUniqueShareWithTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000118272
- (void)_lookForSharedSyncZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011805c
- (id)recordsToUpdateFromScopeChange:(id)arg1 currentUserID:(id)arg2;	// IMP=0x0010000000117f3a
- (id)updatedFlagsFromDeletedCKRecordID:(id)arg1 recordType:(id)arg2;	// IMP=0x0010000000117efc
- (id)updatedScopeChangeFromScopeChange:(id)arg1 currentUserID:(id)arg2 withDeletedCKRecordID:(id)arg3 recordType:(id)arg4;	// IMP=0x0010000000117bf7
- (id)updatedFlagsFromCKRecord:(id)arg1;	// IMP=0x0010000000117bb9
- (id)updatedScopeChangeFromScopeChange:(id)arg1 currentUserID:(id)arg2 withCKRecord:(id)arg3;	// IMP=0x00100000001177a2
- (id)scopeFlagsUpdateFromCKRecords:(id)arg1;	// IMP=0x0010000000117764
- (id)scopeChangeFromCKRecords:(id)arg1 currentUserID:(id)arg2 previousScopeChange:(id)arg3;	// IMP=0x00100000001173c9
- (id)shareRecordIDToDelete;	// IMP=0x0010000000117205
- (id)cloudKitScope;	// IMP=0x00100000001171ac
- (_Bool)supportsDownloadOfChange:(id)arg1;	// IMP=0x0010000000117197
- (_Bool)supportsDownloadOfRecordClass:(Class)arg1;	// IMP=0x0010000000117182
- (_Bool)supportsUploadOfChange:(id)arg1;	// IMP=0x001000000011716d
- (_Bool)supportsZoneCreation;	// IMP=0x0010000000117153
- (_Bool)supportsZoneDelete;	// IMP=0x0010000000117139
- (_Bool)isSupportedShareType:(id)arg1;	// IMP=0x00100000001170c7

@end
