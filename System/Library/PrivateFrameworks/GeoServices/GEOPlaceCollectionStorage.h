//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAttribution, GEOPDPlaceCollection, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPlaceCollectionStorage : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAttribution *_attribution;	// 24 = 0x18
    GEOPDPlaceCollection *_placeCollection;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_attribution:1;
        unsigned int read_placeCollection:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000001091cc7
- (unsigned long long)hash;	// IMP=0x0000000001091c70
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001091b8e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010919db
- (void)writeTo:(id)arg1;	// IMP=0x00000000010917e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010917d7
- (id)jsonRepresentation;	// IMP=0x0000000001091464
- (id)dictionaryRepresentation;	// IMP=0x00000000010910bb
- (id)description;	// IMP=0x000000000109100c
- (id)initWithData:(id)arg1;	// IMP=0x0000000001090984
- (id)init;	// IMP=0x0000000001090928

@end

