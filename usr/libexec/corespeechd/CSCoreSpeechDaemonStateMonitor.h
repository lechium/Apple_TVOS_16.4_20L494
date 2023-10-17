//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSCoreSpeechDaemonStateMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000d5067
- (void)_notifyObserver:(id)arg1 withDaemonState:(unsigned long long)arg2;	// IMP=0x00200000000d5477
- (void)_didReceiveDaemonStateChanged:(unsigned long long)arg1;	// IMP=0x00100000000d537a
- (void)_stopMonitoring;	// IMP=0x00100000000d52d7
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000d518f
- (void)notifyDaemonStateChanged:(unsigned long long)arg1;	// IMP=0x00100000000d50fe
- (id)init;	// IMP=0x00100000000d50bc

@end
