//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceInfoFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c92102
- (unsigned long long)hash;	// IMP=0x0000000000c920fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c920b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c9205a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c9203d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c9202e
- (id)jsonRepresentation;	// IMP=0x0000000000c91f1c
- (id)dictionaryRepresentation;	// IMP=0x0000000000c91db1
- (id)description;	// IMP=0x0000000000c91d02

@end

