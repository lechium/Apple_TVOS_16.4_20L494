//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CKDPPackageManifestHeader : PBCodable
{
    NSData *_signature;	// 8 = 0x8
    int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000015f320
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015f288
- (unsigned long long)hash;	// IMP=0x000000000015f23b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015f176
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015f0e6
- (void)copyTo:(id)arg1;	// IMP=0x000000000015f083
- (void)writeTo:(id)arg1;	// IMP=0x000000000015f01f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015ee11
- (id)dictionaryRepresentation;	// IMP=0x000000000015ed53
- (id)description;	// IMP=0x000000000015eca4
@property(readonly, nonatomic) _Bool hasSignature;
@property(nonatomic) _Bool hasVersion;

@end

