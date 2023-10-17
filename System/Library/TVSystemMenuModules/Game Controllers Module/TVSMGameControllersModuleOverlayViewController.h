//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSObject, NSString, UICollectionViewDiffableDataSource;
@protocol TVPSBluetoothDeviceManaging, TVSMModuleOverlayContentViewControllerDelegate;

@interface TVSMGameControllersModuleOverlayViewController : UIViewController
{
    _Bool _observingDevices;	// 8 = 0x8
    id <TVSMModuleOverlayContentViewControllerDelegate> _delegate;	// 16 = 0x10
    NSObject<TVPSBluetoothDeviceManaging> *_bluetoothDeviceManager;	// 24 = 0x18
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 32 = 0x20
}

+ (id)_batteryLevelForDevice:(id)arg1;	// IMP=0x001000000000a8b0
+ (id)_displayNameForDevice:(id)arg1;	// IMP=0x001000000000a760
+ (id)_sectionIdentifierForDiffableDataSourceItemIdentifier:(id)arg1;	// IMP=0x0010000000009c50
+ (id)_deviceIdentifierForDiffableDataSourceItemIdentifier:(id)arg1;	// IMP=0x0010000000009bb0
+ (id)_diffableDataSourceItemIdentifierComponents:(id)arg1;	// IMP=0x0010000000009b30
+ (id)_diffableDataSourceItemIdentifierForDevice:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x0010000000009a30
- (void).cxx_destruct;	// IMP=0x000000000000c9a0
@property(nonatomic, getter=isObservingDevices) _Bool observingDevices; // @synthesize observingDevices=_observingDevices;
@property(readonly, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(readonly, nonatomic) NSObject<TVPSBluetoothDeviceManaging> *bluetoothDeviceManager; // @synthesize bluetoothDeviceManager=_bluetoothDeviceManager;
@property(nonatomic) __weak id <TVSMModuleOverlayContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentAlertWithError:(id)arg1 forDevice:(id)arg2;	// IMP=0x000000000000bc10
- (void)_unpairDevice:(id)arg1;	// IMP=0x000000000000ba10
- (void)_connectDevice:(id)arg1;	// IMP=0x000000000000b810
- (void)_disconnectDevice:(id)arg1;	// IMP=0x000000000000b610
- (void)_handlePairedDevicesUpdate:(id)arg1 pairableDevicesUpdate:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000aa00
- (void)_configureCell:(id)arg1 withDevice:(id)arg2;	// IMP=0x000000000000a410
- (id)_deviceForDiffableDataSourceItemIdentifier:(id)arg1;	// IMP=0x000000000000a330
- (id)_deviceCellWithItemIdentifier:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000000a1f0
- (id)_settingsCellAtIndexPath:(id)arg1;	// IMP=0x000000000000a040
- (id)_sectionIdentifierAtIndex:(long long)arg1;	// IMP=0x0000000000009f20
- (id)_indexPathForFocusedCell;	// IMP=0x0000000000009d90
- (id)_collectionView;	// IMP=0x0000000000009d20
- (id)_overlayView;	// IMP=0x0000000000009cf0
- (void)_handleLongPressSelect:(id)arg1;	// IMP=0x0000000000008f40
- (void)_handleMenuPress:(id)arg1;	// IMP=0x0000000000008ec0
- (void)_handleWillEnterForegroundNotification:(id)arg1;	// IMP=0x0000000000008e00
- (void)_handleDidEnterBackgroundNotification:(id)arg1;	// IMP=0x0000000000008d50
- (void)bluetoothDeviceManager:(id)arg1 didUpdatePairedDevices:(id)arg2;	// IMP=0x0000000000008c80
- (void)bluetoothDeviceManager:(id)arg1 didUpdatePairableDevices:(id)arg2;	// IMP=0x0000000000008bb0
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000008a40
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000008770
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000000000085c0
- (void)viewDidLoad;	// IMP=0x0000000000007ba0
- (void)loadView;	// IMP=0x0000000000007b50
- (void)dealloc;	// IMP=0x0000000000007a80
- (id)initWithBluetoothDeviceManager:(id)arg1;	// IMP=0x0000000000007930
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000078c0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000007830

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

