//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryFuzzyMatchV2Metadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _fuzzyV2Scores;	// 16 = 0x10
    CDStruct_95bda58d _rewriteTypes;	// 40 = 0x28
    NSMutableArray *_rewrittenQueries;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    _Bool _pruneFuzzyV2Results;	// 84 = 0x54
    _Bool _useFuzzyV1;	// 85 = 0x55
    struct {
        unsigned int has_pruneFuzzyV2Results:1;
        unsigned int has_useFuzzyV1:1;
        unsigned int read_fuzzyV2Scores:1;
        unsigned int read_rewriteTypes:1;
        unsigned int read_rewrittenQueries:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000ac3040
- (unsigned long long)hash;	// IMP=0x0000000000ac2f96
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ac2e49
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ac2b1b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ac27f3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ac27e4
- (id)jsonRepresentation;	// IMP=0x0000000000ac2566
- (id)dictionaryRepresentation;	// IMP=0x0000000000ac22a3
- (id)description;	// IMP=0x0000000000ac21f4
- (void)dealloc;	// IMP=0x0000000000ac1790
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ac1734
- (id)init;	// IMP=0x0000000000ac16d8

@end

