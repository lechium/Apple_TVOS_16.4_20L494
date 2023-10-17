//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRatingData : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_ratings;	// 24 = 0x18
    NSString *_vendorId;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_ratings:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000cacf31
- (unsigned long long)hash;	// IMP=0x0000000000caceda
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cacdf8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cacb01
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cac852
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cac843
- (id)jsonRepresentation;	// IMP=0x0000000000cac731
- (id)dictionaryRepresentation;	// IMP=0x0000000000cac349
- (id)description;	// IMP=0x0000000000cac29a
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cab7e9
- (id)init;	// IMP=0x0000000000cab78d

@end

