//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityWatchModelNumberHasPrefixRule
{
    NSString *_modelNumberPrefix;	// 8 = 0x8
}

+ (id)ruleIdentifier;	// IMP=0x00100000001319b9
- (void).cxx_destruct;	// IMP=0x0000000000131b0e
@property(retain, nonatomic) NSString *modelNumberPrefix; // @synthesize modelNumberPrefix=_modelNumberPrefix;
- (_Bool)evaluate;	// IMP=0x0000000000131a1f
- (void)processUserInfo:(id)arg1;	// IMP=0x00000000001319c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

