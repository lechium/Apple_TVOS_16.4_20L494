//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSData, NSString;

@interface _TtC15HomePodSettings20XPCConnectionManager : _TtCs12_SwiftObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *maker;	// 112 = 0x70
    MISSING_TYPE *retryPolicy;	// 128 = 0x80
    MISSING_TYPE *internalCnx;	// 152 = 0x98
    MISSING_TYPE *delayedRetryTask;	// 160 = 0xa0
    MISSING_TYPE *retries;	// 168 = 0xa8
}

- (void)removeProfileWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x000000000002eff0
- (void)installedProfilesWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;	// IMP=0x000000000002ecd0
- (void)installProfileWithData:(NSData *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;	// IMP=0x000000000002e770

@end

