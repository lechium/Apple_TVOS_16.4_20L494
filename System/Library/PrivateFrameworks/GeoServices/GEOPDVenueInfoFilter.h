//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueInfoFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000409686
- (unsigned long long)hash;	// IMP=0x000000000040967c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000409637
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004095dc
- (void)writeTo:(id)arg1;	// IMP=0x00000000004095bf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004095b0
- (id)jsonRepresentation;	// IMP=0x00000000004090e2
- (id)dictionaryRepresentation;	// IMP=0x0000000000408f77
- (id)description;	// IMP=0x0000000000408ec8

@end

