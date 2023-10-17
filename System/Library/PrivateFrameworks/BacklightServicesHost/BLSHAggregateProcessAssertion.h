//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSHAggregatedProcessAssertion, BLSHDurationCalculator, NSMapTable, NSString, RBSAssertion, RBSProcessIdentity;

__attribute__((visibility("hidden")))
@interface BLSHAggregateProcessAssertion : NSObject
{
    NSMapTable *_lock_aggregated;	// 8 = 0x8
    RBSAssertion *_lock_rbsAssertion;	// 16 = 0x10
    BLSHAggregatedProcessAssertion *_lock_acquiredAssertion;	// 24 = 0x18
    BLSHDurationCalculator *_lock_durationCalculator;	// 32 = 0x20
    _Bool _lock_invalidated;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 44 = 0x2c
    unsigned long long _stateHandler;	// 48 = 0x30
    double _initTimestamp;	// 56 = 0x38
    RBSProcessIdentity *_processIdentity;	// 64 = 0x40
}

+ (id)classLock_aggregateForProcessIdentity:(id)arg1 shouldCreate:(_Bool)arg2;	// IMP=0x001000000006badd
+ (void)invalidateAggregatedAssertion:(id)arg1;	// IMP=0x001000000006ba08
+ (void)acquireAggregatedAssertion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b835
- (void).cxx_destruct;	// IMP=0x000000000006d53f
@property(readonly, copy, nonatomic) RBSProcessIdentity *processIdentity; // @synthesize processIdentity=_processIdentity;
@property(readonly, copy) NSString *debugDescription;
- (struct os_state_data_s *)stateDataWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x000000000006d2e2
- (void)invalidate;	// IMP=0x000000000006d293
- (_Bool)invalidateAggregatedAssertion:(id)arg1;	// IMP=0x000000000006cbd4
- (_Bool)isCurrentRBSAssertion:(id)arg1;	// IMP=0x000000000006cb88
- (void)acquireAggregatedAssertion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006bff8
- (void)dealloc;	// IMP=0x000000000006be5f
- (id)initWithProcessIdentity:(id)arg1;	// IMP=0x000000000006bc4e

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
