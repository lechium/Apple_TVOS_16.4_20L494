//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol GKNearbyDelegate;

@interface GKMultiplayerMatchService
{
    id <GKNearbyDelegate> _delegate;	// 8 = 0x8
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x002000000009154c
+ (Class)interfaceClass;	// IMP=0x001000000009153b
- (void).cxx_destruct;	// IMP=0x00200000000a5577
@property(nonatomic) __weak id <GKNearbyDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a52e9
- (oneway void)forgetParticipant:(id)arg1 deviceID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a512e
- (oneway void)setupNearbyDiscovery;	// IMP=0x00100000000a43ef
- (oneway void)isGameCenterMultiplayerGameForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a4138
- (oneway void)fetchOnDeviceMultiplayerBundleIDsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a3c9b
- (oneway void)fetchOnDeviceMultiplayerBundleIDsForNewBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a37d0
- (oneway void)fetchDevicePushToken:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a35dc
- (oneway void)nearbyInviteWasCancelled:(id)arg1;	// IMP=0x00100000000a3566
- (oneway void)presentNearbyInvite:(id)arg1;	// IMP=0x00100000000a34f0
- (oneway void)stopNearbyAdvertisingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a336b
- (oneway void)startNearbyAdvertisingWithDiscoveryInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a319c
- (oneway void)stopNearbyBrowsingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a3017
- (oneway void)startNearbyBrowsingWithPlayerID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a2e76
- (oneway void)updateCacheWithNearbyProfileDictionary:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a252c
- (oneway void)cancelRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a2323
- (oneway void)updateRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a1fa8
- (oneway void)initiateRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a1c1d
- (oneway void)_performRelayAction:(id)arg1 request:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a182f
- (oneway void)sendReconnectInvitation:(id)arg1 toPlayer:(id)arg2 connectionData:(id)arg3 sessionToken:(id)arg4 pushToken:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000a0cda
- (oneway void)removeInviteSessionIfNeeded;	// IMP=0x00100000000a0971
- (oneway void)removeInviteSession;	// IMP=0x00100000000a0934
- (oneway void)getInviteSessionTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a0778
- (oneway void)getPlayersToInviteWithHandlerV2:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a0395
- (oneway void)hasCanceledMultiplayerInitiateBulletinForSessionToken:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a019c
- (oneway void)getAcceptedGameInviteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009f8e3
- (oneway void)declineGameInvite:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009f4b9
- (oneway void)acceptGameInvite:(id)arg1 connectionData:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009e59d
- (oneway void)putMultiPlayerGroup:(id)arg1 participants:(id)arg2 playedAt:(long long)arg3 bundleID:(id)arg4 numberOfAutomatched:(long long)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x001000000009def6
- (oneway void)getMultiPlayerGroups:(CDUnknownBlockType)arg1;	// IMP=0x001000000009cd7c
- (void)convertToInternalObjects:(id)arg1 results:(id)arg2;	// IMP=0x001000000009c8ef
- (id)ensureGroup:(id)arg1 participants:(id)arg2 playedAt:(long long)arg3 numberOfAutomatched:(long long)arg4 moc:(id)arg5 list:(id)arg6;	// IMP=0x001000000009c407
- (oneway void)cancelGameInviteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009bec7
- (oneway void)removePlayersFromGameInviteV2:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b5d5
- (oneway void)invitePlayersForMatchRequest:(id)arg1 onlineConnectionData:(id)arg2 nearbyConnectionData:(id)arg3 devicePushToken:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x001000000009968f
- (void)saveRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000992cb
- (id)privateDatabase;	// IMP=0x001000000009926d
- (void)setupInviteShareWithRecordID:(id)arg1 rootRecord:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000098bda
- (oneway void)loadURLWithData:(id)arg1 player:(id)arg2 matchRequest:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009718b
- (void)initiateInvitationForMatchRequest:(id)arg1 connectionData:(id)arg2 recipients:(id)arg3 devicePushToken:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000095c1e
- (oneway void)setShareRecordID:(id)arg1;	// IMP=0x0010000000095b8e
- (oneway void)hasExistingInviteSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000095b03
- (oneway void)setShareInvitees:(id)arg1;	// IMP=0x001000000009512e
- (oneway void)getCompatibilityMatrix:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009426e
- (oneway void)getOverallFlowRateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000093682
- (oneway void)getFlowRateForPlayerGroup:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000929ea
- (oneway void)cancelOutstandingMatchRequestWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000092565
- (oneway void)getPlayersForMatchRequest:(id)arg1 connectionData:(id)arg2 connectedPeers:(long long)arg3 rematchID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000091557

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
