//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLineString : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_points;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c40292
- (unsigned long long)hash;	// IMP=0x0000000000c40275
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c401db
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c4001b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c3febc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c3fead
- (id)jsonRepresentation;	// IMP=0x0000000000c3fd9b
- (id)dictionaryRepresentation;	// IMP=0x0000000000c3fa0a
- (id)description;	// IMP=0x0000000000c3f95b

@end

