//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface VolumeLevelResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x006000000021ba90
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x006000000021ba50
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x006000000021ba10
+ (id)confirmationRequiredWithVolumeLevelToConfirm:(id)arg1;	// IMP=0x006000000021b9c0
+ (id)disambiguationWithVolumeLevelsToDisambiguate:(id)arg1;	// IMP=0x006000000021b960
+ (id)successWithResolvedVolumeLevel:(id)arg1;	// IMP=0x006000000021b910
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x000000000021bc00

@end
