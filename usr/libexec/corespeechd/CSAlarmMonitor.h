//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAlarmMonitor
{
    long long _alarmFiringState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000086147
- (void).cxx_destruct;	// IMP=0x002000000008644d
- (long long)alarmState;	// IMP=0x0010000000086399
- (void)_stopMonitoring;	// IMP=0x00100000000862e2
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000086210
- (void)initializeAlarmState;	// IMP=0x001000000008620a
- (id)init;	// IMP=0x001000000008619c

@end
