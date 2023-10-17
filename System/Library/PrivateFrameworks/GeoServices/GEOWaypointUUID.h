//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOWaypointUUID : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _high;	// 16 = 0x10
    unsigned long long _low;	// 24 = 0x18
    struct {
        unsigned int has_high:1;
        unsigned int has_low:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001027e39
- (unsigned long long)hash;	// IMP=0x0000000001027df4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001027d41
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001027ca2
- (void)writeTo:(id)arg1;	// IMP=0x0000000001027c14
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001027c05
- (id)jsonRepresentation;	// IMP=0x00000000010276f2
- (id)dictionaryRepresentation;	// IMP=0x00000000010274cf
- (id)description;	// IMP=0x0000000001027420

@end

