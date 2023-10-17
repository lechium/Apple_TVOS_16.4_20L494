//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, WRMClientDelegate;

__attribute__((visibility("hidden")))
@interface WRMClient : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
    id _wrmClientDelegate;	// 24 = 0x18
    int _mediaControlInfoVersion;	// 32 = 0x20
    int _mode;	// 36 = 0x24
    CDStruct_21a0265e _metricsConfig;	// 40 = 0x28
    int _rssiThreshold;	// 44 = 0x2c
}

@property int mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
- (void)updateMetricsConfig:(CDStruct_21a0265e)arg1;	// IMP=0x000000000029e48d
- (void)setRSSIThresholdEnabled:(_Bool)arg1;	// IMP=0x000000000029e487
- (void)setPreWarmState:(_Bool)arg1;	// IMP=0x000000000029e481
- (void)processNotificationList:(id)arg1;	// IMP=0x000000000029e47b
- (void)processWRMCoexMetrics:(id)arg1 isAlertedMode:(_Bool)arg2;	// IMP=0x000000000029e475
- (void)setConfiguration:(CDStruct_69d7cc99 *)arg1;	// IMP=0x000000000029e46f
- (void)reportMetricsFaceTimeCalling:(const CDStruct_dea828ac *)arg1;	// IMP=0x000000000029e469
- (void)reportImmediateMetric:(int)arg1 value:(unsigned long long)arg2;	// IMP=0x000000000029e463
- (void)reportMetricsWifiCalling:(const CDStruct_dea828ac *)arg1;	// IMP=0x000000000029e45d
- (void)sendReport:(id)arg1;	// IMP=0x000000000029e457
- (void)dumpReport:(id)arg1;	// IMP=0x000000000029e451
- (void)sendStatusUpdateFaceTimeCalling:(const CDStruct_8aeecdac *)arg1;	// IMP=0x000000000029e44b
- (void)sendStatusUpdateInfoFaceTimeCalling:(id)arg1;	// IMP=0x000000000029e445
- (void)requestNotificationFaceTimeCalling;	// IMP=0x000000000029e43f
- (void)sendUnsubscriptionInfoFaceTimeCalling;	// IMP=0x000000000029e439
- (void)sendSubscriptionInfoFaceTimeCalling;	// IMP=0x000000000029e433
- (void)sendProcessInfoWithProcessID:(unsigned long long)arg1;	// IMP=0x000000000029e42d
- (int)getWRMSubscribeVersion;	// IMP=0x000000000029e40f
- (void)stopWRMClient;	// IMP=0x000000000029e409
- (void)startWRMClientWithMode:(int)arg1 metricsConfig:(CDStruct_21a0265e)arg2;	// IMP=0x000000000029e403
- (void)releaseServiceConnection;	// IMP=0x000000000029e3fd
- (_Bool)setupServiceConnection;	// IMP=0x000000000029e3f5
@property id <WRMClientDelegate> delegate;
- (void)dealloc;	// IMP=0x000000000029e2c7
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000029e1a5
- (id)init;	// IMP=0x000000000029e092

@end
