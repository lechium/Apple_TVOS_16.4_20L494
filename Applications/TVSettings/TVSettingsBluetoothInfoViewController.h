//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, TSKSettingItem;
@protocol TSKSettingItemEditingControllerDelegate;

@interface TVSettingsBluetoothInfoViewController : TSKViewController
{
    TSKSettingItem *_editingItem;	// 8 = 0x8
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;	// 16 = 0x10
    TSKSettingItem *_pivotItem;	// 24 = 0x18
    TSKSettingItem *_soundProfileItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000085b1c
@property(readonly, nonatomic) TSKSettingItem *soundProfileItem; // @synthesize soundProfileItem=_soundProfileItem;
@property(readonly, nonatomic) TSKSettingItem *pivotItem; // @synthesize pivotItem=_pivotItem;
@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (_Bool)_shouldShowSpatialAudioSettings;	// IMP=0x0010000000085a26
- (id)_bluetoothDevice;	// IMP=0x0010000000085986
- (void)showSpatialTutorial;	// IMP=0x00100000000855ca
- (void)_connectDevice:(id)arg1;	// IMP=0x001000000008553a
- (void)_unpairDevice:(id)arg1;	// IMP=0x0010000000085196
- (void)_disconnectDevice:(id)arg1;	// IMP=0x0010000000085106
- (void)_toggleSpatialAudio:(id)arg1;	// IMP=0x0010000000084f0a
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000084d6a
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000084bd3
- (id)loadSettingGroups;	// IMP=0x0010000000083876

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

