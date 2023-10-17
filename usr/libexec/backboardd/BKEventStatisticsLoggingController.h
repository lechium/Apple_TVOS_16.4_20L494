//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAbsoluteMachTimer, BSCompoundAssertion, NSArray, NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface BKEventStatisticsLoggingController : NSObject
{
    NSString *_label;	// 8 = 0x8
    NSObject<OS_os_log> *_logCategory;	// 16 = 0x10
    NSArray *_statistics;	// 24 = 0x18
    BSCompoundAssertion *_transactionAssertion;	// 32 = 0x20
    double _startCoalescingTime;	// 40 = 0x28
    BSAbsoluteMachTimer *_timer;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    _Bool _resetStartTime;	// 64 = 0x40
    _Bool _needsFlush;	// 65 = 0x41
    _Bool _invalid;	// 66 = 0x42
}

+ (id)workQueue;	// IMP=0x002000000004a6a0
- (void).cxx_destruct;	// IMP=0x0020000000049fe3
@property(copy, nonatomic) NSArray *statistics; // @synthesize statistics=_statistics;
- (id);	// IMP=0x0010000000049fca
- (void)invalidate;	// IMP=0x0010000000049f7f
- (void)updateStatistics:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049ef4
- (id)beginTransactionForReason:(id)arg1;	// IMP=0x0010000000049ede
- (void)dealloc;	// IMP=0x0010000000049d57
- (id)initWithLabel:(id)arg1 logCategory:(id)arg2;	// IMP=0x0010000000049b8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

