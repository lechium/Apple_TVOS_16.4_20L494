//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlacecardEnrichmentParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_enrichmentInfos;	// 24 = 0x18
    GEOPDMapsIdentifier *_mapsId;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    _Bool _skipHtml;	// 52 = 0x34
    struct {
        unsigned int has_skipHtml:1;
        unsigned int read_unknownFields:1;
        unsigned int read_enrichmentInfos:1;
        unsigned int read_mapsId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000005ecfb8
- (unsigned long long)hash;	// IMP=0x00000000005ecf39
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005ece1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005ecb00
- (void)writeTo:(id)arg1;	// IMP=0x00000000005ec82b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005ec81c
- (id)jsonRepresentation;	// IMP=0x00000000005ec70a
- (id)dictionaryRepresentation;	// IMP=0x00000000005ec260
- (id)description;	// IMP=0x00000000005ec1b1
- (id)initWithData:(id)arg1;	// IMP=0x00000000005eb591
- (id)init;	// IMP=0x00000000005eb535

@end

