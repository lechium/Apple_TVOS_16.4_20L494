//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAccountOverrideInfo, CKContainerID, CKDPCSMemoryCache, CKDPCSSQLCache, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CKDPCSCache : NSObject
{
    CKDPCSSQLCache *_sqlCache;	// 8 = 0x8
    CKDPCSMemoryCache *_recordMemoryCache;	// 16 = 0x10
    CKDPCSMemoryCache *_zoneMemoryCache;	// 24 = 0x18
    CKDPCSMemoryCache *_shareMemoryCache;	// 32 = 0x20
    CKContainerID *_containerID;	// 40 = 0x28
    CKAccountOverrideInfo *_accountOverrideInfo;	// 48 = 0x30
    NSString *_accountID;	// 56 = 0x38
    NSString *_encryptionServiceName;	// 64 = 0x40
    NSMutableDictionary *_outstandingFetches;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_fetchQueue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000024a61
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) NSMutableDictionary *outstandingFetches; // @synthesize outstandingFetches=_outstandingFetches;
@property(readonly, nonatomic) NSString *encryptionServiceName; // @synthesize encryptionServiceName=_encryptionServiceName;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) CKAccountOverrideInfo *accountOverrideInfo; // @synthesize accountOverrideInfo=_accountOverrideInfo;
@property(readonly, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(readonly, nonatomic) CKDPCSMemoryCache *shareMemoryCache; // @synthesize shareMemoryCache=_shareMemoryCache;
@property(readonly, nonatomic) CKDPCSMemoryCache *zoneMemoryCache; // @synthesize zoneMemoryCache=_zoneMemoryCache;
@property(readonly, nonatomic) CKDPCSMemoryCache *recordMemoryCache; // @synthesize recordMemoryCache=_recordMemoryCache;
@property(readonly, nonatomic) CKDPCSSQLCache *sqlCache; // @synthesize sqlCache=_sqlCache;
- (id)CKStatusReportArray;	// IMP=0x00000000000243ce
- (_Bool)hasStatusToReport;	// IMP=0x00000000000242f7
- (void)removePCSDataForItemsInShareWithID:(id)arg1;	// IMP=0x00000000000240d1
- (void)removePCSDataForItemsInZoneWithID:(id)arg1;	// IMP=0x0000000000023eab
- (void)updateMemoryCacheWithSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000023d48
- (void)updateMemoryCacheWithRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000023be5
- (void)updateMemoryCacheWithZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000023a82
- (void)_updateMemoryCacheWithPCSData:(id)arg1 forItemWithID:(id)arg2 inMemoryCache:(id)arg3 databaseScope:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000239dc
- (void)_setPCSData:(id)arg1 forFetchedShareID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000023316
- (void)_setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000022c2a
- (void)_setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002254e
- (void)fetchPCSForShareWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000220d2
- (void)fetchPCSForZoneWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021c56
- (void)fetchPCSForRecordWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002175c
- (void)_lockedFetchPCSForItem:(id)arg1 memoryCache:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(CDUnknownBlockType)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000002147f
- (void)_lockedCreatePCSCacheFetchOfItem:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 fetchCreator:(CDUnknownBlockType)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000205f3
- (void)_lockedInvalidateAllOutstandingPCSFetchesForItemIDString:(id)arg1 databaseScope:(long long)arg2;	// IMP=0x00000000000203fd
- (void)_lockedAddOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3;	// IMP=0x000000000002028f
- (id)_lockedGetOutstandingFetchForOperation:(id)arg1 options:(unsigned long long)arg2 itemIDString:(id)arg3;	// IMP=0x000000000002000c
- (void)_lockedRemoveOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3;	// IMP=0x000000000001feec
- (void)_lockedHandleMemoryFetchOfItem:(id)arg1 pcsData:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(CDUnknownBlockType)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000001f676
- (void)getSQLCache:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f1bf
- (void)_lockedGetSQLCacheWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f155
- (void)runMemoryCacheEviction;	// IMP=0x000000000001f110
- (void)dealloc;	// IMP=0x000000000001efc0
- (id)initWithDeviceContext:(id)arg1 containerID:(id)arg2 accountOverrideInfo:(id)arg3 accountID:(id)arg4 encryptionServiceName:(id)arg5;	// IMP=0x000000000001ec93
- (void)clearInvalidatedPCSSQLCacheEntriesWithSkipZonePCS:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024e54
- (void)clearPCSMemoryCaches;	// IMP=0x0000000000024d2f
- (void)clearPCSCaches;	// IMP=0x0000000000024aec

@end
