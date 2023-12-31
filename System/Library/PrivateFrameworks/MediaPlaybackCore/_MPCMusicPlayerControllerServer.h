//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, MPMusicPlayerControllerSystemCache, MPMusicPlayerQueueDescriptor, NSMutableArray, NSString, NSUUID, NSXPCListener, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface _MPCMusicPlayerControllerServer : NSObject
{
    MPMusicPlayerQueueDescriptor *_queueDescriptor;	// 8 = 0x8
    MPMusicPlayerQueueDescriptor *_preparingDescriptor;	// 16 = 0x10
    CDUnknownBlockType _prepareCompletionHandler;	// 24 = 0x18
    _Bool _skipWaitingForLikelyToKeepUp;	// 32 = 0x20
    _Bool _waitingForAdditionalPlaybackContexts;	// 33 = 0x21
    _Bool _resumed;	// 34 = 0x22
    NSUUID *_settingMultiplePlaybackContextsUUID;	// 40 = 0x28
    MPCPlaybackEngine *_playbackEngine;	// 48 = 0x30
    MPMusicPlayerControllerSystemCache *_systemCache;	// 56 = 0x38
    NSXPCListener *_listener;	// 64 = 0x40
    NSMutableArray *_activeConnections;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001b7361
@property(readonly, nonatomic) NSMutableArray *activeConnections; // @synthesize activeConnections=_activeConnections;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) MPMusicPlayerControllerSystemCache *systemCache; // @synthesize systemCache=_systemCache;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_applyServerStateUpdateRecord:(id)arg1;	// IMP=0x00000000001b719a
- (void)_addContentItemIDsToUpdateRecord:(id)arg1;	// IMP=0x00000000001b7091
- (void)_registerForCommandHandlersRegisteredNotification;	// IMP=0x00000000001b6fba
- (void)_handleCommandHandlersRegistered:(id)arg1;	// IMP=0x00000000001b6f73
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000001b693b
- (void)engine:(id)arg1 didChangeCurrentItemVariantID:(id)arg2;	// IMP=0x00000000001b6815
- (void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;	// IMP=0x00000000001b676a
- (void)engine:(id)arg1 didEndPlaybackOfItem:(id)arg2;	// IMP=0x00000000001b6712
- (void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2;	// IMP=0x00000000001b66ba
- (void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;	// IMP=0x00000000001b6626
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;	// IMP=0x00000000001b64fc
- (void)engine:(id)arg1 didResetQueueWithPlaybackContext:(id)arg2 error:(id)arg3;	// IMP=0x00000000001b6344
- (void)engine:(id)arg1 didAchieveLikelyToKeepUpWithItem:(id)arg2;	// IMP=0x00000000001b62a2
- (void)engine:(id)arg1 didChangeToItem:(id)arg2;	// IMP=0x00000000001b5fa3
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;	// IMP=0x00000000001b5e61
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;	// IMP=0x00000000001b5dbd
- (void)setDisableShuffle:(_Bool)arg1;	// IMP=0x00000000001b5d71
- (void)setDisableRepeat:(_Bool)arg1;	// IMP=0x00000000001b5d25
- (void)setDisableAutoPlay:(_Bool)arg1;	// IMP=0x00000000001b5cd9
- (void)setDisableAutomaticCanBeNowPlaying:(_Bool)arg1;	// IMP=0x00000000001b5c43
- (void)setRelativeVolume:(float)arg1;	// IMP=0x00000000001b5b92
- (void)beginPlaybackAtHostTime:(id)arg1;	// IMP=0x00000000001b5b2a
- (void)prerollWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b5a9b
- (void)performQueueModifications:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b5928
- (void)setPlaybackRate:(float)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b57e0
- (void)setElapsedTime:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b5698
- (void)getShuffleModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b5502
- (void)setShuffleMode:(long long)arg1;	// IMP=0x00000000001b5395
- (void)getRepeatModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b51ff
- (void)setRepeatMode:(long long)arg1;	// IMP=0x00000000001b5092
- (void)endSeek;	// IMP=0x00000000001b4f30
- (void)beginSeekWithDirection:(long long)arg1;	// IMP=0x00000000001b4dc3
- (void)reshuffle;	// IMP=0x00000000001b4c61
- (void)skipWithBehavior:(long long)arg1;	// IMP=0x00000000001b4af4
- (void)stop;	// IMP=0x00000000001b4ae0
- (void)pauseWithFadeDuration:(long long)arg1;	// IMP=0x00000000001b4973
- (void)play;	// IMP=0x00000000001b4811
- (void)_appendPlaybackContexts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b4483
- (void)appendDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b43a1
- (void)_prependPlaybackContexts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b404e
- (void)prependDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b3f6c
- (void)getDescriptorWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b3ecd
- (void)setDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b3b6a
- (void)getTimeSnapshotWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b39d4
- (id)_timeSnapshotWithElapsedTime:(double)arg1 rate:(float)arg2;	// IMP=0x00000000001b3779
- (void)getImageForArtworkIdentifier:(id)arg1 itemIdentifier:(id)arg2 atSize:(struct CGSize)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b3666
- (void)setNowPlayingItem:(id)arg1 itemIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b346d
- (void)getNowPlayingAtIndex:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b32c4
- (id)_nowPlayingWithItem:(id)arg1;	// IMP=0x00000000001b2dba
- (void)getNowPlayingsForContentItemIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b2bf1
- (void)getNowPlayingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b2a5b
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
- (void)stopServer;	// IMP=0x00000000001b29bd
- (void)resumeIfNeeded;	// IMP=0x00000000001b27fa
- (void)startServer;	// IMP=0x00000000001b26e2
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x00000000001b2648

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

