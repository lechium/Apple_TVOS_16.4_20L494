//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaAnalysis/VCPMABaseTask.h>

@class NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPMADPhotosProcessingTask : VCPMABaseTask
{
    NSObject<OS_dispatch_group> *_publishGroup;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_publishQueue;	// 16 = 0x10
    int _publishError;	// 24 = 0x18
}

+ (id)fetchPropertySets;	// IMP=0x00200000000b7f48
+ (unsigned long long)taskID;	// IMP=0x00100000000b7f24
+ (id)name;	// IMP=0x00100000000b7f00
+ (void)unimplementedExceptionForMethodName:(id)arg1;	// IMP=0x00100000000b7e91
- (void).cxx_destruct;	// IMP=0x00100000000b7e60
- (int)waitForPublishing;	// IMP=0x00100000000b7e2f
- (int)processAssetsInFetchResult:(id)arg1 withAnalysisDatabase:(id)arg2 allowDownload:(_Bool)arg3 progress:(id)arg4;	// IMP=0x00100000000b70f1
- (int)_processAssetsInBatch:(id)arg1;	// IMP=0x00100000000b6df7
- (_Bool)_isAssetEligible:(id)arg1 withAnalysisDatabase:(id)arg2 previousStatus:(unsigned long long *)arg3 allowDownload:(_Bool)arg4;	// IMP=0x00100000000b69ec
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b696e
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b7fd6
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x00100000000b7fb2

@end

