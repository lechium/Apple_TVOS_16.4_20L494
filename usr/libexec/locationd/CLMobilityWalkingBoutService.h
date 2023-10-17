//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLMobilityHealthKitWriter, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_source;

@interface CLMobilityWalkingBoutService : CLIntersiloService
{
    struct unique_ptr<CLStepCountNotifier_Type::Client, std::default_delete<CLStepCountNotifier_Type::Client>> fStepCountClient;	// 8 = 0x8
    struct unique_ptr<CLNatalimetryNotifier_Type::Client, std::default_delete<CLNatalimetryNotifier_Type::Client>> fUserInfoClient;	// 16 = 0x10
    struct unique_ptr<CLDaemonStatus_Type::Client, std::default_delete<CLDaemonStatus_Type::Client>> fDaemonStatusClient;	// 24 = 0x18
    struct unique_ptr<CLMotionStateObserver_Type::Client, std::default_delete<CLMotionStateObserver_Type::Client>> fMotionStateObserverClient;	// 32 = 0x20
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::default_delete<CLMotionStateMediator_Type::Client>> fMotionStateMediatorClient;	// 40 = 0x28
    struct shared_ptr<CLMobility::BoutBoundaryRecorderDb> fBoutBoundaryDb;	// 48 = 0x30
    struct unique_ptr<CLActivityAggregator<CLMobility::BoutBoundary>, std::default_delete<CLActivityAggregator<CLMobility::BoutBoundary>>> fBoutBoundaryAggregator;	// 64 = 0x40
    struct shared_ptr<CLMobility::GaitMetricsRecorderDb> fGaitMetricsDb;	// 72 = 0x48
    struct unique_ptr<CLActivityAggregator<CLMobility::GaitMetrics>, std::default_delete<CLActivityAggregator<CLMobility::GaitMetrics>>> fGaitMetricsAggregator;	// 88 = 0x58
    struct shared_ptr<CLMobility::BoutMetricsRecorderDb> fBoutMetricsDb;	// 96 = 0x60
    struct unique_ptr<CLActivityAggregator<CLMobility::BoutMetrics>, std::default_delete<CLActivityAggregator<CLMobility::BoutMetrics>>> fBoutMetricsAggregator;	// 112 = 0x70
    shared_ptr_a3117978 fPedometerDb;	// 120 = 0x78
    struct shared_ptr<CLMobility::HealthKitQueryDelegate> fHKQueryDelegate;	// 136 = 0x88
    NSObject<OS_dispatch_source> *fAggregationTimer;	// 152 = 0x98
    struct unique_ptr<CLMobility::WalkingBoutExtractor, std::default_delete<CLMobility::WalkingBoutExtractor>> fBoutExtractor;	// 160 = 0xa0
    struct unique_ptr<CLMobility::WalkingSteadinessClassifier, std::default_delete<CLMobility::WalkingSteadinessClassifier>> fSteadinessClassifier;	// 168 = 0xa8
    _Bool fClassificationInProgress;	// 176 = 0xb0
    _Bool fIsMigrationComplete;	// 177 = 0xb1
    struct unique_ptr<CLMotionNotifier::SiloDispatcher<CLMobility::SPUGaitMetrics>, std::default_delete<CLMotionNotifier::SiloDispatcher<CLMobility::SPUGaitMetrics>>> fSPUGaitMetricsDispatcher;	// 184 = 0xb8
    CLMobilityHealthKitWriter *fHealthKitWriter;	// 192 = 0xc0
    struct CLBodyMetrics _previousBodyMetrics;	// 200 = 0xc8
    NSMutableSet *_boutClients;	// 264 = 0x108
    NSMutableSet *_steadinessClients;	// 272 = 0x110
}

+ (_Bool)isSupported;	// IMP=0x00200000006e1a09
+ (id)getSilo;	// IMP=0x00100000006e18b6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006e189d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000006e1840
- (id).cxx_construct;	// IMP=0x00200000006ecb43
- (void).cxx_destruct;	// IMP=0x00100000006ec9ca
@property(retain, nonatomic) NSMutableSet *steadinessClients; // @synthesize steadinessClients=_steadinessClients;
@property(retain, nonatomic) NSMutableSet *boutClients; // @synthesize boutClients=_boutClients;
- (void)unregisterForWalkingSteadiness:(byref id)arg1;	// IMP=0x00100000006ec827
- (void)registerForWalkingSteadiness:(byref id)arg1;	// IMP=0x00100000006ec6c8
- (void)unregisterForMobilityBoutMetrics:(byref id)arg1;	// IMP=0x00100000006ec569
- (void)registerForMobilityBoutMetrics:(byref id)arg1;	// IMP=0x00100000006ec40a
- (void)setUpAggregationOnTimer;	// IMP=0x00100000006ebc02
- (void)setUpProcessBoutsActivity;	// IMP=0x00100000006eb8f8
- (void)setUpClassificationActivityWithDeferral:(_Bool)arg1;	// IMP=0x00100000006eb15d
- (void)sendAnalyticsSteadinessResult:(struct Result)arg1;	// IMP=0x00100000006e99af
- (void)sendAnalyticsBoutMetrics:(vector_c734fc51)arg1;	// IMP=0x00100000006e7ca1
- (float)BMIFromHeight:(float)arg1 weight:(float)arg2;	// IMP=0x00100000006e7c83
- (void)checkForHistoricalComputeTrigger:(struct CLBodyMetrics)arg1;	// IMP=0x00100000006e77d4
- (void)classifySteadinessWithCompletion:(CDUnknownBlockType)arg1 activity:(id)arg2;	// IMP=0x00100000006e536d
- (void)handleBoutResults:(vector_c734fc51)arg1;	// IMP=0x00100000006e4d1e
- (void)checkForBoutsReadyToProcessWithCompletion:(CDUnknownBlockType)arg1 activity:(id)arg2;	// IMP=0x00100000006e47ee
- (_Bool)checkDeferRequestForBoutsActivity:(id)arg1;	// IMP=0x00100000006e454c
- (void)onAggregationTimer;	// IMP=0x00100000006e38d5
- (void)onDataCollectionRequested:(CDUnknownBlockType)arg1;	// IMP=0x00100000006e3586
- (void)onMobilityClassificationActivity:(id)arg1;	// IMP=0x00100000006e31f1
- (void)onMobilityProcessBoutsActivity:(id)arg1;	// IMP=0x00100000006e2d96
- (void)onSPUGaitMetrics:(const struct SPUGaitMetrics *)arg1;	// IMP=0x00100000006e2cb8
- (void)onMotionStateMediatorNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000006e2c58
- (void)onMotionStateObserverNotification:(const int *)arg1 data:(const NotificationData_6024acef *)arg2;	// IMP=0x00100000006e2bfc
- (void)onStatusNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000006e2b76
- (void)onUserInfoUpdate:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000006e28fc
- (void)onStepCountNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000006e27a5
- (void)endService;	// IMP=0x00100000006e2638
- (void)beginService;	// IMP=0x00100000006e1a4f
- (void)dealloc;	// IMP=0x00100000006e199f
- (id)init;	// IMP=0x00100000006e1912

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

