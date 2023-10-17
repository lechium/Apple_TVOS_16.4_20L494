//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCRateController, AVCStatisticsCollector, NSNumber, NSObject, NSString, VCRedundancyControllerVideo, VCVideoCaptureConverter, VCVideoReceiverBase, VCVideoRule, VCVideoTransmitterBase;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, VCSessionParticipantLocalVideoStreamDelegate, VCVideoReceiverFeedbackDelegate;

__attribute__((visibility("hidden")))
@interface VCVideoStream
{
    long long _type;	// 544 = 0x220
    NSObject<OS_dispatch_queue> *_lastDecodedFrameQueue;	// 552 = 0x228
    unsigned int _uplinkOperatingBitrate;	// 560 = 0x230
    struct __CVBuffer *_cachedRemoteVideoFrame;	// 568 = 0x238
    VCVideoTransmitterBase *_videoTransmitter;	// 576 = 0x240
    VCVideoReceiverBase *_videoReceiver;	// 584 = 0x248
    VCVideoRule *_videoRule;	// 592 = 0x250
    int _reportingModuleID;	// 600 = 0x258
    unsigned int _reportingDefaultRealtimePeriod;	// 604 = 0x25c
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;	// 608 = 0x260
    struct opaqueCMBufferQueue *_bufferQueue;	// 616 = 0x268
    VCVideoCaptureConverter *_captureConverter;	// 624 = 0x270
    _Bool _isServerBasedBandwidthProbingEnabled;	// 632 = 0x278
    _Bool _isEndToEndBasedBandwidthProbingEnabled;	// 633 = 0x279
    unsigned char _lastMediaPriority;	// 634 = 0x27a
    NSNumber *_targetStreamID;	// 640 = 0x280
    unsigned short _currentStreamID;	// 648 = 0x288
    NSNumber *_sendingStreamID;	// 656 = 0x290
    _Bool _isCompoundStreamIDsIncreased;	// 664 = 0x298
    _Bool _shouldEnableFaceZoom;	// 665 = 0x299
    _Bool _shouldEnableMLEnhance;	// 666 = 0x29a
    _Bool _didReceiveFirstFrame;	// 667 = 0x29b
    _Atomic _Bool _isVideoCaptureRegistered;	// 668 = 0x29c
    double _fecRatio;	// 672 = 0x2a0
    int _captureSource;	// 680 = 0x2a8
    int _streamInputCaptureSource;	// 684 = 0x2ac
    unsigned int _screenDisplayID;	// 688 = 0x2b0
    unsigned int _customWidth;	// 692 = 0x2b4
    unsigned int _customHeight;	// 696 = 0x2b8
    unsigned int _tilesPerFrame;	// 700 = 0x2bc
    unsigned int _initialTargetBitrate;	// 704 = 0x2c0
    struct OpaqueFigCFWeakReference *_weakStream;	// 712 = 0x2c8
    AVCRateController *_vcrcRateController;	// 720 = 0x2d0
    AVCStatisticsCollector *_statisticsCollector;	// 728 = 0x2d8
    VCRedundancyControllerVideo *_redundancyController;	// 736 = 0x2e0
    int _lastDisplayedFromImageQueueCount;	// 744 = 0x2e8
    int _lastDroppedFromImageQueueCount;	// 748 = 0x2ec
    double _lastDecodedVideoFrameTime;	// 752 = 0x2f0
    double _lastStatisticsCollectorVideoStallTotalUpdateTime;	// 760 = 0x2f8
    _Bool _isRemoteMediaStalled;	// 768 = 0x300
    double _lastMediaStallReportTime;	// 776 = 0x308
    float _synchronizationTimeOffset;	// 784 = 0x310
    unsigned int _rtpTimestampRate;	// 788 = 0x314
    unsigned short _temporalScalingBaseLayerStreamID;	// 792 = 0x318
    _Bool _isTemporalScalingEnabled;	// 794 = 0x31a
    CDStruct_1b6d18a9 _lastSentFrameHostTimeBeforeStop;	// 796 = 0x31c
    unsigned int _lastSentFrameRTPTimestampBeforeStop;	// 820 = 0x334
    id <VCSessionParticipantLocalVideoStreamDelegate> _videoStreamDelegate;	// 824 = 0x338
    struct __CFDictionary *_hdrColorInfo;	// 832 = 0x340
    unsigned int _baseQualityIndex;	// 840 = 0x348
}

+ (_Bool)shouldRegisterReportingForStreamType:(long long)arg1;	// IMP=0x0010000000374fc1
+ (_Bool)shouldEnableRateControlForStreamType:(long long)arg1;	// IMP=0x0010000000374fa4
+ (_Bool)isFeatureListStringExpectedForStreamType:(long long)arg1;	// IMP=0x0010000000374f87
+ (_Bool)isLowLatencyStreamType:(long long)arg1;	// IMP=0x0010000000374f46
+ (id)capabilities;	// IMP=0x00100000003724f3
+ (id)supportedVideoPayloads;	// IMP=0x00100000003724e6
+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x0010000000371c07
+ (_Bool)shouldUseRandomRTPTimestampWithType:(long long)arg1;	// IMP=0x001000000037162e
+ (id)newFeatureListStringsWithConfiguration:(id)arg1;	// IMP=0x001000000036e56c
+ (int)reportingClientTypeForStreamType:(long long)arg1;	// IMP=0x001000000036cac0
@property(nonatomic) id <VCSessionParticipantLocalVideoStreamDelegate> videoStreamDelegate; // @synthesize videoStreamDelegate=_videoStreamDelegate;
@property(readonly, nonatomic) _Bool isTemporalScalingEnabled; // @synthesize isTemporalScalingEnabled=_isTemporalScalingEnabled;
@property(readonly) VCVideoTransmitterBase *videoTransmitter; // @synthesize videoTransmitter=_videoTransmitter;
@property(readonly) VCVideoReceiverBase *videoReceiver; // @synthesize videoReceiver=_videoReceiver;
@property(nonatomic) unsigned int customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned int customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) _Bool didReceiveFirstFrame; // @synthesize didReceiveFirstFrame=_didReceiveFirstFrame;
@property(nonatomic) _Bool shouldEnableMLEnhance; // @synthesize shouldEnableMLEnhance=_shouldEnableMLEnhance;
@property(nonatomic) _Bool shouldEnableFaceZoom; // @synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom;
@property(readonly, nonatomic) _Bool isCompoundStreamIDsIncreased; // @synthesize isCompoundStreamIDsIncreased=_isCompoundStreamIDsIncreased;
@property(readonly, nonatomic) NSNumber *sendingStreamID; // @synthesize sendingStreamID=_sendingStreamID;
@property(nonatomic) _Bool isEndToEndBasedBandwidthProbingEnabled; // @synthesize isEndToEndBasedBandwidthProbingEnabled=_isEndToEndBasedBandwidthProbingEnabled;
@property(nonatomic) _Bool isServerBasedBandwidthProbingEnabled; // @synthesize isServerBasedBandwidthProbingEnabled=_isServerBasedBandwidthProbingEnabled;
@property(retain, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
- (void)updateWindowState:(int)arg1 isLocal:(_Bool)arg2 windowRect:(struct CGRect)arg3;	// IMP=0x000000000037e2e4
@property(nonatomic) float synchronizationTimeOffset;
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;	// IMP=0x000000000037e09f
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x000000000037e099
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x000000000037e05f
- (void)rateController:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x000000000037ddc1
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x000000000037dd08
- (void)collectTxChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x000000000037dcd9
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x000000000037dcaa
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1 interval:(float)arg2;	// IMP=0x000000000037dc8d
- (void)cameraAvailabilityDidChange:(_Bool)arg1;	// IMP=0x000000000037dbd2
- (void)thermalLevelDidChange:(int)arg1;	// IMP=0x000000000037d996
- (id)clientCaptureRule;	// IMP=0x000000000037d985
- (void)avConferenceScreenCaptureError:(id)arg1;	// IMP=0x000000000037d7f0
- (void)avConferencePreviewError:(id)arg1;	// IMP=0x000000000037d65b
- (CDUnknownBlockType)copyOnVideoFrameBlock;	// IMP=0x000000000037d59a
- (void)sourceFrameRateDidChange:(unsigned int)arg1;	// IMP=0x000000000037d57d
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;	// IMP=0x000000000037d4c7
- (void)vcVideoReceiver:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;	// IMP=0x000000000037d389
- (unsigned int)vcVideoReceiver:(id)arg1 receivedTMMBR:(unsigned int)arg2;	// IMP=0x000000000037d1e1
- (void)vcVideoReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;	// IMP=0x000000000037d0ca
- (void)vcVideoReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned int)arg2;	// IMP=0x000000000037cc97
- (void)vcVideoReceiver:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 firType:(int)arg3;	// IMP=0x000000000037ca08
- (_Bool)videoReceiver:(id)arg1 didReceiveRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 remoteVideoAttributes:(id)arg4 remoteScreenAttributes:(id)arg5 isFirstFrame:(_Bool)arg6;	// IMP=0x000000000037ca00
- (_Bool)vcVideoReceiver:(id)arg1 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 isFirstFrame:(_Bool)arg3;	// IMP=0x000000000037c781
@property(nonatomic, getter=getVideoReceiverFeedbackDelegate) id <VCVideoReceiverFeedbackDelegate> videoReceiverFeedbackDelegate;
- (void)stopSynchronization;	// IMP=0x000000000037c736
- (_Bool)startSynchronization:(id)arg1;	// IMP=0x000000000037c719
- (void)reportingAlgosVideoStreamEvent:(unsigned short)arg1;	// IMP=0x000000000037c624
- (void)reportingVideoStreamEvent:(unsigned short)arg1 newVideoAttributes:(id)arg2 currentStreamID:(id)arg3;	// IMP=0x000000000037c308
- (void)reportingVideoStreamEvent:(unsigned short)arg1 newVideoAttributes:(id)arg2;	// IMP=0x000000000037c2f3
- (void)reportingVideoStreamEvent:(unsigned short)arg1;	// IMP=0x000000000037c2df
- (void)collectVideoStreamStartMetrics:(struct __CFDictionary *)arg1;	// IMP=0x000000000037b92f
- (void)collectVideoConfigMetrics:(struct __CFDictionary *)arg1;	// IMP=0x000000000037b53c
- (struct __CFDictionary *)getClientSpecificUserInfo;	// IMP=0x000000000037afe3
- (_Bool)isClientSpecificUserInfoSupported:(int)arg1;	// IMP=0x000000000037afc7
- (int)reportVideoStreamType;	// IMP=0x000000000037af30
- (struct __CFString *)getReportingClientName;	// IMP=0x000000000037ae99
- (int)getReportingClientType;	// IMP=0x000000000037ae58
- (void)handleVTPSendFailedWithData:(void *)arg1;	// IMP=0x000000000037adeb
@property(nonatomic) unsigned int targetBitrateChangeCounter;
@property(nonatomic) unsigned int targetMediaBitrate;
@property unsigned int lastSentAudioSampleTime;
@property double lastSentAudioHostTime;
- (void)setPeerSubscribedStreamIDs:(id)arg1;	// IMP=0x000000000037a4cb
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x0000000000379b8e
- (void)setTransmitterStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x00000000003794c7
- (unsigned int)getMaxTemporalBitrateForStreamIDs:(id)arg1;	// IMP=0x000000000037914e
- (double)rtcpHeartbeatLeeway;	// IMP=0x0000000000379140
- (void)onSendRTCPPacket;	// IMP=0x0000000000379048
- (void)onRTCPTimeout;	// IMP=0x0000000000379031
- (void)onRTPTimeout;	// IMP=0x000000000037901a
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000378e81
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000378ce8
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000378a16
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003782c7
- (void)setupInternalRedundancyControllerWithStreamConfig:(id)arg1;	// IMP=0x00000000003780c7
- (_Bool)shouldReportNetworkInterfaceType;	// IMP=0x00000000003780b5
- (_Bool)isTransportIPv6;	// IMP=0x0000000000377fb1
@property(readonly) unsigned int networkMTU;
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x0000000000377e2c
- (void)setupReportingAgent;	// IMP=0x000000000037791a
- (void)collectImageQueuePerformanceMetrics:(struct __CFDictionary *)arg1;	// IMP=0x0000000000377914
- (_Bool)registerForVideoCapture;	// IMP=0x00000000003778af
- (_Bool)registerForCameraCaptureWithConfig:(id)arg1;	// IMP=0x0000000000377579
- (void)reportFailedToRegisterVideoFramesFromSource:(int)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4;	// IMP=0x0000000000377459
- (void)deregisterForVideoCapture;	// IMP=0x0000000000377447
- (int)operatingModeForVideoStreamType:(long long)arg1;	// IMP=0x0000000000377427
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000375f4a
- (void)configureNetworkSampleRateScaleForStream:(id)arg1 transport:(id)arg2;	// IMP=0x0000000000375b55
- (unsigned int)maxFramerateFromStreamConfigs:(id)arg1;	// IMP=0x00000000003757ba
- (_Bool)configureStreamInputCaptureSourceWithStreamInputID:(long long)arg1 frameRate:(unsigned int)arg2;	// IMP=0x00000000003757b2
- (void)deregisterCurrentStreamInputCaptureSource;	// IMP=0x00000000003757ac
- (id)getReceiveStatsCollectorWithStreamConfig:(id)arg1;	// IMP=0x0000000000375722
- (id)getTransmitStatsCollectorWithStreamConfig:(id)arg1;	// IMP=0x00000000003756bd
- (id)getTransmitMediaControllerWithStreamConfig:(id)arg1;	// IMP=0x000000000037566f
- (void)onCallIDChanged;	// IMP=0x0000000000375669
- (id)supportedPayloads;	// IMP=0x0000000000375650
- (_Bool)enableRateControlFeebackInConfig:(id)arg1;	// IMP=0x00000000003754ab
- (_Bool)setEncodingMode:(int)arg1;	// IMP=0x0000000000375386
- (_Bool)validateStreamConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000374fde
- (_Bool)isLowLatencyStreamType;	// IMP=0x0000000000374f60
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (void)cleanupBeforeReconfigure:(id)arg1;	// IMP=0x0000000000374315
- (_Bool)validateVideoStreamConfigurations:(id)arg1;	// IMP=0x00000000003741fa
- (void)sendLastRemoteVideoFrame:(struct __CVBuffer *)arg1;	// IMP=0x00000000003741a8
- (void)cacheRemoteVideoFrame:(struct __CVBuffer *)arg1;	// IMP=0x00000000003740e1
- (void)setFECRedundancyVector:(const CDStruct_d7e2e0ee *)arg1;	// IMP=0x00000000003740c4
@property(nonatomic) double fecRatio;
- (void)generateKeyFrameWithFIRType:(int)arg1;	// IMP=0x0000000000373acd
- (void)updateSourcePlayoutTimestamp:(CDStruct_1b6d18a9 *)arg1;	// IMP=0x00000000003736db
- (void)resetRemoteMediaStalled;	// IMP=0x00000000003734c5
- (void)submitStatisticsCollectorVideoStallUpdateWithType:(int)arg1 currentTime:(double)arg2 stallDuration:(double)arg3 idsParticipantID:(unsigned long long)arg4;	// IMP=0x000000000037338a
- (void)submitStatisticsCollectorVideoStallUpdateWithTime:(double)arg1;	// IMP=0x00000000003730ea
- (void)requestLastDecodedFrame;	// IMP=0x0000000000372eff
- (void)updateVideoConfig:(id)arg1;	// IMP=0x00000000003726aa
- (void)dealloc;	// IMP=0x000000000037229d
- (void)setupVideoStream;	// IMP=0x000000000037203d
- (id)initWithTransportSessionID:(unsigned int)arg1 idsParticipantID:(unsigned long long)arg2 ssrc:(unsigned int)arg3 streamToken:(long long)arg4;	// IMP=0x0000000000371d56
- (id)init;	// IMP=0x0000000000371ce7
- (double)lastReceivedRTCPPacketTime;	// IMP=0x0000000000371cca
- (double)lastReceivedRTPPacketTime;	// IMP=0x0000000000371cad
- (_Bool)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;	// IMP=0x0000000000371c1b
- (void)setupColorInfo;	// IMP=0x0000000000371654
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg1;	// IMP=0x0000000000371611
- (void)handleNWConnectionPacketEvent:(struct packet_id *)arg1 eventType:(int)arg2;	// IMP=0x00000000003715c6
- (void)handleNWConnectionNotification:(struct ifnet_interface_advisory *)arg1;	// IMP=0x000000000037158a
- (void)stopVCRC;	// IMP=0x0000000000371534
- (void)startVCRCWithStreamConfig:(id)arg1;	// IMP=0x00000000003713d0
- (void)setupCompoundStreamIDsWithStreamIDs:(id)arg1;	// IMP=0x0000000000370de7
- (void)destroyVideoModules;	// IMP=0x0000000000370cf7
- (void)destroyVideoReceiver;	// IMP=0x0000000000370be8
- (void)updateVideoReceiver:(id)arg1;	// IMP=0x0000000000370a41
- (_Bool)useUEPForVideoConfig:(int)arg1;	// IMP=0x0000000000370987
- (void)setupVideoReceiver:(id)arg1 withTransmitterHandle:(struct tagHANDLE *)arg2;	// IMP=0x00000000003703a9
- (struct tagVCNACKGeneratorStoreBagsConfig)readServerPacketRetransmissionsForVideoStoreBagConfig:(id)arg1;	// IMP=0x000000000036fe1c
- (struct tagVCVideoReceiverConfig)videoReceiverConfigWithVideoStreamConfig:(id)arg1;	// IMP=0x000000000036eeb9
- (struct tagVCVideoStreamReceiverConfig)videoStreamReceiverConfigWithDumpID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;	// IMP=0x000000000036ee0c
- (void)cleaunpReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1;	// IMP=0x000000000036edc2
- (void)setupFeatureListStringsForReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1 streamConfig:(id)arg2;	// IMP=0x000000000036ebd3
- (void)setupMultiwayVideoReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x000000000036e87f
- (void)setupMultiwayVideoReceiverStreamSwitchInfo:(struct tagVCVideoReceiverStreamConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x000000000036e75c
- (void)setupMultiwayVideoReceiverTemporalScalingConfig:(struct tagVCVideoReceiverStreamConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x000000000036e68e
- (_Bool)isScreenConfig:(id)arg1;	// IMP=0x000000000036e623
- (void)destroyVideoTransmitter;	// IMP=0x000000000036e455
- (void)initVideoTransmitter;	// IMP=0x000000000036de54
- (_Bool)isFECGeneratorEnabled;	// IMP=0x000000000036dcea
- (id)newVideoTransmitterConfigWithVideoStreamConfig:(id)arg1;	// IMP=0x000000000036cae0
- (void)overrideConfigWithDefaults;	// IMP=0x000000000036c944

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

