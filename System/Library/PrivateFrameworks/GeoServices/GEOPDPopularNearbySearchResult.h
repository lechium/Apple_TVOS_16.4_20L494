//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPopularNearbySearchResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOMapRegion *_displayMapRegion;	// 24 = 0x18
    NSString *_sectionHeader;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    _Bool _isChainResultSet;	// 52 = 0x34
    struct {
        unsigned int has_isChainResultSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_sectionHeader:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000005f2323
- (unsigned long long)hash;	// IMP=0x00000000005f22a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005f2185
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005f1f92
- (void)writeTo:(id)arg1;	// IMP=0x00000000005f1dc1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005f1db2
- (id)jsonRepresentation;	// IMP=0x00000000005f1ca0
- (id)dictionaryRepresentation;	// IMP=0x00000000005f19e7
- (id)description;	// IMP=0x00000000005f1938
- (id)initWithData:(id)arg1;	// IMP=0x00000000005f0f18
- (id)init;	// IMP=0x00000000005f0ebc

@end

