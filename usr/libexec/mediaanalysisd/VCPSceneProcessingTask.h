//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary, VCPDatabaseWriter, VCPPreAnalyzer;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPSceneProcessingTask : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPPreAnalyzer *_analyzer;	// 16 = 0x10
    VCPDatabaseWriter *_database;	// 24 = 0x18
    struct atomic<bool> _cancel;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_publishGroup;	// 40 = 0x28
    int _publishStatus;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_analysisGroup;	// 56 = 0x38
    CDUnknownBlockType _cancelBlock;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;	// 72 = 0x48
    struct mach_timebase_info _timebase;	// 80 = 0x50
}

+ (id)taskWithPhotoLibrary:(id)arg1 andCancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x00200000000ccf88
- (void).cxx_destruct;	// IMP=0x00200000000d0914
@property(readonly, nonatomic) VCPDatabaseWriter *database; // @synthesize database=_database;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (_Bool)autoCancellable;	// IMP=0x00100000000d08f8
- (int);	// IMP=0x00100000000d08ed
- (int)flush;	// IMP=0x00100000000d08ca
- (int)processAssets:(id)arg1;	// IMP=0x00100000000d06ba
- (int)processAssetsSerial:(id)arg1;	// IMP=0x00100000000cf3e5
- (int)processAssetsConcurrent:(id)arg1;	// IMP=0x00100000000cdc2a
- (void)analyzeAsset:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cd059
- (_Bool)isCancelled;	// IMP=0x00100000000cd035
- (void)cancel;	// IMP=0x00100000000cd02a
- (float)resourceRequirement;	// IMP=0x00100000000cd01c
- (id)initWithPhotoLibrary:(id)arg1 andCancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cce0f
- (id)init;	// IMP=0x00100000000cce01

@end

