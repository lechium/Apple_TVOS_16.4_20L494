//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDCancelTokenGroup, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDDownloadAssetsOperation
{
    _Bool _shouldCloneFileInAssetCache;	// 8 = 0x8
    CDUnknownBlockType _downloadPreparationBlock;	// 16 = 0x10
    CDUnknownBlockType _downloadProgressBlock;	// 24 = 0x18
    CDUnknownBlockType _downloadCommandBlock;	// 32 = 0x20
    CDUnknownBlockType _downloadCompletionBlock;	// 40 = 0x28
    CDUnknownBlockType _urlFilledOutBlock;	// 48 = 0x30
    NSMutableDictionary *_keyOrErrorForHostname;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSArray *_assetsToDownload;	// 72 = 0x48
    NSArray *_packageIndexSets;	// 80 = 0x50
    NSArray *_assetsToDownloadInMemory;	// 88 = 0x58
    NSArray *_assetURLInfosToFillOut;	// 96 = 0x60
    NSMutableArray *_MMCSItemsToDownload;	// 104 = 0x68
    NSMutableArray *_MMCSItemsToDownloadInMemory;	// 112 = 0x70
    NSMutableArray *_assetsToDownloadFromTranscoder;	// 120 = 0x78
    NSMutableArray *_assetsToDownloadFromTranscoderInMemory;	// 128 = 0x80
    NSMapTable *_downloadTasksByPackages;	// 136 = 0x88
    CKDCancelTokenGroup *_cancelTokens;	// 144 = 0x90
    unsigned long long _maxPackageDownloadsPerBatch;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000f2510
@property(nonatomic) unsigned long long maxPackageDownloadsPerBatch; // @synthesize maxPackageDownloadsPerBatch=_maxPackageDownloadsPerBatch;
@property(retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
@property(retain, nonatomic) NSMapTable *downloadTasksByPackages; // @synthesize downloadTasksByPackages=_downloadTasksByPackages;
@property(retain, nonatomic) NSMutableArray *assetsToDownloadFromTranscoderInMemory; // @synthesize assetsToDownloadFromTranscoderInMemory=_assetsToDownloadFromTranscoderInMemory;
@property(retain, nonatomic) NSMutableArray *assetsToDownloadFromTranscoder; // @synthesize assetsToDownloadFromTranscoder=_assetsToDownloadFromTranscoder;
@property(retain, nonatomic) NSMutableArray *MMCSItemsToDownloadInMemory; // @synthesize MMCSItemsToDownloadInMemory=_MMCSItemsToDownloadInMemory;
@property(retain, nonatomic) NSMutableArray *MMCSItemsToDownload; // @synthesize MMCSItemsToDownload=_MMCSItemsToDownload;
@property(retain, nonatomic) NSArray *assetURLInfosToFillOut; // @synthesize assetURLInfosToFillOut=_assetURLInfosToFillOut;
@property(retain, nonatomic) NSArray *assetsToDownloadInMemory; // @synthesize assetsToDownloadInMemory=_assetsToDownloadInMemory;
@property(retain, nonatomic) NSArray *packageIndexSets; // @synthesize packageIndexSets=_packageIndexSets;
@property(retain, nonatomic) NSArray *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname; // @synthesize keyOrErrorForHostname=_keyOrErrorForHostname;
@property(copy, nonatomic) CDUnknownBlockType urlFilledOutBlock; // @synthesize urlFilledOutBlock=_urlFilledOutBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadCommandBlock; // @synthesize downloadCommandBlock=_downloadCommandBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadPreparationBlock; // @synthesize downloadPreparationBlock=_downloadPreparationBlock;
@property(nonatomic) _Bool shouldCloneFileInAssetCache; // @synthesize shouldCloneFileInAssetCache=_shouldCloneFileInAssetCache;
- (void)_downloadTranscodedAsset:(id)arg1 inMemory:(_Bool)arg2;	// IMP=0x00000000000f0ee3
- (_Bool)shouldDownloadAssetFromTranscoder:(id)arg1;	// IMP=0x00000000000f0df8
- (_Bool)supportsClearAssetEncryption;	// IMP=0x00000000000f0df0
- (void)main;	// IMP=0x00000000000f0c83
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000f0b67
- (void)cancel;	// IMP=0x00000000000f0afa
- (_Bool)_postProcess;	// IMP=0x00000000000f070e
- (void)_downloadMMCSItems:(id)arg1 downloadTasksByPackages:(id)arg2 shouldFetchAssetContentInMemory:(_Bool)arg3;	// IMP=0x00000000000ef433
- (_Bool)_download;	// IMP=0x00000000000eeedf
- (void)_downloadPackageSectionsWithPendingTasks:(id)arg1 downloadingTasks:(id)arg2 completedTasks:(id)arg3;	// IMP=0x00000000000ee6fd
- (void)_downloadPackageSectionsWithTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ed838
- (void)_downloadPackageSectionsWithSectionEnumerator:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ed69a
- (void)_downloadPackageSectionAtIndex:(long long)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ec241
- (void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2;	// IMP=0x00000000000ec0a5
- (void)_didDownloadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3;	// IMP=0x00000000000ebe09
- (void)_didDownloadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3;	// IMP=0x00000000000eb256
- (void)_didCommandForMMCSItem:(id)arg1 command:(id)arg2;	// IMP=0x00000000000eb1de
- (void)_didMakeProgressForMMCSItem:(id)arg1 inMemory:(_Bool)arg2;	// IMP=0x00000000000eb014
- (void)_didDownloadMMCSItems:(id)arg1 inMemory:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000000ead55
- (void)_collectMetricsFromCompletedItemGroupSet:(id)arg1;	// IMP=0x00000000000eacbe
- (void)_collectMetricsFromCompletedItemGroup:(id)arg1;	// IMP=0x00000000000eac0b
- (void)_collectMetricsFromMMCSOperationMetrics:(id)arg1;	// IMP=0x00000000000eaaca
- (void)_didDownloadMMCSItem:(id)arg1 inMemory:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000000ea368
- (_Bool)_prepareForDownload;	// IMP=0x00000000000e8366
- (id)_tryToFillInTheDerivativeTemplateWithAsset:(id)arg1;	// IMP=0x00000000000e7866
- (void)_didDownloadAsset:(id)arg1 error:(id)arg2;	// IMP=0x00000000000e769c
- (void)_didCommandForAsset:(id)arg1 command:(id)arg2;	// IMP=0x00000000000e7400
- (void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2;	// IMP=0x00000000000e7255
- (void)_didPrepareAsset:(id)arg1;	// IMP=0x00000000000e70bf
- (void)_removeUntrackedMMCSItems:(id)arg1;	// IMP=0x00000000000e6e7a
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x00000000000e6e24
- (_Bool)makeStateTransition;	// IMP=0x00000000000e6c74
- (id)CKStatusReportLogGroups;	// IMP=0x00000000000e6a84
- (id)activityCreate;	// IMP=0x00000000000e6a5b
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000000e68a3

// Remaining properties
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

