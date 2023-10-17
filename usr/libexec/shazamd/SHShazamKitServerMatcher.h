//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSISO8601DateFormatter, NSString, SHMatcherRequest, SHShazamKitServerCatalog;
@protocol SHMatcherDelegate, SHNetworkRecognitionRequester;

@interface SHShazamKitServerMatcher : NSObject
{
    id <SHMatcherDelegate> _delegate;	// 8 = 0x8
    NSISO8601DateFormatter *_iso8601Formatter;	// 16 = 0x10
    SHShazamKitServerCatalog *_catalog;	// 24 = 0x18
    id <SHNetworkRecognitionRequester> _networkRequester;	// 32 = 0x20
    SHMatcherRequest *_matcherRequest;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000709c
@property(retain, nonatomic) SHMatcherRequest *matcherRequest; // @synthesize matcherRequest=_matcherRequest;
@property(retain, nonatomic) id <SHNetworkRecognitionRequester> networkRequester; // @synthesize networkRequester=_networkRequester;
@property(retain, nonatomic) SHShazamKitServerCatalog *catalog; // @synthesize catalog=_catalog;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x0010000000006e33
- (void)stopRecognition;	// IMP=0x0010000000006dc4
- (id)buildURLForSignature:(id)arg1 endpoint:(id)arg2;	// IMP=0x0010000000006d11
- (id)partnerURLRequestForSignature:(id)arg1 endpoint:(id)arg2;	// IMP=0x00100000000068f5
- (void)matchSignature:(id)arg1 tokenizedURL:(id)arg2;	// IMP=0x00100000000064dd
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x001000000000623b
- (void)responseForServerData:(id)arg1 signature:(id)arg2;	// IMP=0x0010000000006021
@property(readonly, nonatomic) NSISO8601DateFormatter *iso8601Formatter; // @synthesize iso8601Formatter=_iso8601Formatter;
- (id)initWithCatalog:(id)arg1 recognitionRequester:(id)arg2;	// IMP=0x0010000000005f37
- (id)initWithCatalog:(id)arg1;	// IMP=0x0010000000005e83
- (void)dealloc;	// IMP=0x0010000000005e41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

