//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCStatisticsCollector, NSArray, NSDictionary, NSObject, NSString, TimingCollection, VCMediaKeyIndex, VCMoments, VCNetworkFeedbackController, VCSecurityKeyManager;
@protocol OS_dispatch_queue, VCMediaCaptureController;

__attribute__((visibility("hidden")))
@interface VCMediaStreamGroup
{
    NSArray *_mediaStreamInfoArray;	// 24 = 0x18
    NSArray *_mediaStreams;	// 32 = 0x20
    NSDictionary *_streamIDToMediaStreamMap;	// 40 = 0x28
    NSDictionary *_groupEntries;	// 48 = 0x30
    NSString *_participantUUID;	// 56 = 0x38
    NSString *_sessionUUID;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_stateQueue;	// 72 = 0x48
    VCNetworkFeedbackController *_networkFeedbackController;	// 80 = 0x50
    AVCStatisticsCollector *_statisticsCollector;	// 88 = 0x58
    TimingCollection *_perfTimers;	// 96 = 0x60
    double _creationTime;	// 104 = 0x68
    double _firstMediaPacketTime;	// 112 = 0x70
    double _firstMediaKeyIndexTime;	// 120 = 0x78
    _Bool _firstMediaFrameGapDetected;	// 128 = 0x80
    VCMediaKeyIndex *_firstMediaKeyIndex;	// 136 = 0x88
    _Bool _areStreamsSuspended;	// 144 = 0x90
    id _delegate;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 160 = 0xa0
    _Bool _encryptionInfoReceived;	// 168 = 0xa8
    unsigned int _state;	// 172 = 0xac
    unsigned long long _idsParticipantID;	// 176 = 0xb0
    unsigned int _rtpTimestampRate;	// 184 = 0xb8
    VCMoments *_moments;	// 192 = 0xc0
    unsigned int _streamGroupID;	// 200 = 0xc8
    long long _streamToken;	// 208 = 0xd0
    unsigned int _mediaType;	// 216 = 0xd8
    unsigned int _mediaSubtype;	// 220 = 0xdc
    unsigned int _syncGroupID;	// 224 = 0xe0
    id _captureController;	// 232 = 0xe8
    VCSecurityKeyManager *_securityKeyManager;	// 240 = 0xf0
    _Bool _hasRepairedStreams;	// 248 = 0xf8
    struct tagVCJBTargetEstimatorSynchronizer *_jbTargetEstimatorSynchronizer;	// 256 = 0x100
}

@property(retain, nonatomic) VCMoments *moments; // @synthesize moments=_moments;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(readonly, nonatomic) _Bool hasRepairedStreams; // @synthesize hasRepairedStreams=_hasRepairedStreams;
@property(nonatomic) _Bool encryptionInfoReceived; // @synthesize encryptionInfoReceived=_encryptionInfoReceived;
@property(readonly, nonatomic) NSArray *mediaStreamInfoArray; // @synthesize mediaStreamInfoArray=_mediaStreamInfoArray;
@property(readonly, nonatomic) NSDictionary *streamIDToMediaStreamMap; // @synthesize streamIDToMediaStreamMap=_streamIDToMediaStreamMap;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) unsigned int syncGroupID; // @synthesize syncGroupID=_syncGroupID;
@property(nonatomic) unsigned int mediaSubtype; // @synthesize mediaSubtype=_mediaSubtype;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) unsigned int streamGroupID; // @synthesize streamGroupID=_streamGroupID;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;	// IMP=0x0000000000383433
- (void)mediaStream:(id)arg1 didReceiveRTPGapForMediaKeyIndex:(id)arg2;	// IMP=0x00000000003832d6
- (void)mediaStream:(id)arg1 didReceiveNewMediaKeyIndex:(id)arg2;	// IMP=0x00000000003831c6
- (void)unregisterMediaStreamNotificationDelegate;	// IMP=0x00000000003830c0
- (void)registerMediaStreamNotificationDelegate;	// IMP=0x0000000000382fb7
- (void)didEncryptionKeyRollTimeout;	// IMP=0x0000000000382fb1
- (void)resetDecryptionTimeout;	// IMP=0x0000000000382ead
- (_Bool)handleEncryptionInfoChange:(id)arg1;	// IMP=0x0000000000382d89
- (id)stopCapture;	// IMP=0x0000000000382d81
- (id)startCapture;	// IMP=0x0000000000382d79
- (void)vcMediaStreamServerDidDie:(id)arg1;	// IMP=0x0000000000382d73
- (_Bool)removeSyncDestination:(id)arg1;	// IMP=0x0000000000382d6b
- (_Bool)addSyncDestination:(id)arg1;	// IMP=0x0000000000382d63
- (_Bool)containsStreamWithSSRC:(unsigned int)arg1;	// IMP=0x0000000000382ad2
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000003829b5
- (id)resume;	// IMP=0x000000000038277d
- (id)pause;	// IMP=0x0000000000382542
- (id)stop;	// IMP=0x0000000000382203
- (id)start;	// IMP=0x0000000000381e12
- (id)resumeMediaStreams;	// IMP=0x00000000003819c2
- (id)pauseMediaStreams;	// IMP=0x000000000038156f
- (id)setPauseOnMediaStreams:(_Bool)arg1;	// IMP=0x00000000003813cf
- (_Bool)shouldSetPause:(_Bool)arg1 onStream:(id)arg2;	// IMP=0x00000000003813a5
- (id)stopMediaStreams;	// IMP=0x0000000000380eb0
- (id)startMediaStreams;	// IMP=0x0000000000380a08
@property(nonatomic) id <VCMediaCaptureController> captureController;
- (void)finalizePerfTimersForFirstMediaFrameWithTime:(double)arg1;	// IMP=0x0000000000380981
- (void)setupPerfTimersWithMediaKeyIndex:(id)arg1 perfTimerIndexToStart:(int)arg2;	// IMP=0x000000000038087c
- (void)setTotalMediaStallSaveIntervalWithTime:(double)arg1;	// IMP=0x00000000003807f2
- (void)setFirstMKIToFirstMediaReceivedTimerForMKIReceivedTime;	// IMP=0x000000000038078d
- (void)setParticipantJoinedToFirstMKITimer;	// IMP=0x0000000000380611
- (_Bool)containsStreamWithIDSStreamID:(unsigned short)arg1;	// IMP=0x00000000003803af
- (void)callDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000380071
- (void)collectAndLogChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x000000000038006b
- (_Bool)configureStreams;	// IMP=0x000000000037fb7b
- (_Bool)setupStreamsWithConfig:(id)arg1;	// IMP=0x000000000037f90f
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000037f718
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000037eb0c
- (void)didPause:(_Bool)arg1;	// IMP=0x00000000003835c2
- (void)didStop;	// IMP=0x0000000000383598
- (void)willStop;	// IMP=0x0000000000383592
- (void)didStart;	// IMP=0x0000000000383568
- (id)willStart;	// IMP=0x0000000000383560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

