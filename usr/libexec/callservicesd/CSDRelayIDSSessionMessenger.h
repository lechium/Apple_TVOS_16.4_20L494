//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSDRelayIDSDualSession, IDSDestination, IDSDevice, MISSING_TYPE, NSMutableArray, NSObject, NSString;
@protocol CSDRelayIDSSessionMessengerDelegate, OS_dispatch_queue;

@interface CSDRelayIDSSessionMessenger
{
    NSMutableArray *_sessions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001aa84e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *sessions; // @synthesize sessions=_sessions;
- (void)session:(id)arg1 receivedData:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00100000001aa6d5
- (void)session:(id)arg1 receivedInvitationDeclineWithData:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00100000001aa502
- (void)session:(id)arg1 receivedInvitationCancelWithData:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00100000001aa326
- (void)session:(id)arg1 receivedInvitationAcceptWithData:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00100000001aa1b2
- (void)session:(id)arg1 endedWithReason:(int)arg2;	// IMP=0x00100000001a9e09
- (id)deviceForFromID:(id)arg1;	// IMP=0x00100000001a9d82
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;	// IMP=0x00100000001a9500
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 toDestinations:(id)arg3 customizedForRemoteProtocolVersion:(CDUnknownBlockType)arg4 waitUntilConnected:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000001a8fb0
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 customizedForRemoteProtocolVersion:(CDUnknownBlockType)arg3 waitUntilConnected:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001a8f8c
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 customizedForRemoteProtocolVersion:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001a8f67
- (void)sendMessage:(id)arg1 customizedForRemoteProtocolVersion:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a8f4d
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a8f36
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 toDestinations:(id)arg3;	// IMP=0x00100000001a8f18
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000001a8eec
- (void)_sendMessage:(id)arg1 andDeclineInvitationIfNecessaryForSession:(id)arg2;	// IMP=0x00100000001a8d56
- (void)_sendMessage:(id)arg1 andCancelInvitationIfNecessaryForSession:(id)arg2;	// IMP=0x00100000001a8bd0
- (MISSING_TYPE *)sendMessage:andCancelOrDeclineInvitationIfNecessaryForIdentifier: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001a8927
- (void)sendMessage:(id)arg1 andAcceptInvitationIfNecessaryForIdentifier:(id)arg2;	// IMP=0x00100000001a83be
- (void)sendMessage:(id)arg1 andStartSessionIfNecessaryForIdentifiers:(id)arg2 toDestination:(id)arg3 timeout:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001a7cbc
- (void)sendMessage:(id)arg1 andStartSessionIfNecessaryForIdentifier:(id)arg2 toDestination:(id)arg3 timeout:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001a7bc0
- (void)sendMessage:(id)arg1 andStartSessionIfNecessaryForIdentifier:(id)arg2 toDevicesSupportingProvider:(id)arg3 withTimeout:(long long)arg4;	// IMP=0x00100000001a7423
- (void)_startSession:(id)arg1 withMessage:(id)arg2 identifiers:(id)arg3 timeout:(long long)arg4 declineOnError:(_Bool)arg5;	// IMP=0x00100000001a7253
- (void)endEndingSessions;	// IMP=0x00100000001a709d
- (void)cancelOrDeclineInvitationForIdentifier:(id)arg1;	// IMP=0x00100000001a6faf
- (void)acceptInvitationForIdentifier:(id)arg1;	// IMP=0x00100000001a6ec1
- (void)prepareConnectedSessionsToEnd;	// IMP=0x00100000001a6d0b
- (void)prepareSessionToEndForIdentifier:(id)arg1;	// IMP=0x00100000001a6c26
- (int)sessionProtocolVersionForIdentifier:(id)arg1;	// IMP=0x00100000001a6be2
- (id)sessionForIdentifier:(id)arg1;	// IMP=0x00100000001a6a3e
- (id)activeSessionForIdentifier:(id)arg1;	// IMP=0x00100000001a6884
@property(readonly, nonatomic) CSDRelayIDSDualSession *currentSession;
@property(readonly, nonatomic) CSDRelayIDSDualSession *waitingSession;
- (void)_destroySession:(id)arg1;	// IMP=0x00100000001a6482
- (id)_createSessionToDestinations:(id)arg1;	// IMP=0x00100000001a62c9
- (id)_createSessionToDevices:(id)arg1;	// IMP=0x00100000001a6003
- (id)_createSessionToAllDevicesSupportingProvider:(id)arg1;	// IMP=0x00100000001a5d1c
@property(readonly, nonatomic) IDSDevice *deviceWithActiveSession;
@property(readonly, nonatomic) IDSDestination *destinationWithActiveSession;
- (void)performBlockOnTransportAvailability:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000001a5a5b
- (void)dealloc;	// IMP=0x00100000001a59e6
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001a58f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CSDRelayIDSSessionMessengerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

