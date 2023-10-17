//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MADPhotosFaceCropGenerationTask
{
    NSMutableSet *_faces;	// 8 = 0x8
    NSArray *_assetEntries;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_downloadGroup;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 32 = 0x20
    NSMutableDictionary *_downloadRequestIDs;	// 40 = 0x28
    NSDate *_downloadStateChange;	// 48 = 0x30
    int _downloadStatus;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000006a44a
- (void)process;	// IMP=0x0010000000069b73
- (void)download;	// IMP=0x00100000000691ec
- (void)cancelRemainingDownloadsWithStatus:(int)arg1;	// IMP=0x0010000000068f2a
- (double)downloadInactiveTimeInterval;	// IMP=0x0010000000068dd2
- (int)removeDownloadRequestIDForAsset:(id)arg1;	// IMP=0x0010000000068baf
- (void)addDownloadRequestID:(int)arg1 forAsset:(id)arg2;	// IMP=0x0010000000068a47
- (void)prepare;	// IMP=0x0010000000068067
- (void)addFace:(id)arg1;	// IMP=0x0010000000067f56
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x0010000000067e34

@end
