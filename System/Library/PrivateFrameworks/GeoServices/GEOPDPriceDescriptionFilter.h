//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPriceDescriptionFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c9c5a8
- (unsigned long long)hash;	// IMP=0x0000000000c9c5a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c9c55b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c9c500
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c9c4e3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c9c4d4
- (id)jsonRepresentation;	// IMP=0x0000000000c9c3c2
- (id)dictionaryRepresentation;	// IMP=0x0000000000c9c257
- (id)description;	// IMP=0x0000000000c9c1a8

@end
