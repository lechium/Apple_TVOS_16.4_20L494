//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityOnboardingCountryCodeRule
{
    NSString *_onboardingCountryCode;	// 8 = 0x8
}

+ (id)ruleIdentifier;	// IMP=0x001000000019920c
- (void).cxx_destruct;	// IMP=0x000000000019940d
@property(retain, nonatomic) NSString *onboardingCountryCode; // @synthesize onboardingCountryCode=_onboardingCountryCode;
- (_Bool)evaluate;	// IMP=0x0000000000199283
- (void)processUserInfo:(id)arg1;	// IMP=0x0000000000199219

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
