//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CPLCloudKitCMMZoneIdentification
{
}

+ (id)libraryInfoRecordName;	// IMP=0x0040000000116aa6
+ (id)shareType;	// IMP=0x0010000000116a99
+ (id)shareRecordName;	// IMP=0x0010000000116a8c
+ (id)rootRecordName;	// IMP=0x0010000000116a72
+ (_Bool)supportsCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x0010000000116a51
+ (long long)scopeTypeForCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(id)arg3 currentUserID:(id)arg4;	// IMP=0x001000000011686d
+ (id)prefixForNewScopes;	// IMP=0x0010000000116860
+ (_Bool)isZoneIDForCMMZone:(id)arg1;	// IMP=0x0010000000116812
- (_Bool)supportsDeletionOfRecordClass:(Class)arg1;	// IMP=0x0040000000116f4d
- (_Bool)supportsDirectDeletionOfRecordClass:(Class)arg1;	// IMP=0x0010000000116ed2
- (_Bool)supportsDownloadOfRecordClass:(Class)arg1;	// IMP=0x0010000000116e57
- (_Bool)supportsUploadOfRecordClass:(Class)arg1;	// IMP=0x0010000000116ddc
- (_Bool)supportsDeletionOfRecord:(id)arg1;	// IMP=0x0010000000116d3e
- (_Bool)supportsDirectDeletionOfRecord:(id)arg1;	// IMP=0x0010000000116ca0
- (_Bool)supportsDownloadOfChange:(id)arg1;	// IMP=0x0010000000116c02
- (_Bool)supportsUploadOfChange:(id)arg1;	// IMP=0x0010000000116b34
- (id)shareRecordIDToDelete;	// IMP=0x0010000000116ae7
- (_Bool)supportsZoneCreation;	// IMP=0x0010000000116acd
- (_Bool)supportsZoneDelete;	// IMP=0x0010000000116ab3
- (id)rootRecordType;	// IMP=0x0010000000116a7f

@end

