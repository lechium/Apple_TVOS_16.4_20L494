//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GKConnection.h"

@class CDXClient, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, TimingCollection;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GKConnectionInternal : GKConnection
{
    unsigned int _gckPID;	// 20 = 0x14
    NSString *_pidGUID;	// 24 = 0x18
    struct OpaqueGCKSession *_gckSession;	// 32 = 0x20
    NSMutableArray *_gckEventList;	// 40 = 0x28
    id _eventDelegate;	// 48 = 0x30
    CDXClient *_cdxClient;	// 56 = 0x38
    NSMutableDictionary *_cdxSessions;	// 64 = 0x40
    NSData *_preblob;	// 72 = 0x48
    CDUnknownBlockType _preblobCallback;	// 80 = 0x50
    double _preblobCallbackCancelTime;	// 88 = 0x58
    struct _opaque_pthread_mutex_t _xPreblobFetch;	// 96 = 0x60
    struct _opaque_pthread_cond_t _cPreblobFetch;	// 160 = 0xa0
    struct _opaque_pthread_mutex_t _xPrepareThread;	// 208 = 0xd0
    struct _opaque_pthread_cond_t _cPrepareThread;	// 272 = 0x110
    int _fPrepareThread;	// 320 = 0x140
    double _wakeTime;	// 328 = 0x148
    NSMutableDictionary *_preblobToPIDMap;	// 336 = 0x150
    NSMutableDictionary *_pidToPreblobMap;	// 344 = 0x158
    NSMutableDictionary *_pidToConnectionDataMap;	// 352 = 0x160
    NSMutableArray *_pendingConnectionPIDList;	// 360 = 0x168
    _Bool _fAllowMoreRelay;	// 368 = 0x170
    NSMutableArray *_allowRelayPIDList;	// 376 = 0x178
    NSMutableDictionary *_pidToPlayerIDMap;	// 384 = 0x180
    NSMutableDictionary *_pidToConnectTimeoutSource;	// 392 = 0x188
    struct _opaque_pthread_mutex_t _xRelay;	// 400 = 0x190
    NSMutableDictionary *_pidToRelayInitiateInfoMap;	// 464 = 0x1d0
    NSMutableDictionary *_pidToRelayConnectionDataMap;	// 472 = 0x1d8
    NSMutableDictionary *_pidToRelayUpdateInfoMap;	// 480 = 0x1e0
    NSMutableDictionary *_initRelayQueue;	// 488 = 0x1e8
    NSMutableDictionary *_updateRelayQueue;	// 496 = 0x1f0
    int _fPreReleased;	// 504 = 0x1f8
    int _localGamingCDXSocket;	// 508 = 0x1fc
    unsigned short _localGamingCDXPort;	// 512 = 0x200
    NSObject<OS_dispatch_source> *_localGamingCDXListenSource;	// 520 = 0x208
    NSMutableDictionary *_localGamingSocketToPIDMap;	// 528 = 0x210
    NSMutableDictionary *_localGamingSocketToConnectionDataMap;	// 536 = 0x218
    NSMutableSet *_pidsPreparedForConnection;	// 544 = 0x220
    struct opaqueRTCReporting *_reportingAgent;	// 552 = 0x228
    TimingCollection *_perfTimers;	// 560 = 0x230
}

@property(retain) NSMutableDictionary *cdxSessions; // @synthesize cdxSessions=_cdxSessions;
@property(retain, nonatomic) CDXClient *cdxClient; // @synthesize cdxClient=_cdxClient;
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;	// IMP=0x0000000000038ce7
- (struct opaqueRTCReporting *)reportingAgent;	// IMP=0x0000000000038cd6
@property(retain) NSMutableDictionary *pidToConnectTimeoutSource; // @synthesize pidToConnectTimeoutSource=_pidToConnectTimeoutSource;
- (id)getLocalConnectionDataForLocalGaming;	// IMP=0x000000000003898b
- (_Bool)startListeningForLocalGamingCDX;	// IMP=0x0000000000038153
- (void)localGamingReceiveDataHandler:(id)arg1 data:(id)arg2 time:(double)arg3 error:(id)arg4;	// IMP=0x000000000003760c
- (_Bool)localGamingCheckEstablishConnection:(id)arg1 connectionData:(id)arg2;	// IMP=0x00000000000371be
- (id)networkStatistics;	// IMP=0x0000000000036d59
- (id)networkStatisticsDictionaryForGCKStats:(void *)arg1;	// IMP=0x00000000000367b4
- (void)cancelConnectParticipant:(id)arg1;	// IMP=0x0000000000036630
- (void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(_Bool)arg4;	// IMP=0x0000000000036453
- (void)internalUpdateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(_Bool)arg4;	// IMP=0x0000000000035e13
- (void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(_Bool)arg4;	// IMP=0x0000000000035c36
- (void)internalInitiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(_Bool)arg4;	// IMP=0x0000000000034ea7
- (void)doRelayCheckForRemotePeerID:(id)arg1;	// IMP=0x0000000000034a91
- (id)newRelayUpdateDictionaryForParticipant:(id)arg1 didInitiate:(_Bool)arg2;	// IMP=0x0000000000034945
- (id)createInitiateRelayDictionaryForParticipant:(id)arg1 remotePeerID:(id)arg2;	// IMP=0x000000000003464b
- (void)setParticipantID:(id)arg1 forPeerID:(id)arg2;	// IMP=0x0000000000034244
- (_Bool)convertPeerID:(id)arg1 toParticipantID:(id *)arg2;	// IMP=0x00000000000341b8
- (_Bool)convertParticipantID:(id)arg1 toPeerID:(id *)arg2;	// IMP=0x00000000000340fe
- (void)CDXClientSession:(id)arg1 receivedData:(id)arg2 from:(long long)arg3;	// IMP=0x0000000000033a73
- (id)extractBlobUsingData:(id)arg1 withSourcePID:(unsigned int)arg2 destPID:(unsigned int)arg3;	// IMP=0x00000000000336c9
- (void)CDXClient:(id)arg1 preblob:(id)arg2;	// IMP=0x000000000003340e
- (void)CDXClient:(id)arg1 error:(id)arg2;	// IMP=0x00000000000332f4
- (id)createInsecureTicketUsingSortedConnectionsFromList:(id)arg1;	// IMP=0x000000000003298d
- (unsigned int)gckPID;	// IMP=0x0000000000032757
- (id)eventDelegate;	// IMP=0x00000000000325e0
- (void)setEventDelegate:(id)arg1;	// IMP=0x00000000000322ad
- (void)addEvent:(CDStruct_68f9d01f *)arg1 remotePeer:(unsigned int)arg2;	// IMP=0x0000000000032097
- (struct OpaqueGCKSession *)gckSession;	// IMP=0x0000000000032086
- (void)internal_setRemoteConnectionData:(id)arg1 fromParticipantID:(id)arg2 pendingConnectionPIDList:(id)arg3;	// IMP=0x0000000000031a9a
- (void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2;	// IMP=0x000000000002fe77
- (_Bool)shouldWeInitiateRelayWithPID:(unsigned int)arg1;	// IMP=0x000000000002fccf
- (void)connectPendingConnectionsFromList:(id)arg1 sessionInfo:(id)arg2;	// IMP=0x000000000002f194
- (void)getLocalConnectionDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ecfc
- (id)asyncWorkQueue;	// IMP=0x000000000002ecee
- (id)timerQueue;	// IMP=0x000000000002ece1
- (void)dealloc;	// IMP=0x000000000002e93a
- (void)preRelease;	// IMP=0x000000000002e7f2
- (id)initWithParticipantID:(id)arg1;	// IMP=0x000000000002e2a5

@end

