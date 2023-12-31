//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, SecJWSEncoder;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface AcmeCertRequest : NSObject
{
    _Bool _logAcmeCSR;	// 8 = 0x8
    _Bool _permitLocalIssuer;	// 9 = 0x9
    _Bool _requireAttestation;	// 10 = 0xa
    long long _state;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSArray *_subject;	// 32 = 0x20
    NSDictionary *_parameters;	// 40 = 0x28
    NSDictionary *_keyParams;	// 48 = 0x30
    NSArray *_attestationOids;	// 56 = 0x38
    NSArray *_attestationChain;	// 64 = 0x40
    NSData *_attestation;	// 72 = 0x48
    NSData *_csr;	// 80 = 0x50
    NSString *_nonce;	// 88 = 0x58
    NSString *_location;	// 96 = 0x60
    NSString *_account;	// 104 = 0x68
    NSString *_token;	// 112 = 0x70
    NSString *_timestamp;	// 120 = 0x78
    NSArray *_authorizations;	// 128 = 0x80
    NSString *_authorizationURL;	// 136 = 0x88
    NSString *_challengeURL;	// 144 = 0x90
    NSString *_finalizeOrderURL;	// 152 = 0x98
    NSString *_orderURL;	// 160 = 0xa0
    NSString *_certificateURL;	// 168 = 0xa8
    NSString *_nextMessageURL;	// 176 = 0xb0
    NSString *_acmeNewAccountURL;	// 184 = 0xb8
    NSString *_acmeNewNonceURL;	// 192 = 0xc0
    NSString *_acmeNewOrderURL;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_xpc_queue;	// 208 = 0xd0
    NSObject<OS_xpc_object> *_connection;	// 216 = 0xd8
    SecJWSEncoder *_encoder;	// 224 = 0xe0
    struct __SecKey *_publicKey;	// 232 = 0xe8
    struct __SecKey *_privateKey;	// 240 = 0xf0
    struct __SecCertificate *_certificate;	// 248 = 0xf8
    struct __SecIdentity *_identity;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x00000000000febf0
@property struct __SecIdentity *identity; // @synthesize identity=_identity;
@property struct __SecCertificate *certificate; // @synthesize certificate=_certificate;
@property struct __SecKey *privateKey; // @synthesize privateKey=_privateKey;
@property struct __SecKey *publicKey; // @synthesize publicKey=_publicKey;
@property(retain) SecJWSEncoder *encoder; // @synthesize encoder=_encoder;
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain) NSObject<OS_dispatch_queue> *xpc_queue; // @synthesize xpc_queue=_xpc_queue;
@property(retain) NSString *acmeNewOrderURL; // @synthesize acmeNewOrderURL=_acmeNewOrderURL;
@property(retain) NSString *acmeNewNonceURL; // @synthesize acmeNewNonceURL=_acmeNewNonceURL;
@property(retain) NSString *acmeNewAccountURL; // @synthesize acmeNewAccountURL=_acmeNewAccountURL;
@property(retain) NSString *nextMessageURL; // @synthesize nextMessageURL=_nextMessageURL;
@property(retain) NSString *certificateURL; // @synthesize certificateURL=_certificateURL;
@property(retain) NSString *orderURL; // @synthesize orderURL=_orderURL;
@property(retain) NSString *finalizeOrderURL; // @synthesize finalizeOrderURL=_finalizeOrderURL;
@property(retain) NSString *challengeURL; // @synthesize challengeURL=_challengeURL;
@property(retain) NSString *authorizationURL; // @synthesize authorizationURL=_authorizationURL;
@property(retain) NSArray *authorizations; // @synthesize authorizations=_authorizations;
@property(retain) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain) NSString *token; // @synthesize token=_token;
@property(retain) NSString *account; // @synthesize account=_account;
@property(retain) NSString *location; // @synthesize location=_location;
@property(retain) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain) NSData *csr; // @synthesize csr=_csr;
@property(retain) NSData *attestation; // @synthesize attestation=_attestation;
@property(retain) NSArray *attestationChain; // @synthesize attestationChain=_attestationChain;
@property(retain) NSArray *attestationOids; // @synthesize attestationOids=_attestationOids;
@property(retain) NSDictionary *keyParams; // @synthesize keyParams=_keyParams;
@property(retain) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain) NSArray *subject; // @synthesize subject=_subject;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool requireAttestation; // @synthesize requireAttestation=_requireAttestation;
@property _Bool permitLocalIssuer; // @synthesize permitLocalIssuer=_permitLocalIssuer;
@property _Bool logAcmeCSR; // @synthesize logAcmeCSR=_logAcmeCSR;
@property long long state; // @synthesize state=_state;
- (struct __SecIdentity *)identityWithError:(id *)arg1;	// IMP=0x00000000000fe4b5
- (id)executeRequest;	// IMP=0x00000000000fe0bf
- (_Bool)valueForBooleanDefault:(id)arg1;	// IMP=0x00000000000fe048
- (id)processReply:(id)arg1;	// IMP=0x00000000000fd054
- (id)acmeRequest;	// IMP=0x00000000000fc9df
- (id)pollForStatus:(id)arg1 until:(id)arg2;	// IMP=0x00000000000fc9a1
- (id)sendRequestToXPCService:(id)arg1 response:(id *)arg2;	// IMP=0x00000000000fc346
- (int)errorStatusWithHTTPErrorCode:(int)arg1;	// IMP=0x00000000000fc2de
- (id)attestationChainPEMRepresentation;	// IMP=0x00000000000fc216
- (id)createCertificate;	// IMP=0x00000000000fc0f3
- (id)createAttestation;	// IMP=0x00000000000fbd7d
- (id)attestationObjectWithCertificates:(id)arg1;	// IMP=0x00000000000fb9c5
- (id)requestAttestationChainWithError:(id *)arg1;	// IMP=0x00000000000fb95b
- (_Bool)deviceAttestationSupported;	// IMP=0x00000000000fb953
- (id)createCSR;	// IMP=0x00000000000fb85c
- (id)createKeyPair;	// IMP=0x00000000000fb781
- (id)sanitizeParameters;	// IMP=0x00000000000fb650
- (id)sanitizeSubject;	// IMP=0x00000000000fb559
- (id)serialNumber;	// IMP=0x00000000000fb462
- (void)dealloc;	// IMP=0x00000000000fb3c1
- (id)initWithSubject:(id)arg1 parameters:(id)arg2;	// IMP=0x00000000000fb2f5

@end

