//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKDAssetTokenRequest, NSDictionary, NSMapTable;

@interface CKDFetchContentAuthTokensForPutURLRequest : CKDURLRequest
{
    _Bool _useEncryption;	// 8 = 0x8
    CKDAssetTokenRequest *_assetTokenRequest;	// 16 = 0x10
    NSMapTable *_transactionStateByRequestIDs;	// 24 = 0x18
    NSDictionary *_headers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000de40c
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSMapTable *transactionStateByRequestIDs; // @synthesize transactionStateByRequestIDs=_transactionStateByRequestIDs;
@property(retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest; // @synthesize assetTokenRequest=_assetTokenRequest;
@property(nonatomic) _Bool useEncryption; // @synthesize useEncryption=_useEncryption;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000000ddc5c
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000000dc2a1
- (id)generateRequestOperations;	// IMP=0x00000000000daf39
- (_Bool)allowsAnonymousAccount;	// IMP=0x00000000000daf1f
- (id)requestOperationClasses;	// IMP=0x00000000000daeb3
- (id)initWithOperation:(id)arg1 assetTokenRequest:(id)arg2 headers:(id)arg3;	// IMP=0x00000000000dae09

@end

