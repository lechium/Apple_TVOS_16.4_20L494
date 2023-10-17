//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEnrichmentData : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_entitys;	// 24 = 0x18
    NSData *_placecardEnrichmentMetadata;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_entitys:1;
        unsigned int read_placecardEnrichmentMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (id)enrichmentDataWithPlaceData:(id)arg1;	// IMP=0x0010000000a44080
- (void).cxx_destruct;	// IMP=0x0000000000c0a8e7
- (unsigned long long)hash;	// IMP=0x0000000000c0a890
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c0a7ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c0a4b7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c0a208
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c0a1f9
- (id)jsonRepresentation;	// IMP=0x0000000000c09db0
- (id)dictionaryRepresentation;	// IMP=0x0000000000c09989
- (id)description;	// IMP=0x0000000000c098da
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c08e0c
- (id)init;	// IMP=0x0000000000c08db0

@end
