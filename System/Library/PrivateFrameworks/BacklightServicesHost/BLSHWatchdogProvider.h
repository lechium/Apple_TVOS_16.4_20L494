//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAbsoluteMachTimer;

__attribute__((visibility("hidden")))
@interface BLSHWatchdogProvider : NSObject
{
    BSAbsoluteMachTimer *_lock_fireRetryTimer;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    _Bool _watchdogEnabled;	// 20 = 0x14
}

+ (void)showWatchdogDidFireAlert:(id)arg1;	// IMP=0x006000000003f599
+ (void)resetWatchdogDidFire;	// IMP=0x006000000003f547
+ (_Bool)checkForWatchdogDidFire:(_Bool)arg1;	// IMP=0x006000000003f2c0
+ (void)markWatchdogDidFire:(id)arg1 abortReason:(id)arg2;	// IMP=0x006000000003f107
- (void).cxx_destruct;	// IMP=0x000000000003facd
@property(getter=isWatchdogEnabled) _Bool watchdogEnabled; // @synthesize watchdogEnabled=_watchdogEnabled;
- (void)didDetectSignificantUserInteraction;	// IMP=0x000000000003f101
- (void)clearWatchdogWithExplanation:(id)arg1 timeout:(double)arg2 elapsedTime:(double)arg3;	// IMP=0x000000000003efde
- (void)_fireWatchdogWithTimer:(id)arg1 delegate:(id)arg2 timeout:(double)arg3 elapsedTime:(double)arg4 abortContext:(id)arg5 explanation:(id)arg6 remainingRetries:(unsigned long long)arg7;	// IMP=0x000000000003e605
- (void)fireWatchdogWithTimer:(id)arg1 delegate:(id)arg2 timeout:(double)arg3 elapsedTime:(double)arg4;	// IMP=0x000000000003e316
- (id)scheduleWatchdogWithDelegate:(id)arg1 explanation:(id)arg2 timeout:(double)arg3;	// IMP=0x000000000003e244
- (void)registerHandlersForService:(id)arg1;	// IMP=0x000000000003e21f
- (void)dealloc;	// IMP=0x000000000003e1c5
- (id)init;	// IMP=0x000000000003e186

@end

