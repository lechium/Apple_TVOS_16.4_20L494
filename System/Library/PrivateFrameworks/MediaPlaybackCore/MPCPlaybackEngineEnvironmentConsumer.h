//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCPlaybackEngineEnvironmentConsumer : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    long long _reachability;	// 16 = 0x10
    MPCPlaybackEngine *_playbackEngine;	// 24 = 0x18
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 32 = 0x20
}

+ (id)identifier;	// IMP=0x001000000026abaf
- (void).cxx_destruct;	// IMP=0x000000000026a92c
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_snapshotNetworkTypeAtTime:(CDStruct_aee2c4da)arg1;	// IMP=0x000000000026a634
- (void)_snapshotNetworkTypeWithEvent:(id)arg1 nudge:(int)arg2;	// IMP=0x000000000026a561
- (void)_snapshotNetworkReachabilityAtTime:(CDStruct_aee2c4da)arg1 force:(_Bool)arg2;	// IMP=0x000000000026a34e
- (void)_snapshotNetworkReachabilityWithEvent:(id)arg1 nudge:(int)arg2;	// IMP=0x000000000026a276
- (void)_snapshotDeviceAtTime:(CDStruct_aee2c4da)arg1;	// IMP=0x00000000002699db
- (void)_snapshotDeviceWithEvent:(id)arg1 nudge:(int)arg2;	// IMP=0x0000000000269908
- (void)_snapshotAccount:(id)arg1 eventType:(id)arg2 atTime:(CDStruct_aee2c4da)arg3;	// IMP=0x000000000026938d
- (void)_snapshotAccount:(id)arg1 eventType:(id)arg2 event:(id)arg3 nudge:(int)arg4;	// IMP=0x000000000026927d
- (void)_addEventForAccountIdentifier:(id)arg1 cursor:(id)arg2 event:(id)arg3 nudge:(int)arg4;	// IMP=0x00000000002690ae
- (void)_devicePrivateListeningDidChange:(id)arg1;	// IMP=0x0000000000268fda
- (void)_applicationWillTerminate:(id)arg1;	// IMP=0x0000000000268f35
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000000268ec2
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000000268e4f
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x0000000000268d7b
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x0000000000268ca5
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x0000000000268c04
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x0000000000268971
- (void)accountManager:(id)arg1 didChangeAccounts:(id)arg2;	// IMP=0x0000000000268716
- (void)dealloc;	// IMP=0x00000000002686a1
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x0000000000268636

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

