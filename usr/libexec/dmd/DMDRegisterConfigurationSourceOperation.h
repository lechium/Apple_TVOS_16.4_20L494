//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDRegisterConfigurationSourceOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000064cc9
+ (id)requiredEntitlements;	// IMP=0x0010000000064ab1
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000064a7f
- (void)runWithRequest:(id)arg1;	// IMP=0x0040000000064ad1
- (_Bool)runOnMainThread;	// IMP=0x0010000000064ac9
- (unsigned long long)queueGroup;	// IMP=0x0010000000064abe

@end

