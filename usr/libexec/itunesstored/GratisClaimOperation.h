//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSData, NSDictionary, NSNumber, NSString, SSURLConnectionResponse, SSURLRequestProperties, SSVGratisRequestBody;

@interface GratisClaimOperation : ISOperation
{
    NSNumber *_accountID;	// 96 = 0x60
    NSString *_authenticationReasonDescription;	// 104 = 0x68
    NSData *_clientAuditTokenData;	// 112 = 0x70
    SSURLRequestProperties *_defaultRequestProperties;	// 120 = 0x78
    NSDictionary *_rawOutput;	// 128 = 0x80
    SSVGratisRequestBody *_requestBody;	// 136 = 0x88
    _Bool _suppressesErrorDialogs;	// 144 = 0x90
    SSURLConnectionResponse *_urlResponse;	// 152 = 0x98
}

- (id)_newRetryRequestPropertiesWithURL:(id)arg1;	// IMP=0x002000000013c7fb
- (id)_newDefaultRequestProperties;	// IMP=0x001000000013c6cd
- (id)_bodyData;	// IMP=0x001000000013c65d
- (id)_authenticationContext;	// IMP=0x001000000013c575
- (id)_accountID;	// IMP=0x001000000013c4c4
- (void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2;	// IMP=0x001000000013c3f4
- (void)run;	// IMP=0x001000000013be51
@property(readonly) SSURLConnectionResponse *URLResponse;
@property _Bool suppressesErrorDialogs;
@property(retain, nonatomic) NSData *clientAuditTokenData;
@property(copy) NSString *authenticationReasonDescription;
@property(readonly) NSDictionary *rawOutput;
- (void)dealloc;	// IMP=0x001000000013bb2b
- (id)initWithRequestBody:(id)arg1;	// IMP=0x001000000013ba92
- (id)initWithPurchase:(id)arg1;	// IMP=0x001000000013b921

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

