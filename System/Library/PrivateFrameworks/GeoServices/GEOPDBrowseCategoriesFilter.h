//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBrowseCategoriesFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _includeAllCategoriesForVenue;	// 16 = 0x10
    struct {
        unsigned int has_includeAllCategoriesForVenue:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000dfe48a
- (unsigned long long)hash;	// IMP=0x0000000000dfe45c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000dfe3ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000dfe33a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000dfe2d7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000dfe2c8
- (id)jsonRepresentation;	// IMP=0x0000000000dfdc88
- (id)dictionaryRepresentation;	// IMP=0x0000000000dfdab4
- (id)description;	// IMP=0x0000000000dfda05

@end

