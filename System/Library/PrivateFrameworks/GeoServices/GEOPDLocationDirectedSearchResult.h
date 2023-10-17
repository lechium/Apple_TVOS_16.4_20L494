//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationDirectedSearchResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_disambiguationLabels;	// 24 = 0x18
    GEOMapRegion *_displayMapRegion;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_disambiguationLabels:1;
        unsigned int read_displayMapRegion:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000054fef6
- (unsigned long long)hash;	// IMP=0x000000000054fe9f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000054fdbd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000054fad7
- (void)writeTo:(id)arg1;	// IMP=0x000000000054f827
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000054f818
- (id)jsonRepresentation;	// IMP=0x000000000054f497
- (id)dictionaryRepresentation;	// IMP=0x000000000054f058
- (id)description;	// IMP=0x000000000054efa9
- (id)initWithData:(id)arg1;	// IMP=0x000000000054e4aa
- (id)init;	// IMP=0x000000000054e44e

@end

