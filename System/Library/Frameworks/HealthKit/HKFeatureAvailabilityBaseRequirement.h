//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityBaseRequirement : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001181bb
+ (id)requirementIdentifier;	// IMP=0x00100000002508a7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001181c9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001181c3
- (id)_hk_featureAvailabilityRequirements;	// IMP=0x000000000011815b
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002508e8
@property(readonly, nonatomic) NSString *requirementDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

