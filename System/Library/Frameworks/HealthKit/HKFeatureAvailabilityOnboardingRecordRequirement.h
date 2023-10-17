//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityOnboardingRecordRequirement
{
    NSString *_featureIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000770f9
- (void).cxx_destruct;	// IMP=0x00000000000771c9
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007712b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000077101
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000770ee
- (unsigned long long)hash;	// IMP=0x0000000000077079
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000077017
- (id)isSatisfiedWithOnboardingRecord:(id)arg1 dataSource:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000076f9a
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000076f03
- (id)initWithFeatureIdentifier:(id)arg1;	// IMP=0x0000000000076e95

@end

