//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSListenerCollection, NSString;

@interface OTDeviceInformationActualAdapter : NSObject
{
    CKKSListenerCollection *_deviceNameUpdateListeners;	// 8 = 0x8
    struct __SCDynamicStore *_store;	// 16 = 0x10
    NSString *_overriddenMachineID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000033d26
@property(retain) NSString *overriddenMachineID; // @synthesize overriddenMachineID=_overriddenMachineID;
@property struct __SCDynamicStore *store; // @synthesize store=_store;
@property(retain) CKKSListenerCollection *deviceNameUpdateListeners; // @synthesize deviceNameUpdateListeners=_deviceNameUpdateListeners;
- (void)setupDeviceNameListener;	// IMP=0x0010000000033b2f
- (id)serialNumber;	// IMP=0x0010000000033a56
- (id)osVersion;	// IMP=0x0010000000033a4c
- (void)registerForDeviceNameUpdates:(id)arg1;	// IMP=0x0010000000033998
- (id)deviceName;	// IMP=0x0010000000033975
- (id)modelID;	// IMP=0x0010000000033945
- (void)clearOverride;	// IMP=0x0010000000033931
- (id)getOverriddenMachineID;	// IMP=0x001000000003391f
- (_Bool)isMachineIDOverridden;	// IMP=0x00100000000338ec
- (void)setOverrideMachineID:(id)arg1;	// IMP=0x00100000000338da
- (void)dealloc;	// IMP=0x0010000000033865

@end

