//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDPlaceCache, NSMutableDictionary, _GEOPlaceDataPendingRequestManager, geo_reentrant_isolater;
@protocol GEOPlaceDataRequester, OS_dispatch_source;

@interface GEOPlaceDataLocalProxy : NSObject
{
    geo_reentrant_isolater *_accessIsolater;	// 8 = 0x8
    NSMutableDictionary *_requestUUIDToRequesters;	// 16 = 0x10
    NSMutableDictionary *_requestUUIDToRequests;	// 24 = 0x18
    id <GEOPlaceDataRequester> _serviceRequester;	// 32 = 0x20
    _GEOPlaceDataPendingRequestManager *_pendingRequestManager;	// 40 = 0x28
    GEOPDPlaceCache *_pdPlaceCache;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;	// 56 = 0x38
}

+ (id)shared;	// IMP=0x0020000000050f4f
- (void).cxx_destruct;	// IMP=0x002000000005710f
- (void)_privacyAndLocationSettingsResetObserver:(id)arg1;	// IMP=0x0010000000057047
- (void)_callHistoryRecentsClearedObserver:(id)arg1;	// IMP=0x0010000000056f8c
- (void)clearCache;	// IMP=0x0010000000056f4f
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;	// IMP=0x0010000000056efc
- (unsigned long long)calculateFreeableSpaceSync;	// IMP=0x0010000000056eb8
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056e3a
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000056dc1
- (void)performPlaceDataRequest:(id)arg1 requestUUID:(id)arg2 traits:(id)arg3 cachePolicy:(unsigned long long)arg4 timeout:(double)arg5 auditToken:(id)arg6 throttleToken:(id)arg7 requesterHandler:(CDUnknownBlockType)arg8;	// IMP=0x0010000000055cc5
- (void)trackPlaceData:(id)arg1;	// IMP=0x0010000000055ba5
- (void)fetchAllCacheEntriesWithRequesterHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005599d
- (void)requestPhoneNumbers:(id)arg1 requestUUID:(id)arg2 allowCellularDataForLookup:(_Bool)arg3 traits:(id)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 requesterHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000549bb
- (void)_requestIdentifiersFromNetwork:(id)arg1 resultProviderID:(int)arg2 requestUUID:(id)arg3 traits:(id)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 finished:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;	// IMP=0x0010000000054721
- (void)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 requestUUID:(id)arg3 traits:(id)arg4 options:(unsigned long long)arg5 auditToken:(id)arg6 throttleToken:(id)arg7 requesterHandler:(CDUnknownBlockType)arg8;	// IMP=0x00100000000528e8
- (void)cancelRequest:(id)arg1;	// IMP=0x0010000000051d0e
- (void)startRequest:(id)arg1 requestUUID:(id)arg2 traits:(id)arg3 timeout:(double)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 finished:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;	// IMP=0x001000000005192a
- (void)_resetRequestTimeout;	// IMP=0x0010000000051758
- (void)_cleanupPendingRequestMananger;	// IMP=0x00100000000516f1
- (void)registerCacheResult:(unsigned char)arg1 forMapItem:(id)arg2 cachedByteCount:(unsigned long long)arg3 forRequestType:(int)arg4 auditToken:(id)arg5;	// IMP=0x00100000000514eb
@property(readonly, nonatomic) GEOPDPlaceCache *pdPlaceCache;
- (void)dealloc;	// IMP=0x001000000005122b
- (id)init;	// IMP=0x001000000005101f
@property(retain, nonatomic) id <GEOPlaceDataRequester> serviceRequester;

@end

