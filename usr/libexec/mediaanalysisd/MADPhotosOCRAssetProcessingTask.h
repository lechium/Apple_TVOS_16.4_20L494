//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMutableArray, NSMutableDictionary, NSObject, VCPDatabaseWriter;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MADPhotosOCRAssetProcessingTask
{
    NSMutableArray *_assetEntries;	// 8 = 0x8
    VCPDatabaseWriter *_analysisDatabase;	// 16 = 0x10
    _Bool _allowDownload;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_downloadGroup;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 40 = 0x28
    NSMutableDictionary *_downloadRequestIDs;	// 48 = 0x30
    NSDate *_downloadStateChange;	// 56 = 0x38
    int _downloadStatus;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_computeGroup;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_computeQueue;	// 80 = 0x50
    int _status;	// 88 = 0x58
}

+ (id)taskWithAnalysisDatabase:(id)arg1;	// IMP=0x0040000000055a04
- (void).cxx_destruct;	// IMP=0x002000000005bb9c
- (void)publish;	// IMP=0x001000000005bb6e
- (int)_publish;	// IMP=0x001000000005aa4b
- (void)process;	// IMP=0x001000000005aa1d
- (int)_process;	// IMP=0x0010000000059d68
- (void)processAssetEntry:(id)arg1 resource:(id)arg2 resourceURL:(id)arg3;	// IMP=0x0010000000058873
- (id)remoteResourceForAsset:(id)arg1 withAcceptableResources:(id)arg2;	// IMP=0x0010000000058609
- (id)localResourceForAsset:(id)arg1 withAcceptableResources:(id)arg2;	// IMP=0x0010000000058483
- (id)acceptableResourcesForAsset:(id)arg1 withResources:(id)arg2;	// IMP=0x0010000000057e2f
- (void)prepare;	// IMP=0x0010000000057e08
- (int)_prepare;	// IMP=0x00100000000578c0
- (void)download;	// IMP=0x001000000005683a
- (void)cancelRemainingDownloadsWithStatus:(int)arg1;	// IMP=0x001000000005654a
- (double)downloadInactiveTimeInterval;	// IMP=0x001000000005642e
- (int)removeDownloadRequestIDForAsset:(id)arg1;	// IMP=0x00100000000561ef
- (void)addDownloadRequestID:(int)arg1 forAsset:(id)arg2;	// IMP=0x0010000000056064
- (void)addAsset:(id)arg1 withPreviousStatus:(unsigned long long)arg2;	// IMP=0x0010000000055ce8
- (int)status;	// IMP=0x0010000000055cd8
- (unsigned long long)count;	// IMP=0x0010000000055cbb
- (void)dealloc;	// IMP=0x0010000000055a61
- (id)initWithAnalysisDatabase:(id)arg1;	// IMP=0x0010000000055892

@end

