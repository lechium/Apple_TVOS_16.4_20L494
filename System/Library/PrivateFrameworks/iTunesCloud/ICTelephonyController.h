//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICTelephonyController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;	// 16 = 0x10
    NSString *_phoneNumber;	// 24 = 0x18
    CoreTelephonyClient *_telephonyClient;	// 32 = 0x20
    CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;	// 40 = 0x28
}

+ (id)sharedController;	// IMP=0x001000000018fde0
- (void).cxx_destruct;	// IMP=0x000000000018f594
- (void)_updatePhoneNumberAllowingDidChangeNotification:(_Bool)arg1;	// IMP=0x000000000018f336
- (id)_telephonySubscriptionContext;	// IMP=0x000000000018f09a
- (id)_telephonyClient;	// IMP=0x000000000018ef31
- (void)_handleActiveSubscriptionsDidChange;	// IMP=0x000000000018eee0
- (_Bool)_ensureTelephonyHandlesAreReady;	// IMP=0x000000000018ee72
- (void)phoneNumberChanged:(id)arg1;	// IMP=0x000000000018edcc
- (void)phoneNumberAvailable:(id)arg1;	// IMP=0x000000000018ed26
- (void)activeSubscriptionsDidChange;	// IMP=0x000000000018ec80
- (_Bool)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 error:(id *)arg3;	// IMP=0x000000000018eafd
@property(readonly, copy, nonatomic) NSString *IMEI;
@property(readonly, copy, nonatomic) NSString *mobileSubscriberNetworkCode;
@property(readonly, copy, nonatomic) NSString *mobileSubscriberCountryCode;
@property(readonly, copy, nonatomic) NSString *providerName;
@property(readonly, copy, nonatomic) NSString *phoneNumber;
- (void)dealloc;	// IMP=0x000000000018e6f5
- (id)_init;	// IMP=0x000000000018e620

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

