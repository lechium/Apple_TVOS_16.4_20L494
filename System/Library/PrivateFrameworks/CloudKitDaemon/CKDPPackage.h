//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPAsset, NSMutableArray;

@interface CKDPPackage : PBCodable
{
    CKDPAsset *_manifest;	// 8 = 0x8
    NSMutableArray *_sections;	// 16 = 0x10
}

+ (Class)sectionsType;	// IMP=0x00100000002d7864
- (void).cxx_destruct;	// IMP=0x00000000002d8499
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) CKDPAsset *manifest; // @synthesize manifest=_manifest;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002d82bb
- (unsigned long long)hash;	// IMP=0x00000000002d826e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d81a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d7fcd
- (void)copyTo:(id)arg1;	// IMP=0x00000000002d7eeb
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d7d9f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d7d92
- (id)dictionaryRepresentation;	// IMP=0x00000000002d7924
- (id)description;	// IMP=0x00000000002d7875
- (id)sectionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002d7847
- (unsigned long long)sectionsCount;	// IMP=0x00000000002d782a
- (void)addSections:(id)arg1;	// IMP=0x00000000002d77c0
- (void)clearSections;	// IMP=0x00000000002d77a3
@property(readonly, nonatomic) _Bool hasManifest;

@end

