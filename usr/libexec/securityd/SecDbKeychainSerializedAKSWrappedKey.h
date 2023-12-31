//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SecDbKeychainSerializedAKSWrappedKey : PBCodable
{
    NSData *_refKeyBlob;	// 8 = 0x8
    unsigned int _type;	// 16 = 0x10
    NSData *_wrappedKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001523ee
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSData *refKeyBlob; // @synthesize refKeyBlob=_refKeyBlob;
@property(retain, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000152313
- (unsigned long long)hash;	// IMP=0x00100000001522b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001521d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000015212d
- (void)copyTo:(id)arg1;	// IMP=0x00100000001520c1
- (void)writeTo:(id)arg1;	// IMP=0x0010000000152051
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000151e3a
- (id)dictionaryRepresentation;	// IMP=0x0010000000151d63
- (id)description;	// IMP=0x0010000000151cb4
@property(readonly, nonatomic) _Bool hasRefKeyBlob;

@end

