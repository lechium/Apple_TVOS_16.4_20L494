//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/NSObject-Protocol.h>

@class ACAccount, NSDate, NSNumber, NSString, NSURLRequest;

@protocol ACDOAuthSignerProtocol <NSObject>
- (void)setClientBundleID:(NSString *)arg1 withHandler:(void (^)(_Bool, NSError *))arg2;
- (void)signURLRequest:(NSURLRequest *)arg1 withAccount:(ACAccount *)arg2 applicationID:(NSString *)arg3 timestamp:(NSDate *)arg4 handler:(void (^)(NSURLRequest *, NSError *))arg5;
- (void)signURLRequest:(NSURLRequest *)arg1 withAccount:(ACAccount *)arg2 callingPID:(NSNumber *)arg3 timestamp:(NSDate *)arg4 handler:(void (^)(NSURLRequest *, NSError *))arg5;
- (void)setShouldIncludeAppIdInRequest:(_Bool)arg1;
@end

