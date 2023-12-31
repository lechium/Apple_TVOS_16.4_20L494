//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSObject, NSString, PHFetchResult, PHPersistentChangeToken, PHPhotoLibrary, VCPDatabaseWriter;
@protocol OS_dispatch_queue;

@interface MADPhotosTaskProvider
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPDatabaseWriter *_analysisDatabase;	// 16 = 0x10
    NSString *_logPrefix;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_statusQueue;	// 32 = 0x20
    int _status;	// 40 = 0x28
    int _downloadStatus;	// 44 = 0x2c
    long long _assetStage;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_taskContextQueue;	// 56 = 0x38
    MISSING_TYPE *_taskContext;	// 64 = 0x40
    PHPersistentChangeToken *_lastChangeToken;	// 72 = 0x48
    PHPersistentChangeToken *_currentChangeToken;	// 80 = 0x50
    PHPersistentChangeToken *_fullScanChangeToken;	// 88 = 0x58
    NSArray *_fetchPredicates;	// 96 = 0x60
    unsigned long long _fetchPredicateIdx;	// 104 = 0x68
    PHFetchResult *_fetchResult;	// 112 = 0x70
    unsigned long long _fetchIdx;	// 120 = 0x78
    CDUnknownBlockType _cancelBlock;	// 128 = 0x80
}

+ (id)name;	// IMP=0x002000000000e094
+ (void)unimplementedExceptionForMethodName:(id)arg1;	// IMP=0x001000000000e025
- (void).cxx_destruct;	// IMP=0x001000000000df4a
- (void)retireTask:(id)arg1;	// IMP=0x001000000000d812
- (id)nextDownloadAssetProcessingTask;	// IMP=0x001000000000d6e8
- (void)performDownloadRetryAssetEvaluationWithTask:(id)arg1;	// IMP=0x001000000000d5d2
- (void)performDownloadAssetEvaluationWithTask:(id)arg1;	// IMP=0x001000000000d4b7
- (id)nextAssetProcessingTask;	// IMP=0x001000000000cf32
- (void)performHardFailureAssetEvaluationWithTask:(id)arg1;	// IMP=0x001000000000ce1e
- (void)performSoftFailureAssetEvaluationWithTask:(id)arg1;	// IMP=0x001000000000cc8f
- (void)performFailedAssetEvaluationWithTask:(id)arg1 localIdentifierBlock:(CDUnknownBlockType)arg2 fetchCount:(unsigned long long)arg3 assetCount:(unsigned long long)arg4 download:(_Bool)arg5;	// IMP=0x001000000000c443
- (void)performFullAssetEvaluationWithTask:(id)arg1 andContext:(id)arg2;	// IMP=0x001000000000bd4f
- (int)performChangeTokenAssetEvaluationWithTask:(id)arg1 andContext:(id)arg2;	// IMP=0x001000000000ac06
- (void)evaluateChangeFetchWithTask:(id)arg1 andContext:(id)arg2;	// IMP=0x001000000000aa9f
- (void)evaluateAsset:(id)arg1 forTask:(id)arg2 download:(_Bool)arg3;	// IMP=0x001000000000a5e3
- (_Bool)_isAssetEligible:(id)arg1 withPreviousStatus:(unsigned long long *)arg2 allowDownload:(_Bool)arg3;	// IMP=0x001000000000a245
- (int)_cleanupHardFailures;	// IMP=0x0010000000009c2c
- (void)_collectNumberOfAssets:(unsigned long long)arg1 forCoreAnalyticsField:(id)arg2;	// IMP=0x0010000000009b94
- (void)setStatus:(int)arg1;	// IMP=0x0010000000009961
- (int);	// IMP=0x00100000000098aa
- (int)status;	// IMP=0x00100000000097f3
- (unsigned long long)iterations;	// IMP=0x00100000000097a6
- (unsigned long long)priority;	// IMP=0x001000000000971c
- (id)initWithPhotoLibrary:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000932f
- (id)assetTaskWithAnalysisDatabase:(id)arg1;	// IMP=0x001000000000e0c0
- (id)assetPriorityPredicates;	// IMP=0x001000000000e0b8

@end

