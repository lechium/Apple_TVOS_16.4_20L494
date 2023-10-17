//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSNumber, NSSet, NSString, NSURL;

@protocol PLAssetsdDebugServiceProtocol <NSObject>
- (void)waitForMomentGenerationWithReply:(void (^)(NSError *))arg1;
- (void)syndicationIngestMutexStateDescriptionWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)updateSiriVocabulary;
- (void)backupComputeCacheWithReply:(void (^)(NSError *))arg1;
- (void)restoreComputeCacheWithReply:(void (^)(NSError *))arg1;
- (void)coalesceJournalsForManagerName:(NSString *)arg1 payloadClassIDs:(NSSet *)arg2 withChangeJournalOverThreshold:(float)arg3 reply:(void (^)(void))arg4;
- (void)snapshotJournalsForManagerName:(NSString *)arg1 payloadClassIDs:(NSSet *)arg2 reply:(void (^)(NSError *))arg3;
- (void)privateDownloadCloudPhotoLibraryAsset:(NSURL *)arg1 resourceType:(unsigned long long)arg2 highPriority:(_Bool)arg3 reply:(void (^)(void))arg4;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(void (^)(void))arg1;
- (void)cleanupEmptyHighlightsWithReply:(void (^)(void))arg1;
- (void)updateHighlightTitlesWithReply:(void (^)(void))arg1;
- (void)processUnprocessedMomentLocationsWithReply:(void (^)(void))arg1;
- (void)processRecentHighlightsWithReply:(void (^)(void))arg1;
- (void)prefetchResourcesWithMode:(long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)prefetchResourcesForHighlights:(NSArray *)arg1 reply:(void (^)(void))arg2;
- (void)prefetchResourcesForMemories:(NSArray *)arg1 reply:(void (^)(void))arg2;
- (void)pruneAssetsWithUUID:(NSArray *)arg1 resourceTypes:(NSArray *)arg2 reply:(void (^)(void))arg3;
- (void)debugSidecarURLsWithObjectURI:(NSURL *)arg1 reply:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)revertToOriginalWithObjectURI:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)enqueuePrefetch;
- (void)clearPrefetchState;
- (void)getCPLStateForDebug:(_Bool)arg1 withReply:(void (^)(NSString *))arg2;
- (void)getTaskConstraintStatusWithReply:(void (^)(NSString *))arg1;
- (void)getXPCTransactionStatusWithReply:(void (^)(NSString *))arg1;
- (void)rebuildTableThumbsWithReply:(void (^)(NSString *))arg1;
- (void)rebuildAllThumbnails;
- (void)resetDupesAnalysis;
- (void)rebuildCloudFeedWithReply:(void (^)(void))arg1;
- (void)rebuildSearchIndexWithReply:(void (^)(void))arg1;
- (void)setSearchIndexPaused:(_Bool)arg1 reason:(NSString *)arg2 reply:(void (^)(void))arg3;
- (void)dropSearchIndexWithReply:(void (^)(void))arg1;
- (void)deferredLogDumpWithFormat:(NSNumber *)arg1 reply:(void (^)(NSString *))arg2;
- (void)dumpMomentsMetadataToPath:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)dumpMetadataForMomentsToPath:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)rebuildHighlightsDeletingExistingHighlights:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)rebuildMomentsDeletingExistingMoments:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)momentGenerationStatusWithReply:(void (^)(NSString *))arg1;
- (void)recoverAssetsInInconsistentCloudState;
- (void)identifyAssetsWithInconsistentCloudState;
- (void)asynchronousUnloadImageFilesForAssetWithObjectURI:(NSURL *)arg1 minimumFormat:(unsigned short)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)statusWithReply:(void (^)(NSString *))arg1;
@end

