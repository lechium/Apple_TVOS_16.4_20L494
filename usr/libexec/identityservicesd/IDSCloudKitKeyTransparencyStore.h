//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKRecordZone, CUTUnsafePromise, IDSCloudKitKeyTransparencyDeviceRecord, IDSServerBag, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyTransparencyStore : NSObject
{
    CKContainer *_container;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _cachedManateeAvailability;	// 24 = 0x18
    IDSServerBag *_serverBag;	// 32 = 0x20
    CKRecordZone *_cachedRecordZone;	// 40 = 0x28
    IDSCloudKitKeyTransparencyDeviceRecord *_lastSuccessfulUpsertDeviceRecord;	// 48 = 0x30
    CUTUnsafePromise *_currentDeviceRecordsPromise;	// 56 = 0x38
    NSUbiquitousKeyValueStore *_kvStore;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001c9200
@property(retain, nonatomic) NSUbiquitousKeyValueStore *kvStore; // @synthesize kvStore=_kvStore;
@property(retain, nonatomic) CUTUnsafePromise *currentDeviceRecordsPromise; // @synthesize currentDeviceRecordsPromise=_currentDeviceRecordsPromise;
@property(retain, nonatomic) IDSCloudKitKeyTransparencyDeviceRecord *lastSuccessfulUpsertDeviceRecord; // @synthesize lastSuccessfulUpsertDeviceRecord=_lastSuccessfulUpsertDeviceRecord;
@property(retain, nonatomic) CKRecordZone *cachedRecordZone; // @synthesize cachedRecordZone=_cachedRecordZone;
@property(readonly, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(nonatomic) _Bool cachedManateeAvailability; // @synthesize cachedManateeAvailability=_cachedManateeAvailability;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (_Bool)initializeKVS;	// IMP=0x00100000001c8ec0
- (id)forceKVSSync;	// IMP=0x00100000001c8860
- (void)removeAllEntries;	// IMP=0x00100000001c8440
- (id)fetchAllEntries;	// IMP=0x00100000001c8260
- (void)removeEntryForKey:(id)arg1;	// IMP=0x00100000001c8010
- (void)insertDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000001c7d80
- (void)handleKVSUpdate:(id)arg1;	// IMP=0x00100000001c79c0
- (id)_no_timeout_no_cache_fetchKeyTransparencyDeviceRecords;	// IMP=0x00100000001c5b20
- (void)_no_timeout_fetchKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c5070
- (void)fetchKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c4400
- (void)_no_timeout_nukeKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c3900
- (void)nukeKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c2e30
- (void)deleteKeyTransparencyDeviceRecordsForPushToken:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c2d40
- (void)_no_timeout_upsertKeyTransparencyDeviceRecord:(id)arg1 recordsToModify:(id)arg2 recordsToDelete:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c10f0
- (void)upsertKeyTransparencyDeviceRecord:(id)arg1 recordsToModify:(id)arg2 recordsToDelete:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c0320
- (void)_no_timeout_verifyEncryptionPrerequisitesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bfe20
- (void)fetchAccountEligibilityForDeviceToDeviceEncryptionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bf0a0
- (void)fetchShouldNoteManateeAvailability:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bec40
- (void)setupContainerCache;	// IMP=0x00100000001bea90
- (void)_createZoneIfNeededUsingTimeIntervalForRequest:(double)arg1 isNonDiscretionary:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001bd190
- (void)_copyDeviceRecord:(id)arg1 toCloudKitRecordRef:(id *)arg2;	// IMP=0x00100000001bd040
- (id)_cloudKitRecordForDeviceRecord:(id)arg1;	// IMP=0x00100000001bcc10
- (id)_deviceRecordForCloudKitRecord:(id)arg1;	// IMP=0x00100000001bc950
- (id)_clientErrorWithCode:(long long)arg1 debugDescription:(id)arg2 underlyingError:(id)arg3;	// IMP=0x00100000001bc7f0
- (id)_recordIDForDeviceRecord:(id)arg1;	// IMP=0x00100000001bc5c0
- (id)_recordType;	// IMP=0x00100000001bc5a0
- (id)_zoneID;	// IMP=0x00100000001bc360
- (id)database;	// IMP=0x00100000001bc2f0
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x00100000001bc230
- (id)initWithContainer:(id)arg1 serverBag:(id)arg2 kvStore:(id)arg3 queue:(id)arg4;	// IMP=0x00100000001bc010
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001bbb70

@end

