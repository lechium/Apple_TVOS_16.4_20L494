//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REHTTPRequest, REHTTPServer;

@protocol REHTTPServerDelegate
- (void)httpServer:(REHTTPServer *)arg1 handleRequest:(REHTTPRequest *)arg2 completion:(void (^)(REHTTPResponse *))arg3;
@end

