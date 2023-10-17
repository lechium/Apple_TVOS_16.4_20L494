//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUPairingManager, MRDeviceInfo, NSString;
@protocol MRDDeviceInfoDataSourceDelegate;

@interface MRDDeviceInfoDataSource : NSObject
{
    struct MGNotificationTokenStruct *_gestaltNotificationToken;	// 8 = 0x8
    int _airplayPerfsNotifyToken;	// 16 = 0x10
    int _airplayAdvertisingNotifyToken;	// 20 = 0x14
    MRDeviceInfo *_deviceInfo;	// 24 = 0x18
    _Bool _deviceInfoReloadScheduled;	// 32 = 0x20
    id <MRDDeviceInfoDataSourceDelegate> _delegate;	// 40 = 0x28
    CUPairingManager *_pairingManager;	// 48 = 0x30
    NSString *_deviceUID;	// 56 = 0x38
    NSString *_deviceName;	// 64 = 0x40
}

+ (id)_workerQueue;	// IMP=0x0020000000069198
- (void).cxx_destruct;	// IMP=0x002000000006b5d2
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
@property(retain, nonatomic) CUPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
@property(nonatomic) __weak id <MRDDeviceInfoDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_readDeviceInfo;	// IMP=0x001000000006b27d
- (void)_writeDeviceInfo:(id)arg1 toPath:(id)arg2;	// IMP=0x001000000006b127
- (id)_readLegacyDeviceInfoIdentifier;	// IMP=0x001000000006b07e
- (id)_deviceInfoArchiveClasses;	// IMP=0x001000000006afc3
- (id)_deviceInfoFilePath;	// IMP=0x001000000006af7d
- (id)networkIdentifier;	// IMP=0x001000000006ae99
- (id)allClusteredDevices;	// IMP=0x001000000006ab9e
- (id)clusteredDevices;	// IMP=0x001000000006a8a3
- (id)discoverySession;	// IMP=0x001000000006a839
- (id)_currentDeviceInfo;	// IMP=0x001000000006966a
- (void)_otherDeviceInfoDidChange:(id)arg1;	// IMP=0x001000000006949a
- (void)_deviceInfoDidChangeWithDeviceInfo:(id)arg1;	// IMP=0x0010000000069334
- (void)_deviceInfoDidChange;	// IMP=0x0010000000069219
- (void)_outputContextDidChange;	// IMP=0x0010000000069186
- (void)clusterController:(id)arg1 clusterStatusDidChange:(unsigned long long)arg2;	// IMP=0x0010000000069174
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000069162
- (void)reloadDeviceInfoImmediatly;	// IMP=0x00100000000690db
@property(readonly, nonatomic) MRDeviceInfo *deviceInfo;
- (void)dealloc;	// IMP=0x0010000000068fcd
- (id)init;	// IMP=0x001000000006877b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
