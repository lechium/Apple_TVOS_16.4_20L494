//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDViewportInfo, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDNearbySearchParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDViewportInfo *_viewportInfo;	// 16 = 0x10
    unsigned int _maxResults;	// 24 = 0x18
    int _sortOrder;	// 28 = 0x1c
    struct {
        unsigned int has_maxResults:1;
        unsigned int has_sortOrder:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000056d274
- (unsigned long long)hash;	// IMP=0x000000000056d20b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000056d124
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000056d061
- (void)writeTo:(id)arg1;	// IMP=0x000000000056cfb8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000056cfa9
- (id)jsonRepresentation;	// IMP=0x000000000056caba
- (id)dictionaryRepresentation;	// IMP=0x000000000056c7cc
- (id)description;	// IMP=0x000000000056c71d

@end

