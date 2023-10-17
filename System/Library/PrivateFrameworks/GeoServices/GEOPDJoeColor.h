//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDJoeColor : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_backgroundColor;	// 24 = 0x18
    NSString *_primaryTextColor;	// 32 = 0x20
    NSString *_quaternaryTextColor;	// 40 = 0x28
    NSString *_secondaryTextColor;	// 48 = 0x30
    NSString *_tertiaryTextColor;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    _Bool _curated;	// 76 = 0x4c
    struct {
        unsigned int has_curated:1;
        unsigned int read_unknownFields:1;
        unsigned int read_backgroundColor:1;
        unsigned int read_primaryTextColor:1;
        unsigned int read_quaternaryTextColor:1;
        unsigned int read_secondaryTextColor:1;
        unsigned int read_tertiaryTextColor:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000c3e692
- (unsigned long long)hash;	// IMP=0x0000000000c3e5b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c3e402
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c3e181
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c3df55
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c3df46
- (id)jsonRepresentation;	// IMP=0x0000000000c3de34
- (id)dictionaryRepresentation;	// IMP=0x0000000000c3d850
- (id)description;	// IMP=0x0000000000c3d7a1
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c3ccaa
- (id)init;	// IMP=0x0000000000c3cc4e

@end

