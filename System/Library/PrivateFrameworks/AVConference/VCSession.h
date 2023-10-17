//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCRateController, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, VCAudioCaptionsCoordinator, VCControlChannelMultiWay, VCMoments, VCNetworkFeedbackController, VCRateControlMediaController, VCSecurityKeyManager, VCSessionBitrateArbiter, VCSessionConfiguration, VCSessionDownlinkBandwidthAllocator, VCSessionMessaging, VCSessionParticipant, VCSessionParticipantLocal, VCSessionParticipantRemote, VCSessionPresentationInfo, VCSessionStatsController, VCSwitchManager, VCTransportSession;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_nw_activity, VCConnectionProtocol, VCSessionDelegate;

__attribute__((visibility("hidden")))
@interface VCSession
{
    unsigned int _state;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_sessionQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 40 = 0x28
    id <VCSessionDelegate> _delegate;	// 48 = 0x30
    NSString *_uuid;	// 56 = 0x38
    NSString *_idsDestination;	// 64 = 0x40
    VCControlChannelMultiWay *_controlChannel;	// 72 = 0x48
    VCSessionMessaging *_sessionMessaging;	// 80 = 0x50
    VCSessionConfiguration *_configuration;	// 88 = 0x58
    VCSessionParticipantLocal *_localParticipant;	// 96 = 0x60
    NSMutableDictionary *_remoteParticipantsMapByUUID;	// 104 = 0x68
    NSMutableDictionary *_remoteParticipantsMapByServerID;	// 112 = 0x70
    int _reportUpdateInterval;	// 120 = 0x78
    int _reportReportFrequency;	// 124 = 0x7c
    VCSessionStatsController *_sessionStatsController;	// 128 = 0x80
    VCNetworkFeedbackController *_feedbackController;	// 136 = 0x88
    NSMutableArray *_startingParticipants;	// 144 = 0x90
    NSMutableSet *_stoppingParticipants;	// 152 = 0x98
    NSMutableArray *_initializingParticipants;	// 160 = 0xa0
    VCSecurityKeyManager *_securityKeyManager;	// 168 = 0xa8
    VCTransportSession *_transportSession;	// 176 = 0xb0
    id <VCConnectionProtocol> _currentActiveConnection;	// 184 = 0xb8
    unsigned int _transportSessionID;	// 192 = 0xc0
    _Bool _localSourceNeedsReset;	// 196 = 0xc4
    struct _VCSessionOneToOneSettings _oneToOneSettings;	// 200 = 0xc8
    _Bool _switchFromGFTToOneToOneEnabled;	// 240 = 0xf0
    double _remoteMediaStallReconnectTimeout;	// 248 = 0xf8
    double _oneToOneSwitchStartTime;	// 256 = 0x100
    _Bool _isOneToOneInitiator;	// 264 = 0x108
    _Bool _oneToOneModeEnabled;	// 265 = 0x109
    _Bool _isReconnectPending;	// 266 = 0x10a
    _Bool _isOneToOneRemoteMediaStalling;	// 267 = 0x10b
    unsigned short _maxConnectionMTU;	// 268 = 0x10c
    _Bool _useReducedSizeRTCP;	// 270 = 0x10e
    AVCRateController *_uplinkRateController;	// 272 = 0x110
    AVCRateController *_downlinkRateController;	// 280 = 0x118
    unsigned int _uplinkTargetBitrate;	// 288 = 0x120
    unsigned int _downlinkTargetBitrate;	// 292 = 0x124
    VCRateControlMediaController *_uplinkMediaController;	// 296 = 0x128
    unsigned int _basebandFlushTransactionID;	// 304 = 0x130
    VCSessionDownlinkBandwidthAllocator *_downlinkBandwidthAllocator;	// 312 = 0x138
    NSMutableDictionary *_optInDictionary;	// 320 = 0x140
    double _sessionStartTime;	// 328 = 0x148
    struct tagVCMediaQueue *_mediaQueue;	// 336 = 0x150
    _Bool _forceDisableMediaPriority;	// 344 = 0x158
    NSError *_stopError;	// 352 = 0x160
    void *_spatialMetadata;	// 360 = 0x168
    _Bool _isGKVoiceChat;	// 368 = 0x170
    double _remoteMediaStallDisconnectTimeout;	// 376 = 0x178
    int _reportingModuleID;	// 384 = 0x180
    int _reportingClientType;	// 388 = 0x184
    VCAudioCaptionsCoordinator *_captionsCoordinator;	// 392 = 0x188
    NSObject<OS_nw_activity> *_parentNWActivity;	// 400 = 0x190
    NSObject<OS_nw_activity> *_nwActivity;	// 408 = 0x198
    NSObject<OS_nw_activity> *_nwActivityActiveSession;	// 416 = 0x1a0
    VCSessionPresentationInfo *_presentationInfo;	// 424 = 0x1a8
    VCSessionBitrateArbiter *_bitrateArbiter;	// 432 = 0x1b0
    NSString *_conversationID;	// 440 = 0x1b8
    NSDate *_conversationTimeBase;	// 448 = 0x1c0
    NSDate *_conversationTimeBaseTruncated;	// 456 = 0x1c8
    _Bool _forceFixedEncryptionLabel;	// 464 = 0x1d0
    VCSwitchManager *_switchManager;	// 472 = 0x1d8
    int _currentConnectionType;	// 480 = 0x1e0
    _Bool _sharingEnabled;	// 484 = 0x1e4
    struct __CFDictionary *_mediaTypeToSpatialMetadataEntryMap;	// 488 = 0x1e8
    unsigned long long _siriSpatialAudioSourceID;	// 496 = 0x1f0
    NSObject<OS_dispatch_semaphore> *_stopCompletedSemaphore;	// 504 = 0x1f8
    _Bool _didServerDie;	// 512 = 0x200
    _Bool _isServerPacketRetransmissionForVideoEnabled;	// 513 = 0x201
    _Bool _isSSRCCollisionDetectionEnabled;	// 514 = 0x202
    VCMoments *_moments;	// 520 = 0x208
}

+ (_Bool)isServerPacketRetransmissionEnabledForVideo;	// IMP=0x001000000022cad2
+ (void)cleanupControlChannelParticipantConfig:(CDStruct_c24deb19 *)arg1;	// IMP=0x001000000022431b
+ (void)addUUIDToMutableData:(id)arg1 fromUUIDString:(id)arg2;	// IMP=0x001000000022411d
+ (int)deviceRoleForSessionMode:(long long)arg1;	// IMP=0x0010000000220b36
+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x0010000000218e62
+ (unsigned int)mediaStateForMediaStateMessageValue:(id)arg1;	// IMP=0x00100000003a78c7
+ (id)mediaStateMessageValueForMediaState:(unsigned int)arg1;	// IMP=0x00100000003a78a8
+ (unsigned int)mediaTypeForMediaStateMessageKey:(id)arg1;	// IMP=0x00100000003a77d4
+ (id)mediaStateMessageKeyForMediaType:(unsigned int)arg1;	// IMP=0x00100000003a77a8
+ (id)mediaStateMessageStreamGroupKeysForMediaType:(unsigned int)arg1;	// IMP=0x00100000003a75fe
@property(nonatomic) _Bool isOneToOneRemoteMediaStalling; // @synthesize isOneToOneRemoteMediaStalling=_isOneToOneRemoteMediaStalling;
@property(readonly, nonatomic) int reportingModuleID; // @synthesize reportingModuleID=_reportingModuleID;
@property(readonly, nonatomic) int reportingClientType; // @synthesize reportingClientType=_reportingClientType;
@property(nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(nonatomic) _Bool oneToOneModeEnabled; // @synthesize oneToOneModeEnabled=_oneToOneModeEnabled;
@property(retain, nonatomic) NSObject<OS_nw_activity> *nwActivity; // @synthesize nwActivity=_nwActivity;
@property(nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity; // @synthesize parentNWActivity=_parentNWActivity;
@property(readonly, nonatomic) VCSessionStatsController *sessionStatsController; // @synthesize sessionStatsController=_sessionStatsController;
@property(retain, nonatomic) VCSessionMessaging *sessionMessaging; // @synthesize sessionMessaging=_sessionMessaging;
@property(readonly, nonatomic) AVCRateController *downlinkRateController; // @synthesize downlinkRateController=_downlinkRateController;
@property(readonly, nonatomic) VCTransportSession *transportSession; // @synthesize transportSession=_transportSession;
@property(nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(retain, nonatomic) NSMutableDictionary *remoteParticipantsMapByServerID; // @synthesize remoteParticipantsMapByServerID=_remoteParticipantsMapByServerID;
@property(retain) NSMutableDictionary *optInDictionary; // @synthesize optInDictionary=_optInDictionary;
@property(retain, nonatomic) id <VCConnectionProtocol> currentActiveConnection; // @synthesize currentActiveConnection=_currentActiveConnection;
@property(readonly, nonatomic) unsigned int transportSessionID; // @synthesize transportSessionID=_transportSessionID;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(readonly, nonatomic) VCSessionParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
- (void)additionalFlushCountToOneToOneRateController:(unsigned int)arg1;	// IMP=0x000000000022d000
- (void)updateMomentsCapabillities:(unsigned int)arg1 imageType:(int)arg2 videoCodec:(int)arg3;	// IMP=0x000000000022ce48
- (void)didReceiveMomentsRequest:(id)arg1;	// IMP=0x000000000022cda5
- (void)moments:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;	// IMP=0x000000000022cb0a
- (void)mediaQualityDegraded:(_Bool)arg1;	// IMP=0x000000000022ca22
- (void)preWarmStateChanged:(_Bool)arg1;	// IMP=0x000000000022c913
- (void)reportingIntervalChanged:(double)arg1;	// IMP=0x000000000022c8f6
- (void)recommendedSettingsChanged:(id)arg1;	// IMP=0x000000000022c8bb
- (void)unregisterReportingTask;	// IMP=0x000000000022c879
- (void)registerReportingTask;	// IMP=0x000000000022c6b1
- (void)generateReportDictionary:(struct __CFDictionary *)arg1;	// IMP=0x000000000022b891
- (id)newNetworkBitrateString:(const CDStruct_b671a7c4 *)arg1;	// IMP=0x000000000022b800
- (void)dispatchedParticipant:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x000000000022b547
- (void)processDidStop;	// IMP=0x000000000022b335
- (void)remoteScreenAttributesDidChange:(id)arg1;	// IMP=0x000000000022b1c7
- (void)setupOneToOneVideoStreamDelegate;	// IMP=0x000000000022b184
- (void)setupOneToOneVideoReceiverDelegate;	// IMP=0x000000000022b097
- (void)dispatchedParticipant:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000022a556
- (void)stopAllParticipants;	// IMP=0x000000000022a3e7
- (void)dispatchedUpdateConfiguration:(id)arg1;	// IMP=0x0000000000229c82
- (void)tearDown;	// IMP=0x0000000000229b2d
- (void)dispatchedTransportStop;	// IMP=0x0000000000229af7
- (void)dispatchedStopWithError:(id)arg1 didRemoteCancel:(_Bool)arg2;	// IMP=0x0000000000229063
- (void)dispatchedStopWithError:(id)arg1;	// IMP=0x000000000022904f
- (void)stopMediaQueueOneToOne;	// IMP=0x0000000000229012
- (void)dispatchedStart;	// IMP=0x0000000000228241
- (void)dispatchedRemoveParticipant:(id)arg1;	// IMP=0x0000000000227d81
- (void)dispatchedAddParticipantConfigurations:(id)arg1;	// IMP=0x0000000000227c59
- (_Bool)configureRemoteParticipant:(id)arg1 withConfig:(id)arg2;	// IMP=0x0000000000227969
- (void)dispatchedAddParticipantWithConfig:(id)arg1;	// IMP=0x0000000000226748
- (void)reportingSessionRemoteParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 value:(id)arg3;	// IMP=0x00000000002264a0
- (void)collectSessionEventKeyFields:(struct __CFDictionary *)arg1 eventType:(unsigned short)arg2 withParticipant:(id)arg3 keyChangeReason:(id)arg4 newMKI:(id)arg5 withStreamID:(unsigned short)arg6;	// IMP=0x0000000000225e3f
- (void)reportingMomentsToGreenTeaWithRequest:(id)arg1;	// IMP=0x0000000000225e39
- (void)reportingMomentsWithRequest:(id)arg1 recipientID:(id)arg2;	// IMP=0x0000000000225ce4
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4 withStreamID:(unsigned short)arg5;	// IMP=0x0000000000225921
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4;	// IMP=0x00000000002258ff
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 keyChangeReason:(id)arg2 newMKI:(id)arg3;	// IMP=0x00000000002258d5
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2;	// IMP=0x00000000002258ad
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withStreamID:(unsigned short)arg2;	// IMP=0x0000000000225887
- (struct __CFDictionary *)getClientSpecificUserInfo;	// IMP=0x00000000002257c6
- (id)computeConversationTimeBaseTruncated;	// IMP=0x0000000000225762
- (void)didEncryptionKeyRollTimeout;	// IMP=0x00000000002256ec
- (void)resetDecryptionTimeout;	// IMP=0x0000000000225568
- (_Bool)handleEncryptionInfoChange:(id)arg1;	// IMP=0x0000000000225254
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;	// IMP=0x000000000022524c
- (void)setupMultiwayABTesting;	// IMP=0x00000000002250fc
- (void)cleanupNwActivity;	// IMP=0x00000000002250b1
- (void)cleanupVCRC;	// IMP=0x0000000000225070
- (void)sendSymptomsToRemoteParticipants:(id)arg1 symptom:(id)arg2 groupID:(id)arg3;	// IMP=0x0000000000224d3a
- (void)unregisterRemoteParticipantFromSession:(id)arg1;	// IMP=0x0000000000224b25
- (void)removeDelegatesForRemoteParticipant:(id)arg1;	// IMP=0x0000000000224b0e
- (_Bool)registerRemoteParticipantToSession:(id)arg1;	// IMP=0x00000000002246e6
- (_Bool)composeControlChannelParticipantConfig:(CDStruct_c24deb19 *)arg1 withRemoteParticipant:(id)arg2;	// IMP=0x0000000000224368
- (id)newEncryptionLabelWithLocalUUID:(id)arg1 remoteUUID:(id)arg2;	// IMP=0x00000000002241c5
- (void)broadcastInitialMediaState;	// IMP=0x0000000000223f49
- (void)messageMediaInitialStateToParticipant:(id)arg1;	// IMP=0x0000000000223cd2
- (void)setDelegatesForRemoteParticipant:(id)arg1;	// IMP=0x0000000000223cb7
- (void)handleMembershipChangeInfoEvent:(id)arg1;	// IMP=0x0000000000223ba4
- (void)handleEncryptionInfoEvent:(id)arg1;	// IMP=0x00000000002238d3
- (_Bool)detectSSRCCollisionWithRemoteMediaStream:(id)arg1 remoteBlobCreationTime:(union tagNTP)arg2 resetNeeded:(_Bool *)arg3;	// IMP=0x0000000000223721
- (_Bool)detectSSRCCollision:(id)arg1 resetNeeded:(_Bool *)arg2;	// IMP=0x0000000000223471
- (void)optOutStreamWithIDSStreamIDs:(id)arg1;	// IMP=0x00000000002233b3
- (void)optInStreamWithIDSStreamIDs:(id)arg1;	// IMP=0x00000000002232f5
- (void)updateLocalStreamConfiguration;	// IMP=0x0000000000222fdb
- (void)updateLocalVideoCaptureFrameRate;	// IMP=0x0000000000222759
- (int)maxRemoteParticipants30fps;	// IMP=0x00000000002226db
- (void)setMediaQueuePeakBitrateWithTargetBitrate:(unsigned int)arg1;	// IMP=0x00000000002225f4
- (void)handleMediaQueueSizeExceedThresholdWithQueueSize:(double)arg1 mediaQueueStreamId:(unsigned int)arg2 type:(int)arg3;	// IMP=0x00000000002221ef
- (void)createMediaQueue;	// IMP=0x0000000000221fe6
- (void)setupUplinkBitrateCaps;	// IMP=0x0000000000221f7d
- (void)startRateControllersMultiwayFromOneToOne:(_Bool)arg1;	// IMP=0x0000000000221dc5
- (void)updateMultiwayRateControllerWithActiveConnection:(id)arg1 isScreenEnabled:(_Bool)arg2 isLocal:(_Bool)arg3;	// IMP=0x0000000000221c77
- (void)cleanupSpatialAudio;	// IMP=0x0000000000221adc
- (int)reserveAudioChannelForMediaType:(unsigned int)arg1 spatialAudioSourceID:(unsigned long long)arg2;	// IMP=0x00000000002218fe
- (int)setupSpatialAudio;	// IMP=0x0000000000221468
- (void)didRemoveSpatialMetadataEntry;	// IMP=0x00000000002213dd
- (void)setupRateControllersMultiway;	// IMP=0x0000000000221210
- (id)vcrcServerBagWithOperatingMode:(int)arg1;	// IMP=0x000000000022105a
- (void)setSessionInfoSynchronizerPeerSubscribedStreamsCallback;	// IMP=0x0000000000220e93
- (void)setSessionInfoSynchronizerErrorResponseCallback;	// IMP=0x0000000000220b82
- (void)setSessionInfoSynchronizerCallbacks;	// IMP=0x0000000000220b54
- (void)reportingSessionStopEventWithError:(id)arg1;	// IMP=0x0000000000220893
- (void)reportingSessionDownlinkOptInEvent:(id)arg1 selectedMediaEntriesForParticipants:(id)arg2;	// IMP=0x000000000022035d
- (void)distributeBitrateAndOptInToStreamIDsWithSeamlessTransition:(_Bool)arg1;	// IMP=0x000000000021facd
- (void)updateParticipantConfigurations:(id)arg1;	// IMP=0x000000000021f5bf
- (void)updateParticipantWindowState;	// IMP=0x000000000021f361
- (void)sendRateControlConfigToRemoteParticipant:(id)arg1;	// IMP=0x000000000021f220
- (void)applySpatialMetadata;	// IMP=0x000000000021ec3a
- (void)updatePresentationInfo:(id)arg1;	// IMP=0x000000000021e8f7
- (int)flushBasebandWithPayloads:(id)arg1;	// IMP=0x000000000021e8ef
- (void)mediaController:(void *)arg1 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion)arg2;	// IMP=0x000000000021e87f
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;	// IMP=0x000000000021e853
- (void)rateController:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x000000000021e2ab
- (void)updateNetworkFeedbackControllerReport:(CDStruct_4b4d87a1 *)arg1;	// IMP=0x000000000021e10e
- (void)didReceivedSessionStatsAtTime:(double)arg1;	// IMP=0x000000000021e07b
- (void)didServerDie;	// IMP=0x000000000021df50
- (void)vcSessionParticipant:(id)arg1 remoteMediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3;	// IMP=0x000000000021ddcf
- (void)vcSessionParticipant:(id)arg1 mediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000021da92
- (void)vcSessionParticipant:(id)arg1 didDetectError:(id)arg2;	// IMP=0x000000000021d9bc
- (void)vcSessionParticipant:(id)arg1 oneToOneModeDidChange:(_Bool)arg2;	// IMP=0x000000000021d8d1
- (void)vcSessionParticipantDidRemoteMediaStallTimeout:(id)arg1 duration:(double)arg2;	// IMP=0x000000000021d4f2
- (void)vcSessionParticipantDidMediaDecryptionTimeOutForMKMRecovery:(id)arg1;	// IMP=0x000000000021d10a
- (void)vcSessionParticipantDidMediaDecryptionTimeOut:(id)arg1;	// IMP=0x000000000021cd5e
- (void)vcSessionParticipantDidChangeReceivingStreams:(id)arg1;	// IMP=0x000000000021cca9
- (void)vcSessionParticipantDidChangeSendingStreams:(id)arg1;	// IMP=0x000000000021cbf4
- (void)vcSessionParticipant:(id)arg1 didRequestVideoRedundancy:(_Bool)arg2;	// IMP=0x000000000021caea
- (void)vcSessionParticipant:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;	// IMP=0x000000000021ca4b
- (void)vcSessionParticipant:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 streamGroupID:(unsigned int)arg3 firType:(int)arg4;	// IMP=0x000000000021c835
- (void)vcSessionParticipant:(id)arg1 didChangeActualNetworkBitrateForStreamGroupID:(unsigned int)arg2;	// IMP=0x000000000021c818
- (void)vcSessionParticipant:(id)arg1 didChangeMediaPriority:(unsigned char)arg2 description:(id)arg3;	// IMP=0x000000000021c635
- (void)vcSessionParticipant:(id)arg1 remoteVideoPausedDidChange:(_Bool)arg2;	// IMP=0x000000000021c485
- (void)vcSessionParticipant:(id)arg1 remoteAudioPausedDidChange:(_Bool)arg2;	// IMP=0x000000000021c336
- (void)vcSessionParticipant:(id)arg1 videoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000021bf94
- (void)vcSessionParticipant:(id)arg1 audioPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000021bbb0
- (void)vcSessionParticipant:(id)arg1 remoteScreenEnabledDidChange:(_Bool)arg2;	// IMP=0x000000000021b9cb
- (void)vcSessionParticipant:(id)arg1 remoteVideoEnabledDidChange:(_Bool)arg2;	// IMP=0x000000000021b855
- (void)vcSessionParticipant:(id)arg1 remoteAudioEnabledDidChange:(_Bool)arg2;	// IMP=0x000000000021b738
- (void)vcSessionParticipantFetchStreamGroupState:(id)arg1;	// IMP=0x000000000021b652
- (void)vcSessionParticipant:(id)arg1 screenEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000021b1e8
- (void)vcSessionParticipant:(id)arg1 videoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000021ada6
- (void)vcSessionParticipant:(id)arg1 audioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000021aa04
- (void)vcSessionParticipant:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x000000000021a93a
- (void)vcSessionParticipant:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000021a85c
- (void)setOneToOneVideoStreamBandwidthProbing:(_Bool)arg1;	// IMP=0x000000000021a7b5
- (unsigned int)calculateExpectedTotalNetworkBitrateUplink;	// IMP=0x000000000021a6cf
- (unsigned int)calculateExpectedTotalNetworkBitrateDownlink;	// IMP=0x000000000021a40c
- (void)handlePreferredInterfaceForDuplicationUpdate:(unsigned char)arg1 notifyPeer:(_Bool)arg2 enableDuplication:(_Bool)arg3 isMediaUnrecoverableSignal:(_Bool)arg4;	// IMP=0x000000000021a2ad
- (void)handleActiveConnectionChangeForMultiway:(id)arg1;	// IMP=0x000000000021a027
- (void)dispatchedHandleActiveConnectionChange:(id)arg1;	// IMP=0x0000000000219db6
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x0000000000219d20
- (void)handleCellularMTUChanged:(unsigned short)arg1 connection:(id)arg2;	// IMP=0x0000000000219cc6
- (void)handlePrimaryConnectionChanged:(id)arg1;	// IMP=0x0000000000219b9d
- (void)handleCellTechChange:(int)arg1 connection:(id)arg2;	// IMP=0x0000000000219a9a
- (void)notifyRemoteOfCellTechChange:(id)arg1 remoteParticipant:(id)arg2;	// IMP=0x000000000021993e
- (void)applyRemoteLinkConstrains:(id)arg1;	// IMP=0x0000000000219895
- (void)applyLinkConstrains:(id)arg1;	// IMP=0x0000000000219788
- (void)setTransportSessionEventHandler;	// IMP=0x0000000000218e76
- (void)sendStreamGroupStateToParticipant:(id)arg1;	// IMP=0x0000000000218db3
- (void)dispatchedSetSharingEnabled:(_Bool)arg1;	// IMP=0x000000000021878b
- (void)setOneToOneModeEnabledFromRemoteSignal:(_Bool)arg1;	// IMP=0x000000000021865f
- (void)generateKeyFrameWithReceivedMessage:(id)arg1 forParticipant:(id)arg2;	// IMP=0x00000000002182ba
- (void)reportingSetUserInfo;	// IMP=0x0000000000218151
- (struct __CFString *)configurationSpecificReportingServiceName;	// IMP=0x00000000002180cc
@property(readonly, nonatomic) NSArray *remoteParticipants;
- (void)mediaStateChangedForParticipant:(id)arg1;	// IMP=0x0000000000217f5a
- (id)participantForID:(id)arg1;	// IMP=0x0000000000217ddc
- (void)updateConfiguration:(id)arg1;	// IMP=0x0000000000217d2d
- (void)stopWithError:(id)arg1 didRemoteCancel:(_Bool)arg2;	// IMP=0x0000000000217c90
- (void)stopWithError:(id)arg1;	// IMP=0x0000000000217c57
- (void)start;	// IMP=0x0000000000217bb5
@property(readonly, nonatomic) VCSessionParticipantRemote *oneToOneRemoteParticipant;
- (void)removeParticipant:(id)arg1;	// IMP=0x0000000000217af4
- (void)addParticipantConfigurations:(id)arg1;	// IMP=0x0000000000217a5b
@property(readonly, nonatomic) id <VCSessionDelegate> delegate;
- (id)participantsToString;	// IMP=0x0000000000217a00
@property(readonly, copy) NSString *description;
- (char *)sessionStateToString:(unsigned int)arg1;	// IMP=0x000000000021793a
- (void)setState:(unsigned int)arg1;	// IMP=0x00000000002176cb
- (void)setupTransportSessionWithDestination:(id)arg1;	// IMP=0x00000000002174f2
- (int)selectDataPath;	// IMP=0x00000000002173b7
- (void)setTransportConnectionSelectionVersionWithLocalFrameWorkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2;	// IMP=0x000000000021734a
@property(readonly, nonatomic) NSDictionary *transportMetadata;
@property(readonly, nonatomic) NSDictionary *capabilities;
- (void)startDeallocTimer;	// IMP=0x0000000000216f81
- (void)stopTimeoutTimer;	// IMP=0x0000000000216f1d
- (void)setReportingConfig:(CDStruct_80e040f5 *)arg1;	// IMP=0x0000000000216b4c
- (void)dealloc;	// IMP=0x00000000002164e2
- (id)initWithIDSDestination:(id)arg1 configurationDict:(id)arg2 negotiationData:(id)arg3 delegate:(id)arg4 processId:(int)arg5 isGKVoiceChat:(_Bool)arg6;	// IMP=0x0000000000214c08
- (void)configureOneToOneReportingOnVideoEnabled;	// IMP=0x000000000039a154
- (void)handleActiveConnectionChangeForOneToOne:(id)arg1;	// IMP=0x0000000000399f2c
- (void)notifyDelegateActiveConnectionDidChange;	// IMP=0x0000000000399d29
- (void)reportActiveConnectionOneToOne;	// IMP=0x0000000000399bcc
- (void)startOneToOne;	// IMP=0x0000000000399027
- (void)setupOneToOneABTesting;	// IMP=0x000000000039772b
- (void)applyNegotiatedOneToOneFaceTimeSettings;	// IMP=0x00000000003975ef
- (void)dispatchedSetOneToOneModeEnabled:(_Bool)arg1 isLocal:(_Bool)arg2;	// IMP=0x00000000003968fa
- (void)completionHandlerOneToOneEnabled:(_Bool)arg1 didSucceed:(_Bool)arg2;	// IMP=0x0000000000396446
- (_Bool)completeTransitionToOneToOneEnabled:(_Bool)arg1;	// IMP=0x00000000003961c8
- (_Bool)addOneToOneParticipant:(id)arg1;	// IMP=0x0000000000395800
- (unsigned int)vcrcServerBagProfileNumber;	// IMP=0x0000000000395594
- (void)configureOneToOneRateController:(id)arg1 isUsingCamera:(_Bool)arg2 isUsingScreen:(_Bool)arg3;	// IMP=0x000000000039518e
- (_Bool)negotiateOneToOneWithRemoteParticipant:(id)arg1;	// IMP=0x0000000000394931
- (void)setupOneToOneAdaptiveLearning;	// IMP=0x00000000003945b3
- (void)renewOneToOneMediaQueue;	// IMP=0x000000000039454a
- (void)startReportingForOneToOneEnabled:(_Bool)arg1;	// IMP=0x00000000003940db
- (void)cleanUpOneToOneVideoStreamDelegate;	// IMP=0x0000000000394097
- (void)cleanupOneToOneVideoReceiverDelegate;	// IMP=0x0000000000394053
- (void)cleanupOneToOneDelegates;	// IMP=0x0000000000394025
- (void)cleanupOneToOne;	// IMP=0x0000000000393f7a
- (void)cleanupOneToOneMediaQueue;	// IMP=0x0000000000393f29
- (_Bool)switchFromMultiwayToOneToOne;	// IMP=0x0000000000393bbb
- (_Bool)multiwayToOneToOneSwitchConfigure;	// IMP=0x0000000000393836
- (void)multiwayToOneToOneSwitchResume;	// IMP=0x0000000000393756
- (void)multiwayToOneToOneSwitchSuspend;	// IMP=0x0000000000393675
- (void)messageExistingParticipantsPostUpgrade;	// IMP=0x0000000000393510
- (_Bool)switchFromOneToOneToMultiway;	// IMP=0x00000000003932f4
- (void)oneToOneToMultiwaySwitchConfigure;	// IMP=0x0000000000392f63
- (void)oneToOneToMultiwaySwitchResume;	// IMP=0x0000000000392e11
- (void)oneToOneToMultiwaySwitchSuspend;	// IMP=0x0000000000392dbb
- (void)reportSwitchingError:(_Bool)arg1 errorEvent:(unsigned int)arg2;	// IMP=0x0000000000392d0f
- (void)reportCompletedSwitchingToOneToOne:(_Bool)arg1;	// IMP=0x0000000000392a4b
- (void)reportStartedSwitchingToOneToOne:(_Bool)arg1;	// IMP=0x0000000000392a2c
- (void)reportExistingParticipantsAnew;	// IMP=0x000000000039274b
- (_Bool)configureRemoteParticipantForOneToOne:(id)arg1;	// IMP=0x000000000039213b
- (_Bool)isOneToOneRemoteParticipantUsingScreen;	// IMP=0x00000000003920d0
- (_Bool)isOneToOneUsingScreen;	// IMP=0x0000000000392074
- (_Bool)isOneToOneUsingVideo;	// IMP=0x0000000000392018
- (void)stopRateControllerOneToOne;	// IMP=0x0000000000391ff8
- (void)startRateControllerOneToOne;	// IMP=0x0000000000391f58
- (id)newParticipantOneToOneConfigWithIDSParticipantID:(unsigned long long)arg1 isLocal:(_Bool)arg2 mediaControlInfoVersion:(unsigned char)arg3 videoEnabled:(_Bool)arg4 screenEnabled:(_Bool)arg5 remoteParticipant:(id)arg6;	// IMP=0x0000000000391a49
- (int)setupOneToOneMediaControlInfoGeneratorsWithVersion:(unsigned char)arg1 oneToOneConfig:(id)arg2 videoEnabled:(_Bool)arg3;	// IMP=0x000000000039163f
- (_Bool)configureLocalParticipantWithOneToOneRemoteParticipant:(id)arg1 isInitialConfiguration:(_Bool)arg2;	// IMP=0x0000000000390fc0
- (void)cleanupRateControllerOneToOne;	// IMP=0x0000000000390f7d
- (void)initWithRelevantStorebagEntries;	// IMP=0x0000000000390ed3
- (void)updateOneToOneRateControllerForVideoEnabled:(_Bool)arg1;	// IMP=0x0000000000390e93
- (void)updateOneToOneRateControllerForVideoEnabled:(_Bool)arg1 screenEnabled:(_Bool)arg2;	// IMP=0x0000000000390d5a
- (int)setupRateControllerOneToOne;	// IMP=0x00000000003904c7
- (_Bool)setOneToOneConfigOnRemoteParticipant:(id)arg1;	// IMP=0x0000000000390258
- (id)newNegotiatorForOneToOneWithRemoteParticipant:(id)arg1;	// IMP=0x000000000038fab5
- (int)setupOneToOneMediaQueue;	// IMP=0x000000000038f725
- (int)setupOneToOne;	// IMP=0x000000000038f402
- (void)processMediaStateMessage:(id)arg1 remoteParticipantID:(id)arg2;	// IMP=0x00000000003a8e34
- (void)processMediaTypeStatesWithMessage:(id)arg1 mediaTypeStates:(id)arg2;	// IMP=0x00000000003a896a
- (void)processStreamGroupStateMessageKey:(id)arg1 value:(id)arg2 mediaTypeStates:(id)arg3;	// IMP=0x00000000003a8452
- (void)setupMediaStateUpdateMessage;	// IMP=0x00000000003a835d
- (_Bool)validateStreamGroup:(id)arg1 state:(id)arg2;	// IMP=0x00000000003a82f5
- (void)sendMediaStateUpdateMessageToRemoteParticipant:(id)arg1;	// IMP=0x00000000003a8291
- (void)broadcastMediaStateUpdateMessage;	// IMP=0x00000000003a80a0
- (id)stateMessageDictionary;	// IMP=0x00000000003a78e8
- (void)setupLinkConstrainsChangedMessages;	// IMP=0x00000000003a74b4
- (void)setupCellTechChangeMessages;	// IMP=0x00000000003a726e
- (void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned int)arg2;	// IMP=0x00000000003a7011
- (void)setupRateControlConfigMessage;	// IMP=0x00000000003a6ea2
- (void)handleControlConfigMessage:(id)arg1 forParticipantId:(id)arg2;	// IMP=0x00000000003a6af6
- (void)setupMediaQualityDegradedMessage;	// IMP=0x00000000003a6780
- (void)setupDisconnectMessage;	// IMP=0x00000000003a654d
- (void)setupPiPStateChangeMessage;	// IMP=0x00000000003a621e
- (void)setupPreferredInterfaceMessage;	// IMP=0x00000000003a5e83
- (void)setupVideoRedundancyMessages;	// IMP=0x00000000003a5c2e
- (void)setupMomentsMessages;	// IMP=0x00000000003a59f9
- (void)setupWRMAlertUpdateMessage;	// IMP=0x00000000003a5683
- (void)setupSymptomEnabledMessages;	// IMP=0x00000000003a5402
- (void)processSymptomFromMessage:(id)arg1 participantID:(id)arg2 isLocalInitiated:(_Bool)arg3 isLocalSideOnly:(_Bool)arg4;	// IMP=0x00000000003a50df
- (void)setupKeyFrameGenerationMessages;	// IMP=0x00000000003a4fe4
- (void)setupVideoPausedMessages;	// IMP=0x00000000003a4d62
- (void)setupOneToOneEnabledMessages;	// IMP=0x00000000003a4acc
- (void)setupAudioPausedMessages;	// IMP=0x00000000003a484a
- (void)setupStreamGroupStateFetchMessage;	// IMP=0x00000000003a4502
- (void)setupVideoEnabledMessages;	// IMP=0x00000000003a4280
- (void)setupAudioEnabledMessages;	// IMP=0x00000000003a3ffc
- (void)broadcastSingleStateMessage:(id)arg1 withTopic:(id)arg2;	// IMP=0x00000000003a3e44
- (void)broadcastMessageDictionary:(id)arg1 withTopic:(id)arg2 toVersion:(int)arg3;	// IMP=0x00000000003a3c79
- (void)broadcastMessageDictionary:(id)arg1 withTopic:(id)arg2;	// IMP=0x00000000003a3aee
- (void)broadcastMessage:(id)arg1 withTopic:(id)arg2;	// IMP=0x00000000003a3963
- (void)stopSessionMessaging;	// IMP=0x00000000003a38f7
- (void)startSessionMessaging;	// IMP=0x00000000003a38b0
- (void)destroySessionMessaging;	// IMP=0x00000000003a3858
- (void)createSessionMessaging;	// IMP=0x00000000003a36d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
