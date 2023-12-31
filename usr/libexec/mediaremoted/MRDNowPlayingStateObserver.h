//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDNowPlayingServer, NSMutableArray, NSMutableDictionary;
@protocol MRDNowPlayingStateObserverDelegate, OS_dispatch_queue;

@interface MRDNowPlayingStateObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_observedNowPlayingNotifications;	// 16 = 0x10
    id _observedVolumeControlNotificationToken;	// 24 = 0x18
    unsigned int _registeredForNowPlayingCount;	// 32 = 0x20
    unsigned int _registeredForVolumeAvailabilityCount;	// 36 = 0x24
    _Bool _wantsCoalescedStateChanged;	// 40 = 0x28
    id <MRDNowPlayingStateObserverDelegate> _delegate;	// 48 = 0x30
    NSMutableDictionary *_coalescingStates;	// 56 = 0x38
    MRDNowPlayingServer *_npServer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000076a48
@property(readonly, nonatomic) MRDNowPlayingServer *npServer; // @synthesize npServer=_npServer;
@property(retain, nonatomic) NSMutableDictionary *coalescingStates; // @synthesize coalescingStates=_coalescingStates;
@property(readonly, nonatomic) _Bool wantsCoalescedStateChanged; // @synthesize wantsCoalescedStateChanged=_wantsCoalescedStateChanged;
@property(nonatomic) __weak id <MRDNowPlayingStateObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onQueue_notifyCoalescedPlayerPath:(id)arg1;	// IMP=0x00100000000767e8
- (id)_onQueue_stateForPlayerPath:(id)arg1;	// IMP=0x001000000007658e
- (void)_removeNowPlayingNotifications;	// IMP=0x0010000000076408
- (void)_addNowPlayingNotification:(id)arg1 selector:(SEL)arg2;	// IMP=0x0010000000076363
- (void)_onQueue_setReceiveVolumeControlUpdates:(_Bool)arg1;	// IMP=0x00100000000760e9
- (void)_onQueue_setReceiveNowPlayingUpdates:(_Bool)arg1;	// IMP=0x0010000000075e8c
- (void)_setReceiveUpdates:(_Bool)arg1 forSource:(long long)arg2;	// IMP=0x0010000000075dff
- (void)_handleRemovePlayer:(id)arg1;	// IMP=0x0010000000075c62
- (void)_handlePlayerStateChanged:(id)arg1;	// IMP=0x0010000000075aa8
- (void)_handleContentItemArtworkChanged:(id)arg1;	// IMP=0x00100000000758af
- (void)_handleContentItemsChanged:(id)arg1;	// IMP=0x00100000000756b6
- (void)_handlePlaybackQueueCapabilitiesChanged:(id)arg1;	// IMP=0x00100000000754d0
- (void)_handlePlaybackQueueChanged:(id)arg1;	// IMP=0x00100000000752dc
- (void)_handleNowPlayingPlaybackStateChanged:(id)arg1;	// IMP=0x001000000007506e
- (void);	// IMP=0x0010000000074e7a
- (void)_handleDefaultSupportedCommandsChanged:(id)arg1;	// IMP=0x0010000000074cb2
- (void)_handleVolumeAvailabilityDidChangeNotification:(id)arg1;	// IMP=0x0010000000074b34
- (void)_handleRemoveClient:(id)arg1;	// IMP=0x0010000000074a7d
- (void)_handleApplicationClientStateChanged:(id)arg1;	// IMP=0x00100000000748d6
- (void)_handleNowPlayingPlayerDidChange:(id)arg1;	// IMP=0x0010000000074822
- (void)_handleNowPlayingClientDidChange:(id)arg1;	// IMP=0x001000000007476e
- (_Bool)_shouldNotifyChange:(id)arg1;	// IMP=0x0010000000074766
- (void)stopReceivingUpdatesForSource:(long long)arg1;	// IMP=0x001000000007474f
- (void)beginReceivingUpdatesForSource:(long long)arg1;	// IMP=0x0010000000074735
- (id)debugDescription;	// IMP=0x0010000000074582
- (void)dealloc;	// IMP=0x0010000000074522
- (id)init;	// IMP=0x0010000000074412

@end

