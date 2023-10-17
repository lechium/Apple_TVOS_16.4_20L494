//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, _GCDevicePhysicalInputTransaction;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInput
{
    NSObject<OS_dispatch_queue> *_clientQueue;	// 8 = 0x8
    CDUnknownBlockType _elementValueDidChangeHandler;	// 16 = 0x10
    CDUnknownBlockType _inputStateAvailableHandler;	// 24 = 0x18
    NSMutableArray *_allTransactions;	// 32 = 0x20
    _GCDevicePhysicalInputTransaction *_currentTransaction;	// 40 = 0x28
    _GCDevicePhysicalInputTransaction *_pendingTransaction;	// 48 = 0x30
    NSMutableArray *_bufferedTransactions;	// 56 = 0x38
    unsigned long long _bufferedTransactionsQueueDepth;	// 64 = 0x40
}

- (double)lastEventTimestamp;	// IMP=0x0000000000095751
- (_Bool)isSnapshot;	// IMP=0x00000000000956f7
- (id)popTransaction;	// IMP=0x000000000009538e
- (void)setDevice:(id)arg1;	// IMP=0x000000000009526c
- (void)dealloc;	// IMP=0x0000000000095095
- (id)initWithFacade:(id)arg1 elements:(id)arg2;	// IMP=0x0000000000094f18

@end
