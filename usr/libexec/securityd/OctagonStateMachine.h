//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSCondition, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSReachabilityTracker, CKKSResultOperation, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperation, NSOperationQueue, NSSet, NSString, OctagonFlags;
@protocol OS_dispatch_queue, OctagonFlagContainer, OctagonStateMachineEngine, OctagonStateString;

@interface OctagonStateMachine : NSObject
{
    NSString<OctagonStateString> *_currentState;	// 8 = 0x8
    _Bool _halted;	// 16 = 0x10
    _Bool _allowPendingFlags;	// 17 = 0x11
    CKKSCondition *_paused;	// 24 = 0x18
    NSSet *_allowableStates;	// 32 = 0x20
    unsigned long long _timeout;	// 40 = 0x28
    CKKSLockStateTracker *_lockStateTracker;	// 48 = 0x30
    CKKSReachabilityTracker *_reachabilityTracker;	// 56 = 0x38
    id <OctagonStateMachineEngine> _stateEngine;	// 64 = 0x40
    NSMutableDictionary *_mutableStateConditions;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSOperationQueue *_operationQueue;	// 88 = 0x58
    NSString *_name;	// 96 = 0x60
    OctagonFlags *_currentFlags;	// 104 = 0x68
    NSOperation *_holdStateMachineOperation;	// 112 = 0x70
    NSMutableSet *_testHoldStates;	// 120 = 0x78
    CKKSResultOperation *_nextStateMachineCycleOperation;	// 128 = 0x80
    NSMutableArray *_stateMachineRequests;	// 136 = 0x88
    NSMutableArray *_stateMachineWatchers;	// 144 = 0x90
    NSMutableDictionary *_pendingFlags;	// 152 = 0x98
    CKKSNearFutureScheduler *_pendingFlagsScheduler;	// 160 = 0xa0
    unsigned long long _conditionChecksInFlight;	// 168 = 0xa8
    unsigned long long _currentConditions;	// 176 = 0xb0
    NSOperation *_checkUnlockOperation;	// 184 = 0xb8
    NSOperation *_checkReachabilityOperation;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x002000000011cde5
@property(retain) NSOperation *checkReachabilityOperation; // @synthesize checkReachabilityOperation=_checkReachabilityOperation;
@property(retain) NSOperation *checkUnlockOperation; // @synthesize checkUnlockOperation=_checkUnlockOperation;
@property unsigned long long currentConditions; // @synthesize currentConditions=_currentConditions;
@property unsigned long long conditionChecksInFlight; // @synthesize conditionChecksInFlight=_conditionChecksInFlight;
@property(retain) CKKSNearFutureScheduler *pendingFlagsScheduler; // @synthesize pendingFlagsScheduler=_pendingFlagsScheduler;
@property(retain) NSMutableDictionary *pendingFlags; // @synthesize pendingFlags=_pendingFlags;
@property _Bool allowPendingFlags; // @synthesize allowPendingFlags=_allowPendingFlags;
@property _Bool halted; // @synthesize halted=_halted;
@property(retain) NSMutableArray *stateMachineWatchers; // @synthesize stateMachineWatchers=_stateMachineWatchers;
@property(retain) NSMutableArray *stateMachineRequests; // @synthesize stateMachineRequests=_stateMachineRequests;
@property(retain) CKKSResultOperation *nextStateMachineCycleOperation; // @synthesize nextStateMachineCycleOperation=_nextStateMachineCycleOperation;
@property(retain) NSMutableSet *testHoldStates; // @synthesize testHoldStates=_testHoldStates;
@property(retain) NSOperation *holdStateMachineOperation; // @synthesize holdStateMachineOperation=_holdStateMachineOperation;
@property(retain) OctagonFlags *currentFlags; // @synthesize currentFlags=_currentFlags;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *mutableStateConditions; // @synthesize mutableStateConditions=_mutableStateConditions;
@property __weak id <OctagonStateMachineEngine> stateEngine; // @synthesize stateEngine=_stateEngine;
@property(readonly) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(readonly) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(readonly) NSSet *allowableStates; // @synthesize allowableStates=_allowableStates;
@property(retain) CKKSCondition *paused; // @synthesize paused=_paused;
- (id)doWatchedStateMachineRPC:(id)arg1 sourceStates:(id)arg2 path:(id)arg3 transitionOp:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000011c65b
- (id)doWatchedStateMachineRPC:(id)arg1 sourceStates:(id)arg2 path:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000011c513
- (void)setWatcherTimeout:(unsigned long long)arg1;	// IMP=0x001000000011c501
- (void)doSimpleStateMachineRPC:(id)arg1 op:(id)arg2 sourceStates:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000011c15d
- (void)_onqueueRegisterMultiStateArrivalWatcher:(id)arg1;	// IMP=0x001000000011c021
- (void)registerMultiStateArrivalWatcher:(id)arg1;	// IMP=0x001000000011bf6f
- (void)registerStateTransitionWatcher:(id)arg1;	// IMP=0x001000000011bebd
- (void)handleExternalRequest:(id)arg1;	// IMP=0x001000000011be0b
- (void)haltOperation;	// IMP=0x001000000011bd5f
- (void)startOperation;	// IMP=0x001000000011bcee
- (_Bool)isPaused;	// IMP=0x001000000011bc24
- (void)testReleaseStateMachinePause:(id)arg1;	// IMP=0x001000000011bb72
- (void)testPauseStateMachineAfterEntering:(id)arg1;	// IMP=0x001000000011bac0
- (void)_onqueueSendAnyPendingFlags;	// IMP=0x001000000011b128
- (void)_onqueueRecheckConditions;	// IMP=0x001000000011a7ef
- (id)possiblePendingFlags;	// IMP=0x001000000011a79f
- (id)dumpPendingFlags;	// IMP=0x001000000011a67a
- (void)disablePendingFlags;	// IMP=0x001000000011a609
- (void)_onqueueHandlePendingFlag:(id)arg1;	// IMP=0x001000000011a3e2
- (void)_onqueueHandlePendingFlagLater:(id)arg1;	// IMP=0x001000000011a308
- (void)handlePendingFlag:(id)arg1;	// IMP=0x001000000011a256
- (void)_onqueueHandleFlag:(id)arg1;	// IMP=0x001000000011a1b1
- (void)handleFlag:(id)arg1;	// IMP=0x001000000011a0ff
- (void)_onqueuePokeStateMachine;	// IMP=0x001000000011a0aa
- (void)pokeStateMachine;	// IMP=0x001000000011a039
- (id)createOperationToFinishAttempt:(id)arg1;	// IMP=0x0010000000119ed2
- (void)_onqueueStartNextStateMachineOperation:(_Bool)arg1;	// IMP=0x00100000001199da
- (id)_onqueueNextStateMachineTransition;	// IMP=0x0010000000119579
- (id)waitForState:(id)arg1 wait:(unsigned long long)arg2;	// IMP=0x00100000001194c2
@property(retain) NSString<OctagonStateString> *currentState;
@property(readonly) id <OctagonFlagContainer> flags;
- (id)description;	// IMP=0x0010000000119189
- (id)pendingFlagsString;	// IMP=0x0010000000119108
@property(readonly) NSDictionary *stateConditions;
- (id)initWithName:(id)arg1 states:(id)arg2 flags:(id)arg3 initialState:(id)arg4 queue:(id)arg5 stateEngine:(id)arg6 lockStateTracker:(id)arg7 reachabilityTracker:(id)arg8;	// IMP=0x0010000000118a96

@end

