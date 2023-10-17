//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMFoundation/IMUserDefaults.h>

@interface IMUserDefaults (IDSAgentUserDefaults)
+ (id)fileTypeForOptions:(id)arg1;	// IMP=0x00200000007599a0
+ (id)fileForOptions:(id)arg1;	// IMP=0x0010000000759800
+ (id)configurationForOptions:(id)arg1;	// IMP=0x0010000000759660
+ (_Bool)bypassRegistrationControlStatusCheck;	// IMP=0x00100000007595d0
+ (void)setDisableDeviceUsers:(_Bool)arg1;	// IMP=0x0010000000759520
+ (_Bool)disableDeviceUsers;	// IMP=0x0010000000759490
+ (long long)keyTransparencyCKContainerExpiryOverride;	// IMP=0x0010000000759400
+ (long long)coalesceDelayOverride;	// IMP=0x0010000000759370
+ (long long)homeNumberSecondsUntilExpiration;	// IMP=0x00100000007592e0
+ (_Bool)bypassHomeNumberCarrierCheck;	// IMP=0x0010000000759250
+ (_Bool)isDroppingMadridMessages;	// IMP=0x00100000007591c0
+ (_Bool)isForcingOnePerFanout;	// IMP=0x0010000000759130
+ (_Bool)isForcingAttachmentMessage;	// IMP=0x00100000007590a0
+ (_Bool)isFakingEveryUnlockAsFirstUnlock;	// IMP=0x0010000000759010
+ (_Bool)forceFlushOnDeliveryReceipt;	// IMP=0x0010000000758f80
+ (id)keyTransparencyAccountKeyFetchMetricDeviceID;	// IMP=0x0010000000758d50
+ (long long)keyTransparencySubsequentGossipChance;	// IMP=0x0010000000758cc0
+ (long long)keyTransparencyFirstGossipChance;	// IMP=0x0010000000758c30
+ (_Bool)isKeyTransparencyUIEnabled;	// IMP=0x0010000000758ba0
+ (_Bool)isKeyTransparencyAggressiveVerificationScheduleEnabled;	// IMP=0x0010000000758b10
+ (_Bool)isKeyTransparencyAccountKeyCircleDisabled;	// IMP=0x0010000000758a80
+ (_Bool)isKeyTransparencyCloudKitCircleDisabled;	// IMP=0x00100000007589f0
+ (_Bool)isKeyTransparencyDisabled;	// IMP=0x0010000000758960
+ (_Bool)isKTAsyncEnrollmentDisabled;	// IMP=0x00100000007588d0
+ (_Bool)isForcefulLegacyEnabled;	// IMP=0x0010000000758840
+ (_Bool)isForcefulECCEnabled;	// IMP=0x00100000007587b0
+ (_Bool)isAlwaysPairAsTinker;	// IMP=0x0010000000758720
+ (_Bool)isDebugPiscoLoggingEnabled;	// IMP=0x0010000000758690
+ (_Bool)isDeviceScoringEnabled;	// IMP=0x0010000000758600
+ (_Bool)isBAACertDisabled;	// IMP=0x0010000000758570
+ (_Bool)isAbsintheV4Enabled;	// IMP=0x00100000007584e0
+ (_Bool)isPiscoDisabled;	// IMP=0x0010000000758450
+ (id)fixedInterfaceDestination;	// IMP=0x00100000007583c0
+ (id)fixedInterface;	// IMP=0x0010000000758330
+ (long long)sessionNetworkAvailabilityCheckOverrideBehavior;	// IMP=0x0010000000758260
@end
