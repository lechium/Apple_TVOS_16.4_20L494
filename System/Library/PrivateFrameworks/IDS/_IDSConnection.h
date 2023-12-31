//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSAccount, IDSDirectMessageConnection, IMOrderedMutableDictionary, NSDictionary, NSMapTable, NSSet, NSString;

@interface _IDSConnection : NSObject
{
    id _messageContext;	// 8 = 0x8
    id _delegateContext;	// 16 = 0x10
    unsigned char _incomingMessageLoggingSequence;	// 24 = 0x18
    unsigned char _outgoingMessageLoggingSequence;	// 25 = 0x19
    NSMapTable *_delegateToInfo;	// 32 = 0x20
    IDSAccount *_account;	// 40 = 0x28
    NSSet *_commands;	// 48 = 0x30
    NSString *_serviceToken;	// 56 = 0x38
    IMOrderedMutableDictionary *_pendingSends;	// 64 = 0x40
    unsigned int _delegateCapabilities;	// 72 = 0x48
    _Bool _indirectDelegateCallouts;	// 76 = 0x4c
    unsigned int _wakingDowngradeCount;	// 80 = 0x50
    IDSDirectMessageConnection *_directMessageConnection;	// 88 = 0x58
    NSDictionary *_directMessagingMetadata;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000070119
@property(retain, nonatomic) NSDictionary *directMessagingMetadata; // @synthesize directMessagingMetadata=_directMessagingMetadata;
@property(retain, nonatomic) IDSDirectMessageConnection *directMessageConnection; // @synthesize directMessageConnection=_directMessageConnection;
@property(nonatomic) unsigned int wakingDowngradeCount; // @synthesize wakingDowngradeCount=_wakingDowngradeCount;
- (void)sendXPCObject:(id)arg1;	// IMP=0x00000000000700cb
- (void)_sendMissingMessageMetric:(id)arg1;	// IMP=0x0000000000070026
- (void)checkTransportLogWithReason:(long long)arg1;	// IMP=0x000000000006fe27
- (void)updateDeviceIdentity:(id)arg1 error:(id)arg2;	// IMP=0x000000000006fbc1
- (void)groupShareReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x000000000006f37d
- (void)receivedGroupSessionParticipantDataUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4;	// IMP=0x000000000006f0a3
- (void)receivedGroupSessionParticipantUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000006ed4d
- (void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6;	// IMP=0x000000000006e6d3
- (void)pendingIncomingMessageWithGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000006e25f
- (void)didFlushCacheForService:(id)arg1 remoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4;	// IMP=0x000000000006df64
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;	// IMP=0x000000000006dc86
- (void)receivedMetadataForDirectMessaging:(id)arg1;	// IMP=0x000000000006db95
- (void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x000000000006ce8e
- (void)incomingInvitationUpdate:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x000000000006cb82
- (void)incomingInvitation:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x000000000006c876
- (void)accessoryReportMessageReceived:(id)arg1 accessoryID:(id)arg2 controllerID:(id)arg3 withGUID:(id)arg4 forTopic:(id)arg5 toIdentifier:(id)arg6 fromID:(id)arg7 context:(id)arg8;	// IMP=0x000000000006c000
- (void)accessoryDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x000000000006b6bc
- (void)engramDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x000000000006ae01
- (void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x000000000006a2b1
- (void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;	// IMP=0x00000000000693f8
- (void)opportunisticDataReceived:(id)arg1 withIdentifier:(id)arg2 fromID:(id)arg3 context:(id)arg4;	// IMP=0x00000000000691f1
- (_Bool)_canServiceNameAcceptMessagesInTransientRegistrationState:(id)arg1;	// IMP=0x00000000000691d5
- (_Bool)_isAccountInValidRegistrationStateToAcceptMessages;	// IMP=0x00000000000690da
- (_Bool)_shouldAcceptIncomingType:(id)arg1 forTopic:(id)arg2 localURI:(id)arg3 remoteURI:(id)arg4 validateAliases:(_Bool)arg5 guid:(id)arg6;	// IMP=0x0000000000068213
- (void)_setTemporaryMessageContext:(id)arg1;	// IMP=0x00000000000681cf
- (void)didSendOpportunisticDataWithIdentifier:(id)arg1 onAccount:(id)arg2 toIDs:(id)arg3;	// IMP=0x0000000000067ecc
- (void)messageIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;	// IMP=0x0000000000067804
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;	// IMP=0x00000000000672a8
- (void)messageIdentifierInner:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(_Bool)arg6 context:(id)arg7 isDirectMessage:(_Bool)arg8;	// IMP=0x000000000006671b
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(_Bool)arg6 context:(id)arg7;	// IMP=0x00000000000666f5
- (void)daemonConnected;	// IMP=0x0000000000066649
- (void)_resendPendingSends;	// IMP=0x0000000000066226
- (void)_handleLastCallForPendingIdentifier:(id)arg1 callbackID:(id)arg2;	// IMP=0x0000000000066181
- (void)_connect;	// IMP=0x0000000000065f50
- (void)account:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0000000000065d94
- (void)account:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x0000000000065bd8
- (void)account:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0000000000065a1c
- (void)account:(id)arg1 isActiveChanged:(_Bool)arg2;	// IMP=0x00000000000658a9
- (void)connection:(id)arg1 messageSendFailed:(id)arg2 responseCode:(long long)arg3;	// IMP=0x00000000000657b2
- (void)connection:(id)arg1 incomingGUIDAckFromDirectConnection:(id)arg2;	// IMP=0x00000000000656d9
- (void)connection:(id)arg1 incomingProtobufFromDirectConnection:(id)arg2 withGUID:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;	// IMP=0x000000000006554c
- (void)connection:(id)arg1 incomingMessageFromDirectConnection:(id)arg2 withGUID:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;	// IMP=0x00000000000653ba
- (void)connection:(id)arg1 incomingDataFromDirectConnection:(id)arg2 withGUID:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;	// IMP=0x0000000000065216
- (void)connection:(id)arg1 incomingAckWithIdentifier:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 hasBeenDeliveredWithContext:(id)arg6 isAppAck:(_Bool)arg7;	// IMP=0x0000000000064faf
- (_Bool)sendServerMessage:(id)arg1 command:(id)arg2;	// IMP=0x0000000000064d78
- (_Bool)sendInvitationUpdate:(id)arg1 toDestination:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x0000000000064453
- (_Bool)sendInvitation:(id)arg1 toDestination:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x0000000000063b2e
- (_Bool)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x0000000000063505
- (_Bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x0000000000062b4a
- (_Bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x00000000000624c6
- (void)_replaceSentinelInSendParameters:(id)arg1 withCurrentActiveDevice:(id)arg2;	// IMP=0x0000000000062388
- (_Bool)_isDestinationSingleLocalAddress:(id)arg1;	// IMP=0x000000000006221c
- (id)_sendWithParameters:(id)arg1 options:(id)arg2 loggingType:(id)arg3 loggingDataSize:(unsigned long long)arg4;	// IMP=0x000000000005fa67
- (void)sendAppAckForDirectMessage:(id)arg1;	// IMP=0x000000000005fa51
- (void)setDelegateCapabilities:(unsigned int)arg1;	// IMP=0x000000000005f9af
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4 group:(id)arg5;	// IMP=0x000000000005f18e
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000005f16b
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;	// IMP=0x000000000005f142
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005f12e
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000005f0c0
- (void)addDelegate:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005eca3
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000005ec8e
- (id)_defaultPairedDevice;	// IMP=0x000000000005eaf3
- (id)_activeDevice;	// IMP=0x000000000005e958
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) IDSAccount *account;
- (id)daemonListener;	// IMP=0x000000000005e78d
- (id)daemonController;	// IMP=0x000000000005e774
- (void)createDirectMessageConnectionIfNeeded;	// IMP=0x000000000005e4fe
- (void)dealloc;	// IMP=0x000000000005e3cd
- (id)initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(_Bool)arg3 delegateContext:(id)arg4;	// IMP=0x000000000005dfdc
- (id)_init;	// IMP=0x000000000005dfad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

