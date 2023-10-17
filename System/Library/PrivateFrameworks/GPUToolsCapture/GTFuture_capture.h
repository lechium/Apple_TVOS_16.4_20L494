//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSCondition, NSError, NSMutableArray, NSTimer;

@interface GTFuture_capture : NSOperation
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

+ (_Bool)logPerformance;	// IMP=0x0060000000005787
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000000570f
+ (id)futureWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00600000000056be
+ (id)future;	// IMP=0x00600000000056a4
- (id)_dependencies_NOLOCK;	// IMP=0x000000000000526a
- (_Bool)_waitForDependencies_REQUIRESLOCK;	// IMP=0x00000000000051de
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000514f
- (void)_addDependency_REQUIRESLOCK:(id)arg1;	// IMP=0x0000000000005041
- (void)notifyGroup:(id)arg1;	// IMP=0x0000000000004f5b
- (void)notifyOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004e65
- (void)resolveWithFuture:(id)arg1;	// IMP=0x0000000000004d48
- (void)timeoutAfter:(double)arg1 label:(id)arg2;	// IMP=0x0000000000004c6d
- (void)setError:(id)arg1;	// IMP=0x0000000000004c53
- (void)cancel;	// IMP=0x0000000000004ba3
- (id)error;	// IMP=0x0000000000004b6e
- (void)setResult:(id)arg1;	// IMP=0x0000000000004b54
- (void)_setResult:(id)arg1 error:(id)arg2 notify_NOLOCK:(_Bool)arg3;	// IMP=0x00000000000048dc
- (int)intResult;	// IMP=0x0000000000004892
- (unsigned int)uint32Result;	// IMP=0x0000000000004848
- (_Bool)boolResult;	// IMP=0x0000000000004800
- (void)requestResult:(CDUnknownBlockType)arg1;	// IMP=0x00000000000047d2
- (void)addResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004675
- (id)result;	// IMP=0x0000000000004640
- (void)waitUntilResolved;	// IMP=0x00000000000043bd
- (void)start;	// IMP=0x00000000000043ab
- (id)dependencies;	// IMP=0x0000000000004399
- (void)addDependency:(id)arg1;	// IMP=0x0000000000004344
- (void)waitUntilFinished;	// IMP=0x00000000000042c2
- (void)_start_NOLOCK;	// IMP=0x000000000000422d
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000041d0
- (CDUnknownBlockType)completionBlock;	// IMP=0x000000000000416c
- (void)setQueuePriority:(long long)arg1;	// IMP=0x000000000000411c
- (long long)queuePriority;	// IMP=0x00000000000040cd
- (_Bool)isFinished;	// IMP=0x000000000000406a
- (_Bool)isExecuting;	// IMP=0x0000000000004005
- (_Bool)isAsynchronous;	// IMP=0x0000000000003ffd
- (_Bool)isCancelled;	// IMP=0x0000000000003fae
- (void)dealloc;	// IMP=0x0000000000003e44
- (id)init;	// IMP=0x0000000000003d82

@end
