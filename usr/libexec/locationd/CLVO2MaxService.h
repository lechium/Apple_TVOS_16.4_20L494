//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableSet, NSString;

@interface CLVO2MaxService : CLIntersiloService
{
    struct shared_ptr<CLVO2MaxInputCache> fInputCache;	// 8 = 0x8
    struct shared_ptr<CLVO2MaxInputStore> fInputStore;	// 24 = 0x18
    struct unique_ptr<CLVO2MaxStagingOutputStore, std::default_delete<CLVO2MaxStagingOutputStore>> fStagingOutputStore;	// 40 = 0x28
    struct unique_ptr<CLVO2MaxRetrocomputeRecorderDb, std::default_delete<CLVO2MaxRetrocomputeRecorderDb>> fRetrocomputeDb;	// 48 = 0x30
    struct unique_ptr<CLVO2MaxRetrocomputeBodyMetricsDb, std::default_delete<CLVO2MaxRetrocomputeBodyMetricsDb>> fRetrocomputeBodyMetricsDb;	// 56 = 0x38
    int fDeleteHealthKitSamplesAttempts;	// 64 = 0x40
    _Bool fDeleteHealthKitSamplesSuccess;	// 68 = 0x44
    int fUpdateRetrocomputedDataAttempts;	// 72 = 0x48
    _Bool fUpdateRetrocomputedDataSuccess;	// 76 = 0x4c
    _Bool fTriggerRetrocomputeInProgress;	// 77 = 0x4d
    _Bool fShouldBypassMinDelta;	// 78 = 0x4e
    _Bool fShouldBypassPreviousSampleInternal;	// 79 = 0x4f
    _Bool fShouldBypassMinEstimatesUpdatedRatio;	// 80 = 0x50
    struct unique_ptr<CLNatalimetryNotifier_Type::Client, std::default_delete<CLNatalimetryNotifier_Type::Client>> fUserInfoClient;	// 88 = 0x58
    struct CLBodyMetrics fUserInfo;	// 96 = 0x60
    struct CLBodyMetrics fOriginalBodyMetrics;	// 156 = 0x9c
    struct vector<VO2MaxStagingOutput, std::allocator<VO2MaxStagingOutput>> fPendingHealthKitWrites;	// 216 = 0xd8
    NSMutableSet *_retrocomputeStatusClients;	// 240 = 0xf0
}

+ (_Bool)isSupported;	// IMP=0x002000000016e162
+ (id);	// IMP=0x001000000016dbe6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000016dbcd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000016db70
- (id).cxx_construct;	// IMP=0x0020000000175d61
- (void).cxx_destruct;	// IMP=0x0010000000175cab
@property(retain, nonatomic) NSMutableSet *retrocomputeStatusClients; // @synthesize retrocomputeStatusClients=_retrocomputeStatusClients;
- (void)onUserInfoUpdate:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000001759d2
- (_Bool)validateBodyMetrics;	// IMP=0x0010000000175772
- (_Bool)updateRetrocomputeLastTimestampToHealthKit:(double)arg1;	// IMP=0x00100000001756b1
- (void)updateRetrocomputeStatus:(int)arg1 unavailableReasons:(unsigned int)arg2;	// IMP=0x00100000001753e2
- (void)deleteSessionsFromHealthKit:(vector_c99c8e88)arg1 withRetry:(_Bool)arg2;	// IMP=0x00100000001753dc
- (void)handleRetryHealthKitDeleteSamples:(id)arg1;	// IMP=0x0010000000175152
- (void)onRetryHealthKitDeleteSamples:(id)arg1;	// IMP=0x0010000000174f67
- (void)retryHealthKitDeleteSamples;	// IMP=0x0010000000174c74
- (void)deleteHealthKitSamples:(_Bool)arg1;	// IMP=0x0010000000174974
- (void)handleRetryTriggerRetrocompute:(id)arg1;	// IMP=0x001000000017421b
- (void)onRetryTriggerRetrocompute:(id)arg1;	// IMP=0x0010000000174046
- (void)retryTriggerRetrocompute;	// IMP=0x0010000000173ca7
- (void)promoteStagingData:(id)arg1;	// IMP=0x0010000000173b14
- (void)onRetrocomputeHealthKitSampleFailed:(id)arg1;	// IMP=0x0010000000173aef
- (void)onRetrocomputeHealthKitSampleSavedWithStartTime:(double)arg1 activity:(id)arg2;	// IMP=0x0010000000173761
- (void)saveStagingOutputToHealthKit:(struct VO2MaxStagingOutput)arg1 activity:(id)arg2;	// IMP=0x001000000017375b
- (void)triggerRetrocompute:(CDUnknownBlockType)arg1;	// IMP=0x0010000000173337
- (unsigned int)updateRetrocomputeHistoryPostProcessing:(struct VO2MaxRetrocomputeHistory *)arg1;	// IMP=0x00100000001727c4
- (void)updateRetrocomputeHistory:(struct VO2MaxRetrocomputeHistory *)arg1 withResult:(struct VO2MaxRetrocomputeSessionResult)arg2;	// IMP=0x0010000000172396
- (void)persistLostEstimateToStagingTables:(const void *)arg1;	// IMP=0x001000000017232e
- (void)persistRetrocomputeResultsToStagingTables:(struct VO2MaxRetrocomputeSessionResult)arg1;	// IMP=0x0010000000172033
- (unsigned int)retrocomputeSession:(const struct VO2MaxSessionAttributes *)arg1 withHealthKitSample:(struct VO2MaxHealthKitSample)arg2 withRetrocomputeHistory:(struct VO2MaxRetrocomputeHistory *)arg3;	// IMP=0x0010000000170a9c
- (int)getIndexInHealthKitSamples:(const void *)arg1 forSessionAttributes:(const struct VO2MaxSessionAttributes *)arg2 withStartIndex:(int)arg3;	// IMP=0x00100000001707e1
- (unsigned int)retrocomputeForSamples:(const void *)arg1 withRetrocomputeHistory:(struct VO2MaxRetrocomputeHistory *)arg2;	// IMP=0x001000000016ffe8
- (_Bool)isEligibleForPreProcessing:(struct VO2MaxRetrocomputeHistory *)arg1;	// IMP=0x001000000016ffc5
- (void)runAggregationForStagingTables;	// IMP=0x001000000016ffb0
- (void)markXpcActivityDone:(id)arg1;	// IMP=0x001000000016fead
- (void)executeRetrocomputePreprocessing:(id)arg1;	// IMP=0x001000000016fea7
- (void)queryVO2MaxRetrocomputeStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000016fb37
- (void)onRetrocomputePreprocessingActivity:(id)arg1;	// IMP=0x001000000016f8c2
- (void)resetRetrocomputePreProcessingActivity:(id)arg1 withDelay:(long long)arg2;	// IMP=0x001000000016f705
- (void)scheduleRetrocomputePreprocessing;	// IMP=0x001000000016efcb
- (void)sendRetroComputeAnalytics;	// IMP=0x001000000016e94c
- (void)unregisterForRetrocomputeStatusUpdates:(byref id)arg1;	// IMP=0x001000000016e91b
- (void)registerForRetrocomputeStatusUpdates:(byref id)arg1;	// IMP=0x001000000016e73f
- (void)endService;	// IMP=0x001000000016e670
- (void)beginService;	// IMP=0x001000000016e1a8
- (id)init;	// IMP=0x001000000016e125
- (void)forceClearHistoryDatabase;	// IMP=0x001000000016dffc
- (void)updateBypassParameters;	// IMP=0x001000000016dc42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
