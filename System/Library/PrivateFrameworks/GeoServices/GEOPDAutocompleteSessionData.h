//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteSessionData : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000660d02
- (unsigned long long)hash;	// IMP=0x0000000000660cf8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000660cb3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000660c58
- (void)writeTo:(id)arg1;	// IMP=0x0000000000660c3b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000660c2c
- (id)jsonRepresentation;	// IMP=0x000000000066075e
- (id)dictionaryRepresentation;	// IMP=0x00000000006605f3
- (id)description;	// IMP=0x0000000000660544

@end

