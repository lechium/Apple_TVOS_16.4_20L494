//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, MPNowPlayingInfoCenter, MPRemoteCommandCenter, MSVBlockGuard, NSArray, NSDictionary, NSString, NSUserDefaults, _MPCMediaRemotePublisher_Swift;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _MPCMediaRemotePublisher : NSObject
{
    NSArray *_accounts;	// 8 = 0x8
    _Bool _activeAccountAllowsSubscriptionPlayback;	// 16 = 0x10
    _Bool _activeAccountRequiresAuthorizationTokensForPlayback;	// 17 = 0x11
    NSString *_activeAccountStoreFrontIdentifier;	// 24 = 0x18
    NSUserDefaults *_ipodDefaults;	// 32 = 0x20
    _Bool _hasBeganFastForward;	// 40 = 0x28
    _Bool _hasBeganRewind;	// 41 = 0x29
    NSObject<OS_dispatch_source> *_nextPreviousTrackCooldownTimer;	// 48 = 0x30
    long long _deferredTrackChangeDelta;	// 56 = 0x38
    NSArray *_lastCommandDescriptions;	// 64 = 0x40
    MSVBlockGuard *_setPlaybackQueueExtendedTimeGuard;	// 72 = 0x48
    _Bool _initializedSupportedCommands;	// 80 = 0x50
    _Bool _engineRestoringState;	// 81 = 0x51
    _Bool _mediaServerAvailable;	// 82 = 0x52
    MPCPlaybackEngine *_playbackEngine;	// 88 = 0x58
    MPNowPlayingInfoCenter *_infoCenter;	// 96 = 0x60
    MPRemoteCommandCenter *_commandCenter;	// 104 = 0x68
    _MPCMediaRemotePublisher_Swift *_swift;	// 112 = 0x70
    NSDictionary *_lastPerformanceMetrics;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000001cd603
@property(retain, nonatomic) NSDictionary *lastPerformanceMetrics; // @synthesize lastPerformanceMetrics=_lastPerformanceMetrics;
@property(nonatomic, getter=isMediaServerAvailable) _Bool mediaServerAvailable; // @synthesize mediaServerAvailable=_mediaServerAvailable;
@property(nonatomic, getter=isEngineRestoringState) _Bool engineRestoringState; // @synthesize engineRestoringState=_engineRestoringState;
@property(readonly, nonatomic) _MPCMediaRemotePublisher_Swift *swift; // @synthesize swift=_swift;
@property(readonly, nonatomic) MPRemoteCommandCenter *commandCenter; // @synthesize commandCenter=_commandCenter;
@property(readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter; // @synthesize infoCenter=_infoCenter;
@property(nonatomic, getter=hasInitializedSupportedCommands) _Bool initializedSupportedCommands; // @synthesize initializedSupportedCommands=_initializedSupportedCommands;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)performSetQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001cd473
- (void)performSetQueueWithIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001cd3b0
- (void)_performCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c8844
- (void)_beginBackgroundTaskUntilPlayCommandWithCommand:(id)arg1 timeout:(double)arg2;	// IMP=0x00000000001c877c
- (void)_performDebugEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c842c
- (void)_updateSupportedCommands;	// IMP=0x00000000001c2b3e
- (void)_updateLaunchCommands;	// IMP=0x00000000001c2af7
- (id)_supportedSessionTypes;	// IMP=0x00000000001c284b
- (id)_exportableSessionTypes;	// IMP=0x00000000001c23ed
- (void)_enqueueFallbackIntentIfNeededForCommandEvent:(id)arg1 play:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c1fde
- (void)becomeActiveIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c1a80
- (void)_likedStateChangedNotification:(id)arg1;	// IMP=0x00000000001c1a6e
- (void)_durationAvailableNotification:(id)arg1;	// IMP=0x00000000001c1a5c
- (void)_commandEventDidTimeoutNotification:(id)arg1;	// IMP=0x00000000001c18f3
- (void)nowPlayingInfoCenter:(id)arg1 didEndLyricsEvent:(id)arg2;	// IMP=0x00000000001c1302
- (void)nowPlayingInfoCenter:(id)arg1 didBeginLyricsEvent:(id)arg2;	// IMP=0x00000000001c1181
- (void)invalidateSessionTypesWithReason:(id)arg1;	// IMP=0x00000000001c10b0
- (void)invalidateQueueTypesWithReason:(id)arg1;	// IMP=0x00000000001c0fdf
- (void)engine:(id)arg1 didChangeQueueController:(id)arg2;	// IMP=0x00000000001c0fad
- (void)engine:(id)arg1 didReceivePickedRouteChange:(id)arg2;	// IMP=0x00000000001c0f9b
- (void)engineDidUnblockVocalAttenuation:(id)arg1;	// IMP=0x00000000001c0f89
- (void)engineDidBlockVocalAttenuation:(id)arg1;	// IMP=0x00000000001c0ebe
- (void)engineDidChangeVocalAttenuationLevel:(id)arg1;	// IMP=0x00000000001c0eac
- (void)engineDidChangeVocalAttenuationState:(id)arg1;	// IMP=0x00000000001c0e9a
- (void)engineDidResetMediaServices:(id)arg1;	// IMP=0x00000000001c0e90
- (void)engineDidLoseMediaServices:(id)arg1;	// IMP=0x00000000001c0e86
- (void)engineDidEndStateRestoration:(id)arg1;	// IMP=0x00000000001c0e7c
- (void)engineWillBeginStateRestoration:(id)arg1;	// IMP=0x00000000001c0e72
- (void)engine:(id)arg1 didChangeCurrentItemVariantID:(id)arg2;	// IMP=0x00000000001c0e60
- (void)engine:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2;	// IMP=0x00000000001c0dff
- (void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;	// IMP=0x00000000001c0daf
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;	// IMP=0x00000000001c0d5f
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;	// IMP=0x00000000001c0c76
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;	// IMP=0x00000000001c0c5d
- (void)engine:(id)arg1 didChangeToItem:(id)arg2;	// IMP=0x00000000001c0c14
- (void)accountManager:(id)arg1 didChangeAccounts:(id)arg2;	// IMP=0x00000000001c0993
- (void)updatePlaybackMetrics:(id)arg1;	// IMP=0x00000000001c0830
- (void)leaveSharedSessionWithCommandID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c058f
- (void)getShouldRestoreStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c04bd
- (void)reportUserBackgroundedApplication;	// IMP=0x00000000001c042d
- (void)publishIfNeeded;	// IMP=0x00000000001bf284
- (void)becomeActive;	// IMP=0x00000000001bf26e
- (void)dealloc;	// IMP=0x00000000001bf1e5
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x00000000001bef63
- (void)nowPlayingInfoCenter:(id)arg1 didEndMigrationWithIdentifier:(id)arg2 error:(id)arg3;	// IMP=0x00000000001d4da8
- (void)nowPlayingInfoCenter:(id)arg1 willBeginSessionMigrationWithIdentifier:(id)arg2;	// IMP=0x00000000001d4c94
- (void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationForRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d4bce
- (id)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d4a6f
- (id)nowPlayingInfoCenter:(id)arg1 artworkCatalogForContentItem:(id)arg2;	// IMP=0x00000000001d4914
- (id)nowPlayingInfoCenter:(id)arg1 infoForContentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d476f
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001d45ea
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;	// IMP=0x00000000001d452b
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDsFromOffset:(long long)arg2 toOffset:(long long)arg3 nowPlayingIndex:(long long *)arg4;	// IMP=0x00000000001d4480
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;	// IMP=0x00000000001d43ef
- (id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)arg1;	// IMP=0x00000000001d4375

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

