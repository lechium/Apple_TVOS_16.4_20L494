//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDFetchOSUpdateStatusOperation
{
}

+ (id)requiredEntitlements;	// IMP=0x004000000004ec5b
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000004ec29
- (unsigned long long)_downloadStatusAndPercentComplete:(double *)arg1 fromStatus:(id)arg2;	// IMP=0x004000000004ef49
- (void)runWithRequest:(id)arg1;	// IMP=0x001000000004ec68

@end
