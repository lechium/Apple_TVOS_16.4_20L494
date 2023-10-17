//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVenueIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchVenueFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDVenueIdentifier *_venueFilter;	// 16 = 0x10
    int _venueSearchType;	// 24 = 0x18
    struct {
        unsigned int has_venueSearchType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000068814e
- (unsigned long long)hash;	// IMP=0x00000000006880fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000068803a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000687f8c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000687f0d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000687efe
- (id)jsonRepresentation;	// IMP=0x0000000000687dec
- (id)dictionaryRepresentation;	// IMP=0x0000000000687b6c
- (id)description;	// IMP=0x0000000000687abd

@end
