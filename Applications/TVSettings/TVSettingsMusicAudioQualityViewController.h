//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKPreviewViewController, TVSPreferences;

@interface TVSettingsMusicAudioQualityViewController : TSKViewController
{
    TSKPreviewViewController *_appPreviewViewController;	// 8 = 0x8
    TVSPreferences *_airplayPreferences;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000032a3a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000329f0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000032904
- (void)_itemSelected:(id)arg1;	// IMP=0x0010000000032806
- (id)_createItemWithInfo:(id)arg1;	// IMP=0x0010000000032600
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000032539
- (id)loadSettingGroups;	// IMP=0x001000000003218f
- (void)viewDidLoad;	// IMP=0x001000000003210f
- (void)dealloc;	// IMP=0x001000000003208c
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000031fc1

@end

