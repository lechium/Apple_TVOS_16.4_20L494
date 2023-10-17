//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, MRClient, MRDNowPlayingPlayerClient, MRPlayerPath, NSArray, NSDate, NSMutableArray;
@protocol MRDNowPlayingClientDelegate, OS_dispatch_queue;

@interface MRDNowPlayingClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_playerClients;	// 16 = 0x10
    _Bool _canBeNowPlaying;	// 24 = 0x18
    _Bool _effectiveCanBeNowPlaying;	// 25 = 0x19
    _Bool _perPlayerCanBeNowPlaying;	// 26 = 0x1a
    _Bool _isForegrounded;	// 27 = 0x1b
    _Bool _supportsBackgroundAudio;	// 28 = 0x1c
    MRPlayerPath *_playerPath;	// 32 = 0x20
    NSDate *_canBeNowPlayingTimestamp;	// 40 = 0x28
    id <MRDNowPlayingClientDelegate> _delegate;	// 48 = 0x30
    MRDNowPlayingPlayerClient *_nowPlayingPlayerClient;	// 56 = 0x38
    MRDNowPlayingPlayerClient *_pushStateActivePlayerClient;	// 64 = 0x40
    MRClient *_pushStateClient;	// 72 = 0x48
    BKSApplicationStateMonitor *_stateMonitor;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000b9565
@property(retain, nonatomic) BKSApplicationStateMonitor *stateMonitor; // @synthesize stateMonitor=_stateMonitor;
@property(retain, nonatomic) MRClient *pushStateClient; // @synthesize pushStateClient=_pushStateClient;
@property(retain, nonatomic) MRDNowPlayingPlayerClient *pushStateActivePlayerClient; // @synthesize pushStateActivePlayerClient=_pushStateActivePlayerClient;
@property(retain, nonatomic) MRDNowPlayingPlayerClient *nowPlayingPlayerClient; // @synthesize nowPlayingPlayerClient=_nowPlayingPlayerClient;
@property(nonatomic) __weak id <MRDNowPlayingClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportsBackgroundAudio; // @synthesize supportsBackgroundAudio=_supportsBackgroundAudio;
@property(nonatomic) _Bool isForegrounded; // @synthesize isForegrounded=_isForegrounded;
@property(copy, nonatomic) NSDate *canBeNowPlayingTimestamp; // @synthesize canBeNowPlayingTimestamp=_canBeNowPlayingTimestamp;
@property(nonatomic) _Bool perPlayerCanBeNowPlaying; // @synthesize perPlayerCanBeNowPlaying=_perPlayerCanBeNowPlaying;
- (void)handleCanBeNowPlayingPlayerDidChange:(id)arg1;	// IMP=0x00100000000b930d
- (void)_onQueue_popState;	// IMP=0x00100000000b883a
- (void)_onQueue_pushState;	// IMP=0x00100000000b878f
- (id)notificationPlayerPathFromPlayer:(id)arg1;	// IMP=0x00100000000b86fb
@property(readonly, nonatomic) _Bool hasNowPlayingData;
- (void)_onQueue_removePlayerClientForPlayer:(id)arg1;	// IMP=0x00100000000b844f
- (void)removePlayerClientForPlayer:(id)arg1;	// IMP=0x00100000000b83a5
- (id)_onQueue_existingPlayerClientForPlayer:(id)arg1;	// IMP=0x00100000000b81d0
- (id)existingPlayerClientForPlayer:(id)arg1;	// IMP=0x00100000000b807d
- (id)existingPlayerClientForPlayerPath:(id)arg1;	// IMP=0x00100000000b801b
- (id)_onQueue_addPlayer:(id)arg1;	// IMP=0x00100000000b7e0c
- (id)_onQueue_playerClientForPlayer:(id)arg1;	// IMP=0x00100000000b7cbe
- (id)playerClientForPlayer:(id)arg1;	// IMP=0x00100000000b7b6b
- (_Bool)canBeNowPlayingForPlayerClient:(id)arg1;	// IMP=0x00100000000b7a68
- (_Bool)_onQueue_anyPlayerIsPlaying;	// IMP=0x00100000000b7923
@property(readonly, nonatomic) _Bool anyPlayerIsPlaying;
@property(nonatomic) _Bool canBeNowPlaying;
- (void)_reevaluateCanBeNowPlaying;	// IMP=0x00100000000b7261
- (id)_onQueue_activePlayerClient;	// IMP=0x00100000000b7240
@property(retain, nonatomic) MRDNowPlayingPlayerClient *activePlayerClient;
- (void)_onQueue_setActivePlayerClient:(id)arg1;	// IMP=0x00100000000b6f11
@property(retain, nonatomic) MRClient *client;
- (void)updateClient:(id)arg1;	// IMP=0x00100000000b6c27
@property(readonly, nonatomic) MRPlayerPath *activePlayerPath;
@property(readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
- (void)initializeDisplayName;	// IMP=0x00100000000b66de
- (void)initializeBundleIdentifier;	// IMP=0x00100000000b5f30
@property(readonly, nonatomic) NSArray *playerClients;
- (id)debugDescription;	// IMP=0x00100000000b5948
- (id)description;	// IMP=0x00100000000b58cb
- (void)dealloc;	// IMP=0x00100000000b5889
- (id)initWithPlayerPath:(id)arg1;	// IMP=0x00100000000b546b

@end
