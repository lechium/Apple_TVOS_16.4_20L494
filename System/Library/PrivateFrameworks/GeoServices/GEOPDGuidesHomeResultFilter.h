//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDGuidesHomeResultFilterTypeConcept, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuidesHomeResultFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDGuidesHomeResultFilterTypeConcept *_filterConcept;	// 24 = 0x18
    NSMutableArray *_subFilters;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _filterType;	// 52 = 0x34
    struct {
        unsigned int has_filterType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_filterConcept:1;
        unsigned int read_subFilters:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000543923
- (unsigned long long)hash;	// IMP=0x0000000000543898
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000543785
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000543469
- (void)writeTo:(id)arg1;	// IMP=0x0000000000543198
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000543189
- (id)jsonRepresentation;	// IMP=0x0000000000542942
- (id)dictionaryRepresentation;	// IMP=0x0000000000542479
- (id)description;	// IMP=0x00000000005423ca
- (id)initWithData:(id)arg1;	// IMP=0x00000000005417e2
- (id)init;	// IMP=0x0000000000541786

@end

