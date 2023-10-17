//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKSyncEngine, NSMutableArray, NSMutableSet, NSString, SYDCoreDataStore;
@protocol OS_dispatch_queue, SYDSyncManagerDelegate;

@interface SYDSyncManager : NSObject
{
    _Bool _alwaysSaveRecordZones;	// 8 = 0x8
    CKSyncEngine *_engine;	// 16 = 0x10
    CKContainer *_container;	// 24 = 0x18
    SYDCoreDataStore *_coreDataStore;	// 32 = 0x20
    long long _storeType;	// 40 = 0x28
    NSString *_personaUniqueString;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 64 = 0x40
    NSMutableSet *_storeIdentifiersWithChangedValuesDuringFetchChanges;	// 72 = 0x48
    NSMutableArray *_pendingFetchedRecords;	// 80 = 0x50
    NSMutableArray *_pendingDeletedRecordIDs;	// 88 = 0x58
    unsigned long long _maxPendingFetchedRecords;	// 96 = 0x60
    id <SYDSyncManagerDelegate> _delegate;	// 104 = 0x68
}

+ (_Bool)shouldIgnoreFetchError:(id)arg1;	// IMP=0x002000000001193e
- (void).cxx_destruct;	// IMP=0x002000000001a72d
@property(nonatomic) __weak id <SYDSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxPendingFetchedRecords; // @synthesize maxPendingFetchedRecords=_maxPendingFetchedRecords;
@property(nonatomic) _Bool alwaysSaveRecordZones; // @synthesize alwaysSaveRecordZones=_alwaysSaveRecordZones;
@property(retain, nonatomic) NSMutableArray *pendingDeletedRecordIDs; // @synthesize pendingDeletedRecordIDs=_pendingDeletedRecordIDs;
@property(retain, nonatomic) NSMutableArray *pendingFetchedRecords; // @synthesize pendingFetchedRecords=_pendingFetchedRecords;
@property(retain, nonatomic) NSMutableSet *storeIdentifiersWithChangedValuesDuringFetchChanges; // @synthesize storeIdentifiersWithChangedValuesDuringFetchChanges=_storeIdentifiersWithChangedValuesDuringFetchChanges;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *personaUniqueString; // @synthesize personaUniqueString=_personaUniqueString;
@property(nonatomic) long long storeType; // @synthesize storeType=_storeType;
@property(retain, nonatomic) SYDCoreDataStore *coreDataStore; // @synthesize coreDataStore=_coreDataStore;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void)deleteDataFromDisk;	// IMP=0x000000000001a4ff
- (id)syncEngine:(id)arg1 relatedApplicationBundleIdentifiersForZoneIDs:(id)arg2 recordIDs:(id)arg3;	// IMP=0x001000000001a10b
- (void)syncEngineDidEndFetchingChanges:(id)arg1;	// IMP=0x0010000000019ce2
- (void)syncEngineWillBeginFetchingChanges:(id)arg1;	// IMP=0x0010000000019b9e
- (_Bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;	// IMP=0x0010000000019aaa
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;	// IMP=0x00100000000198bd
- (void)syncEngine:(id)arg1 failedToDeleteRecordZoneWithID:(id)arg2 error:(id)arg3;	// IMP=0x001000000001978d
- (void)syncEngine:(id)arg1 didDeleteRecordZoneWithID:(id)arg2;	// IMP=0x0010000000019554
- (void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3;	// IMP=0x0010000000019424
- (void)syncEngine:(id)arg1 didSaveRecordZones:(id)arg2;	// IMP=0x00100000000192f4
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;	// IMP=0x001000000001919d
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;	// IMP=0x0010000000018ed5
- (void)deduplicateRecordForKeyValue:(id)arg1 withNewlyFetchedRecord:(id)arg2;	// IMP=0x0010000000018380
- (void)processFetchedRecords:(id)arg1 deletedRecordIDs:(id)arg2;	// IMP=0x0010000000016c27
- (void)processPendingFetchedRecordsWithReason:(id)arg1;	// IMP=0x0010000000016981
- (void)saveSyncAnchorSystemFieldsRecord:(id)arg1;	// IMP=0x0010000000016746
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;	// IMP=0x00100000000163f9
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;	// IMP=0x0010000000016290
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;	// IMP=0x0010000000015d38
- (void)failedToSaveKeyValueRecord:(id)arg1 error:(id)arg2;	// IMP=0x00100000000148c4
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;	// IMP=0x001000000001443f
- (void)didSaveKeyValueRecord:(id)arg1;	// IMP=0x0010000000013f85
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;	// IMP=0x0010000000013cae
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;	// IMP=0x00100000000137a8
- (void)_markZoneForDeletionOnManateeFailureForRecordZoneID:(id)arg1;	// IMP=0x001000000001363a
- (void)syncEngine:(id)arg1 failedToFetchChangesForRecordZoneID:(id)arg2 error:(id)arg3;	// IMP=0x0010000000013417
- (void)_queue_resetSyncEngine;	// IMP=0x0010000000013348
- (void)resetSyncEngineWithContainer:(id)arg1;	// IMP=0x001000000001322a
- (void)resetSyncEngine;	// IMP=0x00100000000131a3
- (void)addSyncAnchorRecordIDToSaveIfNecessaryForStoreIdentifier:(id)arg1;	// IMP=0x00100000000130ab
- (void)addKeyValueRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2;	// IMP=0x0010000000012bf5
- (void)markAllKeyValuesAsNeedingToBeUploadedForStoreWithIdentifier:(id)arg1;	// IMP=0x0010000000012862
- (void)markAllKeyValuesAsNeedingToBeUploaded;	// IMP=0x00100000000125a9
- (id)newRecordNameForKey:(id)arg1;	// IMP=0x00100000000124b5
- (_Bool)hasPendingChangesToUpload;	// IMP=0x0010000000012471
@property(nonatomic, getter=isAutomaticSyncingEnabled) _Bool automaticSyncingEnabled;
- (id)recordIDForKey:(id)arg1 inStoreWithIdentifier:(id)arg2;	// IMP=0x001000000001231d
- (void)deleteDataFromCloudWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011cc4
- (_Bool)shouldRetryAfterModifyError:(id)arg1;	// IMP=0x0010000000011af6
- (void)fetchChangesFromCloudForStoreIdentifiers:(id)arg1 group:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011246
- (void)fetchChangesFromCloudForAllStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001122d
- (void)savePendingChangesToCloudForStoreIdentifiers:(id)arg1 group:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000107ba
- (void)savePendingChangesToCloudForAllStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000107a1
- (void)synchronizeAllStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010500
- (void)synchronizeStoresWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000fea0
- (void)synchronizeStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000fdaf
- (_Bool)removeObjectForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000fd94
- (_Bool)removeObjectForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 excludeFromChangeTracking:(_Bool)arg3 didRemoveValue:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x001000000000f751
- (_Bool)removeObjectForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 excludeFromChangeTracking:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000000f72f
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 inStoreWithIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x001000000000f70c
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 inStoreWithIdentifier:(id)arg3 excludeFromChangeTracking:(_Bool)arg4 enforceQuota:(_Bool)arg5 didChangeValue:(_Bool *)arg6 error:(id *)arg7;	// IMP=0x001000000000ea63
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 inStoreWithIdentifier:(id)arg3 excludeFromChangeTracking:(_Bool)arg4 enforceQuota:(_Bool)arg5 error:(id *)arg6;	// IMP=0x001000000000ea3c
- (id)objectForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000e528
- (_Bool)shouldSyncStoreWithIdentifier:(id)arg1;	// IMP=0x001000000000e444
@property(readonly, nonatomic) _Bool useSyncAnchor;
- (_Bool)useUUIDRecordNames;	// IMP=0x001000000000e409
- (_Bool)validateKey:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000e2bf
- (id)engineWithError:(id *)arg1;	// IMP=0x001000000000e24b
@property(readonly, nonatomic) CKSyncEngine *engine; // @synthesize engine=_engine;
- (_Bool)initializeSyncEngineWithError:(id *)arg1;	// IMP=0x001000000000dfdf
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000000de57
- (id)initWithContainer:(id)arg1 coreDataStore:(id)arg2 storeType:(long long)arg3;	// IMP=0x001000000000da30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
