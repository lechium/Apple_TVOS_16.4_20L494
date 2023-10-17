//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSResultOperation, NSSet, NSString;
@protocol OS_dispatch_queue, OctagonStateTransitionOperationProtocol;

@interface OctagonStateTransitionRequest : NSObject
{
    _Bool _timeoutCanOccur;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSSet *_sourceStates;	// 24 = 0x18
    CKKSResultOperation<OctagonStateTransitionOperationProtocol> *_transitionOperation;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001aa897
@property _Bool timeoutCanOccur; // @synthesize timeoutCanOccur=_timeoutCanOccur;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) CKKSResultOperation<OctagonStateTransitionOperationProtocol> *transitionOperation; // @synthesize transitionOperation=_transitionOperation;
@property(readonly) NSSet *sourceStates; // @synthesize sourceStates=_sourceStates;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)timeout:(unsigned long long)arg1;	// IMP=0x00100000001aa741
- (id)_onqueueStart;	// IMP=0x00100000001aa6bc
- (id)description;	// IMP=0x00100000001aa5f2
- (id)init:(id)arg1 sourceStates:(id)arg2 serialQueue:(id)arg3 timeout:(unsigned long long)arg4 transitionOp:(id)arg5;	// IMP=0x00100000001aa4f6

@end

