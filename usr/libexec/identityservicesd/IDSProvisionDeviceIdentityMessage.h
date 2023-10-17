//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSData, NSString;
@protocol IDSBaseMessageSigningSession;

@interface IDSProvisionDeviceIdentityMessage : FTIDSMessage
{
    NSData *_csr;	// 232 = 0xe8
    NSData *_validationData;	// 240 = 0xf0
    NSData *_deviceScore;	// 248 = 0xf8
    NSString *_deviceScoreNonce;	// 256 = 0x100
    NSData *_responseCert;	// 264 = 0x108
    NSString *_responseUserID;	// 272 = 0x110
    NSArray *_responseHandles;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x002000000029d550
@property(retain) NSArray *responseHandles; // @synthesize responseHandles=_responseHandles;
@property(retain) NSString *responseUserID; // @synthesize responseUserID=_responseUserID;
@property(retain) NSData *responseCert; // @synthesize responseCert=_responseCert;
@property(copy) NSString *deviceScoreNonce; // @synthesize deviceScoreNonce=_deviceScoreNonce;
@property(copy) NSData *deviceScore; // @synthesize deviceScore=_deviceScore;
@property(copy) NSData *validationData; // @synthesize validationData=_validationData;
@property(copy) NSData *csr; // @synthesize csr=_csr;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x001000000029ce90
- (id)messageBody;	// IMP=0x001000000029cc60
- (id)requiredKeys;	// IMP=0x001000000029cbe0
- (_Bool)requiresPushTokenKeys;	// IMP=0x001000000029cbc0
- (double)anisetteHeadersTimeout;	// IMP=0x001000000029cba0
- (_Bool)wantsBinaryPush;	// IMP=0x001000000029cb80
- (_Bool)wantsCompressedBody;	// IMP=0x001000000029cb60
- (_Bool)wantsHTTPHeaders;	// IMP=0x001000000029cb40
- (_Bool)wantsBagKey;	// IMP=0x001000000029cb20
- (_Bool)wantsBodySignature;	// IMP=0x001000000029cb00
- (_Bool)wantsBodySigningOnly;	// IMP=0x001000000029cae0
- (id)bagKey;	// IMP=0x001000000029cac0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000029c940

// Remaining properties
@property(copy) id <IDSBaseMessageSigningSession> signingSession;

@end

