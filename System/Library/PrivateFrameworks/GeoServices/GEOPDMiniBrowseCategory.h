//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOStyleAttributes, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMiniBrowseCategory : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOStyleAttributes *_styleAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c58541
- (unsigned long long)hash;	// IMP=0x0000000000c58524
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c5848a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c583ff
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c583a4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c58395
- (id)jsonRepresentation;	// IMP=0x0000000000c58283
- (id)dictionaryRepresentation;	// IMP=0x0000000000c58083
- (id)description;	// IMP=0x0000000000c57fd4

@end

