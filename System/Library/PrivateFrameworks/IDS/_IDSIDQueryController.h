//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _IDSIDQueryController : NSObject
{
    NSMutableDictionary *_listeners;	// 8 = 0x8
    NSMutableDictionary *_idStatusCache;	// 16 = 0x10
    NSMutableDictionary *_transactionIDToBlockMap;	// 24 = 0x18
    NSObject<OS_xpc_object> *_connection;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSString *_serviceToken;	// 56 = 0x38
    NSMapTable *_delegateToInfo;	// 64 = 0x40
    NSMutableDictionary *_listenerIDToServicesMap;	// 72 = 0x48
    id _delegateContext;	// 80 = 0x50
}

+ (id)_createXPCConnectionOnQueue:(id)arg1;	// IMP=0x00100000000d3880
+ (void)initialize;	// IMP=0x00100000000cff45
- (void).cxx_destruct;	// IMP=0x00000000000e61f3
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000e5eba
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;	// IMP=0x00000000000e5aaa
- (_Bool)_flushQueryCacheForService:(id)arg1;	// IMP=0x00000000000e5964
- (_Bool)_warmupQueryCacheForService:(id)arg1;	// IMP=0x00000000000e56c7
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000e5683
- (_Bool)_hasCacheForService:(id)arg1;	// IMP=0x00000000000e5675
- (_Bool)idInfoForDestinations:(id)arg1 service:(id)arg2 infoTypes:(unsigned long long)arg3 options:(id)arg4 listenerID:(id)arg5 queue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000e4f16
- (_Bool)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e4efa
- (_Bool)_currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 waitForReply:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e45cf
- (_Bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e441f
- (_Bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e42d4
- (_Bool)requiredIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e3fec
- (_Bool)requiredIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e3fb7
- (_Bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e3ccc
- (_Bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 forceRefresh:(_Bool)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e3c8c
- (_Bool)_sync_currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e3c6c
- (_Bool)_sync_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e3b27
- (_Bool)_sync_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e3af3
- (_Bool)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(_Bool)arg4 respectExpiry:(_Bool)arg5 waitForReply:(_Bool)arg6 forceRefresh:(_Bool)arg7 bypassLimit:(_Bool)arg8 queue:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;	// IMP=0x00000000000e3743
- (void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(_Bool)arg4 respectExpiry:(_Bool)arg5 waitForReply:(_Bool)arg6 forceRefresh:(_Bool)arg7 bypassLimit:(_Bool)arg8 completionBlock:(CDUnknownBlockType)arg9;	// IMP=0x00000000000e2bdb
- (void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3;	// IMP=0x00000000000e2a13
- (id)_delegateMapForListenerID:(id)arg1 service:(id)arg2;	// IMP=0x00000000000e2951
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 delegateMap:(id)arg2;	// IMP=0x00000000000e26ee
- (void)_purgeIDStatusCache;	// IMP=0x00000000000e2616
- (void)_purgeIDStatusCacheAfter:(double)arg1;	// IMP=0x00000000000e24a8
- (void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2;	// IMP=0x00000000000e226b
- (id)_cachedStatusForDestination:(id)arg1 service:(id)arg2;	// IMP=0x00000000000e219e
- (id)_cacheForService:(id)arg1;	// IMP=0x00000000000e2188
- (_Bool)_isListenerWithID:(id)arg1 listeningToService:(id)arg2;	// IMP=0x00000000000e2063
- (void)dealloc;	// IMP=0x00000000000e2010
- (id)initWithDelegateContext:(id)arg1 queueController:(id)arg2;	// IMP=0x00000000000e1ef8
- (id)init;	// IMP=0x00000000000e1e3c
- (_Bool)removeListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x00000000000406d2
- (void)addListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x000000000004037a
- (void)daemonDisconnected;	// IMP=0x0000000000040368
- (void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000003fe66
- (void)_connect;	// IMP=0x000000000003fe18
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003fba3
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000003fb2c
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000003fa21
- (void)___oldDealloc;	// IMP=0x000000000003f9bf
- (id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4 waitForReply:(_Bool)arg5;	// IMP=0x00000000000d3291
- (void)_requestIDInfoForDestinations:(id)arg1 service:(id)arg2 infoTypes:(unsigned long long)arg3 options:(id)arg4 listenerID:(id)arg5 queue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000d273e
- (void)_requestRemoteDevicesForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 waitForReply:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d1c79
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 waitForReply:(_Bool)arg3 forceRefresh:(_Bool)arg4 bypassLimit:(_Bool)arg5 listenerID:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000d125e
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 waitForReply:(_Bool)arg3 respectExpiry:(_Bool)arg4 listenerID:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000d08d2
- (void)_requestCacheForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d00d7
- (void)_disconnectFromQueryService;	// IMP=0x00000000000cffd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

