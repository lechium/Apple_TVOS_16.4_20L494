//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface DeviceResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x0060000000217d20
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x0060000000217ce0
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x0060000000217ca0
+ (id)confirmationRequiredWithDeviceToConfirm:(id)arg1;	// IMP=0x0060000000217c50
+ (id)disambiguationWithDevicesToDisambiguate:(id)arg1;	// IMP=0x0060000000217bf0
+ (id)successWithResolvedDevice:(id)arg1;	// IMP=0x0060000000217ba0
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000217e90

@end
