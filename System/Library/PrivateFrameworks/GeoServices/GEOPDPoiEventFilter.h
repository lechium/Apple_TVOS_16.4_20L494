//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiEventFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _includeEventCategoryId;	// 16 = 0x10
    struct {
        unsigned int has_includeEventCategoryId:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000c9bb31
- (unsigned long long)hash;	// IMP=0x0000000000c9bb06
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c9ba64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c9b9e4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c9b981
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c9b972
- (id)jsonRepresentation;	// IMP=0x0000000000c9b860
- (id)dictionaryRepresentation;	// IMP=0x0000000000c9b68c
- (id)description;	// IMP=0x0000000000c9b5dd

@end
