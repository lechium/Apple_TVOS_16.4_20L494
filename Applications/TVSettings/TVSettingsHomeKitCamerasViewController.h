//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSArray;

@interface TVSettingsHomeKitCamerasViewController : TSKViewController
{
    NSArray *_smartNotificationItems;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000beab7
@property(retain, nonatomic) NSArray *smartNotificationItems; // @synthesize smartNotificationItems=_smartNotificationItems;
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00100000000be86c
- (id)loadSettingGroups;	// IMP=0x00100000000bde1f
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000bddd5
- (void)dealloc;	// IMP=0x00100000000bdd52
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000000bdcc1

@end
