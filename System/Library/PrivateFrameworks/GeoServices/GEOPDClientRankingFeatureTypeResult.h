//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureTypeResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _resultFeature;	// 16 = 0x10
    struct {
        unsigned int has_resultFeature:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000006697ef
- (unsigned long long)hash;	// IMP=0x00000000006697c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000669732
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006696b2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000669650
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000669641
- (id)jsonRepresentation;	// IMP=0x00000000006690ad
- (id)dictionaryRepresentation;	// IMP=0x0000000000668ebe
- (id)description;	// IMP=0x0000000000668e0f

@end
