//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDGuidesLocationEntry, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuidesLocationsSuggestionResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_entrys;	// 24 = 0x18
    GEOPDGuidesLocationEntry *_exploreGuidesEntry;	// 32 = 0x20
    NSString *_exploreImageUrlTemplate;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_entrys:1;
        unsigned int read_exploreGuidesEntry:1;
        unsigned int read_exploreImageUrlTemplate:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000546646
- (unsigned long long)hash;	// IMP=0x00000000005465cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005464b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000546197
- (void)writeTo:(id)arg1;	// IMP=0x0000000000545d51
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000545d42
- (id)jsonRepresentation;	// IMP=0x00000000005459c1
- (id)dictionaryRepresentation;	// IMP=0x000000000054549c
- (id)description;	// IMP=0x00000000005453ed
- (id)initWithData:(id)arg1;	// IMP=0x0000000000544826
- (id)init;	// IMP=0x00000000005447ca

@end
