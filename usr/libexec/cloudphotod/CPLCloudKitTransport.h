//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CKRecordZoneID, CPLCloudKitCoordinator, CPLCloudKitOperationsTracker, CPLCloudKitSimpleCache, CPLCloudKitTaskGroupThrottler, CPLDuetTicketProvider, MISSING_TYPE, NSArray, NSDate, NSDictionary, NSError, NSIndexSet, NSMutableSet, NSObject, NSOperationQueue, NSString;
@protocol CPLSharedRecordPropertyMapping, NSObject, OS_dispatch_queue;

@interface CPLCloudKitTransport : CPLPlatformObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSOperationQueue *_workOperationQueue;	// 16 = 0x10
    CPLCloudKitOperationsTracker *_operationTracker;	// 24 = 0x18
    _Bool _mightRejectVideoStreaming;	// 32 = 0x20
    NSIndexSet *_rejectedVideoStreamingIntents;	// 40 = 0x28
    _Bool _rejectVideoStreamingAtContentLevel;	// 48 = 0x30
    NSArray *_rejectedVideoStreamingIntentNames;	// 56 = 0x38
    NSDictionary *_operationGroupMapping;	// 64 = 0x40
    NSMutableSet *_invalidaOperationGroupMappingEntries;	// 72 = 0x48
    CPLCloudKitSimpleCache *_streamingContentItemCache;	// 80 = 0x50
    MISSING_TYPE *_resourceDownloadGate;	// 88 = 0x58
    CPLCloudKitTaskGroupThrottler *_streamingGate;	// 96 = 0x60
    CKRecordZoneID *_overridePrimarySyncZoneID;	// 104 = 0x68
    Class _overrideZoneIdentificationClass;	// 112 = 0x70
    NSString *_overrideNormalScopeIdentifier;	// 120 = 0x78
    CKRecordZoneID *_overrideNormalZoneID;	// 128 = 0x80
    id <NSObject> _identityChangeWatcher;	// 136 = 0x88
    id <NSObject> _accountInfoWatcher;	// 144 = 0x90
    unsigned long long _accountInfoFetchGeneration;	// 152 = 0x98
    NSDate *_lastAccountInfoUpdateDate;	// 160 = 0xa0
    NSString *_lastDisablingReasonBecauseOfAccountStatus;	// 168 = 0xa8
    NSString *_universeName;	// 176 = 0xb0
    _Bool _opened;	// 184 = 0xb8
    CDUnknownBlockType _shouldIgnoreZoneWithZoneID;	// 192 = 0xc0
    CPLCloudKitCoordinator *_coordinator;	// 200 = 0xc8
    CPLDuetTicketProvider *_duetTicketProvider;	// 208 = 0xd0
    NSDate *_significantWorkBeginDate;	// 216 = 0xd8
    NSError *_errorForAllOperations;	// 224 = 0xe0
}

+ (id)_errorsByTaskForTasksByRecordId:(id)arg1 fromUnderlyingError:(id)arg2;	// IMP=0x002000000010598f
+ (id)_betterErrorForRecordId:(id)arg1 recordError:(id)arg2;	// IMP=0x001000000010579e
+ (_Bool)allowsUserInitiatedOperationsOverExpensiveNetwork;	// IMP=0x00100000001046e0
+ (_Bool)allowsSyncOverCellular;	// IMP=0x001000000010462c
+ (void)setMainScopeZoneName:(id)arg1;	// IMP=0x00100000000fe1be
+ (id)mainScopeZoneName;	// IMP=0x00100000000fe19f
+ (void)configureForTestingInUniverseNamed:(id)arg1;	// IMP=0x00100000000fe117
+ (void)initialize;	// IMP=0x00100000000fdfc4
- (void).cxx_destruct;	// IMP=0x0020000000109f32
@property(retain) NSError *errorForAllOperations; // @synthesize errorForAllOperations=_errorForAllOperations;
@property(retain, nonatomic) NSDate *significantWorkBeginDate; // @synthesize significantWorkBeginDate=_significantWorkBeginDate;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) CPLDuetTicketProvider *duetTicketProvider; // @synthesize duetTicketProvider=_duetTicketProvider;
@property(readonly) CPLCloudKitCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(copy, nonatomic) CDUnknownBlockType shouldIgnoreZoneWithZoneID; // @synthesize shouldIgnoreZoneWithZoneID=_shouldIgnoreZoneWithZoneID;
@property _Bool opened; // @synthesize opened=_opened;
@property(readonly, nonatomic) CPLCloudKitOperationsTracker *operationTracker; // @synthesize operationTracker=_operationTracker;
@property(readonly) NSString *cloudKitClientIdentifier;
- (_Bool)shouldIgnoreZoneWithZoneID:(id)arg1;	// IMP=0x0010000000109de2
- (id)databaseForOperationType:(long long)arg1 relativeToOperationType:(long long)arg2;	// IMP=0x0010000000109dc2
- (_Bool)shouldRunOperationsWithError:(id *)arg1;	// IMP=0x0010000000109d73
- (void)processTaskErrorIfNeeded:(id)arg1 forTask:(id)arg2;	// IMP=0x0010000000109709
- (void)_noteContainerHasBeenWiped;	// IMP=0x00100000001095b1
- (void)_failAllFutureOperationsWithContainerHasBeenWipedError;	// IMP=0x0010000000109405
@property(readonly, nonatomic) _Bool canBoostBackgroundOperations;
@property(readonly, nonatomic) _Bool canBoostOperations;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic, getter=isNetworkConnected) _Bool networkConnected;
- (void)associateMetric:(id)arg1;	// IMP=0x001000000010922d
- (void)launchOperation:(id)arg1 type:(long long)arg2;	// IMP=0x0010000000109105
- (id)newOperationConfiguration;	// IMP=0x00100000001090e8
- (id)zoneIdentificationForCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x0010000000108fcf
- (long long)scopeTypeForCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(id)arg3 currentUserID:(id)arg4;	// IMP=0x0010000000108e98
- (id)recordsToFetchToIdentifyCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 currentUserID:(id)arg3;	// IMP=0x0010000000108d5d
- (id)defaultZoneIDForMainScope;	// IMP=0x0010000000108ced
- (id)mainScopeZoneIDFromZoneIDs:(id)arg1;	// IMP=0x0010000000108c03
- (_Bool)isZoneIDForMainScopeIdentifier:(id)arg1;	// IMP=0x0010000000108b5b
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x0010000000108b49
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x0010000000108aa5
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x0010000000108973
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x001000000010885c
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x00100000001087d5
- (id)concreteScopeFromTransportScope:(id)arg1;	// IMP=0x00100000001087bc
- (id)transportScopeFromConcreteScope:(id)arg1;	// IMP=0x00100000001087a7
- (void)coordinator:(id)arg1 receivedPushNotification:(id)arg2;	// IMP=0x00100000001085c4
- (void)coordinator:(id)arg1 provideCKAssetWithRecordID:(id)arg2 fieldName:(id)arg3 recordType:(id)arg4 signature:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000106f96
- (void)_withTempCKAssetForData:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000106e16
- (id)_tempDestinationURLForRecoveredDataWithError:(id *)arg1;	// IMP=0x0010000000106cc2
- (void)_cleanTempRecoveredDataURL:(id)arg1;	// IMP=0x0010000000106aa8
- (void)testKey:(id)arg1 value:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010681f
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000010662f
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000105c9e
- (id)componentName;	// IMP=0x0010000000105c91
- (id)tempCKAssetURL;	// IMP=0x0010000000105c0b
- (void)_updateWalrusTo:(_Bool)arg1;	// IMP=0x001000000010572f
- (void)_disableSchedulerBecauseAccountIsUnavailableWithReason:(id)arg1;	// IMP=0x001000000010540b
- (void)_enableSchedulerBecauseAccountIsAvailable;	// IMP=0x0010000000105268
- (void)_updateStateWithAccountStatus:(long long)arg1;	// IMP=0x0010000000105135
- (void)_updateStateWithAccountInfo:(id)arg1 walrusEnabledDefault:(id)arg2;	// IMP=0x0010000000104ee8
- (void)_updateAccountInfo;	// IMP=0x0010000000104ad1
- (void)_forceUpdateAccountInfoWithReason:(id)arg1;	// IMP=0x0010000000104945
- (void)_stopWatchingAccountInfoChanges;	// IMP=0x0010000000104924
- (void)_startWatchingAccountInfoChanges;	// IMP=0x0010000000104794
- (id)createReschedulerForSession:(id)arg1;	// IMP=0x001000000010456a
- (void)dropPersistedInitialSyncSession;	// IMP=0x001000000010453e
- (void)findPersistedInitialSyncSession:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000010436c
- (id)createGroupForPropagateChanges;	// IMP=0x00100000001042af
- (id)createGroupForQueryUserIdentities;	// IMP=0x00100000001041ec
- (id)createGroupForSharedLibraryRampCheck;	// IMP=0x001000000010412c
- (id)createGroupForExitSharedLibrary;	// IMP=0x001000000010406c
- (id)createGroupForCleanupLibrary;	// IMP=0x0010000000103fac
- (id)createGroupForFetchingExistingSharedScope;	// IMP=0x0010000000103ee9
- (id)createGroupForAcceptingLibraryShare;	// IMP=0x0010000000103e26
- (id)createGroupForFetchingLibraryShare;	// IMP=0x0010000000103d63
- (id)createGroupForPublishingLibraryShare;	// IMP=0x0010000000103ca0
- (id)createGroupForAcceptingMomentShare;	// IMP=0x0010000000103bdd
- (id)createGroupForFetchingMomentShare;	// IMP=0x0010000000103b1a
- (id)createGroupForPublishingMomentShare;	// IMP=0x0010000000103a57
- (id)createGroupForPruningCheck;	// IMP=0x00100000001039a7
- (id)createGroupForAnalysisDownload;	// IMP=0x00100000001038ed
- (id)createGroupForMovieStreamingWithIntent:(unsigned long long)arg1;	// IMP=0x00100000001036a0
- (id)createGroupForDownloadWithIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;	// IMP=0x00100000001033c3
- (id)createGroupForWidgetResourcesDownload;	// IMP=0x00100000001033aa
- (id)createGroupForResourcesDownload;	// IMP=0x0010000000103394
- (id)createGroupForThumbnailsDownload;	// IMP=0x00100000001032d7
- (id)createGroupForStagedScopeCleanup;	// IMP=0x001000000010321a
- (id)createGroupForReshare;	// IMP=0x001000000010315d
- (id)createGroupForFixUpTasks;	// IMP=0x00100000001030a0
- (id)createGroupForChangeDownload;	// IMP=0x0010000000102fe3
- (id)createGroupForChangeUpload;	// IMP=0x0010000000102f23
- (id)createGroupForLibraryStateCheck;	// IMP=0x0010000000102e66
- (id)createGroupForFetchScopeListChanges;	// IMP=0x0010000000102da9
- (id)createGroupForTransportScopeUpdate;	// IMP=0x0010000000102cec
- (id)createGroupForTransportScopeDelete;	// IMP=0x0010000000102c2f
- (id)createGroupForFeedback;	// IMP=0x0010000000102b85
- (id)createGroupForSetup;	// IMP=0x0010000000102ad8
- (id)createGroupForWidgetPrefetch;	// IMP=0x0010000000102abc
- (id)createGroupForRecoveryDownload;	// IMP=0x0010000000102aa0
- (id)createGroupForMemoriesPrefetch;	// IMP=0x0010000000102a84
- (id)createGroupForKeepOriginalsPrefetch;	// IMP=0x0010000000102a68
- (id)createGroupForNonDerivativePrefetch;	// IMP=0x0010000000102a4c
- (id)createGroupForThumbnailPrefetch;	// IMP=0x0010000000102992
- (id)createGroupForPrefetch;	// IMP=0x0010000000102976
- (id)createGroupForInitialDownload;	// IMP=0x00100000001028b9
- (id)createGroupForResetSync;	// IMP=0x00100000001027f9
- (id)createGroupForInitialUpload;	// IMP=0x0010000000102739
- (id)createGroupForSendExitStatus;	// IMP=0x0010000000102679
- (id)createGroupAllowsCellular:(_Bool)arg1 foreground:(_Bool)arg2 upload:(_Bool)arg3 metadata:(_Bool)arg4;	// IMP=0x00100000001025f8
- (void)upgradeFlags:(id)arg1 fromTransportScope:(id)arg2;	// IMP=0x001000000010256b
- (id)transportScopeForUpgradeFromScopeName:(id)arg1;	// IMP=0x00100000001024c9
- (id)scopeNameForTransportScope:(id)arg1;	// IMP=0x0010000000102448
- (id)descriptionForTransportScope:(id)arg1;	// IMP=0x001000000010236b
- (id)tentativeConcreteScopeForScope:(id)arg1;	// IMP=0x0010000000102243
- (void)cancelBlockedTasksIncludingBackground:(_Bool)arg1;	// IMP=0x0010000000102226
- (void)noteClientIsInBackground;	// IMP=0x0010000000102204
- (void)noteClientIsInForeground;	// IMP=0x00100000001021df
- (void)noteClientIsEndingSignificantWork;	// IMP=0x00100000001021cb
- (void)noteClientIsBeginningSignificantWork;	// IMP=0x00100000001021b4
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x0010000000102163
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000010200a
- (void)setIsSignificantWorkPending:(_Bool)arg1;	// IMP=0x0010000000101cbc
- (id)simpleDescriptionForScopeListSyncAnchor:(id)arg1;	// IMP=0x0010000000101ca3
- (_Bool)getProposedStagingScopeIdentifier:(id *)arg1 stagingTransportScope:(id *)arg2 forScope:(id)arg3 transportScope:(id)arg4 transportUserIdentifier:(id)arg5;	// IMP=0x0010000000101b20
- (id)simpleDescriptionForSyncAnchor:(id)arg1;	// IMP=0x0010000000101943
- (id)bestErrorForUnderlyingError:(id)arg1;	// IMP=0x001000000010192a
- (_Bool)isResourceDynamic:(id)arg1;	// IMP=0x00100000001018dd
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000101827
- (id)queryUserDetailsTaskForParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000101771
- (id)cleanupStagedScope:(id)arg1 stagingScope:(id)arg2 destinationScope:(id)arg3 transportScopeMapping:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000010166f
- (id)updateContributorsTaskWithSharedScope:(id)arg1 contributorsUpdates:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001015b5
- (id)sharedLibraryServerRampTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000010151b
- (id)fixUpSparseRecordsTaskWithTasks:(id)arg1 transportScopeMapping:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000101486
- (id)removeParticipantInSharedLibraryTaskFromSharedScope:(id)arg1 transportScope:(id)arg2 share:(id)arg3 retentionPolicy:(long long)arg4 exitSource:(long long)arg5 userIdentifiersToRemove:(id)arg6 participantIDsToRemove:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x001000000010133e
- (id)startExitTaskFromSharedScope:(id)arg1 transportScope:(id)arg2 share:(id)arg3 retentionPolicy:(long long)arg4 exitSource:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000101233
- (id)fetchExistingSharedLibraryScopeTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000101199
- (id)acceptTaskForSharedScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001010b9
- (id)fetchTaskForScopeWithShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000100f2d
- (id)updateShareTaskForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000100e29
- (id)createScopeTaskForScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000100d1a
- (id)inMemoryDownloadTaskForResource:(id)arg1 record:(id)arg2 target:(id)arg3 transportScopeMapping:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000100be5
- (id)resourcesDownloadTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000100b6e
- (id)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000100ac8
- (id)resourceCheckTaskForResources:(id)arg1 targetMapping:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001009c9
- (id)getStreamingURLTaskForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 target:(id)arg5 transportScopeMapping:(id)arg6 clientBundleID:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x001000000010082e
- (id)fetchScopeListChangesForScopeListSyncAnchor:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000100799
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 scope:(id)arg2 transportScopeMapping:(id)arg3 currentScopeChange:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000100697
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 scope:(id)arg3 transportScopeMapping:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000001005b8
- (id)cleanupLibraryTaskDryRun:(_Bool)arg1 primaryScope:(id)arg2 brokenScope:(id)arg3 transportScopeMapping:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001004f6
- (id)fetchTransportScopeForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000100403
- (id)getCurrentSyncAnchorWithTransportScope:(id)arg1 scope:(id)arg2 previousScopeChange:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000100317
- (id)getScopeInfoWithTransportScope:(id)arg1 scope:(id)arg2 previousScopeChange:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000010022b
- (id)updateTransportScope:(id)arg1 scope:(id)arg2 scopeChange:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000100110
- (id)deleteTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000100015
- (id)reshareRecordsTaskWithRecords:(id)arg1 sourceScope:(id)arg2 destinationScope:(id)arg3 transportScopeMapping:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000fff33
- (id)uploadBatchTaskForBatch:(id)arg1 scope:(id)arg2 targetMapping:(id)arg3 transportScopeMapping:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000ffd54
- (id)fetchRecordsTaskForRecordsWithScopedIdentifiers:(id)arg1 targetMapping:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ffc9a
- (id)setupTaskUpdateDisabledFeatures:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ffbfa
@property(readonly, nonatomic) id <CPLSharedRecordPropertyMapping> propertyMapping;
@property(readonly, nonatomic) Class userIdentifierClass;
@property(readonly, nonatomic) Class transportGroupClass;
@property(readonly, nonatomic) NSString *universeName;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ff931
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fed8d
- (id)duetIdentifier;	// IMP=0x00100000000fed7b
- (void)duetTicketProviderBlockedStatusDidChange;	// IMP=0x00100000000fec73
- (void)_updateBudgets;	// IMP=0x00100000000fe9d4
- (id)engineLibrary;	// IMP=0x00100000000fe984
- (void)_configureUniverse;	// IMP=0x00100000000fe5ed
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000000fe41d
@property(readonly) _Bool isSystemLibrary;
- (id)_operationGroupNameForName:(id)arg1;	// IMP=0x00100000000fe239

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
