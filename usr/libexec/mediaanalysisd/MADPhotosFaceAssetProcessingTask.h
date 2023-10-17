//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMutableArray, NSMutableDictionary, NSObject, VCPDatabaseWriter, VCPFaceAnalyzer, VCPFaceClusterer;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MADPhotosFaceAssetProcessingTask
{
    VCPDatabaseWriter *_analysisDatabase;	// 8 = 0x8
    NSMutableArray *_assetEntries;	// 16 = 0x10
    VCPFaceAnalyzer *_faceAnalyzer;	// 24 = 0x18
    VCPFaceClusterer *_faceClusterer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_managementQueue;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_processGroup;	// 48 = 0x30
    unsigned long long _processingJobCount;	// 56 = 0x38
    unsigned long long _processingQueuesCount;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_downloadGroup;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 80 = 0x50
    NSMutableDictionary *_downloadRequestIDs;	// 88 = 0x58
    NSDate *_downloadStateChange;	// 96 = 0x60
    int _downloadStatus;	// 104 = 0x68
    int _status;	// 108 = 0x6c
}

+ (id)taskWithAnalysisDatabase:(id)arg1 andFaceClusterer:(id)arg2;	// IMP=0x004000000006c04a
+ (unsigned long long)_concurrentQueueCount;	// IMP=0x001000000006bdd7
+ (_Bool)_concurrentFaceAnalysis;	// IMP=0x001000000006bd7a
- (void).cxx_destruct;	// IMP=0x0020000000071a5b
- (void)publish;	// IMP=0x0010000000071a2d
- (int)_publish;	// IMP=0x0010000000070d24
- (void)_publishEntry:(id)arg1 faceLocalIdentifiers:(id *)arg2;	// IMP=0x001000000006fa04
- (void)process;	// IMP=0x001000000006f9d6
- (int)_process;	// IMP=0x001000000006f661
- (void)_dispatchAssetEntries;	// IMP=0x001000000006ec4d
- (void)_asyncAnalysisWithAssetEntry:(id)arg1 resource:(id)arg2 resourceURL:(id)arg3 isBestResource:(_Bool)arg4;	// IMP=0x001000000006e2ed
- (void)download;	// IMP=0x001000000006d3e3
- (void)cancelRemainingDownloadsWithStatus:(int)arg1;	// IMP=0x001000000006d0f3
- (double)downloadInactiveTimeInterval;	// IMP=0x001000000006cfd7
- (int)removeDownloadRequestIDForAsset:(id)arg1;	// IMP=0x001000000006cd58
- (void)addDownloadRequestID:(int)arg1 forAsset:(id)arg2;	// IMP=0x001000000006cbcd
- (void)prepare;	// IMP=0x001000000006cba6
- (int)_prepare;	// IMP=0x001000000006c6d4
- (void)addAsset:(id)arg1 withPreviousStatus:(unsigned long long)arg2;	// IMP=0x001000000006c358
- (int)status;	// IMP=0x001000000006c348
- (unsigned long long)count;	// IMP=0x001000000006c32b
- (void)dealloc;	// IMP=0x001000000006c0de
- (id)initWithAnalysisDatabase:(id)arg1 andFaceCluster:(id)arg2;	// IMP=0x001000000006be17

@end

