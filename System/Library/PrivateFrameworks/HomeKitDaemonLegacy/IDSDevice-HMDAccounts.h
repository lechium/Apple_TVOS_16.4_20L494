//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSDevice.h>

@class HMDDeviceCapabilities, HMDHomeKitVersion, HMFProductInfo;

@interface IDSDevice (HMDAccounts)
- (id)hmd_preferredHandleForService:(id)arg1;	// IMP=0x0030000000ae7060
- (id)hmd_handlesForService:(id)arg1;	// IMP=0x0030000000ae6cb1
@property(readonly, nonatomic) HMDDeviceCapabilities *hmd_capabilities;
@property(readonly, nonatomic) HMDHomeKitVersion *hmd_version;
@property(readonly, nonatomic) HMFProductInfo *hmd_productInfo;
@end
