//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFWebResource.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WFHTMLStringWebResource : WFWebResource
{
    NSString *_htmlString;	// 8 = 0x8
    NSURL *_baseURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000822cf
- (void).cxx_destruct;	// IMP=0x000000000008229e
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000821a8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000820e3
- (id)textEncodingName;	// IMP=0x00000000000820d6
- (id)MIMEType;	// IMP=0x0000000000082075
- (id)URL;	// IMP=0x0000000000082063
- (id)data;	// IMP=0x000000000008200e
- (id)loadInWKWebView:(id)arg1;	// IMP=0x0000000000081f2e
- (id)initWithHTMLString:(id)arg1 baseURL:(id)arg2;	// IMP=0x0000000000081e7d

@end

