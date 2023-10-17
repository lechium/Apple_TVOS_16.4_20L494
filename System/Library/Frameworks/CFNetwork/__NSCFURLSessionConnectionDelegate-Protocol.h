//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSObject-Protocol.h>

@class NSCachedURLResponse, NSError, NSHTTPURLResponse, NSInputStream, NSNumber, NSObject, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, __NSCFURLSessionConnection;
@protocol OS_dispatch_data;

@protocol __NSCFURLSessionConnectionDelegate <NSObject, NSCopying>
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveTCPConnection:(shared_ptr_8da4e70b)arg2 extraBytes:(NSObject<OS_dispatch_data> *)arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveSocketInputStream:(NSInputStream *)arg2 outputStream:(id)arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 alternatePathAvailable:(int)arg2;
- (void)connection:(__NSCFURLSessionConnection *)arg1 _conditionalRequirementsChanged:(_Bool)arg2;
- (void)connection:(__NSCFURLSessionConnection *)arg1 waitingWithReason:(long long)arg2;
- (void)connection:(__NSCFURLSessionConnection *)arg1 _willSendRequestForEstablishedConnection:(NSURLRequest *)arg2 completion:(void (^)(NSURLRequest *))arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 sentBodyBytes:(NSNumber *)arg2 totalBytes:(NSNumber *)arg3 expectedBytes:(NSNumber *)arg4;
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveData:(NSObject<OS_dispatch_data> *)arg2 completion:(void (^)(void))arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 challenged:(NSURLAuthenticationChallenge *)arg2 authCallback:(void (^)(long long, NSURLCredential *))arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 didFinishLoadingWithError:(NSError *)arg2;
- (void)connectionWillFinishLoading:(__NSCFURLSessionConnection *)arg1;
- (void)connection:(__NSCFURLSessionConnection *)arg1 willCacheResponse:(NSCachedURLResponse *)arg2 responseCallback:(void (^)(NSCachedURLResponse *))arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveResponse:(NSURLResponse *)arg2 completion:(void (^)(struct SessionResponseOptions))arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 request:(NSURLRequest *)arg2 needsNewBodyStreamCallback:(void (^)(NSInputStream *))arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 wasRedirected:(NSHTTPURLResponse *)arg2 newRequest:(NSURLRequest *)arg3 responseCallback:(void (^)(NSURLRequest *))arg4;
@end

