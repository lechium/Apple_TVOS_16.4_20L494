//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSHWatchdogProvider, BSAbsoluteMachTimer, NSString;
@protocol BLSHWatchdogDelegate;

__attribute__((visibility("hidden")))
@interface BSLHWatchdogTimer : NSObject
{
    BSAbsoluteMachTimer *_timer;	// 8 = 0x8
    NSString *_explanation;	// 16 = 0x10
    id <BLSHWatchdogDelegate> _delegate;	// 24 = 0x18
    BLSHWatchdogProvider *_provider;	// 32 = 0x20
    double _lock_timeout;	// 40 = 0x28
    double _lock_watchdogStart;	// 48 = 0x30
    _Bool _lock_sleepImminentSinceScheduled;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 60 = 0x3c
    _Bool _lock_invalidated;	// 64 = 0x40
    _Bool _sleepImminentWhenScheduled;	// 65 = 0x41
}

- (void).cxx_destruct;	// IMP=0x0000000000040456
@property(readonly, nonatomic, getter=wasSleepImminentWhenScheduled) _Bool sleepImminentWhenScheduled; // @synthesize sleepImminentWhenScheduled=_sleepImminentWhenScheduled;
- (void)systemSleepMonitorDidWakeFromSleep:(id)arg1;	// IMP=0x0000000000040439
- (void)systemSleepMonitorWillWakeFromSleep:(id)arg1;	// IMP=0x0000000000040425
- (void)systemSleepMonitorSleepRequestAborted:(id)arg1;	// IMP=0x0000000000040411
@property(nonatomic, getter=hasSleepBeenImminentSinceScheduled) _Bool sleepImminentSinceScheduled;
@property(readonly, copy, nonatomic) NSString *explanation;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
- (void)invalidate;	// IMP=0x00000000000401e1
- (void)timerFired;	// IMP=0x0000000000040139
- (void)scheduleWithTimeout:(double)arg1;	// IMP=0x000000000003fd82
- (void)dealloc;	// IMP=0x000000000003fbde
- (id)initWithExplanation:(id)arg1 delegate:(id)arg2 provider:(id)arg3;	// IMP=0x000000000003fadd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

