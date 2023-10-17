//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOMapRegion, GEOPDSearchMultiMapRegion, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchLocationScope : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOLatLng *_center;	// 16 = 0x10
    double _displayRegionLimitKm;	// 24 = 0x18
    GEOMapRegion *_mapRegion;	// 32 = 0x20
    GEOPDSearchMultiMapRegion *_multiMapRegion;	// 40 = 0x28
    double _scopeDistanceLimitKm;	// 48 = 0x30
    NSString *_winDistanceGeohash4;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    int _locationScopeType;	// 76 = 0x4c
    int _scopeDistanceType;	// 80 = 0x50
    float _winDistanceKmMean;	// 84 = 0x54
    float _winDistanceKmP50;	// 88 = 0x58
    float _winDistanceKmP80;	// 92 = 0x5c
    float _winDistanceKmP90;	// 96 = 0x60
    float _winDistanceKmP95;	// 100 = 0x64
    float _winDistanceKmP99;	// 104 = 0x68
    _Bool _hasBelowStreetGeo;	// 108 = 0x6c
    _Bool _isBlendingScope;	// 109 = 0x6d
    _Bool _isMixedIntent;	// 110 = 0x6e
    struct {
        unsigned int has_displayRegionLimitKm:1;
        unsigned int has_scopeDistanceLimitKm:1;
        unsigned int has_locationScopeType:1;
        unsigned int has_scopeDistanceType:1;
        unsigned int has_winDistanceKmMean:1;
        unsigned int has_winDistanceKmP50:1;
        unsigned int has_winDistanceKmP80:1;
        unsigned int has_winDistanceKmP90:1;
        unsigned int has_winDistanceKmP95:1;
        unsigned int has_winDistanceKmP99:1;
        unsigned int has_hasBelowStreetGeo:1;
        unsigned int has_isBlendingScope:1;
        unsigned int has_isMixedIntent:1;
        unsigned int read_center:1;
        unsigned int read_mapRegion:1;
        unsigned int read_multiMapRegion:1;
        unsigned int read_winDistanceGeohash4:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000004103a1
- (unsigned long long)hash;	// IMP=0x000000000040f9ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000040f5f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040f225
- (void)writeTo:(id)arg1;	// IMP=0x000000000040ee91
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000040ee84
- (id)jsonRepresentation;	// IMP=0x000000000040ea04
- (id)dictionaryRepresentation;	// IMP=0x000000000040df67
- (id)description;	// IMP=0x000000000040deb8
- (id)initWithData:(id)arg1;	// IMP=0x000000000040cf88
- (id)init;	// IMP=0x000000000040cf2c

@end

