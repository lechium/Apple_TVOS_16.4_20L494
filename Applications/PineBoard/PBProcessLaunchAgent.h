//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, FBProcess, FBProcessExecutionContext, FBProcessManager, NSArray, NSString, RBSAssertion, RBSProcessIdentity;
@protocol OS_dispatch_queue;

@interface PBProcessLaunchAgent : NSObject
{
    _Bool _queue_relaunchProcessOnExit;	// 8 = 0x8
    FBProcessExecutionContext *_queue_processExecutionContext;	// 16 = 0x10
    NSArray *_queue_attributes;	// 24 = 0x18
    FBProcess *_queue_process;	// 32 = 0x20
    RBSAssertion *_queue_processAssertion;	// 40 = 0x28
    RBSProcessIdentity *_processIdentity;	// 48 = 0x30
    FBProcessManager *_processManager;	// 56 = 0x38
    CDUnknownBlockType _assertionCreator;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    BSCompoundAssertion *_compoundAssertion;	// 80 = 0x50
}

+ (id)defaultAttributes;	// IMP=0x002000000015aeae
- (void).cxx_destruct;	// IMP=0x002000000015d113
@property(readonly, nonatomic) BSCompoundAssertion *compoundAssertion; // @synthesize compoundAssertion=_compoundAssertion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CDUnknownBlockType assertionCreator; // @synthesize assertionCreator=_assertionCreator;
@property(readonly, nonatomic) FBProcessManager *processManager; // @synthesize processManager=_processManager;
@property(readonly, nonatomic) RBSProcessIdentity *processIdentity; // @synthesize processIdentity=_processIdentity;
@property(readonly, nonatomic) RBSAssertion *processAssertion; // @synthesize processAssertion=_queue_processAssertion;
@property(readonly, nonatomic) FBProcess *process; // @synthesize process=_queue_process;
- (void)_queue_assertion:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x001000000015cf13
- (void)_assertion:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x001000000015cde5
- (id)_queue_createProcessAssertion;	// IMP=0x001000000015cd59
- (void)_queue_stateDidChange:(long long)arg1;	// IMP=0x001000000015c92c
- (void)_stateDidChange:(long long)arg1;	// IMP=0x001000000015c866
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;	// IMP=0x001000000015c762
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;	// IMP=0x001000000015c65e
- (void)invalidate;	// IMP=0x001000000015c5d5
- (id)launchProcessForReason:(id)arg1;	// IMP=0x001000000015c5ae
- (void)appendAttributes:(id)arg1;	// IMP=0x001000000015c1fe
@property(copy) NSArray *attributes; // @synthesize attributes=_queue_attributes;
@property _Bool relaunchProcessOnExit; // @synthesize relaunchProcessOnExit=_queue_relaunchProcessOnExit;
@property(copy) FBProcessExecutionContext *processExecutionContext; // @synthesize processExecutionContext=_queue_processExecutionContext;
- (void)dealloc;	// IMP=0x001000000015b58c
- (id)initWithProcessIdentity:(id)arg1 processManager:(id)arg2 assertionCreator:(CDUnknownBlockType)arg3;	// IMP=0x001000000015af95
- (id)initWithProcessIdentity:(id)arg1;	// IMP=0x001000000015af0d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

