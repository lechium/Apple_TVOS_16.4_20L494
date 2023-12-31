//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, VCConnectionManager, VCTransportStreamGFT;
@protocol OS_dispatch_source, VCSessionStatsControllerDelegate;

__attribute__((visibility("hidden")))
@interface VCSessionStatsController : NSObject
{
    id <VCSessionStatsControllerDelegate> _weakDelegate;	// 8 = 0x8
    AVCStatisticsCollector *_uplinkStatisticsCollector;	// 16 = 0x10
    AVCStatisticsCollector *_downlinkStatisticsCollector;	// 24 = 0x18
    CDStruct_2756d7ac _remoteStats;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_localSessionStatsTimemoutSource;	// 56 = 0x38
    unsigned int _statsRequestCounter;	// 64 = 0x40
    VCConnectionManager *_connectionManager;	// 72 = 0x48
    VCTransportStreamGFT *_transportStream;	// 80 = 0x50
    double _lastTriggerRateControlTime;	// 88 = 0x58
    id _reportingAgentWeak;	// 96 = 0x60
    unsigned int _uplinkServerStatsByteUsed;	// 104 = 0x68
    unsigned int _downlinkServerStatsByteUsed;	// 108 = 0x6c
    struct tagVCRealTimeThread *_statsReceiveThread;	// 112 = 0x70
    unsigned short _streamID;	// 120 = 0x78
    unsigned short _statsArrayIndex;	// 122 = 0x7a
    _Bool _enableStatsReceiveThread;	// 124 = 0x7c
    unsigned int _previousTotalPacketSent;	// 128 = 0x80
    unsigned int _previousTotalPacketReceived;	// 132 = 0x84
    unsigned int _uplinkMostRecentSendTimestamp;	// 136 = 0x88
    unsigned int _downlinkMostRecentSendTimestamp;	// 140 = 0x8c
    _Bool _didReceiveServerStatsResponse;	// 144 = 0x90
    _Bool _enableStatsReporting;	// 145 = 0x91
    double _statsReportingInterval;	// 152 = 0x98
    double _lastStatsReportTime;	// 160 = 0xa0
    int _lastProcessedBytesSent;	// 168 = 0xa8
    int _bytesSentToReport;	// 172 = 0xac
    int _maxSentRate;	// 176 = 0xb0
    int _minSentRate;	// 180 = 0xb4
    int _lastProcessedBytesReceived;	// 184 = 0xb8
    int _bytesReceivedToReport;	// 188 = 0xbc
    int _maxReceivedRate;	// 192 = 0xc0
    int _minReceivedRate;	// 196 = 0xc4
    double _lastUpdateTime;	// 200 = 0xc8
    double _lastTimeReceiveStatsFailed;	// 208 = 0xd0
    unsigned int _statsNoResponseCounter;	// 216 = 0xd8
    unsigned int _statsResponseCounter;	// 220 = 0xdc
    unsigned int _numStatsDroppedDueToStatsID;	// 224 = 0xe0
    unsigned int _numStatsDroppedDueToLinkID;	// 228 = 0xe4
    unsigned int _numStatsDroppedDueToTooLate;	// 232 = 0xe8
    unsigned int _numStatsProcessed;	// 236 = 0xec
    unsigned int _numStatsTriggeredForUplink;	// 240 = 0xf0
    unsigned int _numStatsTriggeredForDownlink;	// 244 = 0xf4
    double _averageInterCallbackDuration;	// 248 = 0xf8
    double _lastPacketReceiveCallbackTime;	// 256 = 0x100
    double _totalStatsTransportStreamQueueTime;	// 264 = 0x108
    double _maxStatsTransportStreamQueueTime;	// 272 = 0x110
    double _lastHealthPrintTime;	// 280 = 0x118
}

@property(readonly, nonatomic) _Bool didReceiveServerStatsResponse; // @synthesize didReceiveServerStatsResponse=_didReceiveServerStatsResponse;
@property(nonatomic) double statsReportingInterval; // @synthesize statsReportingInterval=_statsReportingInterval;
- (void)flushRealTimeReportingStats;	// IMP=0x000000000032bc67
- (void)deregisterPeriodicTask;	// IMP=0x000000000032bc48
- (void)periodicTask:(void *)arg1;	// IMP=0x000000000032ba12
- (void)registerPeriodicTask;	// IMP=0x000000000032b9c2
@property(readonly) id reportingAgent;
- (void)resetHealthPrintCounters;	// IMP=0x000000000032b98a
- (void)healthPrintForServerStats;	// IMP=0x000000000032b771
- (void)calculateInterCallbackDurationWithTime:(double)arg1;	// IMP=0x000000000032b733
- (void)handleRemoteSessionStats:(CDStruct_a2e45a7d *)arg1;	// IMP=0x000000000032b2ff
- (void)statsReceiveStatsPayload;	// IMP=0x000000000032b18f
- (void)triggerRateControlWithLocalSessionStats:(CDStruct_b5e1e8f2)arg1 time:(double)arg2 forUplink:(_Bool)arg3 forDownlink:(_Bool)arg4 fromVCRCExternalThread:(_Bool)arg5;	// IMP=0x000000000032af52
- (unsigned short)translateTimestampFromMicro:(double)arg1;	// IMP=0x000000000032af39
- (_Bool)isRemoteSessionStatsTooLateWithStatsId:(unsigned short)arg1;	// IMP=0x000000000032ae18
- (void)updateRemoteSessionStats:(CDStruct_2756d7ac)arg1;	// IMP=0x000000000032a757
- (void)stopLocalSessionStatsUpdate;	// IMP=0x000000000032a58d
- (void)startLocalSessionStatsSend;	// IMP=0x000000000032a300
- (void)startLocalSessionStatsReceive;	// IMP=0x000000000032a0be
- (void)startLocalSessionStatsUpdate;	// IMP=0x000000000032a090
- (void)sendLocalStats;	// IMP=0x0000000000329ff3
- (void)reset;	// IMP=0x0000000000329f18
- (void)dealloc;	// IMP=0x0000000000329d8d
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 uplinkStatsCollector:(id)arg3 downlinkStatsCollector:(id)arg4 reportingAgent:(struct opaqueRTCReporting *)arg5 transportSessionID:(unsigned int)arg6 streamID:(unsigned short)arg7 mediaQueue:(struct tagVCMediaQueue *)arg8;	// IMP=0x0000000000329b12

@end

