//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSSoftwareUpdateCheckingMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isSoftwareUpdateCheckingRunning;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00400000000e0bba
- (void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(_Bool)arg2;	// IMP=0x00200000000e1098
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(_Bool)arg1;	// IMP=0x00100000000e1026
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(_Bool)arg1;	// IMP=0x00100000000e0fb4
- (_Bool)isSoftwareUpdateCheckingRunning;	// IMP=0x00100000000e0fa4
- (unsigned char)_softwareUpdateCheckingState;	// IMP=0x00100000000e0f4a
- (_Bool)_checkSoftwareUpdateCheckingState;	// IMP=0x00100000000e0e8f
- (void)_stopMonitoring;	// IMP=0x00100000000e0dec
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000e0c5c
- (id)init;	// IMP=0x00100000000e0c0f

@end
