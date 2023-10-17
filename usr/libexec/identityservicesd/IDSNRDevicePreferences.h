//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSNRBluetoothLinkPreferences, IDSNRDeviceIdentifier, NSSet;

@interface IDSNRDevicePreferences : NSObject
{
    _Bool _hasPreferWiFiRequest;	// 8 = 0x8
    IDSNRBluetoothLinkPreferences *_bluetoothLinkPreferences;	// 16 = 0x10
    IDSNRDeviceIdentifier *_deviceIdentifier;	// 24 = 0x18
    NSSet *_policyTrafficClassifiers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000007880
@property(retain, nonatomic) NSSet *policyTrafficClassifiers; // @synthesize policyTrafficClassifiers=_policyTrafficClassifiers;
@property(readonly, nonatomic) _Bool hasPreferWiFiRequest; // @synthesize hasPreferWiFiRequest=_hasPreferWiFiRequest;
@property(readonly, retain, nonatomic) IDSNRDeviceIdentifier *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) IDSNRBluetoothLinkPreferences *bluetoothLinkPreferences; // @synthesize bluetoothLinkPreferences=_bluetoothLinkPreferences;
- (void)deviceSetupCompleted;	// IMP=0x0010000000007790
- (void)deviceSetupStarted;	// IMP=0x0010000000007780
- (void)cancel;	// IMP=0x0010000000007770
- (void)removeAllQuickRelayRequests;	// IMP=0x0010000000007760
- (void)removeQuickRelayRequest;	// IMP=0x0010000000007750
- (void)addQuickRelayRequest;	// IMP=0x0010000000007740
- (void)removePreferWiFiRequest;	// IMP=0x0010000000007730
- (void)addPreferWiFiRequest;	// IMP=0x0010000000007720
- (id)init;	// IMP=0x00100000000076f0
- (id)initWithDeviceIdentifier:(id)arg1;	// IMP=0x00100000000076a0

@end
