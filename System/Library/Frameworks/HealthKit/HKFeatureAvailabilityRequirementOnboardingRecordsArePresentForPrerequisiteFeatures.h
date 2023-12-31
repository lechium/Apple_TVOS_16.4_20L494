//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementOnboardingRecordsArePresentForPrerequisiteFeatures
{
    NSArray *_prerequisiteFeatureIdentifiers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000011b4a0
+ (id)requirementIdentifier;	// IMP=0x001000000011abac
- (void).cxx_destruct;	// IMP=0x000000000011b5b1
@property(readonly, copy, nonatomic) NSArray *prerequisiteFeatureIdentifiers; // @synthesize prerequisiteFeatureIdentifiers=_prerequisiteFeatureIdentifiers;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011b4d2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011b4a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011b495
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011b416
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x000000000011b244
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x000000000011ae5b
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011ac81
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithPrerequisiteFeatureIdentifiers:(id)arg1;	// IMP=0x000000000011ab3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

