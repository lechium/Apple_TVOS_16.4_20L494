//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsRemoteAppDevice;

@interface TVSettingsRemoteAppDetailViewController : TSKViewController
{
    TVSettingsRemoteAppDevice *_device;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000093be3
@property(retain, nonatomic) TVSettingsRemoteAppDevice *device; // @synthesize device=_device;
- (void)unpairDevice:(id)arg1;	// IMP=0x00100000000937e0
- (id)loadSettingGroups;	// IMP=0x001000000009360b

@end

