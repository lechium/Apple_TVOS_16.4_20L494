//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnAnyWatch
{
    _Bool _supportedOnLocalDevice;	// 8 = 0x8
    NSUUID *_nanoRegistryCapability;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d45c1
+ (id)requirementIdentifier;	// IMP=0x00100000000d4058
- (void).cxx_destruct;	// IMP=0x00000000000d4714
@property(readonly, nonatomic, getter=isSupportedOnLocalDevice) _Bool supportedOnLocalDevice; // @synthesize supportedOnLocalDevice=_supportedOnLocalDevice;
@property(readonly, copy, nonatomic) NSUUID *nanoRegistryCapability; // @synthesize nanoRegistryCapability=_nanoRegistryCapability;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d4649
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d45c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d45b6
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d448c
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x00000000000d43f9
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x00000000000d42c3
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d428e
- (_Bool)_isSatisfiedWithDataSource:(id)arg1;	// IMP=0x00000000000d412a
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithNanoRegistryCapability:(id)arg1 supportedOnLocalDevice:(_Bool)arg2;	// IMP=0x00000000000d3fcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
