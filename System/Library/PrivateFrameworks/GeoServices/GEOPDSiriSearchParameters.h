//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOAddress, GEOPDIndexQueryNode, GEOPDRecentRouteInfo, GEOPDViewportInfo, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSiriSearchParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOAddress *_address;	// 24 = 0x18
    NSMutableArray *_businessCategoryFilters;	// 32 = 0x20
    GEOPDIndexQueryNode *_indexFilter;	// 40 = 0x28
    GEOPDRecentRouteInfo *_recentRouteInfo;	// 48 = 0x30
    NSString *_searchString;	// 56 = 0x38
    NSMutableArray *_searchSubstringDescriptors;	// 64 = 0x40
    GEOPDViewportInfo *_viewportInfo;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    unsigned int _maxResultCount;	// 92 = 0x5c
    int _sortOrder;	// 96 = 0x60
    _Bool _isStrictMapRegion;	// 100 = 0x64
    _Bool _structuredSearch;	// 101 = 0x65
    struct {
        unsigned int has_maxResultCount:1;
        unsigned int has_sortOrder:1;
        unsigned int has_isStrictMapRegion:1;
        unsigned int has_structuredSearch:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_businessCategoryFilters:1;
        unsigned int read_indexFilter:1;
        unsigned int read_recentRouteInfo:1;
        unsigned int read_searchString:1;
        unsigned int read_searchSubstringDescriptors:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000620ebd
- (unsigned long long)hash;	// IMP=0x0000000000620d3d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000620a7b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000620552
- (void)writeTo:(id)arg1;	// IMP=0x00000000006200d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006200c1
- (id)jsonRepresentation;	// IMP=0x000000000061ffaf
- (id)dictionaryRepresentation;	// IMP=0x000000000061f4ca
- (id)description;	// IMP=0x000000000061f41b
- (id)initWithData:(id)arg1;	// IMP=0x000000000061de4d
- (id)init;	// IMP=0x000000000061ddf1

@end

