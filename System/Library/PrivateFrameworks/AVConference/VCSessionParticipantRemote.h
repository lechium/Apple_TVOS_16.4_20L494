//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSString, TimingCollection, VCAudioCaptionsCoordinator, VCPositionalInfo, VCSessionBandwidthAllocationTable, VCSessionParticipantMediaStreamInfo;
@protocol OS_dispatch_source, OS_nw_activity;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantRemote
{
    _Bool _remoteVideoEnabled;	// 368 = 0x170
    _Bool _remoteScreenEnabled;	// 369 = 0x171
    _Bool _remoteVideoPaused;	// 370 = 0x172
    _Bool _remoteSystemAudioPaused;	// 371 = 0x173
    _Bool _receivedFirstFrame;	// 372 = 0x174
    unsigned char _videoQuality;	// 373 = 0x175
    unsigned int _visibilityIndex;	// 376 = 0x178
    unsigned int _prominenceIndex;	// 380 = 0x17c
    VCSessionBandwidthAllocationTable *_mediaTable;	// 384 = 0x180
    VCSessionBandwidthAllocationTable *_repairMediaTable;	// 392 = 0x188
    _Bool _isVideoDegraded;	// 400 = 0x190
    _Bool _isRedundancyRequested;	// 401 = 0x191
    _Bool _isRemoteMediaStalled;	// 402 = 0x192
    struct tagVCAudioStreamGroupPriorityInfo _mediaPriorityInfo;	// 404 = 0x194
    TimingCollection *_perfTimers;	// 440 = 0x1b8
    _Bool _haveReportedPerfTimers;	// 448 = 0x1c0
    _Bool _isMediaSuspended;	// 449 = 0x1c1
    _Bool _oneToOneVideoEnabled;	// 450 = 0x1c2
    _Bool _isServerRTxEnabled;	// 451 = 0x1c3
    struct _VCSessionParticipantCapabilities _capabilities;	// 452 = 0x1c4
    VCPositionalInfo *_positionalInfo;	// 472 = 0x1d8
    struct __CFDictionary *_mediaTypeToSpatialAudioMetadataEntryMap;	// 480 = 0x1e0
    NSObject<OS_nw_activity> *_nwActivity;	// 488 = 0x1e8
    NSObject<OS_nw_activity> *_participantPoorConnectionNwActivity;	// 496 = 0x1f0
    NSObject<OS_nw_activity> *_participantMediaStallNwActivity;	// 504 = 0x1f8
    double _lastVideoExpectationSwitch;	// 512 = 0x200
    _Bool _isVideoExpected;	// 520 = 0x208
    _Bool _isVideoJitterForPlayoutEnabled;	// 521 = 0x209
    _Bool _remoteAudioEnabled;	// 522 = 0x20a
    _Bool _remoteAudioPaused;	// 523 = 0x20b
    _Bool _remoteScreenEnabledStateChanged;	// 524 = 0x20c
    NSMutableDictionary *_jbSynchronizerPerSyncGroupID;	// 528 = 0x210
    NSMutableDictionary *_remoteMediaStates;	// 536 = 0x218
    NSObject<OS_dispatch_source> *_remoteStreamGroupStateUpdateTimer;	// 544 = 0x220
    VCAudioCaptionsCoordinator *_captionsCoordinator;	// 552 = 0x228
}

+ (unsigned int)maxNetworkBitrateForStreamGroupID:(unsigned int)arg1 videoQuality:(unsigned char)arg2 isLocalOnWiFi:(_Bool)arg3 isRedundancyRequested:(_Bool)arg4 isSharingEnabled:(_Bool)arg5;	// IMP=0x0010000000148c98
+ (unsigned int)maxFdatNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;	// IMP=0x0010000000148c73
+ (unsigned int)maxBdatNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;	// IMP=0x0010000000148c2c
+ (unsigned int)maxFtxtNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;	// IMP=0x0010000000148bca
+ (unsigned int)maxCameraNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3 isSharingEnabled:(_Bool)arg4;	// IMP=0x0010000000148740
+ (unsigned int)maxAudioNetworkBitrateForLocalInterfaceOnWiFi:(_Bool)arg1 isLowLatencyAudio:(_Bool)arg2;	// IMP=0x001000000014872b
+ (_Bool)isDeviceLargeScreen;	// IMP=0x0010000000148723
@property(nonatomic) _Bool isServerRTxEnabled; // @synthesize isServerRTxEnabled=_isServerRTxEnabled;
@property(nonatomic, getter=isRemoteAudioPaused) _Bool remoteAudioPaused; // @synthesize remoteAudioPaused=_remoteAudioPaused;
@property(nonatomic, getter=isRemoteAudioEnabled) _Bool remoteAudioEnabled; // @synthesize remoteAudioEnabled=_remoteAudioEnabled;
@property(readonly, nonatomic) VCPositionalInfo *positionalInfo; // @synthesize positionalInfo=_positionalInfo;
@property(nonatomic) struct _VCSessionParticipantCapabilities capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic, getter=isRemoteScreenEnabled) _Bool remoteScreenEnabled; // @synthesize remoteScreenEnabled=_remoteScreenEnabled;
@property(nonatomic, getter=isRemoteVideoPaused) _Bool remoteVideoPaused; // @synthesize remoteVideoPaused=_remoteVideoPaused;
@property(nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic, getter=isRemoteVideoEnabled) _Bool remoteVideoEnabled; // @synthesize remoteVideoEnabled=_remoteVideoEnabled;
- (void)updateAndHandleVideoMediaStall:(_Bool)arg1 isOneToOneStream:(_Bool)arg2;	// IMP=0x000000000015136d
- (void)cancelAndReleaseFetchTimer;	// IMP=0x000000000015119c
- (void)createAndResumeFetchTimer;	// IMP=0x0000000000150b4a
- (_Bool)isSeamlessTransitionSupportedForStreamGroup:(id)arg1;	// IMP=0x0000000000150b03
- (void)updateShouldEnableMLEnhance;	// IMP=0x00000000001508b0
- (void)setSharingEnabled:(_Bool)arg1;	// IMP=0x000000000015080b
- (void)setShouldEnableFaceZoom:(_Bool)arg1;	// IMP=0x00000000001506b5
- (void)updateShouldEnableFaceZoom;	// IMP=0x0000000000150455
- (_Bool)setupStreamGroups;	// IMP=0x000000000014ff62
- (void)setupJBTargetSynchronizers;	// IMP=0x000000000014f9fe
- (void)createJitterBufferTargetEstimatorSynchronizer:(struct tagVCJBTargetEstimatorSynchronizer **)arg1 syncGroupID:(unsigned int)arg2;	// IMP=0x000000000014f771
- (_Bool)shouldSetupStreamGroupWithID:(unsigned int)arg1;	// IMP=0x000000000014f55a
- (_Bool)shouldEnablePacketRetransmissionForStreamGroupID:(unsigned int)arg1;	// IMP=0x000000000014f526
- (_Bool)didNegotiateStreamGroupWithID:(unsigned int)arg1;	// IMP=0x000000000014f3fe
- (id)newVideoStreamGroupWithStreamGroupConfig:(id)arg1;	// IMP=0x000000000014f1c0
- (_Bool)setupStreamGroupWithConfig:(id)arg1;	// IMP=0x000000000014e865
- (_Bool)oneToOneIsSupportedVideoStreamGroup:(unsigned int)arg1;	// IMP=0x000000000014e84b
- (_Bool)oneToOneIsSupportedAudioStreamGroup:(unsigned int)arg1;	// IMP=0x000000000014e831
- (_Bool)addOneToOneStreamConfigToMediaStreamInfo:(id)arg1 negotiatorStreamGroupConfig:(id)arg2;	// IMP=0x000000000014e11a
- (id)newMediaStreamWithNegotiationConfig:(id)arg1 streamToken:(long long)arg2;	// IMP=0x000000000014e02c
- (id)newStreamGroupConfigWithNegotiationConfig:(id)arg1;	// IMP=0x000000000014d86a
- (int)setupSpatialInfoForStreamGroupConfig:(id)arg1;	// IMP=0x000000000014d2fe
- (int)spatialChannelIndex:(unsigned int *)arg1 spatialAudioSourceID:(unsigned long long *)arg2 forMediaType:(unsigned int)arg3;	// IMP=0x000000000014ce94
- (void)setupMediaStreamGroupConfig:(id)arg1 withNegotiationConfig:(id)arg2;	// IMP=0x000000000014cc5e
- (id)newMediaStreamInfoWithNegotiationConfig:(id)arg1 streamToken:(long long)arg2;	// IMP=0x000000000014c2d5
- (id)newMediaStreamConfigWithStreamConfig:(id)arg1 streamGroupConfig:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3;	// IMP=0x000000000014c002
- (_Bool)setupStreamConfigWithCodecs:(id)arg1 streamConfig:(id)arg2 codecConfigs:(id)arg3 featureStringsDict:(id)arg4;	// IMP=0x000000000014b9a1
- (id)newMediaStreamConfigWithStreamGroupConfig:(id)arg1 streamConfig:(id)arg2 rateControlConfig:(id)arg3 multiwayConfig:(id)arg4;	// IMP=0x000000000014b1e5
- (_Bool)setupVideoStreamConfiguration:(id)arg1 withStreamGroupStreamConfig:(id)arg2 codecConfigs:(id)arg3 multiwayConfig:(id)arg4 groupID:(unsigned int)arg5;	// IMP=0x000000000014ab92
- (id)newMultiwayConfigWithStreamGroupStreamConfig:(id)arg1 maxIDSStreamIDCount:(unsigned int)arg2 groupID:(unsigned int)arg3;	// IMP=0x000000000014a978
- (void)updateVideoMultiwayConfig:(id)arg1 withStreamGroupStreamConfig:(id)arg2;	// IMP=0x000000000014a811
- (void)updateScreenStreamConfigurationWithStreamGroupResult:(id)arg1 multiwayConfig:(id)arg2 screenStreamConfig:(id)arg3;	// IMP=0x000000000014a623
@property(readonly, nonatomic) _Bool isVideoExpected;
- (void)setMediaSuspended:(_Bool)arg1 forStreamToken:(id)arg2;	// IMP=0x000000000014a370
@property(readonly) _Bool isVisible;
@property(readonly) NSArray *mediaEntries;
- (void)validateMediaEntries:(id)arg1;	// IMP=0x0000000000149966
- (void)appendStreamGroupsMediaEntries:(id)arg1;	// IMP=0x0000000000149142
- (unsigned char)cappedVideoQualityWithShouldLimitCameraQualityForPIP:(_Bool)arg1;	// IMP=0x0000000000148ef7
- (void)appendStreamGroup:(id)arg1 maxBitrate:(unsigned int)arg2 mediaEntries:(id)arg3;	// IMP=0x0000000000148d1e
- (void)setRemoteMediaStalled:(_Bool)arg1;	// IMP=0x00000000001484ff
- (void)setVideoDegraded:(_Bool)arg1;	// IMP=0x00000000001480c9
- (void)pushEventToNwActivity:(long long)arg1 started:(_Bool)arg2;	// IMP=0x0000000000147d70
- (void)collectAudioChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x0000000000147b87
- (void)collectVideoChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000001479e9
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x00000000001479e3
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x0000000000147349
- (void)didReceiveFirstFrameForStreamGroup:(id)arg1;	// IMP=0x00000000001472e8
- (unsigned int)optedInNetworkBitrateForStreamGroup:(unsigned int)arg1;	// IMP=0x000000000014729b
- (unsigned int)actualNetworkBitrateForStreamGroup:(unsigned int)arg1;	// IMP=0x000000000014724e
- (id)activeDownlinkStreamIDForStreamGroupID:(unsigned int)arg1;	// IMP=0x0000000000147223
- (id)optedInStreamIDForStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000001471f8
- (void)setMoments:(id)arg1;	// IMP=0x0000000000147016
- (id)startScreenGroup;	// IMP=0x000000000014700e
- (id)stopAudioStreams;	// IMP=0x0000000000147006
- (id)startAudioIO;	// IMP=0x0000000000146ffe
- (unsigned int)actualNetworkBitrateWithAudioBitrates:(id)arg1;	// IMP=0x0000000000146e51
- (void)setVideoStreamDelegate:(id)arg1;	// IMP=0x0000000000146986
- (void)setVideoReceiverFeedbackDelegate:(id)arg1;	// IMP=0x00000000001468ed
- (void)dispatchedSetVideoReceiverFeedbackDelegate:(id)arg1;	// IMP=0x0000000000146646
- (_Bool)configureWithOneToOneParticipantConfig:(id)arg1 operatingMode:(int)arg2;	// IMP=0x0000000000146375
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (long long)participantMicrophoneToken;	// IMP=0x000000000014620c
- (id)audioGroup;	// IMP=0x000000000014619a
- (id)videoGroup;	// IMP=0x000000000014613e
- (id)screenGroup;	// IMP=0x00000000001460e2
- (long long)participantScreenToken;	// IMP=0x00000000001460a2
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *screenStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *cameraStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *micStreamInfo;
- (_Bool)isScreenActive;	// IMP=0x0000000000145fa7
- (void)updateAudioSpectrumState;	// IMP=0x0000000000145e3d
- (_Bool)isAudioActive;	// IMP=0x0000000000145df8
- (void)negotiateAudioRules:(id)arg1;	// IMP=0x0000000000145a26
- (id)recommendedStreamIDsForSelectedMediaEntries:(id)arg1 forceSeamlessTransition:(_Bool)arg2;	// IMP=0x000000000014539c
- (void)appendOptedInStreamID:(id)arg1 toOptInStreamsIDs:(id)arg2 targetBandwidthEntry:(id)arg3 forceSeamlessTransition:(_Bool)arg4;	// IMP=0x00000000001450b7
@property(readonly, nonatomic) NSNumber *optedInVideoStreamID;
@property(readonly, nonatomic) NSNumber *optedInAudioStreamID;
- (void)setActiveStreamIDs:(id)arg1;	// IMP=0x0000000000144e05
- (void)setMuted:(_Bool)arg1;	// IMP=0x0000000000144d24
- (id)getAudioDumpName;	// IMP=0x0000000000144d1c
- (id)entryForStreamID:(id)arg1;	// IMP=0x0000000000144b4d
- (_Bool)setupBandwidthAllocationTableForMediaStreamConfigs:(id)arg1 streamGroupID:(unsigned int)arg2 entryType:(unsigned char)arg3;	// IMP=0x0000000000143da6
- (id)checkSubstreams:(id)arg1 forLowerQualityIndex:(unsigned int)arg2;	// IMP=0x0000000000143c5c
- (_Bool)setupAudioStreamConfiguration:(id)arg1 withStreamGroupConfig:(id)arg2 streamGroupStreamConfig:(id)arg3;	// IMP=0x00000000001435ef
- (_Bool)isStreamGroupActive:(id)arg1;	// IMP=0x000000000014348c
- (_Bool)isActiveMediaType:(unsigned int)arg1;	// IMP=0x000000000014336c
- (void)cleanupNwActivity;	// IMP=0x00000000001432ae
- (void)completeAndReleaseNwActivity:(id)arg1 withReason:(int)arg2;	// IMP=0x000000000014328d
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x0000000000143285
- (id)setupStreamRTP:(id)arg1;	// IMP=0x0000000000143270
- (_Bool)isParticipantPeace:(id)arg1;	// IMP=0x000000000014300c
- (_Bool)supportsGFTSwitchToOneToOne;	// IMP=0x0000000000142bcf
- (_Bool)supportsNegotiatedCoordinateSystem;	// IMP=0x000000000014293c
- (id)getMajorVersionNumber;	// IMP=0x0000000000142444
- (_Bool)processParticipantInfo;	// IMP=0x0000000000141a83
- (void)updateOneToOneAudioPositionalInfo:(const struct tagVCSpatialAudioMetadataPositionalInfo *)arg1;	// IMP=0x0000000000141a5a
- (_Bool)isInCanvas;	// IMP=0x0000000000141a3d
- (void)updatePositionalInfo:(id)arg1 shouldReapply:(_Bool)arg2;	// IMP=0x00000000001418a2
- (void)updateDownlinkBandwithAllocatorClientConfigurations:(id)arg1;	// IMP=0x00000000001413d9
- (id)applyVideoEnabledSetting:(_Bool)arg1;	// IMP=0x0000000000140ff2
- (void)dispatchedSetRemoteVideoPaused:(_Bool)arg1;	// IMP=0x0000000000140a04
- (unsigned int)remoteMediaStateForMediaType:(unsigned int)arg1;	// IMP=0x00000000001409b7
- (void)setRemoteMediaState:(unsigned int)arg1 forMediaType:(unsigned int)arg2;	// IMP=0x0000000000140182
- (id)updateMediaState:(unsigned int)arg1 forStreamGroup:(id)arg2;	// IMP=0x000000000013ffa0
- (void)setTransitionToDisabled:(unsigned int)arg1;	// IMP=0x000000000013fd2c
- (void)setTransitionToPaused:(unsigned int)arg1;	// IMP=0x000000000013fa00
- (void)setTransitionToEnabled:(unsigned int)arg1;	// IMP=0x000000000013f6de
- (void)setRemoteSystemAudioPaused:(_Bool)arg1;	// IMP=0x000000000013f646
- (void)dispatchedSetRemoteSystemAudioPaused:(_Bool)arg1;	// IMP=0x000000000013f1ba
- (void)dispatchedSetRemoteScreenEnabled:(_Bool)arg1;	// IMP=0x000000000013eac9
- (void)dispatchedSetRemoteVideoEnabled:(_Bool)arg1;	// IMP=0x000000000013e4d7
- (void)setVideoPaused:(_Bool)arg1;	// IMP=0x000000000013e2ae
- (void)dispatchedSetRemoteAudioEnabled:(_Bool)arg1;	// IMP=0x000000000013de00
- (void)dispatchedSetRemoteAudioPaused:(_Bool)arg1;	// IMP=0x000000000013d952
- (void)setAudioPaused:(_Bool)arg1;	// IMP=0x000000000013d641
@property(readonly, nonatomic) NSDictionary *participantSpatialAudioSourceIDs;
- (int)storeSpatialAudioMetadataEntry:(void *)arg1 forMediaType:(unsigned int)arg2;	// IMP=0x000000000013d037
- (void *)spatialMetadataEntryForMediaType:(unsigned int)arg1;	// IMP=0x000000000013ce6b
- (void)cleanupSpatialAudio;	// IMP=0x000000000013ce3f
- (int)setupSpatialAudioWithMetadata:(void *)arg1 spatialMetadataEntryMap:(struct __CFDictionary *)arg2;	// IMP=0x000000000013c367
- (void)initializeParticipantType;	// IMP=0x000000000013c126
- (void)stop;	// IMP=0x000000000013c078
- (void)start;	// IMP=0x000000000013bfc8
- (void)dealloc;	// IMP=0x000000000013bedf
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000013ab74

// Remaining properties
@property(readonly) NSString *uuid;

@end
