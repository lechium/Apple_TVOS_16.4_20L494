//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface PCSEnvelopedKeyMaterial : PBCodable
{
    NSData *_encryptedSeed;	// 8 = 0x8
    NSData *_masterKeyId;	// 16 = 0x10
    int _version;	// 24 = 0x18
    struct {
        unsigned int version:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000002051c
@property(retain, nonatomic) NSData *encryptedSeed; // @synthesize encryptedSeed=_encryptedSeed;
@property(retain, nonatomic) NSData *masterKeyId; // @synthesize masterKeyId=_masterKeyId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002044f
- (unsigned long long)hash;	// IMP=0x00000000000203cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000202da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020219
- (void)copyTo:(id)arg1;	// IMP=0x0000000000020196
- (void)writeTo:(id)arg1;	// IMP=0x0000000000020115
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000020108
- (id)dictionaryRepresentation;	// IMP=0x000000000001fdc9
- (id)description;	// IMP=0x000000000001fd1a
@property(readonly, nonatomic) _Bool hasEncryptedSeed;
@property(readonly, nonatomic) _Bool hasMasterKeyId;
- (int)StringAsVersion:(id)arg1;	// IMP=0x000000000001fc8e
- (id)versionAsString:(int)arg1;	// IMP=0x000000000001fc39
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) int version; // @synthesize version=_version;

@end
