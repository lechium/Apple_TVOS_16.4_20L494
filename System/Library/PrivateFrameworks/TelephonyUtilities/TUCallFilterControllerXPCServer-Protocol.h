//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSSet, NSString, TUHandle;

@protocol TUCallFilterControllerXPCServer <NSObject>
- (oneway void)isUnknownAddress:(NSString *)arg1 normalizedAddress:(NSString *)arg2 forBundleIdentifier:(NSString *)arg3 reply:(void (^)(_Bool))arg4;
- (oneway void)policyForAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (oneway void)filterStatusForAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(unsigned long long))arg3;
- (oneway void)shouldRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 performSynchronously:(_Bool)arg3 reply:(void (^)(_Bool))arg4;
- (oneway void)containsRestrictedHandle:(TUHandle *)arg1 forBundleIdentifier:(NSString *)arg2 performSynchronously:(_Bool)arg3 reply:(void (^)(_Bool))arg4;
- (oneway void)willRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(_Bool))arg3;
@end

