//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface PSIDSLinkHBHEncryptedPayload : PBCodable
{
    NSData *_authenticationTag;	// 8 = 0x8
    NSData *_cipherText;	// 16 = 0x10
    NSData *_initializationVector;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003b0c4
@property(retain, nonatomic) NSData *authenticationTag; // @synthesize authenticationTag=_authenticationTag;
@property(retain, nonatomic) NSData *cipherText; // @synthesize cipherText=_cipherText;
@property(retain, nonatomic) NSData *initializationVector; // @synthesize initializationVector=_initializationVector;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003afd2
- (unsigned long long)hash;	// IMP=0x000000000003af65
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003ae6d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003ada9
- (void)copyTo:(id)arg1;	// IMP=0x000000000003ad20
- (void)writeTo:(id)arg1;	// IMP=0x000000000003ac8e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003ac81
- (id)dictionaryRepresentation;	// IMP=0x000000000003aa4f
- (id)description;	// IMP=0x000000000003a9a0

@end
