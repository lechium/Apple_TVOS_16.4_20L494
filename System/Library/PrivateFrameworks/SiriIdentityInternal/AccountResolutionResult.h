//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface AccountResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x0050000000051ef0
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x0050000000051e70
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x0050000000051df0
+ (id)confirmationRequiredWithAccountToConfirm:(id)arg1;	// IMP=0x0050000000051d60
+ (id)disambiguationWithAccountsToDisambiguate:(id)arg1;	// IMP=0x0050000000051d00
+ (id)successWithResolvedAccount:(id)arg1;	// IMP=0x0050000000051cb0
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000052060

@end

