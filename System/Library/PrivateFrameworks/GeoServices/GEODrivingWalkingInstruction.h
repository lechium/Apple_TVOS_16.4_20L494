//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOFormattedString, GEOPBTransitArtwork, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEODrivingWalkingInstruction : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPBTransitArtwork *_artwork;	// 24 = 0x18
    NSMutableArray *_continueCommands;	// 32 = 0x20
    NSMutableArray *_mergeCommands;	// 40 = 0x28
    NSMutableArray *_normalCommands;	// 48 = 0x30
    GEOFormattedString *_title;	// 56 = 0x38
    GEOFormattedString *_waypointInfo;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_artwork:1;
        unsigned int read_continueCommands:1;
        unsigned int read_mergeCommands:1;
        unsigned int read_normalCommands:1;
        unsigned int read_title:1;
        unsigned int read_waypointInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

- (void).cxx_destruct;	// IMP=0x00000000008b315d
- (unsigned long long)hash;	// IMP=0x00000000008b2991
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008b27e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008b2287
- (void)writeTo:(id)arg1;	// IMP=0x00000000008b1a37
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008b1a28
- (id)jsonRepresentation;	// IMP=0x00000000008b0cff
- (id)dictionaryRepresentation;	// IMP=0x00000000008b029f
- (id)description;	// IMP=0x00000000008b01f0
- (id)initWithData:(id)arg1;	// IMP=0x00000000008aec6e
- (id)init;	// IMP=0x00000000008aec12

@end

