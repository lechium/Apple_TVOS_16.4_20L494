//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityActiveWatchElectrocardiogramVersionLessThanRule
{
    CDStruct_f6aba300 _targetVersion;	// 8 = 0x8
}

+ (id)ruleIdentifier;	// IMP=0x001000000021a0da
@property(nonatomic) CDStruct_f6aba300 targetVersion; // @synthesize targetVersion=_targetVersion;
- (_Bool)evaluate;	// IMP=0x000000000021a17b
- (void)processUserInfo:(id)arg1;	// IMP=0x000000000021a0e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

