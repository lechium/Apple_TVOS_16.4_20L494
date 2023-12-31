//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSource : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_sourceId;	// 24 = 0x18
    NSString *_version;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _resultProviderId;	// 52 = 0x34
    struct {
        unsigned int has_resultProviderId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_sourceId:1;
        unsigned int read_version:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000cc1ac7
- (unsigned long long)hash;	// IMP=0x0000000000cc1a3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cc1929
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cc173d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cc1574
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cc1565
- (id)jsonRepresentation;	// IMP=0x0000000000cc138b
- (id)dictionaryRepresentation;	// IMP=0x0000000000cc0fcb
- (id)description;	// IMP=0x0000000000cc0f1c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cc0807
- (id)init;	// IMP=0x0000000000cc07ab

@end

