//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLinkedServiceFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c45dc7
- (unsigned long long)hash;	// IMP=0x0000000000c45dbf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c45d7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c45d1f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c45d02
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c45cf3
- (id)jsonRepresentation;	// IMP=0x0000000000c45be1
- (id)dictionaryRepresentation;	// IMP=0x0000000000c45a76
- (id)description;	// IMP=0x0000000000c459c7

@end

