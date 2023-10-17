//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSData, NSNumber, NSString;

@interface IDSValidateCredentialsMessage : FTIDSMessage
{
    NSData *_authenticationDataSig;	// 232 = 0xe8
    NSString *_authenticationDataAuthToken;	// 240 = 0xf0
    NSString *_authenticationDataUserID;	// 248 = 0xf8
    NSString *_responseMessage;	// 256 = 0x100
    NSString *_responseUserID;	// 264 = 0x108
    NSNumber *_responseStatus;	// 272 = 0x110
    NSNumber *_responseOrigin;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x00200000001a0940
@property(copy) NSNumber *responseOrigin; // @synthesize responseOrigin=_responseOrigin;
@property(copy) NSNumber *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(copy) NSString *responseUserID; // @synthesize responseUserID=_responseUserID;
@property(copy) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(copy) NSString *authenticationDataUserID; // @synthesize authenticationDataUserID=_authenticationDataUserID;
@property(copy) NSString *authenticationDataAuthToken; // @synthesize authenticationDataAuthToken=_authenticationDataAuthToken;
@property(copy) NSData *authenticationDataSig; // @synthesize authenticationDataSig=_authenticationDataSig;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00100000001a04c0
- (id)bagKey;	// IMP=0x00100000001a04a0
- (id)requiredKeys;	// IMP=0x00100000001a0440
- (id)messageBody;	// IMP=0x00100000001a01a0
- (id)additionalMessageHeaders;	// IMP=0x001000000019ff50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019fce0

@end

