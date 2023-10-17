//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSVTaskAssertion, NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SBKAsynchronousTask : NSObject
{
    NSString *_debugDescription;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 32 = 0x20
    _Bool _taskInvalidationDisabled;	// 40 = 0x28
    double _timeout;	// 48 = 0x30
    int _cancelType;	// 56 = 0x38
    id _result;	// 64 = 0x40
    NSError *_error;	// 72 = 0x48
    CDUnknownBlockType _expirationHandler;	// 80 = 0x50
    CDUnknownBlockType _finishedHandler;	// 88 = 0x58
    MSVTaskAssertion *_taskAssertion;	// 96 = 0x60
    NSMutableArray *_completions;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000001e4e2
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) MSVTaskAssertion *taskAssertion; // @synthesize taskAssertion=_taskAssertion;
- (void)invokeTaskCompletionBlocksWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e26b
- (void)addTaskCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e1a9
- (void)invalidate;	// IMP=0x000000000001e15b
- (void)_invalidateAssertion:(_Bool)arg1;	// IMP=0x000000000001e084
- (void)endTaskOperation;	// IMP=0x000000000001e052
- (void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000001df5f
- (void)beginTaskOperation;	// IMP=0x000000000001ddd6
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(nonatomic) int cancelType; // @synthesize cancelType=_cancelType;
- (void)_onQueueFireExpirationHandlerIfNecesary;	// IMP=0x000000000001d9b7
@property(copy, nonatomic) CDUnknownBlockType finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(copy, nonatomic) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
- (id)description;	// IMP=0x000000000001d67e
- (void)_invalidateTimer;	// IMP=0x000000000001d633
- (void)dealloc;	// IMP=0x000000000001d583
- (id)debugDescription;	// IMP=0x000000000001d575
- (id)initWithHandlerQueue:(id)arg1 timeout:(double)arg2 debugDescription:(id)arg3;	// IMP=0x000000000001d3c9

@end

