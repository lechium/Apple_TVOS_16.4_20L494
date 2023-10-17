//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface PCSManateePrivateKey : PBCodable
{
    NSData *_privateKey;	// 8 = 0x8
    NSData *_publicKeyInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004442e
@property(retain, nonatomic) NSData *publicKeyInfo; // @synthesize publicKeyInfo=_publicKeyInfo;
@property(retain, nonatomic) NSData *privateKey; // @synthesize privateKey=_privateKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000044381
- (unsigned long long)hash;	// IMP=0x0000000000044334
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004426c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000441ce
- (void)copyTo:(id)arg1;	// IMP=0x000000000004416b
- (void)writeTo:(id)arg1;	// IMP=0x000000000004410e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000044101
- (id)dictionaryRepresentation;	// IMP=0x0000000000043ee9
- (id)description;	// IMP=0x0000000000043e3a
@property(readonly, nonatomic) _Bool hasPublicKeyInfo;
@property(readonly, nonatomic) _Bool hasPrivateKey;

@end

