//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSHangUpEnabledMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isEnabled;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000007b47e
- (void).cxx_destruct;	// IMP=0x002000000007b76c
- (void)_voiceTriggerDuringCallEnabledDidChange;	// IMP=0x001000000007b691
- (_Bool)_checkCanUseVoiceTriggerDuringCallEnabled;	// IMP=0x001000000007b5fe
- (_Bool)isEnabled;	// IMP=0x001000000007b5ee
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x001000000007b5dc
- (void)_didReceiveCanUseVoiceTriggerDuringCallSettingChangedInQueue:(_Bool)arg1;	// IMP=0x001000000007b56a
- (void)_stopMonitoring;	// IMP=0x001000000007b564
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000007b53d
- (id)init;	// IMP=0x001000000007b4d3

@end
