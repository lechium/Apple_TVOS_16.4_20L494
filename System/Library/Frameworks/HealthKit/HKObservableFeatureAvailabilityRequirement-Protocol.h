//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKFeatureAvailabilityRequirement-Protocol.h>

@class HKFeatureAvailabilityRequirementEvaluationDataSource;
@protocol HKFeatureAvailabilityRequirementSatisfactionObserver;

@protocol HKObservableFeatureAvailabilityRequirement <HKFeatureAvailabilityRequirement>
- (void)unregisterObserver:(id <HKFeatureAvailabilityRequirementSatisfactionObserver>)arg1 fromDataSource:(HKFeatureAvailabilityRequirementEvaluationDataSource *)arg2;
- (void)registerObserver:(id <HKFeatureAvailabilityRequirementSatisfactionObserver>)arg1 forDataSource:(HKFeatureAvailabilityRequirementEvaluationDataSource *)arg2;
@end

