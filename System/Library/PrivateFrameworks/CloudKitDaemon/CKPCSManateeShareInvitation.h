//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CKPCSManateeShareInvitation : PBCodable
{
    NSData *_exportedPCSData;	// 8 = 0x8
    NSData *_shareePublicKeyData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e9b94
@property(retain, nonatomic) NSData *shareePublicKeyData; // @synthesize shareePublicKeyData=_shareePublicKeyData;
@property(retain, nonatomic) NSData *exportedPCSData; // @synthesize exportedPCSData=_exportedPCSData;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001e9ae7
- (unsigned long long)hash;	// IMP=0x00000000001e9a9a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e99d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e9934
- (void)copyTo:(id)arg1;	// IMP=0x00000000001e98d1
- (void)writeTo:(id)arg1;	// IMP=0x00000000001e9874
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001e96ce
- (id)dictionaryRepresentation;	// IMP=0x00000000001e964b
- (id)description;	// IMP=0x00000000001e959c
@property(readonly, nonatomic) _Bool hasShareePublicKeyData;
@property(readonly, nonatomic) _Bool hasExportedPCSData;

@end

