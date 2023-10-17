//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCContexts, CoreTelephonyClient, NSDictionary, NSMutableDictionary, NSSet, NSString, NSUUID;
@protocol CSDCoreTelephonyClientDelegate, OS_dispatch_queue;

@interface CSDCoreTelephonyClient : NSObject
{
    id <CSDCoreTelephonyClientDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CoreTelephonyClient *_client;	// 24 = 0x18
    CTXPCContexts *_activeContexts;	// 32 = 0x20
    NSMutableDictionary *_mobileCodesToISOCountryCode;	// 40 = 0x28
}

+ (_Bool)_isNSErrorFatal:(id)arg1;	// IMP=0x002000000019142e
+ (_Bool)_isCTErrorFatal:(CDStruct_1ef3fb1f)arg1;	// IMP=0x0010000000191411
- (void).cxx_destruct;	// IMP=0x0020000000191dfb
@property(readonly, nonatomic) NSMutableDictionary *mobileCodesToISOCountryCode; // @synthesize mobileCodesToISOCountryCode=_mobileCodesToISOCountryCode;
@property(copy, nonatomic) CTXPCContexts *activeContexts; // @synthesize activeContexts=_activeContexts;
@property(readonly, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSDCoreTelephonyClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ctEmergencyCallbackModeStatusChangedWithUserInfo:(id)arg1;	// IMP=0x0010000000191c50
- (void)phoneServicesCapabilitiesChanged:(id)arg1;	// IMP=0x0010000000191aa8
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;	// IMP=0x001000000019190b
- (void)callCapabilitiesChanged:(id)arg1 capabilities:(id)arg2;	// IMP=0x0010000000191752
- (void)activeSubscriptionsDidChange;	// IMP=0x00100000001916cc
- (id)_subscriptionWithUUID:(id)arg1;	// IMP=0x00100000001914d1
- (id)mobileNetworkCodeForSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000191334
- (id)mobileCountryCodeForSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000191257
- (id)ISOCountryCodeForMobileCountryCode:(id)arg1 mobileNetworkCode:(id)arg2;	// IMP=0x0010000000190f3b
- (id)ISOCountryCodeForSubscriptionUUID:(id)arg1;	// IMP=0x0010000000190c27
- (id)accountISOCountryCodeForSubscriptionUUID:(id)arg1;	// IMP=0x001000000019096d
- (void)legacyRecheckAccountStatusForCapability:(id)arg1;	// IMP=0x0010000000190877
- (void)legacyRemoveSecondaryThumperDeviceWithIDSDeviceIdentifier:(id)arg1;	// IMP=0x0010000000190707
- (void)legacyAddSecondaryThumperDeviceWithIDSDeviceIdentifier:(id)arg1;	// IMP=0x0010000000190597
- (id)legacySystemCapabilities;	// IMP=0x00100000001904ee
- (void)setLegacyCapability:(id)arg1 enabled:(_Bool)arg2 capabilityInformation:(id)arg3;	// IMP=0x0010000000190355
- (void)endEmergencyCallbackMode;	// IMP=0x0010000000190224
- (void)recheckAccountStatusForSubscription:(id)arg1 capability:(id)arg2;	// IMP=0x00100000001900b5
- (void)removeSecondaryThumperDeviceWithIDSDeviceIdentifier:(id)arg1 fromSubscription:(id)arg2;	// IMP=0x001000000018fe95
- (void)addSecondaryThumperDeviceWithIDSDeviceIdentifier:(id)arg1 toSubscription:(id)arg2;	// IMP=0x001000000018fc75
- (void)setSubscription:(id)arg1 capability:(id)arg2 enabled:(_Bool)arg3 info:(id)arg4;	// IMP=0x001000000018f9ff
- (void)setCapability:(id)arg1 enabled:(_Bool)arg2 info:(id)arg3;	// IMP=0x001000000018f9ed
- (id)systemCapabilitiesForSubscription:(id)arg1;	// IMP=0x001000000018f878
- (id)capabilityInfoForSubscription:(id)arg1 capability:(id)arg2;	// IMP=0x001000000018f6db
- (id)callCapabilitiesForSubscription:(id)arg1;	// IMP=0x001000000018f51f
@property(readonly, copy, nonatomic) NSDictionary *thumperDeviceInfo;
@property(readonly, nonatomic, getter=isEmergencyCallbackModeEnabled) _Bool emergencyCallbackModeEnabled;
@property(readonly, copy, nonatomic) NSSet *telephonySubscriptions;
@property(readonly, copy, nonatomic) NSSet *subscriptions;
@property(readonly, copy, nonatomic) NSUUID *preferredVoiceSubscriptionUUID;
- (id)initWithQueue:(id)arg1 shouldRegisterForECBMNotification:(_Bool)arg2;	// IMP=0x001000000018ec30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
