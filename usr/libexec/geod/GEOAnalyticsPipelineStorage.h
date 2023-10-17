//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, geo_isolater;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOAnalyticsPipelineStorage : NSObject
{
    NSMutableArray *_batchQueue;	// 8 = 0x8
    unsigned long long _batchQueueMaxSize;	// 16 = 0x10
    unsigned long long _batchQueueFlushTime;	// 24 = 0x18
    geo_isolater *_batchQueueLock;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_batchQueueSpoolTimer;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_storageQueue;	// 48 = 0x30
    _Bool _initiateUploadUponFlush;	// 56 = 0x38
}

+ (id)sharedStorage;	// IMP=0x004000000000a86c
- (void).cxx_destruct;	// IMP=0x001000000000d3cd
- (void)_writeLogMsgQueueElems:(id)arg1;	// IMP=0x001000000000d2d5
- (void)_spoolQueueToDB;	// IMP=0x001000000000d160
- (void)_clearQueueFlushTimer;	// IMP=0x001000000000d147
- (void)_setQueueFlushTimer;	// IMP=0x001000000000d111
- (void)_storeQueueElem:(id)arg1 uploadUponFlush:(_Bool)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000000ce00
- (void)storeDailySettings:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ccd2
- (void)storeCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000000cb58
- (void)storeMonthlyUsageActionType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000000bd28
- (void);	// IMP=0x001000000000aef8
- (void)storeLogMsg:(id)arg1 uploadBatchId:(unsigned long long)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000000ab64
- (id)init;	// IMP=0x001000000000a8c1
- (void)storeRequestResponseData:(id)arg1;	// IMP=0x001000000000d40b

@end

