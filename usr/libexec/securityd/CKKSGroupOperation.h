//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSBlockOperation, NSMutableArray, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CKKSGroupOperation
{
    _Bool executing;	// 8 = 0x8
    _Bool finished;	// 9 = 0x9
    _Bool _fillInError;	// 10 = 0xa
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSBlockOperation *_startOperation;	// 24 = 0x18
    NSBlockOperation *_finishOperation;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableArray *_internalSuccesses;	// 48 = 0x30
}

+ (id)named:(id)arg1 withBlockTakingSelf:(CDUnknownBlockType)arg2;	// IMP=0x004000000005cf50
+ (id)named:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000005cedc
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000005ce55
- (void).cxx_destruct;	// IMP=0x002000000005caee
@property(retain) NSMutableArray *internalSuccesses; // @synthesize internalSuccesses=_internalSuccesses;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSBlockOperation *finishOperation; // @synthesize finishOperation=_finishOperation;
@property(retain) NSBlockOperation *startOperation; // @synthesize startOperation=_startOperation;
@property _Bool fillInError; // @synthesize fillInError=_fillInError;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)dependOnBeforeGroupFinished:(id)arg1;	// IMP=0x001000000005c7a7
- (void)runBeforeGroupFinished:(id)arg1;	// IMP=0x001000000005c6f7
- (void)groupStart;	// IMP=0x001000000005c6f1
- (void)addDependency:(id)arg1;	// IMP=0x001000000005c65d
- (void)completeOperation;	// IMP=0x001000000005c590
- (void)cancel;	// IMP=0x001000000005c075
- (void)start;	// IMP=0x001000000005bf10
- (_Bool)isFinished;	// IMP=0x001000000005be46
- (_Bool)isExecuting;	// IMP=0x001000000005bd7c
- (_Bool)isConcurrent;	// IMP=0x001000000005bd74
- (MISSING_TYPE *)debugDescription;	// IMP=0x001000000005bd62
- (id)description;	// IMP=0x001000000005b6b2
- (void)setName:(id)arg1;	// IMP=0x001000000005b523
- (_Bool)isPending;	// IMP=0x001000000005b4bc
- (void)dealloc;	// IMP=0x001000000005b3e5
- (id)init;	// IMP=0x001000000005b02b

@end

