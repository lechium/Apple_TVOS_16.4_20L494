//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerPlaybackCoordinator, NSString;

__attribute__((visibility("hidden")))
@interface ICLinkLinkAVPlaybackCoordinatorMedium
{
    AVPlayerPlaybackCoordinator *_playbackCoordinator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000093dfc
@property(readonly, nonatomic) AVPlayerPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
- (void)playbackCoordinator:(id)arg1 reloadTransportControlStateForItemWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000093dd3
- (void)playbackCoordinator:(id)arg1 broadcastTransportControlStateDictionary:(id)arg2 forItemWithIdentifier:(id)arg3;	// IMP=0x0000000000093dbb
- (void)playbackCoordinator:(id)arg1 broadcastLocalParticipantStateDictionary:(id)arg2;	// IMP=0x0000000000093da6
- (id)localParticipantUUIDForPlaybackCoordinator:(id)arg1;	// IMP=0x0000000000093ce4
- (void)clearCoordinationMediumDelegate;	// IMP=0x0000000000093cc5
- (void)removeParticipant:(id)arg1;	// IMP=0x0000000000093ca8
- (void)handleNewTransportControlStateDictionary:(id)arg1;	// IMP=0x0000000000093c8b
- (void)handleNewParticipantStateDictionary:(id)arg1;	// IMP=0x0000000000093c6e
- (void)_playbackCoordinatorDidIssueCommandToPlaybackObjectNotification:(id)arg1;	// IMP=0x0000000000093912
- (_Bool)isCoordinatorSuspended;	// IMP=0x00000000000938bf
- (id)initWithPlaybackCoordinator:(id)arg1 liveLink:(id)arg2;	// IMP=0x00000000000937cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
