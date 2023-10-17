//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;
@protocol VCRedundancyControllerProtocol;

__attribute__((visibility("hidden")))
@interface VCMediaStreamSendGroup
{
    _Bool _isRedundancyEnabled;	// 200 = 0xc8
    unsigned int _uplinkBitrateCapWifi;	// 204 = 0xcc
    unsigned int _uplinkBitrateCapCell;	// 208 = 0xd0
    unsigned int _currentUplinkTargetBitrate;	// 212 = 0xd4
    NSMutableArray *_peerSubscribedStreams;	// 216 = 0xd8
    _Bool _isRemoteOnPeace;	// 224 = 0xe0
    NSMutableDictionary *_sendGroupConfigForMode;	// 232 = 0xe8
    unsigned int _streamGroupMode;	// 240 = 0xf0
    id <VCRedundancyControllerProtocol> _redundancyController;	// 248 = 0xf8
    unsigned int _currentUplinkTotalBitrate;	// 256 = 0x100
    _Bool _shouldSynchronizeWithSourceRTPTimestamps;	// 260 = 0x104
    struct _opaque_pthread_rwlock_t _sourceTimestampRWLock;	// 264 = 0x108
    unsigned int _lastSentSourceSampleTime;	// 464 = 0x1d0
    double _lastSentSourceHostTime;	// 472 = 0x1d8
    _Bool _isSourceTimestampInfoAvailable;	// 480 = 0x1e0
    double _sourceSampleRate;	// 488 = 0x1e8
    _Bool _isSuspended;	// 496 = 0x1f0
}

@property(retain, nonatomic) id <VCRedundancyControllerProtocol> redundancyController; // @synthesize redundancyController=_redundancyController;
@property(nonatomic) _Bool isSuspended; // @synthesize isSuspended=_isSuspended;
@property(nonatomic) unsigned int uplinkBitrateCapWifi; // @synthesize uplinkBitrateCapWifi=_uplinkBitrateCapWifi;
@property(nonatomic) unsigned int uplinkBitrateCapCell; // @synthesize uplinkBitrateCapCell=_uplinkBitrateCapCell;
@property(nonatomic) unsigned int currentUplinkTargetBitrate; // @synthesize currentUplinkTargetBitrate=_currentUplinkTargetBitrate;
@property(nonatomic) unsigned int currentUplinkTotalBitrate; // @synthesize currentUplinkTotalBitrate=_currentUplinkTotalBitrate;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;	// IMP=0x00000000002b0a99
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x00000000002b0a93
- (void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x00000000002b0a8d
- (void)setStatisticsCollector:(id)arg1;	// IMP=0x00000000002b0930
- (void)didPause:(_Bool)arg1;	// IMP=0x00000000002b08c5
- (void)didStop;	// IMP=0x00000000002b0864
- (void)didStart;	// IMP=0x00000000002b0803
- (void)updateEnabledState;	// IMP=0x00000000002b07fd
- (void)updateActiveStreamsCount:(unsigned int)arg1;	// IMP=0x00000000002b0196
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg1;	// IMP=0x00000000002affe4
- (id)activeStreamKeys;	// IMP=0x00000000002aff83
- (void)setActiveConnection:(id)arg1 uplinkBitrateCap:(unsigned int)arg2 activeMediaStreamIDs:(id)arg3 mediaBitrates:(id)arg4 rateChangeCounter:(unsigned int)arg5;	// IMP=0x00000000002afbd9
- (id)checkStreamsForAdditionalOptIn:(id)arg1;	// IMP=0x00000000002afbd0
- (_Bool)updatePeerSubscribedStreams:(id)arg1 containsRepairStreams:(_Bool)arg2;	// IMP=0x00000000002afa6b
- (id)peerSubscribedStreams;	// IMP=0x00000000002afa5a
- (void)updateUplinkBitrateCapWifi:(unsigned int)arg1 activeStreamIDs:(id)arg2;	// IMP=0x00000000002afa4a
- (void)updateUplinkBitrateCapCell:(unsigned int)arg1 activeStreamIDs:(id)arg2;	// IMP=0x00000000002afa3a
- (_Bool)enableRedundancy:(_Bool)arg1;	// IMP=0x00000000002afa1e
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4;	// IMP=0x00000000002af9c6
- (void)updateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4;	// IMP=0x00000000002af917
- (_Bool)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;	// IMP=0x00000000002af90f
- (_Bool)shouldSubscribeToStreamID:(id)arg1 peerSubscribedStreams:(id)arg2;	// IMP=0x00000000002af8fa
- (id)streamDescriptionForMediaStreamConfig:(id)arg1;	// IMP=0x00000000002af88c
- (void)updateStreamIDCompoundingWithBlock:(CDUnknownBlockType)arg1 activeStreamIds:(id)arg2;	// IMP=0x00000000002af3bf
- (_Bool)shouldCompoundListIgnoreStream:(id)arg1 streamConfig:(id)arg2 activeStreamIds:(id)arg3;	// IMP=0x00000000002af3b7
- (_Bool)updateConfig:(id)arg1 forMode:(unsigned int)arg2;	// IMP=0x00000000002aeebf
- (_Bool)setupStreamGroupWithConfig:(id)arg1;	// IMP=0x00000000002aeb76
- (void)updateEncryptionInformationWithConfig:(id)arg1;	// IMP=0x00000000002ae9d3
- (unsigned int)streamGroupMode;	// IMP=0x00000000002ae8f6
- (_Bool)setStreamGroupMode:(unsigned int)arg1;	// IMP=0x00000000002ade6d
- (id)streamGroupConfigForMode:(unsigned int)arg1;	// IMP=0x00000000002add02
- (void)dealloc;	// IMP=0x00000000002adc6a
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000002ad93b

@end
