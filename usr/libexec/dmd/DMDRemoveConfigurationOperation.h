//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDRemoveConfigurationOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000065d4c
+ (id)requiredEntitlements;	// IMP=0x0010000000065d34
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000065d02
- (unsigned long long)queueGroup;	// IMP=0x0010000000065d41
- (_Bool)_removeRestrictionsWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000066578
- (void)_removeProfile:(id)arg1 withRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000066308
- (void)runWithRequest:(id)arg1;	// IMP=0x0010000000065e76

@end

