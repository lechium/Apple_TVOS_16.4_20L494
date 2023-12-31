//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSArray, NSMutableDictionary, NSMutableOrderedSet;
@protocol GEOPDPlaceCacheManifestInfoProviding, GEOPDPlaceCacheSchedulingDelegate, OS_dispatch_source;

@interface GEOPDPlaceCache : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    id <GEOPDPlaceCacheSchedulingDelegate> _schedulingDelegate;	// 16 = 0x10
    id <GEOPDPlaceCacheManifestInfoProviding> _manifestInfoProvider;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_cleanupTimer;	// 32 = 0x20
    NSMutableDictionary *_accessTimesDict;	// 40 = 0x28
    NSMutableOrderedSet *_recentlySeenPlaceHashes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000015c8f
@property(readonly, nonatomic) NSArray *serviceVersions;
- (void)cancelCleanupBlockSchedule;	// IMP=0x0010000000015b35
- (void)runCleanupBlock:(CDUnknownBlockType)arg1 inSecondsFromNow:(long long)arg2;	// IMP=0x001000000001594a
- (long long)currentTime;	// IMP=0x001000000001592b
- (id)internalSerialQueue;	// IMP=0x0010000000015915
- (void)iterateAllHandleKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015871
- (void)iterateAllPhoneKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000157cd
- (void)iterateAllBasemapIdKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015729
- (void)iterateAllMUIDKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015685
- (void)iterateAllKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001566b
- (void)_iterateAllKeysFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(CDUnknownBlockType)arg2 finishedBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015383
- (void)iterateHandlePlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000152df
- (void)iteratePhonePlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001523b
- (void)iterateBasemapIdPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015197
- (void)iterateMUIDPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000150f3
- (void)iterateAllPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000150d9
- (void)_iterateAllPlacesFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(CDUnknownBlockType)arg2 finishedBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014d70
- (void)close;	// IMP=0x0010000000014d03
- (void)_evictPlaceWithHash:(id)arg1;	// IMP=0x0010000000014a88
- (void)periodicCleanupAndAccessTimeUpdate;	// IMP=0x0010000000014465
- (void)scheduleCleanup;	// IMP=0x001000000001435b
- (void)enqueueAccessTimeUpdateForCacheKey:(id)arg1 accessTime:(long long)arg2;	// IMP=0x00100000000141d6
- (void)evictAllEntries;	// IMP=0x001000000001402a
- (void)deletePhoneNumberMapping;	// IMP=0x0010000000013e9d
- (unsigned long long)_shrinkBySize:(unsigned long long)arg1;	// IMP=0x0010000000013cbc
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;	// IMP=0x0010000000013b6c
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;	// IMP=0x00100000000138e7
- (unsigned long long)_calculateFreeableSpace;	// IMP=0x00100000000137c0
- (unsigned long long)calculateFreeableSpaceSync;	// IMP=0x001000000001367f
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000134b6
- (id)lookupIdentifierByPhoneNumber:(id)arg1;	// IMP=0x0010000000012f27
- (void)lookupPlaceByHandle:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012b37
- (void)lookupPlaceByIdentifier:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000124d7
- (void)lookupPlaceByPhoneNumber:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000120d6
- (void)lookupPlaceByRequest:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011b48
- (void)_lookupPlaceByRequestKey:(id)arg1 allowExpiredPlace:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011520
- (void)storePlace:(id)arg1 forRequest:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010ee2
- (void)storePlace:(id)arg1 forRequest:(id)arg2;	// IMP=0x0010000000010e11
- (void)trackPlace:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001094c
- (void)trackPlace:(id)arg1;	// IMP=0x0010000000010896
- (id)_cacheKeyForHandle:(id)arg1;	// IMP=0x00100000000107da
- (id)_cacheKeysForPlace:(id)arg1 request:(id)arg2;	// IMP=0x0010000000010439
- (void)_storePlace:(id)arg1 withHash:(id)arg2 forRequestKeys:(id)arg3;	// IMP=0x001000000000f7b7
- (_Bool)_meetsManifestVersionPolicyForPlace:(id)arg1;	// IMP=0x001000000000f4ee
- (_Bool)_deleteAndResetDB:(id)arg1;	// IMP=0x001000000000f2c3
- (_Bool)_validateDBLocaleAndResetIfNecessary;	// IMP=0x001000000000ee37
- (void)dealloc;	// IMP=0x001000000000edc2
- (id)initWithCacheFilePath:(id)arg1 schedulingDelegate:(id)arg2 manifestInfoProvider:(id)arg3;	// IMP=0x001000000000e973

@end

