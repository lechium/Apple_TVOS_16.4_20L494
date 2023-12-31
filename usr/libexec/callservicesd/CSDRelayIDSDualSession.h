//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSDestination, IDSDevice, NSArray, NSData, NSMutableArray, NSMutableSet;
@protocol CSDRelayIDSDualSessionDelegate;

@interface CSDRelayIDSDualSession
{
    _Bool _hasStarted;	// 8 = 0x8
    _Bool _hasReceivedAccept;	// 9 = 0x9
    id <CSDRelayIDSDualSessionDelegate> _delegate;	// 16 = 0x10
    IDSDestination *_remoteDestination;	// 24 = 0x18
    IDSDevice *_remoteDevice;	// 32 = 0x20
    NSMutableArray *_pendingData;	// 40 = 0x28
    NSMutableSet *_identifiers;	// 48 = 0x30
    NSMutableArray *_blocksPendingTransportAvailability;	// 56 = 0x38
    NSData *_acceptPayloadData;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000005f0f3
- (void)setAcceptPayloadData:(id)arg1;	// IMP=0x001000000005f0e2
- (id)acceptPayloadData;	// IMP=0x001000000005f0d1
@property(nonatomic) _Bool hasReceivedAccept; // @synthesize hasReceivedAccept=_hasReceivedAccept;
@property(nonatomic) _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(readonly, nonatomic) NSMutableArray *blocksPendingTransportAvailability; // @synthesize blocksPendingTransportAvailability=_blocksPendingTransportAvailability;
@property(readonly, nonatomic) NSMutableSet *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, nonatomic) NSMutableArray *pendingData; // @synthesize pendingData=_pendingData;
@property(retain, nonatomic) IDSDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(retain, nonatomic) IDSDestination *remoteDestination; // @synthesize remoteDestination=_remoteDestination;
@property(nonatomic) __weak id <CSDRelayIDSDualSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sessionProvider:(id)arg1 receivedSessionMessageFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000005ee58
- (void)sessionProvider:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000005ecc9
- (void)sessionProvider:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000005eb3a
- (void)sessionProvider:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000005e961
- (void)sessionProvider:(id)arg1 endedWithReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x001000000005e8c4
- (void)sessionProviderStarted:(id)arg1;	// IMP=0x001000000005e857
- (void)prepareToEnd;	// IMP=0x001000000005e760
- (void)sendDataAndDeclineInvitationIfNecessary:(id)arg1;	// IMP=0x001000000005e67c
- (void)sendDataAndCancelInvitationIfNecessary:(id)arg1;	// IMP=0x001000000005e595
- (void)sendDataAndAcceptInvitationIfNecessary:(id)arg1;	// IMP=0x001000000005e4b1
- (void)sendDataAndSendInvitationIfNecessary:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x001000000005e3c4
- (void)sendData:(id)arg1 toDestinations:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005e1ba
- (void)sendData:(id)arg1 waitUntilConnected:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005dee0
- (void)removePendingData;	// IMP=0x001000000005dce6
- (void)sendPendingData;	// IMP=0x001000000005daa7
- (void)pendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005d9e9
- (void)performBlockOnTransportAvailability:(CDUnknownBlockType)arg1;	// IMP=0x001000000005d66c
- (void)runBlocksPendingTransportAvailability:(_Bool)arg1;	// IMP=0x001000000005d347
- (void)runBlocksPendingTransportAvailabilityIfNecessary:(_Bool)arg1;	// IMP=0x001000000005d1dc
- (void)mergeSession:(id)arg1;	// IMP=0x001000000005cfbb
- (void)removeIdentifiers:(id)arg1;	// IMP=0x001000000005ce36
- (void)removeIdentifier:(id)arg1;	// IMP=0x001000000005cdc4
- (void)addIdentifiers:(id)arg1;	// IMP=0x001000000005cd52
- (void)addIdentifier:(id)arg1;	// IMP=0x001000000005cce0
- (_Bool)hasIdentifier:(id)arg1;	// IMP=0x001000000005cc69
@property(readonly, copy, nonatomic) NSArray *allIdentifiers;
- (id)transport;	// IMP=0x001000000005cb5c
- (void)dealloc;	// IMP=0x001000000005cb07
- (id)initAsReceiverWithSessionProvider:(id)arg1 remoteDestination:(id)arg2 remoteDevice:(id)arg3 remoteProtocolVersion:(int)arg4 identifiers:(id)arg5;	// IMP=0x001000000005ca1e
- (id)initAsInitiatorWithSessionProvider:(id)arg1 identifiers:(id)arg2;	// IMP=0x001000000005c9f6
- (id)initWithSessionProvider:(id)arg1 isInitiator:(_Bool)arg2 remoteDestination:(id)arg3 remoteDevice:(id)arg4 remoteProtocolVersion:(id)arg5 identifiers:(id)arg6;	// IMP=0x001000000005c7ac
- (id)initWithSessionProvider:(id)arg1 isInitiator:(_Bool)arg2 remoteProtocolVersion:(id)arg3;	// IMP=0x001000000005c725

@end

