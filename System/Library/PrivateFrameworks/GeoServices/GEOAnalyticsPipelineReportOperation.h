//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class GEOAnalyticsPipelineRemoteProxy, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineReportOperation : NSOperation
{
    _Bool _finished;	// 8 = 0x8
    _Bool _executing;	// 9 = 0x9
    id _transaction;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_runQueue;	// 24 = 0x18
    GEOAnalyticsPipelineRemoteProxy *_remoteProxy;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_completionQueue;	// 40 = 0x28
    CDUnknownBlockType _completionBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000009fab13
- (_Bool)isFinished;	// IMP=0x00000000009fab03
- (_Bool)isExecuting;	// IMP=0x00000000009faaf3
- (void)_completeOperation;	// IMP=0x00000000009faa2f
- (void)start;	// IMP=0x00000000009fa981
- (id)initWithRemoteProxy:(id)arg1 runQueue:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000009fa846

@end

