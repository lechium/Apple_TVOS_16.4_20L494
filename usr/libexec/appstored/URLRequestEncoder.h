//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@class NSString, URLRequestProperties;

@interface URLRequestEncoder : AMSURLRequestEncoder
{
    URLRequestProperties *_requestProperties;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000008b4a9
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;	// IMP=0x001000000008b003

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

