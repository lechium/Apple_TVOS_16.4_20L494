//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOVectorTileRequest : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_accessKey;	// 16 = 0x10
    NSString *_countryCode;	// 24 = 0x18
    NSString *_languageCode;	// 32 = 0x20
    unsigned long long _lineId;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    float _latitudeHint;	// 60 = 0x3c
    float _longitudeHint;	// 64 = 0x40
    unsigned int _scale;	// 68 = 0x44
    unsigned int _size;	// 72 = 0x48
    unsigned int _style;	// 76 = 0x4c
    unsigned int _version;	// 80 = 0x50
    unsigned int _x;	// 84 = 0x54
    unsigned int _y;	// 88 = 0x58
    unsigned int _z;	// 92 = 0x5c
    _Bool _preflight;	// 96 = 0x60
    _Bool _venuesPreflight;	// 97 = 0x61
    _Bool _vloc;	// 98 = 0x62
    struct {
        unsigned int has_lineId:1;
        unsigned int has_latitudeHint:1;
        unsigned int has_longitudeHint:1;
        unsigned int has_scale:1;
        unsigned int has_size:1;
        unsigned int has_style:1;
        unsigned int has_version:1;
        unsigned int has_x:1;
        unsigned int has_y:1;
        unsigned int has_z:1;
        unsigned int has_preflight:1;
        unsigned int has_venuesPreflight:1;
        unsigned int has_vloc:1;
        unsigned int read_accessKey:1;
        unsigned int read_countryCode:1;
        unsigned int read_languageCode:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 100 = 0x64
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000eb0729
- (void).cxx_destruct;	// IMP=0x0000000000eb2021
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000eb1e05
- (unsigned long long)hash;	// IMP=0x0000000000eb19f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000eb163a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000eb12b9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000eb1041
- (void)writeTo:(id)arg1;	// IMP=0x0000000000eb0cd5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000eb0cc8
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000eb04de
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000eb04cc
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000eafd5c
- (id)jsonRepresentation;	// IMP=0x0000000000eafd4d
- (id)dictionaryRepresentation;	// IMP=0x0000000000eaf73d
- (id)description;	// IMP=0x0000000000eaf68e
@property(nonatomic) _Bool hasVloc;
@property(nonatomic) _Bool vloc;
@property(nonatomic) _Bool hasVenuesPreflight;
@property(nonatomic) _Bool venuesPreflight;
@property(retain, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(nonatomic) _Bool hasLatitudeHint;
@property(nonatomic) float latitudeHint;
@property(nonatomic) _Bool hasLongitudeHint;
@property(nonatomic) float longitudeHint;
@property(retain, nonatomic) NSString *accessKey;
@property(readonly, nonatomic) _Bool hasAccessKey;
@property(nonatomic) _Bool hasScale;
@property(nonatomic) unsigned int scale;
@property(nonatomic) _Bool hasSize;
@property(nonatomic) unsigned int size;
@property(nonatomic) _Bool hasLineId;
@property(nonatomic) unsigned long long lineId;
@property(nonatomic) _Bool hasPreflight;
@property(nonatomic) _Bool preflight;
@property(retain, nonatomic) NSString *languageCode;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(nonatomic) _Bool hasStyle;
@property(nonatomic) unsigned int style;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) unsigned int version;
@property(nonatomic) _Bool hasZ;
@property(nonatomic) unsigned int z;
@property(nonatomic) _Bool hasY;
@property(nonatomic) unsigned int y;
@property(nonatomic) _Bool hasX;
@property(nonatomic) unsigned int x;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000eadf88
- (id)init;	// IMP=0x0000000000eadf2c

@end

