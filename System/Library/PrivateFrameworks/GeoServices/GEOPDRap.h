//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRap : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _placecardRapButtonType;	// 16 = 0x10
    struct {
        unsigned int has_placecardRapButtonType:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000010d9cf5
- (unsigned long long)hash;	// IMP=0x00000000010d9cca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010d9c38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010d9bb8
- (void)writeTo:(id)arg1;	// IMP=0x00000000010d9b56
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010d9b47
- (id)jsonRepresentation;	// IMP=0x00000000010d9466
- (id)dictionaryRepresentation;	// IMP=0x00000000010d9277
- (id)description;	// IMP=0x00000000010d91c8

@end
