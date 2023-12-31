//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSDRelayHostController
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000016a8aa
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)pushHostedCallsForRemoteInviteDictionary:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000169fdf
- (void)handlePickRouteMessageFromClient:(id)arg1;	// IMP=0x0010000000169f27
- (void)handlePushRelayingCallsMessageFromClient:(id)arg1;	// IMP=0x00100000001699ba
- (void)handlePullHostedCallsMessageFromClient:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000016990c
- (void)handleRequestCallContextMessageFromClient:(id)arg1;	// IMP=0x001000000016984c
- (void)handleSendHardPauseDigitsMessageFromClient:(id)arg1;	// IMP=0x00100000001695ec
- (void)handleDisconnectAllCallsMessageFromClient:(id)arg1;	// IMP=0x001000000016952d
- (void)handleDisconnectCurrentCallAndActivateHeldMessageFromClient:(id)arg1;	// IMP=0x001000000016946e
- (MISSING_TYPE *)handleHoldActiveAndAnswerMessageFromClient: /* Error: Ran out of types for this method. */;	// IMP=0x001000000016925f
- (void)handleEndHeldAndAnswerMessageFromClient:(id)arg1;	// IMP=0x0010000000169050
- (void)handleEndActiveAndAnswerMessageFromClient:(id)arg1;	// IMP=0x0010000000168e41
- (void)handleSwapCallsMessageFromClient:(id)arg1;	// IMP=0x0010000000168dfd
- (void)handleUngroupCallMessageFromClient:(id)arg1;	// IMP=0x0010000000168c7d
- (void)handleGroupCallMessageFromClient:(id)arg1;	// IMP=0x001000000016877a
- (void)handleUnholdCallMessageFromClient:(id)arg1;	// IMP=0x00100000001685fa
- (void)handleHoldCallMessageFromClient:(id)arg1;	// IMP=0x001000000016847a
- (void)handleDisconnectCallMessageFromClient:(id)arg1;	// IMP=0x001000000016827c
- (void)handleAnswerCallMessageFromClient:(id)arg1 destination:(id)arg2 device:(id)arg3;	// IMP=0x0010000000167c5c
- (void)handleDialCallMessageFromClient:(id)arg1 destination:(id)arg2 device:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000166bc8
- (void)_launchInCallApplicationForOutgoingCallOnHostIfNecessary;	// IMP=0x0010000000166aae
- (void)_conferenceTransport:(id)arg1 didStopForCall:(id)arg2 cleanly:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001667cd
- (void)_answerHostedCall:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001662bd
- (id)callWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x001000000016620c
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000016619e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

