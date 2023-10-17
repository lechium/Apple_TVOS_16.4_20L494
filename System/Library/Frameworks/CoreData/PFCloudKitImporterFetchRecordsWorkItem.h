//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterFetchRecordsWorkItem
{
    NSMutableArray *_updatedObjectIDs;	// 8 = 0x8
    NSMutableDictionary *_failedObjectIDsToError;	// 16 = 0x10
    NSMutableDictionary *_recordIDToObjectID;	// 24 = 0x18
    NSMutableDictionary *_operationsToExecute;	// 32 = 0x20
}

- (id)entityNameToRelationshipsToUpdate;	// IMP=0x00000000001d4590
- (id)entityNameToAttributesToUpdate;	// IMP=0x00000000001d4523
- (id)createMirroringResultForRequest:(id)arg1 storeIdentifier:(id)arg2 success:(_Bool)arg3 madeChanges:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000001d43d5
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d2b6f
- (id)description;	// IMP=0x00000000001d2ab0
- (void)dealloc;	// IMP=0x00000000001d2a21
- (id)initWithOptions:(id)arg1 request:(id)arg2;	// IMP=0x00000000001d2989

@end
