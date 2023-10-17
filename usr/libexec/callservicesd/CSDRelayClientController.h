//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSDRelayClientController
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000045b47
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)pullRemotelyHostedCallsForMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000454be
- (void)handleUpdateSupportsTTYWithVoiceMessageFromHost:(id)arg1;	// IMP=0x0010000000045350
- (void)handleUpdateSupportsEmergencyFallbackMessageFromHost:(id)arg1;	// IMP=0x00100000000451e2
- (void)handleUpdateFailureExpectedMessageFromHost:(id)arg1;	// IMP=0x0010000000045074
- (void)handleUpdateRoutesMessageFromHost:(id)arg1;	// IMP=0x0010000000044dfe
- (void)handleUpdateRemoteUplinkMutedMessageFromHost:(id)arg1;	// IMP=0x0010000000044c90
- (void)handleUpdateCallDisplayContextMessageFromHost:(id)arg1;	// IMP=0x0010000000044a98
- (void)handleInvitationSentMessageFromHost:(id)arg1;	// IMP=0x001000000004493b
- (void)handleNeedsManualInCallSoundsChangeMessageFromHost:(id)arg1;	// IMP=0x00100000000447b0
- (void)handleUpdateCallContextAvailableMessageFromHost:(id)arg1;	// IMP=0x001000000004464d
- (void)handlePushHostedCallsMessageFromHost:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000444cb
- (void)handleCallStartedConnectingMessageFromHost:(id)arg1;	// IMP=0x001000000004436e
- (void)handleUpdateRemoteCallStateMessageFromHost:(id)arg1;	// IMP=0x0010000000043f57
- (void)handleHardPauseDigitsAvailabilityMessageFromHost:(id)arg1;	// IMP=0x0010000000043d14
- (void)handleResetStateMessageFromHost:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x0010000000043679
- (void)handleDeviceUnavailableMessageFromHost:(id)arg1;	// IMP=0x001000000004348c
- (void)handleUpdateCallModelMessageFromHost:(id)arg1;	// IMP=0x0010000000043123
- (void)handleResetWantsHoldMusicFromHost:(id)arg1;	// IMP=0x0010000000042fc6
- (void)handlePullRelayingCallsMessageFromHost:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x0010000000042c9b
- (void)handleCallConnectedMessageFromHost:(id)arg1;	// IMP=0x0010000000042b0c
- (void)handleCallDisconnectedMessageFromHost:(id)arg1;	// IMP=0x0010000000042a16
- (void)handleCallAnsweredElsewhereMessageFromHost:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x001000000004269e
- (void)handleCallDialedMessageFromHost:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x0010000000042383
- (void)handleIncomingCallMessageFromHost:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x001000000004207c
- (id)callWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x0010000000041fae
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000041f40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

