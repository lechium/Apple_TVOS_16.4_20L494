//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLCKBatchUploadPlanner, CPLCKShareRecordTodo, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface CPLCKUnsharePlan : NSObject
{
    NSMutableArray *_todos;	// 8 = 0x8
    NSMutableDictionary *_todoPerScopedIdentifier;	// 16 = 0x10
    CPLCKShareRecordTodo *_currentTodo;	// 24 = 0x18
    _Bool _wasSplit;	// 32 = 0x20
    NSArray *_ckRecordsToUpdate;	// 40 = 0x28
    NSArray *_ckRecordIDsToDelete;	// 48 = 0x30
    CPLCKBatchUploadPlanner *_planner;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000b6490
@property(nonatomic) __weak CPLCKBatchUploadPlanner *planner; // @synthesize planner=_planner;
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x00100000000b63ff
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x00100000000b6395
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x00100000000b632b
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x00100000000b62c1
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x00100000000b6257
- (id)finalizedDestinationCKRecordFromProposedCKRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b6149
- (id)recordNameInDestinationCKRecordFromRecordName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b5fb0
- (_Bool)shouldCopyCKRecordKeyToDestinationCKRecord:(id)arg1;	// IMP=0x00100000000b5e9b
- (id)baseDestinationCKRecordForSourceCKRecord:(id)arg1 destinationCKRecordID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000b5a12
- (void)prepareCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000000b5745
- (_Bool)shouldCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000000b573d
@property(readonly, nonatomic) NSArray *privateRecordIDs;
- (void)updateTargetMappingAfterUploadWithRealSourceRecordIDs:(id)arg1;	// IMP=0x00100000000b5413
- (void)didFinishUploadOfRecordsWithError:(id)arg1;	// IMP=0x00100000000b540d
- (void)willUploadRecords;	// IMP=0x00100000000b5407
- (id)ckRecordIDsToDelete;	// IMP=0x00100000000b53e2
- (id)ckRecordsToUpdate;	// IMP=0x00100000000b53bd
- (void)_prepareRecordsToDelete;	// IMP=0x00100000000b5045
@property(readonly, nonatomic) NSArray *ckRecordIDsToUnshare;
@property(readonly, nonatomic) unsigned long long count;
- (void)removeShareTodoForScopedIdentifier:(id)arg1;	// IMP=0x00100000000b4dc2
- (_Bool)hasShareTodoForScopedIdentifier:(id)arg1;	// IMP=0x00100000000b4d8b
- (void)addShareTodo:(id)arg1;	// IMP=0x00100000000b4d25
- (id)initWithPlanner:(id)arg1;	// IMP=0x00100000000b4c88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
