//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchSpatialLookupResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_spatialEventLookupResults;	// 24 = 0x18
    NSMutableArray *_spatialPlaceLookupResults;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _statusCode;	// 52 = 0x34
    struct {
        unsigned int has_statusCode:1;
        unsigned int read_unknownFields:1;
        unsigned int read_spatialEventLookupResults:1;
        unsigned int read_spatialPlaceLookupResults:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000513426
- (unsigned long long)hash;	// IMP=0x000000000051339b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000513288
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000512e7e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000512afa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000512aeb
- (id)jsonRepresentation;	// IMP=0x000000000051228c
- (id)dictionaryRepresentation;	// IMP=0x0000000000511bc5
- (id)description;	// IMP=0x0000000000511b16
- (id)initWithData:(id)arg1;	// IMP=0x0000000000510d2f
- (id)init;	// IMP=0x0000000000510cd3

@end

