//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface DeviceContextResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x0060000000219730
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x00600000002196f0
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x00600000002196b0
+ (id)confirmationRequiredWithDeviceContextToConfirm:(id)arg1;	// IMP=0x0060000000219660
+ (id)disambiguationWithDeviceContextsToDisambiguate:(id)arg1;	// IMP=0x00600000002195b0
+ (id)successWithResolvedDeviceContext:(id)arg1;	// IMP=0x0060000000219470
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x00000000002198a0

@end

