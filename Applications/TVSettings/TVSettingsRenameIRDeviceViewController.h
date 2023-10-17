//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKTextInputViewController.h>

@class NSString, NSUUID, TVSettingsRemoteConfiguration, TVSettingsRemotesFacade;

@interface TVSettingsRenameIRDeviceViewController : TSKTextInputViewController
{
    TVSettingsRemotesFacade *_remotesFacade;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    TVSettingsRemoteConfiguration *_configuration;	// 24 = 0x18
    NSUUID *_deviceUUID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000005096f
@property(retain, nonatomic) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(retain, nonatomic) TVSettingsRemoteConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) TVSettingsRemotesFacade *remotesFacade; // @synthesize remotesFacade=_remotesFacade;
- (void)editingController:(id)arg1 didCancelForSettingItem:(id)arg2;	// IMP=0x00100000000508a6
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x0010000000050689
- (void)viewDidLoad;	// IMP=0x001000000005058d
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000005053e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

