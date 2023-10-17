//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSURL, PHPhotoLibrary, VCPPhotosFaceProcessingContext, VCPPhotosPersistenceDelegate, VCPSuggestionRequest, VNCanceller, VNClustererBuilder;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPClusterer : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPPhotosPersistenceDelegate *_persistenceDelegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_processingQueue;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_processingGroup;	// 32 = 0x20
    struct atomic<bool> _canceled;	// 40 = 0x28
    VCPPhotosFaceProcessingContext *_context;	// 48 = 0x30
    NSURL *_cacheDirUrl;	// 56 = 0x38
    NSURL *_cacheFileUrl;	// 64 = 0x40
    NSString *_clusteringType;	// 72 = 0x48
    NSNumber *_threshold;	// 80 = 0x50
    NSSet *_faceCSNsInClusterCache;	// 88 = 0x58
    unsigned long long _nextSeqNum;	// 96 = 0x60
    NSMutableSet *_faceIdStrsToAdd;	// 104 = 0x68
    NSMutableSet *_faceCSNsToRemove;	// 112 = 0x70
    unsigned long long _accumulatedChangesCount;	// 120 = 0x78
    unsigned long long _nextClusterTriggeringAccumulatedChangesCount;	// 128 = 0x80
    VNCanceller *_visionCanceler;	// 136 = 0x88
    VNClustererBuilder *_clusterBuilder;	// 144 = 0x90
    _Bool _rebuildClusterer;	// 152 = 0x98
    NSMutableArray *_outstandingSuggestionRequests;	// 160 = 0xa0
    VCPSuggestionRequest *_currentSuggestionRequest;	// 168 = 0xa8
    NSLock *_suggestionLock;	// 176 = 0xb0
    NSLock *_currentStatusSnapshotLock;	// 184 = 0xb8
    CDStruct_6069b02b _currentStatusSnapshot;	// 192 = 0xc0
    _Bool _currentStatusSnapshotIsValid;	// 216 = 0xd8
    NSLock *_propertyDictionaryLock;	// 224 = 0xe0
    NSMutableDictionary *_propertyDictionary;	// 232 = 0xe8
    unsigned long long _clustererBringUpState;	// 240 = 0xf0
    NSDate *_timestampOfLastClusterComparison;	// 248 = 0xf8
    struct mach_timebase_info _timebase;	// 256 = 0x100
}

+ (_Bool)removeClusteringStateCacheWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000033899
- (void).cxx_destruct;	// IMP=0x00000000000352a5
@property(nonatomic) unsigned long long clustererBringUpState; // @synthesize clustererBringUpState=_clustererBringUpState;
- (id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg1 toClustersIdentifiedByFaceCSNs:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000034e68
- (id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg1 andLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000034d9b
- (id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000034b11
@property(readonly, nonatomic) _Bool needsUpdate;
@property(readonly, nonatomic) _Bool needsFullSync;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
@property(readonly, nonatomic) unsigned long long clustererState;
- (id)_bringUpStateDescription:(unsigned long long)arg1;	// IMP=0x000000000003480a
- (void)_setPropertyDictionaryValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000034714
- (void)_readPropertyDictionary;	// IMP=0x0000000000034513
- (id)_propertyDictionaryFileURL;	// IMP=0x00000000000344f6
- (_Bool)getClusters:(id *)arg1 threshold:(double *)arg2 utilizingGPU:(_Bool *)arg3 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x0000000000034005
- (id)differencesBetweenClusterCacheAndLibrary:(id *)arg1 excludedL0ClustersByL1ClusterId:(id *)arg2 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000330cb
- (_Bool)_processingQueueGetVisionClusters:(id)arg1 minimumClusterSize:(unsigned long long)arg2 returnClusterAsCountedSet:(_Bool)arg3 excludedL0ClustersByL1ClusterId:(id *)arg4 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x0000000000032de8
- (id)_resolveConflictingL0ClustersFromVNClusters:(id)arg1 excludedL0ClustersByL1ClusterId:(id *)arg2 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032482
- (_Bool)isReadyToReturnSuggestions;	// IMP=0x0000000000032456
- (void)cancelAllSuggestionRequests;	// IMP=0x00000000000323ae
- (void)cancelSuggestionRequest:(id)arg1;	// IMP=0x000000000003209b
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0000000000031653
- (id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003109f
- (unsigned long long)restoreClusterCacheAndSyncWithLibrary:(_Bool)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000000003090c
- (_Bool)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(_Bool)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000000000304aa
- (_Bool)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002fdac
- (void)_removeVisionClusterCacheFilesNotReferencedByVisionClusterState:(id)arg1;	// IMP=0x000000000002f84d
- (id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ed08
- (_Bool)_processingQueueResetClusterCache:(id *)arg1;	// IMP=0x000000000002e966
- (_Bool)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 threshold:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002e5ac
- (id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002e3cb
- (_Bool)_processingQueueSaveClusterCache:(id *)arg1;	// IMP=0x000000000002d5c0
- (_Bool)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(id *)arg1 lastClusterSequenceNumber:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000002d15b
- (void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ad22
- (void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 visionClusters:(id *)arg2 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a83c
- (void)_removeEmptyGroups;	// IMP=0x000000000002a752
- (id)_faceTorsoprintsFromFaces:(id)arg1 assignClusterSeqNumberIfNeeded:(_Bool)arg2 updatedFaces:(id)arg3;	// IMP=0x000000000002a071
- (id)_faceTorsoprintsFromFaceIdentifiers:(id)arg1 assignClusterSeqNumberIfNeeded:(_Bool)arg2 updatedFaces:(id)arg3 groupingIdentifiers:(id)arg4;	// IMP=0x0000000000029f53
- (id)_faceTorsoprintsFromFaceCSNs:(id)arg1;	// IMP=0x0000000000029ce1
- (_Bool)_performAndPersistClustersWithFaceTorsoprintsToAdd:(id)arg1 groupingIdentifiersToAdd:(id)arg2 faceTorsoprintsToRemove:(id)arg3 updatedFaces:(id)arg4 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x0000000000028992
- (id)status;	// IMP=0x000000000002877b
- (void)_recordCurrentStatus:(CDStruct_6069b02b)arg1;	// IMP=0x0000000000028725
- (void)_recordIncrementCountOfPendingFacesToAdd:(unsigned long long)arg1;	// IMP=0x00000000000286bb
- (void)_recordCountOfPendingFacesToAdd:(unsigned long long)arg1;	// IMP=0x0000000000028668
- (void)_recordClusterRebuildRequired:(_Bool)arg1;	// IMP=0x0000000000028615
- (void)_recordClusteringState:(_Bool)arg1;	// IMP=0x00000000000285c2
- (void)cancelClustering;	// IMP=0x00000000000285ab
- (void)_cancelClusteringAndRestoreClusterCache:(_Bool)arg1;	// IMP=0x0000000000028530
- (void)clusterAndWaitWithCancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000283de
- (void)clusterIfNecessaryAndWaitWithCancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002828f
- (unsigned long long)clusterCount;	// IMP=0x0000000000028177
- (unsigned long long)clusteredFaceCount;	// IMP=0x000000000002805f
- (unsigned long long)numberOfAccumulatedClusterChanges;	// IMP=0x0000000000027f4d
- (_Bool)_processingQueuePerformForcedFaceClustering:(_Bool)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026803
- (void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg1 addingFaceIdStrs:(id)arg2;	// IMP=0x0000000000026435
- (void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;	// IMP=0x0000000000026319
- (void)terminate;	// IMP=0x0000000000026221
- (id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2;	// IMP=0x0000000000025dde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

