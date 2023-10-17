//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSTimer, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WFWeatherStoreCache : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    NSTimer *_cacheStoreTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_cacheConcurrentQueue;	// 24 = 0x18
    NSMutableDictionary *_cacheForDomain;	// 32 = 0x20
    NSMutableSet *_dirtyCacheDomains;	// 40 = 0x28
}

+ (_Bool)removeObjectsFromCache:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0060000000007135
+ (id)createCacheIfNecessary:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000006134
+ (id)wf_mainDomains;	// IMP=0x0060000000006040
- (void).cxx_destruct;	// IMP=0x0000000000009d90
@property(retain) NSMutableSet *dirtyCacheDomains; // @synthesize dirtyCacheDomains=_dirtyCacheDomains;
@property(retain) NSMutableDictionary *cacheForDomain; // @synthesize cacheForDomain=_cacheForDomain;
@property(retain) NSObject<OS_dispatch_queue> *cacheConcurrentQueue; // @synthesize cacheConcurrentQueue=_cacheConcurrentQueue;
@property(retain, nonatomic) NSTimer *cacheStoreTimer; // @synthesize cacheStoreTimer=_cacheStoreTimer;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)_concurrentQueue_barrier_removeObjectWithinDomain:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000009b88
- (void)_concurrentQueue_barrier_deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2;	// IMP=0x00000000000099a5
- (void)_concurrentQueue_barrier_deleteOldDataFromCache;	// IMP=0x0000000000009818
- (void)_ensureDomainIsLoaded:(id)arg1;	// IMP=0x0000000000009760
- (id)_dirtyCacheDomains;	// IMP=0x0000000000009536
- (id)_loadedCacheDomains;	// IMP=0x00000000000093d2
- (void)_markDomainDirty:(id)arg1;	// IMP=0x0000000000009271
- (_Bool)_concurrentQueue_barrier_loadDomain:(id)arg1;	// IMP=0x0000000000008d2d
- (_Bool)_loadDomain:(id)arg1;	// IMP=0x0000000000008b3c
- (void)_concurrentQueue_barrier_shrinkDomain:(id)arg1;	// IMP=0x0000000000008848
- (void)_shrinkDomain:(id)arg1;	// IMP=0x000000000000871a
- (void)executeTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000000086b9
- (void)removeAllObjects;	// IMP=0x00000000000085b4
- (void)removeObjectWithinDomain:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000847a
- (void)cache:(id)arg1 withinDomain:(id)arg2 date:(id)arg3 forKey:(id)arg4 expiration:(id)arg5 synchronous:(_Bool)arg6;	// IMP=0x0000000000007f1c
- (void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3 expiration:(id)arg4;	// IMP=0x0000000000007e41
- (void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000007d2f
- (id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2 staleness:(unsigned long long)arg3;	// IMP=0x00000000000074d6
- (id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000074ba
- (void)_concurrentQueue_barrier_writeCacheDictionaryToFile;	// IMP=0x0000000000006d43
- (void)writeCacheDictionaryToFile;	// IMP=0x0000000000006c5a
- (void)deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2;	// IMP=0x0000000000006ad1
- (void)_stopCacheStoreTimer;	// IMP=0x0000000000006a0c
- (void)_startCacheStoreTimer;	// IMP=0x00000000000068e8
- (void)dealloc;	// IMP=0x00000000000068aa
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000065d5
- (id)init;	// IMP=0x0000000000006591

@end
