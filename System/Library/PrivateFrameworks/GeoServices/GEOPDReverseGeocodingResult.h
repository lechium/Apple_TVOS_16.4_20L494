//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDReverseGeocodingResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000602934
- (unsigned long long)hash;	// IMP=0x000000000060292c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006028e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000060288c
- (void)writeTo:(id)arg1;	// IMP=0x000000000060286f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000602860
- (id)jsonRepresentation;	// IMP=0x000000000060274e
- (id)dictionaryRepresentation;	// IMP=0x00000000006025e3
- (id)description;	// IMP=0x0000000000602534

@end

