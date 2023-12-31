//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSCondition, NSError, NSMutableArray, NSTimer;

@interface GTFuture_replayer : NSOperation
{
    NSTimer *_timeout;	// 8 = 0x8
    NSCondition *_condition;	// 16 = 0x10
    _Bool _resolved;	// 24 = 0x18
    _Bool _cancelled;	// 25 = 0x19
    id _result;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSMutableArray *_notifyList;	// 48 = 0x30
    NSMutableArray *_inflightDependencies;	// 56 = 0x38
    _Bool _started;	// 64 = 0x40
    CDUnknownBlockType _completion;	// 72 = 0x48
    long long _priority;	// 80 = 0x50
}

+ (_Bool)logPerformance;	// IMP=0x00400000000189ef
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0010000000018977
+ (id)futureWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0010000000018926
+ (id)future;	// IMP=0x001000000001890c
- (id)_dependencies_NOLOCK;	// IMP=0x00200000000184d2
- (_Bool)_waitForDependencies_REQUIRESLOCK;	// IMP=0x0010000000018446
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000183b7
- (void)_addDependency_REQUIRESLOCK:(id)arg1;	// IMP=0x00100000000182a9
- (void)notifyGroup:(id)arg1;	// IMP=0x00100000000181c3
- (void)notifyOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000180cd
- (void)resolveWithFuture:(id)arg1;	// IMP=0x0010000000017fb0
- (void)timeoutAfter:(double)arg1 label:(id)arg2;	// IMP=0x0010000000017ed5
- (void)setError:(id)arg1;	// IMP=0x0010000000017ebb
- (void)cancel;	// IMP=0x0010000000017e0b
- (id)error;	// IMP=0x0010000000017dd6
- (void)setResult:(id)arg1;	// IMP=0x0010000000017dbc
- (void)_setResult:(id)arg1 error:(id)arg2 notify_NOLOCK:(_Bool)arg3;	// IMP=0x0010000000017b44
- (int)intResult;	// IMP=0x0010000000017afa
- (unsigned int)uint32Result;	// IMP=0x0010000000017ab0
- (_Bool)boolResult;	// IMP=0x0010000000017a68
- (void)requestResult:(CDUnknownBlockType)arg1;	// IMP=0x0010000000017a3a
- (void)addResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000178dd
- (id)result;	// IMP=0x00100000000178a8
- (void)waitUntilResolved;	// IMP=0x0010000000017625
- (void)start;	// IMP=0x0010000000017613
- (id)dependencies;	// IMP=0x0010000000017601
- (void)addDependency:(id)arg1;	// IMP=0x00100000000175ac
- (void)waitUntilFinished;	// IMP=0x001000000001752a
- (void)_start_NOLOCK;	// IMP=0x0010000000017495
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000017438
- (CDUnknownBlockType)completionBlock;	// IMP=0x00100000000173d4
- (void)setQueuePriority:(long long)arg1;	// IMP=0x0010000000017384
- (long long)queuePriority;	// IMP=0x0010000000017335
- (_Bool)isFinished;	// IMP=0x00100000000172d2
- (_Bool)isExecuting;	// IMP=0x001000000001726d
- (_Bool)isAsynchronous;	// IMP=0x0010000000017265
- (_Bool)isCancelled;	// IMP=0x0000000000017216
- (void)dealloc;	// IMP=0x00100000000170ac
- (id)init;	// IMP=0x0010000000016fea

@end

