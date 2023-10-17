//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSet, NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchCategoryIntent : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_canonicalNames;	// 16 = 0x10
    NSMutableArray *_categoryIds;	// 24 = 0x18
    NSMutableArray *_expandedCategoryIds;	// 32 = 0x20
    NSMutableArray *_featureMaps;	// 40 = 0x28
    NSMutableArray *_negativeCategorys;	// 48 = 0x30
    GEOPDSearchTokenSet *_tokenSet;	// 56 = 0x38
    NSString *_trigger;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_canonicalNames:1;
        unsigned int read_categoryIds:1;
        unsigned int read_expandedCategoryIds:1;
        unsigned int read_featureMaps:1;
        unsigned int read_negativeCategorys:1;
        unsigned int read_tokenSet:1;
        unsigned int read_trigger:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

- (void).cxx_destruct;	// IMP=0x0000000000a98bed
- (unsigned long long)hash;	// IMP=0x0000000000a98b0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a98929
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a981f4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a97b93
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a97b84
- (id)jsonRepresentation;	// IMP=0x0000000000a97906
- (id)dictionaryRepresentation;	// IMP=0x0000000000a972d8
- (id)description;	// IMP=0x0000000000a97229
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a96109
- (id)init;	// IMP=0x0000000000a960ad

@end

