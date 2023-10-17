//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSBaseMessage.h>

@class NSArray, NSData, NSMutableArray, NSString;

@interface IDSAuthenticateUsersMessage : IDSBaseMessage
{
    NSData *_pushToken;	// 232 = 0xe8
    NSString *_realm;	// 240 = 0xf0
    NSMutableArray *_requests;	// 248 = 0xf8
    NSArray *_authenticationResponses;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x002000000037c190
@property(retain, nonatomic) NSArray *authenticationResponses; // @synthesize authenticationResponses=_authenticationResponses;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(copy) NSString *realm; // @synthesize realm=_realm;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x001000000037bc50
- (void)_addRequestWithID:(id)arg1 cert:(id)arg2 sig:(id)arg3 csr:(id)arg4 tag:(id)arg5;	// IMP=0x001000000037b740
- (void)addRequestWithID:(id)arg1 sig:(id)arg2 csr:(id)arg3 tag:(id)arg4;	// IMP=0x001000000037b660
- (void)addRequestWithID:(id)arg1 cert:(id)arg2;	// IMP=0x001000000037b5d0
- (_Bool)allowsServerProvidedLenientAnisetteTimeout;	// IMP=0x001000000037b5b0
- (double)anisetteHeadersTimeout;	// IMP=0x001000000037b590
- (id)additionalMessageHeaders;	// IMP=0x001000000037b340
- (id)messageBody;	// IMP=0x001000000037afc0
- (id)requiredKeys;	// IMP=0x001000000037af20
- (id)bagKey;	// IMP=0x001000000037af00
- (_Bool)requiresPushTokenKeys;	// IMP=0x001000000037aee0
- (long long)responseCommand;	// IMP=0x001000000037aec0
- (long long)command;	// IMP=0x001000000037aea0
- (_Bool)wantsBinaryPush;	// IMP=0x001000000037ae80
- (_Bool)wantsCompressedBody;	// IMP=0x001000000037ae60
- (_Bool)wantsHTTPHeaders;	// IMP=0x001000000037ae40
- (_Bool)wantsBagKey;	// IMP=0x001000000037ae20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000037aca0
- (id)init;	// IMP=0x001000000037ab70

@end

