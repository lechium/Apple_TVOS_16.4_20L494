//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (CPLCloudKitImplementation)
+ (id)cpl_recordFromCPLRecordChange:(id)arg1 scopeProvider:(id)arg2 currentUserRecordID:(id)arg3 inZone:(id)arg4 info:(CDStruct_14f26992 *)arg5 error:(id *)arg6;	// IMP=0x00200000000ef7aa
+ (id)cpl_expungedSharedRecordFromCPLRecordChange:(id)arg1 inZone:(id)arg2 target:(id)arg3;	// IMP=0x00100000000ef63e
+ (id)cpl_expungedRecordFromCPLRecordChange:(id)arg1 inZone:(id)arg2 target:(id)arg3;	// IMP=0x00100000000ef4d2
+ (Class)cpl_recordChangeClassForRecordType:(id)arg1;	// IMP=0x00100000000ecfb7
- (id)cplResourcesWithScopedIdentifier:(id)arg1 coherent:(_Bool *)arg2 forRecord:(id)arg3;	// IMP=0x00200000000f04a7
- (id)cplResourceWithType:(unsigned long long)arg1 scopedIdentifier:(id)arg2 isCoherent:(_Bool *)arg3;	// IMP=0x00100000000efbb6
- (id)cpl_recordChangeMissingResourceProperties:(id *)arg1 scopeIdentifier:(id)arg2 scopeProvider:(id)arg3 currentUserRecordID:(id)arg4;	// IMP=0x00100000000ef93c
- (void)cpl_setEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000ef0c5
- (void)cpl_setNonNilEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000ef0ac
- (id)cpl_decryptedObjectForKey:(id)arg1 validateClass:(Class)arg2;	// IMP=0x00100000000ee8f2
- (id)cpl_destinationRecordIDInPrivateScopeWithCurrentUserRecordID:(id)arg1 proposedDestinationRecordID:(id)arg2;	// IMP=0x00100000000ee5da
- (void)cpl_updateContributorsOnSharedRecord:(id)arg1;	// IMP=0x00100000000ee08f
- (void)cpl_updatePrivateRecordSharedToRecordWithID:(id)arg1 currentUserRecordID:(id)arg2 setSparseRecordFlag:(_Bool)arg3 force:(_Bool)arg4;	// IMP=0x00100000000ede9d
- (_Bool)cpl_isSharedWithScopeWithIdentifier:(id)arg1 scopeProvider:(id)arg2 currentUserRecordID:(id)arg3 isSparseRecord:(_Bool *)arg4;	// IMP=0x00100000000edae6
- (_Bool)cpl_supportsSharingScopeIdentifier;	// IMP=0x00100000000eda93
- (id)cpl_sharingRecordScopedIdentifierWithScopeProvider:(id)arg1 currentUserRecordID:(id)arg2 isSparseRecord:(_Bool *)arg3;	// IMP=0x00100000000ed5fb
- (_Bool)cpl_isSparseRecord;	// IMP=0x00100000000ed5b0
- (_Bool)cpl_inExpunged;	// IMP=0x00100000000ed565
- (id)cplChangedKeys;	// IMP=0x00100000000ed454
- (void)cplValidateAndWarnIntegrityOfResourceData:(id)arg1 withFingerPrintKey:(id)arg2 andFileSizeKey:(id)arg3;	// IMP=0x00100000000ed155
- (id)cpl_objectForKey:(id)arg1 validateClass:(Class)arg2;	// IMP=0x00100000000ed00b
- (Class)cpl_recordChangeClass;	// IMP=0x00100000000ecfc4
- (id)cplFullDescription;	// IMP=0x00100000000eca74
- (id)initWithCPLArchiver:(id)arg1;	// IMP=0x001000000011330e
- (id)plistArchiveWithCPLArchiver:(id)arg1;	// IMP=0x0010000000113267
- (id)selfIfMatchesRecordName:(id)arg1;	// IMP=0x001000000011a40c
@end

