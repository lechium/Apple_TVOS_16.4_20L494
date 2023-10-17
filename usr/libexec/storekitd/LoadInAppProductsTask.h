//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, _TtC9storekitd6Client;

@interface LoadInAppProductsTask
{
    NSString *_logKey;	// 8 = 0x8
    _TtC9storekitd6Client *_client;	// 16 = 0x10
    NSArray *_productIdentifiers;	// 24 = 0x18
    long long _apiVersion;	// 32 = 0x20
    NSArray *_invalidIdentifiers;	// 40 = 0x28
    NSArray *_products;	// 48 = 0x30
    NSString *_serverCorrelationIdentifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000008334b
@property(readonly, nonatomic) NSString *serverCorrelationIdentifier; // @synthesize serverCorrelationIdentifier=_serverCorrelationIdentifier;
@property(readonly, nonatomic) NSArray *products; // @synthesize products=_products;
@property(readonly, nonatomic) NSArray *invalidIdentifiers; // @synthesize invalidIdentifiers=_invalidIdentifiers;
@property(readonly, nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property(readonly, nonatomic) NSArray *productIdentifiers; // @synthesize productIdentifiers=_productIdentifiers;
@property(readonly, nonatomic) _TtC9storekitd6Client *client; // @synthesize client=_client;
- (id)_parseLegacyToMedia:(id)arg1;	// IMP=0x0010000000082501
- (id)_parseMediaProducts:(id)arg1;	// IMP=0x0010000000081b01
- (id)_parseResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000080d11
- (id)_requestBatches:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000080552
- (id)_queryDictionary;	// IMP=0x00100000000800b5
- (id)_mediaAPIFetchWith:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007f980
- (id)_mediaClientIdentifier;	// IMP=0x001000000007f94c
- (id)_mediaPlatformString;	// IMP=0x001000000007f938
- (id)_localeIdentifier;	// IMP=0x001000000007f53e
- (id)_buildMediaAPIURLWith:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007ef1e
- (id)_newProductIdentifierAllowedCharacterSet;	// IMP=0x001000000007ee91
- (id)_productIdentifierAllowedCharacterSet;	// IMP=0x001000000007ed6c
- (id)_processIdentifiers;	// IMP=0x001000000007ea18
- (BOOL)_clientType;	// IMP=0x001000000007e9d3
- (void)main;	// IMP=0x001000000007dcfc
- (id)initWithProductIdentifiers:(id)arg1 client:(id)arg2 apiVersion:(long long)arg3;	// IMP=0x001000000007dc16

@end
