//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, NSMutableArray;
@protocol AXAssetsActivityTransactionManagerDelegate, OS_dispatch_queue, OS_os_transaction;

@interface AXAssetsActivityTransactionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_queue_activeReasons;	// 16 = 0x10
    AXDispatchTimer *_queue_activityTimer;	// 24 = 0x18
    _Bool _queue_transitioningToIdle;	// 32 = 0x20
    id <AXAssetsActivityTransactionManagerDelegate> _delegate;	// 40 = 0x28
    NSObject<OS_os_transaction> *_transaction;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000018df0
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) __weak id <AXAssetsActivityTransactionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_queue_handleInactiveTimerFired;	// IMP=0x0010000000018980
- (void)_queue_removeActiveReason:(id)arg1;	// IMP=0x00100000000185b0
- (void)_queue_addActiveReason:(id)arg1;	// IMP=0x0010000000018260
- (void)simpleTaskFinished:(id)arg1;	// IMP=0x0010000000018150
- (void)simpleTaskStarted:(id)arg1;	// IMP=0x0010000000018040
- (id)init;	// IMP=0x0010000000017ed0

@end

