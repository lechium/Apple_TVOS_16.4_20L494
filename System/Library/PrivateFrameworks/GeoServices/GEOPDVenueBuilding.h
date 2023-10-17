//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVenueLabel, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueBuilding : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_62a50c50 _directoryGroupingIds;	// 24 = 0x18
    CDStruct_62a50c50 _levelIds;	// 48 = 0x30
    unsigned long long _buildingId;	// 72 = 0x48
    GEOPDVenueLabel *_label;	// 80 = 0x50
    unsigned long long _muid;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    struct {
        unsigned int has_buildingId:1;
        unsigned int has_muid:1;
        unsigned int read_unknownFields:1;
        unsigned int read_directoryGroupingIds:1;
        unsigned int read_levelIds:1;
        unsigned int read_label:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 108 = 0x6c
}

- (void).cxx_destruct;	// IMP=0x0000000000400b9e
- (unsigned long long)hash;	// IMP=0x0000000000400aef
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004009ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004007af
- (void)writeTo:(id)arg1;	// IMP=0x0000000000400570
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000400561
- (id)jsonRepresentation;	// IMP=0x000000000040044f
- (id)dictionaryRepresentation;	// IMP=0x000000000040003b
- (id)description;	// IMP=0x00000000003fff8c
- (void)dealloc;	// IMP=0x00000000003ff331
- (id)initWithData:(id)arg1;	// IMP=0x00000000003ff2d5
- (id)init;	// IMP=0x00000000003ff279

@end
