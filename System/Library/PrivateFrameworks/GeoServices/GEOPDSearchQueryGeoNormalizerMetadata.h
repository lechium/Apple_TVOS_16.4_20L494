//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryGeoNormalizerMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _normalizers;	// 16 = 0x10
    NSString *_floor;	// 40 = 0x28
    NSString *_mailStop;	// 48 = 0x30
    NSString *_poPox;	// 56 = 0x38
    NSString *_unitNumber;	// 64 = 0x40
    NSString *_unitTypeId;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    struct {
        unsigned int read_normalizers:1;
        unsigned int read_floor:1;
        unsigned int read_mailStop:1;
        unsigned int read_poPox:1;
        unsigned int read_unitNumber:1;
        unsigned int read_unitTypeId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

- (void).cxx_destruct;	// IMP=0x0000000000ac526f
- (unsigned long long)hash;	// IMP=0x0000000000ac51ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ac5017
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ac4dd1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ac4baf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ac4ba0
- (id)jsonRepresentation;	// IMP=0x0000000000ac4922
- (id)dictionaryRepresentation;	// IMP=0x0000000000ac4327
- (id)description;	// IMP=0x0000000000ac4278
- (void)dealloc;	// IMP=0x0000000000ac3a90
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ac3a34
- (id)init;	// IMP=0x0000000000ac39d8

@end

