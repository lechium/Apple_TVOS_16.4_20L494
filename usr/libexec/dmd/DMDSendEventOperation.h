//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDSendEventOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000068a84
+ (id)requiredEntitlements;	// IMP=0x00100000000687f6
+ (id)whitelistedClassesForRequest;	// IMP=0x00100000000687c4
- (void)runWithRequest:(id)arg1;	// IMP=0x0040000000068816
- (_Bool)runOnMainThread;	// IMP=0x001000000006880e
- (unsigned long long)queueGroup;	// IMP=0x0010000000068803

@end

