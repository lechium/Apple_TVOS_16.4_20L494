//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMessageLinkFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c562aa
- (unsigned long long)hash;	// IMP=0x0000000000c562a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c5625d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c56202
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c561e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c561d6
- (id)jsonRepresentation;	// IMP=0x0000000000c560c4
- (id)dictionaryRepresentation;	// IMP=0x0000000000c55f59
- (id)description;	// IMP=0x0000000000c55eaa

@end
