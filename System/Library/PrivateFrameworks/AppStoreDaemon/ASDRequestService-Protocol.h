//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDRequest;
@protocol ASDRequestDelegate;

@protocol ASDRequestService
- (void)submitRequest:(ASDRequest *)arg1 delegate:(id <ASDRequestDelegate>)arg2 withReplyHandler:(void (^)(id <ASDRequestProxy>, NSError *))arg3;
- (void)cancelAllRequestsWithErrorHandler:(void (^)(NSError *))arg1;
@end

