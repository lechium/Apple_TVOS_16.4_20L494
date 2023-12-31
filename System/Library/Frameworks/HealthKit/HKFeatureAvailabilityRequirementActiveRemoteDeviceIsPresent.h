//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementActiveRemoteDeviceIsPresent
{
}

+ (id)requirementIdentifier;	// IMP=0x001000000008598f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000085cd2
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x0000000000085c60
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x0000000000085a4b
- (id)isSatisfiedWithOnboardingEligibility:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000085a0f
@property(readonly, nonatomic) NSString *requirementDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

