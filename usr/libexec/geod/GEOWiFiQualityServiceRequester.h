//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServiceRequester.h>

@class GEOApplicationAuditToken, GEOWiFiQualityServiceRequest;

@interface GEOWiFiQualityServiceRequester : GEOServiceRequester
{
    GEOWiFiQualityServiceRequest *_request;	// 8 = 0x8
    GEOApplicationAuditToken *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000411b2
- (id)_validateResponse:(id)arg1;	// IMP=0x0010000000041139
- (void)cancel;	// IMP=0x001000000004111c
- (void)startWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040ed7
- (id)initWithRequest:(id)arg1 auditToken:(id)arg2;	// IMP=0x0010000000040e35

@end

