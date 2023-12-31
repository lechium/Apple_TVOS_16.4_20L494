//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCIDSSessionInfoSynchronizer;

__attribute__((visibility("hidden")))
@interface VCTransportSessionIDSMultiLink
{
    VCIDSSessionInfoSynchronizer *_sessionInfoSynchronizer;	// 176 = 0xb0
    _Bool _isWiFiAssistActive;	// 184 = 0xb8
    _Bool _oneToOneModeEnabled;	// 185 = 0xb9
}

@property(readonly, nonatomic) VCIDSSessionInfoSynchronizer *sessionInfoSynchronizer; // @synthesize sessionInfoSynchronizer=_sessionInfoSynchronizer;
- (void)VCIDSSessionInfoSynchronizer:(void *)arg1 sendVCIDSSessionInfoRequest:(id)arg2;	// IMP=0x0000000000364b9f
- (void)logSignalStrength;	// IMP=0x0000000000364b99
- (void)setRemoteDeviceVersionIDS;	// IMP=0x00000000003649cf
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x000000000036480a
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x0000000000364645
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x0000000000364480
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x0000000000364260
- (void)setOneToOneModeEnabled:(_Bool)arg1 isInitiator:(_Bool)arg2;	// IMP=0x00000000003640b5
- (void)optIntoExistingSubscribedStreamsForConnection:(id)arg1;	// IMP=0x0000000000364098
- (void)optOutAllStreamsForConnection:(id)arg1;	// IMP=0x0000000000364020
- (void)resetParticipantGenerationCounter;	// IMP=0x0000000000364003
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;	// IMP=0x0000000000363fe6
- (void)didMediaQualityDegrade:(_Bool)arg1;	// IMP=0x0000000000363f4c
- (void)didUpdatePreferredInterfaceForDuplication:(unsigned char)arg1 notifyPeer:(_Bool)arg2 enableDuplication:(_Bool)arg3 isMediaUnrecoverableSignal:(_Bool)arg4;	// IMP=0x0000000000363e1f
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id)arg2;	// IMP=0x0000000000363af3
- (void)discardConnection:(id)arg1;	// IMP=0x0000000000363822
- (void)connectionCallback:(id)arg1 isInitialConnection:(_Bool)arg2;	// IMP=0x00000000003636a6
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 activeConnection:(id)arg3;	// IMP=0x0000000000363358
- (void)setDefaultLink:(id)arg1;	// IMP=0x0000000000363140
- (void)setWiFiAssist:(_Bool)arg1;	// IMP=0x0000000000362f4b
- (void)resetActiveConnection;	// IMP=0x0000000000362f32
- (void)setQuickRelayServerProvider:(int)arg1;	// IMP=0x0000000000362f02
- (void)handleProbingResponse:(id)arg1;	// IMP=0x0000000000362e8c
- (void)handleSessionInfoResponse:(id)arg1;	// IMP=0x0000000000362e6f
- (void)handleLinkDisconnectedWithInfo:(id)arg1;	// IMP=0x0000000000362b84
- (void)handleLinkConnectedWithInfo:(id)arg1;	// IMP=0x0000000000362718
- (void)onStop;	// IMP=0x00000000003626f8
- (int)onStart;	// IMP=0x00000000003626d5
- (void)dealloc;	// IMP=0x000000000036264e
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(_Bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 isMultiwaySession:(_Bool)arg5 dataPath:(int)arg6;	// IMP=0x00000000003624db
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(_Bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 isMultiwaySession:(_Bool)arg5;	// IMP=0x00000000003624bd
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;	// IMP=0x0000000000362493

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

