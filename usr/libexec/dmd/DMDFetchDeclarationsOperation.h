//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDFetchDeclarationsOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000004e32a
+ (id)requiredEntitlements;	// IMP=0x001000000004e16f
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000004e13d
- (void)runWithRequest:(id)arg1;	// IMP=0x004000000004e18f
- (_Bool)runOnMainThread;	// IMP=0x001000000004e187
- (unsigned long long)queueGroup;	// IMP=0x001000000004e17c

@end
