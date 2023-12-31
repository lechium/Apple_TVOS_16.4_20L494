//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HPSAccessorySettingService, NSString;

@interface CSHomePodSettingsMonitor
{
    _Bool _voiceTriggerAssertion;	// 8 = 0x8
    _Bool _disableAssistantAssertion;	// 9 = 0x9
    HPSAccessorySettingService *_accessorySettingsService;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x002000000004c335
- (void).cxx_destruct;	// IMP=0x002000000004cec0
@property(nonatomic) _Bool disableAssistantAssertion; // @synthesize disableAssistantAssertion=_disableAssistantAssertion;
@property(nonatomic) _Bool voiceTriggerAssertion; // @synthesize voiceTriggerAssertion=_voiceTriggerAssertion;
@property(retain, nonatomic) HPSAccessorySettingService *accessorySettingsService; // @synthesize accessorySettingsService=_accessorySettingsService;
- (void)didUpdateSetting:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x001000000004cd10
- (_Bool)shouldAudioMonitoringRecording;	// IMP=0x001000000004ccfb
- (_Bool)shouldVoiceTriggerRun;	// IMP=0x001000000004ccc4
- (void)_stopMonitoring;	// IMP=0x001000000004ca0a
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000004c38a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

