//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEONavdServerProxy.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSXPCConnection;
@protocol GEONavdXPCInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONavdRemoteProxy : GEONavdServerProxy
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    NSMutableDictionary *_handlers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000129edc6
- (void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2;	// IMP=0x000000000129eb87
- (void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2;	// IMP=0x000000000129e81c
- (void)dealloc;	// IMP=0x000000000129e775
- (void)forceCacheRefresh;	// IMP=0x000000000129e6e2
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;	// IMP=0x000000000129e654
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;	// IMP=0x000000000129e4f1
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;	// IMP=0x000000000129e388
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;	// IMP=0x000000000129e274
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000129dfd7
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;	// IMP=0x000000000129dfd1
- (void)statusWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000129de90
@property(readonly, nonatomic) id <GEONavdXPCInterface> remoteObjectProxyThreadUnsafe;
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000129dda1
- (void)registerObserver:(id)arg1;	// IMP=0x000000000129dce8
- (void)_connectToDaemonIfNeededThreadUnsafe;	// IMP=0x000000000129d245
- (void)close;	// IMP=0x000000000129d09f
- (void)open;	// IMP=0x000000000129d037
- (id)init;	// IMP=0x000000000129ce80

@end

