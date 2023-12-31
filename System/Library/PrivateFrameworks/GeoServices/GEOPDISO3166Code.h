//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLngE7, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDISO3166Code : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_countryCode;	// 24 = 0x18
    GEOLatLngE7 *_location;	// 32 = 0x20
    NSString *_subdivisonCode;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    _Bool _isDisputed;	// 60 = 0x3c
    struct {
        unsigned int has_isDisputed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_countryCode:1;
        unsigned int read_location:1;
        unsigned int read_subdivisonCode:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000c3bcea
- (unsigned long long)hash;	// IMP=0x0000000000c3bc46
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c3baf7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c3b8da
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c3b6ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c3b6dd
- (id)jsonRepresentation;	// IMP=0x0000000000c3b503
- (id)dictionaryRepresentation;	// IMP=0x0000000000c3b20c
- (id)description;	// IMP=0x0000000000c3b15d
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c3a62c
- (id)init;	// IMP=0x0000000000c3a5d0

@end

