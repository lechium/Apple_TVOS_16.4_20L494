//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialPlaceLookupResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOMapRegion *_displayMapRegion;	// 24 = 0x18
    NSMutableArray *_places;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _statusCode;	// 52 = 0x34
    struct {
        unsigned int has_statusCode:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_places:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000006264e1
- (unsigned long long)hash;	// IMP=0x0000000000626456
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000626343
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000626015
- (void)writeTo:(id)arg1;	// IMP=0x0000000000625d45
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000625d36
- (id)jsonRepresentation;	// IMP=0x0000000000625c24
- (id)dictionaryRepresentation;	// IMP=0x00000000006256e1
- (id)description;	// IMP=0x0000000000625632
- (id)initWithData:(id)arg1;	// IMP=0x0000000000624a0c
- (id)init;	// IMP=0x00000000006249b0

@end

