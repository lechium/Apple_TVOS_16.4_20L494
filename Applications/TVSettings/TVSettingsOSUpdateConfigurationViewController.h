//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSDictionary, NSString;

@interface TVSettingsOSUpdateConfigurationViewController : TSKViewController
{
    unsigned long long _configurationCheckState;	// 8 = 0x8
    NSString *_lastConfigurationCheckResult;	// 16 = 0x10
    NSDictionary *_trainMap;	// 24 = 0x18
    NSDictionary *_colorMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000078d65
@property(retain, nonatomic) NSDictionary *colorMap; // @synthesize colorMap=_colorMap;
@property(retain, nonatomic) NSDictionary *trainMap; // @synthesize trainMap=_trainMap;
@property(copy, nonatomic) NSString *lastConfigurationCheckResult; // @synthesize lastConfigurationCheckResult=_lastConfigurationCheckResult;
@property(nonatomic) unsigned long long configurationCheckState; // @synthesize configurationCheckState=_configurationCheckState;
- (void)_warnAbout:(id)arg1;	// IMP=0x0010000000078bdc
- (void)_configurationMapDidChange:(id)arg1;	// IMP=0x0010000000078aa1
- (void)_configurationDidChange:(id)arg1;	// IMP=0x0010000000078881
- (void)_configurationWillChange:(id)arg1;	// IMP=0x0010000000078842
- (void)_clearConfiguration:(id)arg1;	// IMP=0x00100000000787ef
- (void)_checkConfiguration:(id)arg1;	// IMP=0x0010000000078203
- (void)_updateCheckConfigurationItem:(id)arg1;	// IMP=0x00100000000780f9
- (void)_updateConfigurationItem:(id)arg1 withValue:(id)arg2;	// IMP=0x0010000000077ffc
- (void)_updateLivAPIConfigurationItem:(id)arg1 withValue:(id)arg2;	// IMP=0x0010000000077edf
- (void)_updateLocalConfigurationItem:(id)arg1 withValue:(id)arg2;	// IMP=0x0010000000077dc2
- (id)loadSettingGroups;	// IMP=0x00100000000777a4
- (void)viewDidLoad;	// IMP=0x00100000000775dc
- (void)dealloc;	// IMP=0x0010000000077567
- (id)initWithColorMap:(id)arg1 andTrainMap:(id)arg2;	// IMP=0x00100000000774a0

@end

