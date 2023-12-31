//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDRelatedSearchSuggestion, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDisplayHeaderSubstitute : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_interpretedQuery;	// 24 = 0x18
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _substituteType;	// 52 = 0x34
    struct {
        unsigned int has_substituteType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_interpretedQuery:1;
        unsigned int read_relatedSearchSuggestion:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000052afd8
- (unsigned long long)hash;	// IMP=0x000000000052af4d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052ae3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000052ac4e
- (void)writeTo:(id)arg1;	// IMP=0x000000000052aa34
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000052aa25
- (id)jsonRepresentation;	// IMP=0x000000000052a6a4
- (id)dictionaryRepresentation;	// IMP=0x000000000052a3d1
- (id)description;	// IMP=0x000000000052a322
- (id)initWithData:(id)arg1;	// IMP=0x00000000005299c3
- (id)init;	// IMP=0x0000000000529967

@end

