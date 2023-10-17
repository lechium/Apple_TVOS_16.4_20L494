//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSDictionary;

@interface TVSettingsOSUpdateInternalSettingsViewController : TSKViewController
{
    NSDictionary *_trainMap;	// 8 = 0x8
    NSDictionary *_colorMap;	// 16 = 0x10
    unsigned long long _configurationLoadingState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000af2ad
@property(nonatomic) unsigned long long configurationLoadingState; // @synthesize configurationLoadingState=_configurationLoadingState;
@property(retain, nonatomic) NSDictionary *colorMap; // @synthesize colorMap=_colorMap;
@property(retain, nonatomic) NSDictionary *trainMap; // @synthesize trainMap=_trainMap;
- (id)_descriptionForConfiguration:(id)arg1;	// IMP=0x00100000000af201
- (void)_updateVPNItem:(id)arg1;	// IMP=0x00100000000af091
- (void)_updateAppleConnectItem:(id)arg1;	// IMP=0x00100000000aef81
- (void)_toggleAdvancedSettingsItems:(id)arg1;	// IMP=0x00100000000aef41
- (void)_setShouldShowAdvancedSettings:(_Bool)arg1;	// IMP=0x00100000000aee68
- (_Bool)_shouldShowAdvancedSettings;	// IMP=0x00100000000aedbb
- (void)_clearNumericSettingItem:(id)arg1;	// IMP=0x00100000000aed98
- (void)_configurationDidChange:(id)arg1;	// IMP=0x00100000000aed42
- (void)_configurationWillChange:(id)arg1;	// IMP=0x00100000000aed0f
- (void)_fetchCurrentConfiguration;	// IMP=0x00100000000aead2
- (void)_fetchBackupLocalConfigurations;	// IMP=0x00100000000aea47
- (id)loadSettingGroups;	// IMP=0x00100000000ad83c
- (void)viewDidLoad;	// IMP=0x00100000000ad6c5

@end

