//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol BKCADisplayProvider;

@interface BKCADisplayMonitor : NSObject
{
    id <BKCADisplayProvider> _displayProvider;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    BSCompoundAssertion *_lock_observerAssertion;	// 24 = 0x18
    NSMutableDictionary *_lock_displayUUIDKeyToImmutableCADisplay;	// 32 = 0x20
    _Bool _lock_isInvalid;	// 40 = 0x28
    NSMutableSet *_lock_observedDisplays;	// 48 = 0x30
    NSArray *_lock_currentDisplayArrangement;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000064e5a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000644ff
- (void)_removeObserversFromDisplay:(id)arg1;	// IMP=0x00100000000643c1
- (void)_addObserversToDisplay:(id)arg1;	// IMP=0x0010000000064277
- (_Bool)_lock_displaySupportsMouse:(id)arg1 outReason:(id *)arg2;	// IMP=0x0010000000063d40
- (void)setDisplayArrangement:(id)arg1;	// IMP=0x00100000000636ae
- (id)_immutableDisplays;	// IMP=0x0010000000063647
@property(readonly, copy, nonatomic) NSArray *activeDisplays;
- (id)addObserver:(id)arg1;	// IMP=0x00100000000634df
- (id)immutableDisplayForUUID:(id)arg1;	// IMP=0x001000000006341e
- (void)invalidate;	// IMP=0x00100000000632b6
- (id)initWithDisplayProvider:(id)arg1;	// IMP=0x0010000000062d8e
- (id)init;	// IMP=0x0010000000062d4e
- (void)dealloc;	// IMP=0x0010000000062bb1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

