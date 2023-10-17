//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface PCSManateeShareInvitation : PBCodable
{
    NSData *_exportedPCSData;	// 8 = 0x8
    NSData *_shareePublicKeyData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000418e2
@property(retain, nonatomic) NSData *shareePublicKeyData; // @synthesize shareePublicKeyData=_shareePublicKeyData;
@property(retain, nonatomic) NSData *exportedPCSData; // @synthesize exportedPCSData=_exportedPCSData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000041835
- (unsigned long long)hash;	// IMP=0x00000000000417e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000041720
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000041682
- (void)copyTo:(id)arg1;	// IMP=0x000000000004161f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000415c2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000415b5
- (id)dictionaryRepresentation;	// IMP=0x000000000004139d
- (id)description;	// IMP=0x00000000000412ee
@property(readonly, nonatomic) _Bool hasShareePublicKeyData;
@property(readonly, nonatomic) _Bool hasExportedPCSData;

@end
