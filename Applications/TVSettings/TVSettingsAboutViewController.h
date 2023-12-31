//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKSettingItem, TVSettingsDiagnosticsController, UIAlertController, UIGestureRecognizer, UIViewController;
@protocol TSKSettingItemEditingController;

@interface TVSettingsAboutViewController : TSKViewController
{
    _Bool _showPartNumberAndFirmwareVersion;	// 8 = 0x8
    TSKSettingItem *_wifiSignalStrengthItem;	// 16 = 0x10
    unsigned long long _currentMoreInfoItemType;	// 24 = 0x18
    UIGestureRecognizer *_downButtonRecognizer;	// 32 = 0x20
    UIGestureRecognizer *_playPauseButtonRecognizer;	// 40 = 0x28
    UIAlertController *_diagnosticsTicketController;	// 48 = 0x30
    TVSettingsDiagnosticsController *_diagnostics;	// 56 = 0x38
    UIViewController<TSKSettingItemEditingController> *_nameViewController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000004e1ab
@property(nonatomic) __weak UIViewController<TSKSettingItemEditingController> *nameViewController; // @synthesize nameViewController=_nameViewController;
@property(retain, nonatomic) TVSettingsDiagnosticsController *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(retain, nonatomic) UIAlertController *diagnosticsTicketController; // @synthesize diagnosticsTicketController=_diagnosticsTicketController;
@property(retain, nonatomic) UIGestureRecognizer *playPauseButtonRecognizer; // @synthesize playPauseButtonRecognizer=_playPauseButtonRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *downButtonRecognizer; // @synthesize downButtonRecognizer=_downButtonRecognizer;
@property(nonatomic) unsigned long long currentMoreInfoItemType; // @synthesize currentMoreInfoItemType=_currentMoreInfoItemType;
@property(retain, nonatomic) TSKSettingItem *wifiSignalStrengthItem; // @synthesize wifiSignalStrengthItem=_wifiSignalStrengthItem;
@property(nonatomic) _Bool showPartNumberAndFirmwareVersion; // @synthesize showPartNumberAndFirmwareVersion=_showPartNumberAndFirmwareVersion;
- (void)_presentSetAccessoryNameFailedViewControllerWithError:(id)arg1;	// IMP=0x001000000004df4d
- (void)_setDeviceName:(id)arg1;	// IMP=0x001000000004db19
- (id)_nameViewControllerForItem:(id)arg1;	// IMP=0x001000000004d9ef
- (void)_advanceMoreInfoItem;	// IMP=0x001000000004d8a6
- (_Bool)_hasTiltID;	// IMP=0x001000000004d83c
- (_Bool)_showWiFiSettings;	// IMP=0x001000000004d7f2
- (void)_updateDiagnosticsItem:(id)arg1;	// IMP=0x001000000004d6f8
- (void)_handlePlayPauseGesture:(id)arg1;	// IMP=0x001000000004d125
- (void)_handleUpGesture:(id)arg1;	// IMP=0x001000000004d0f7
- (void)_handleDownGesture:(id)arg1;	// IMP=0x001000000004d0b7
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000004d06d
- (void)networkUpdated:(id)arg1;	// IMP=0x001000000004d05b
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x001000000004ce8c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000004ccaf
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x001000000004cc5f
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x001000000004caed
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x001000000004ca18
- (id)loadSettingGroups;	// IMP=0x001000000004ac76
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000004ac0c
- (void)viewDidLoad;	// IMP=0x001000000004a9cc
- (void)dealloc;	// IMP=0x001000000004a8ec
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000004a7b5

@end

