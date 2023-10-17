//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothDeviceDataSource;

@interface ADBluetoothManager : NSObject
{
    ADMobileBluetoothDeviceDataSource *_dataSource;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000002aee8f
- (void).cxx_destruct;	// IMP=0x00200000002af249
- (id)wirelessSplitterSession;	// IMP=0x00100000002af233
- (void)getPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002af21d
- (void)getConnectedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002af207
- (id)deviceWithUID:(id)arg1;	// IMP=0x00100000002af1f1
- (id)deviceWithAddress:(id)arg1;	// IMP=0x00100000002af14b
- (id)deviceWithRecordingInfo:(id)arg1;	// IMP=0x00100000002aeff1
- (void)prewarmDeviceWithIdentifier:(id)arg1;	// IMP=0x00100000002aef4a
- (id)_init;	// IMP=0x00100000002aeef4

@end
