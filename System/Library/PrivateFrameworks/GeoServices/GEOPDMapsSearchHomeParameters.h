//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDCollectionSuggestionParameters, GEOPDGuidesLocationsSuggestionParameters, GEOPDPlaceSuggestionParameters, GEOPDPublisherSuggestionParameters, GEOPDSearchBrowseCategorySuggestionParameters, GEOPDSearchOriginationInfo, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsSearchHomeParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _supportedSectionTypes;	// 24 = 0x18
    GEOPDCollectionSuggestionParameters *_collectionSuggestionParameters;	// 48 = 0x30
    GEOPDGuidesLocationsSuggestionParameters *_guidesLocationsSuggestionParameters;	// 56 = 0x38
    GEOPDPlaceSuggestionParameters *_placeSuggestionParameters;	// 64 = 0x40
    GEOPDPublisherSuggestionParameters *_publisherSuggestionParameters;	// 72 = 0x48
    GEOPDSearchBrowseCategorySuggestionParameters *_searchBrowseCategorySuggestionParameters;	// 80 = 0x50
    GEOPDSearchOriginationInfo *_searchOriginationInfo;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_supportedSectionTypes:1;
        unsigned int read_collectionSuggestionParameters:1;
        unsigned int read_guidesLocationsSuggestionParameters:1;
        unsigned int read_placeSuggestionParameters:1;
        unsigned int read_publisherSuggestionParameters:1;
        unsigned int read_searchBrowseCategorySuggestionParameters:1;
        unsigned int read_searchOriginationInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 108 = 0x6c
}

- (void).cxx_destruct;	// IMP=0x00000000005582e8
- (unsigned long long)hash;	// IMP=0x0000000000557df9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000557c2d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005579b1
- (void)writeTo:(id)arg1;	// IMP=0x00000000005574f7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005574e8
- (id)jsonRepresentation;	// IMP=0x00000000005566a8
- (id)dictionaryRepresentation;	// IMP=0x00000000005560f5
- (id)description;	// IMP=0x0000000000556046
- (void)dealloc;	// IMP=0x0000000000554bbd
- (id)initWithData:(id)arg1;	// IMP=0x0000000000554b61
- (id)init;	// IMP=0x0000000000554b05

@end

